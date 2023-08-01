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
        bufp->chgBit(oldp+0,(vlSelf->Soc__DOT__ram__DOT__inst_valid));
        bufp->chgIData(oldp+1,(vlSelf->Soc__DOT___ram_io_dataOut_bits),32);
        bufp->chgBit(oldp+2,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started));
        bufp->chgQData(oldp+3,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),64);
        bufp->chgQData(oldp+5,(vlSelf->Soc__DOT__core__DOT__fdreg_pc),64);
        bufp->chgQData(oldp+7,(vlSelf->Soc__DOT__core__DOT__dereg_op_a),64);
        bufp->chgQData(oldp+9,(vlSelf->Soc__DOT__core__DOT__dereg_op_b),64);
        bufp->chgCData(oldp+11,(vlSelf->Soc__DOT__core__DOT__dereg_rd),5);
        bufp->chgCData(oldp+12,(vlSelf->Soc__DOT__core__DOT__dereg_alu_op),5);
        bufp->chgCData(oldp+13,(vlSelf->Soc__DOT__core__DOT__dereg_wb_type),2);
        bufp->chgQData(oldp+14,(vlSelf->Soc__DOT__core__DOT__emreg_alu_res),64);
        bufp->chgCData(oldp+16,(vlSelf->Soc__DOT__core__DOT__emreg_wb_type),2);
        bufp->chgCData(oldp+17,(vlSelf->Soc__DOT__core__DOT__emreg_rd),5);
        bufp->chgQData(oldp+18,(vlSelf->Soc__DOT__core__DOT__mwreg_alu_res),64);
        bufp->chgCData(oldp+20,(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type),2);
        bufp->chgCData(oldp+21,(vlSelf->Soc__DOT__core__DOT__mwreg_rd),5);
        bufp->chgQData(oldp+22,((((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid) 
                                  & (0U != (IData)(vlSelf->__VdfgTmp_h049a0a75__0)))
                                  ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                    ? (IData)(vlSelf->__VdfgTmp_h049a0a75__0)
                                    : 0U)] : 0ULL)),64);
        bufp->chgCData(oldp+24,(((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                  ? (IData)(vlSelf->__VdfgTmp_h049a0a75__0)
                                  : 0U)),5);
        bufp->chgCData(oldp+25,(((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                  ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                      ? ((0x10U & ((IData)(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R0_data) 
                                                   << 4U)) 
                                         | (0xfU & 
                                            (vlSelf->__VdfgTmp_h7f65c8dc__0 
                                             >> 0x14U)))
                                      : 0U) : 0U)),5);
        bufp->chgQData(oldp+26,((((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                  & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_9))
                                  ? (((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid) 
                                      & (0U != (IData)(vlSelf->__VdfgTmp_h049a0a75__0)))
                                      ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                     [((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                        ? (IData)(vlSelf->__VdfgTmp_h049a0a75__0)
                                        : 0U)] : 0ULL)
                                  : vlSelf->Soc__DOT__core__DOT__fdreg_pc)),64);
        bufp->chgQData(oldp+28,(((IData)(vlSelf->__VdfgTmp_h490969a2__0)
                                  ? (((QData)((IData)(
                                                      (0xffffffU 
                                                       & (- (IData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))))) 
                                      << 0x28U) | ((QData)((IData)(
                                                                   ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                                     ? 
                                                                    ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                                      ? 
                                                                     (((IData)(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R0_data) 
                                                                       << 0xcU) 
                                                                      | (((IData)(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R1_data) 
                                                                          << 4U) 
                                                                         | ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_3)
                                                                             ? 
                                                                            (0xfU 
                                                                             & ((IData)(vlSelf->__VdfgTmp_h483daa03__0) 
                                                                                >> 4U))
                                                                             : 0U)))
                                                                      : 0U)
                                                                     : 0U))) 
                                                   << 0x14U))
                                  : ((IData)(vlSelf->__VdfgTmp_h490969a2__0)
                                      ? 0ULL : (((- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                                    ? 
                                                                   ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                                     ? 
                                                                    (((IData)(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R0_data) 
                                                                      << 4U) 
                                                                     | ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_1)
                                                                         ? 
                                                                        (0xfU 
                                                                         & ((IData)(vlSelf->__VdfgTmp_hae2d2759__0) 
                                                                            >> 4U))
                                                                         : 0U))
                                                                     : 0U)
                                                                    : 0U))))))),64);
        bufp->chgCData(oldp+30,(((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                  ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                      ? (0x1fU & ((IData)(vlSelf->__VdfgTmp_h50f8190e__0) 
                                                  >> 7U))
                                      : 0U) : 0U)),5);
        bufp->chgCData(oldp+31,((0x1fU & (- (IData)(
                                                    (1U 
                                                     & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h166f560e__0)) 
                                                        | (0x13U 
                                                           == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T))))))),5);
        bufp->chgCData(oldp+32,(((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                 & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h166f560e__0))),2);
        bufp->chgIData(oldp+33,(vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T),32);
        bufp->chgBit(oldp+34,(((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                               & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_9))));
        bufp->chgCData(oldp+35,(vlSelf->__VdfgTmp_h490969a2__0),2);
        bufp->chgQData(oldp+36,(((0U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                  ? (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                     + vlSelf->Soc__DOT__core__DOT__dereg_op_b)
                                  : 0ULL)),64);
        bufp->chgIData(oldp+38,(((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                  ? vlSelf->Soc__DOT___ram_io_dataOut_bits
                                  : 0U)),32);
        bufp->chgBit(oldp+39,(vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag));
        bufp->chgCData(oldp+40,(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count),3);
        bufp->chgBit(oldp+41,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))));
        bufp->chgQData(oldp+42,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                                  & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_rd)))
                                  ? vlSelf->Soc__DOT__core__DOT__mwreg_alu_res
                                  : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [vlSelf->Soc__DOT__core__DOT__mwreg_rd])),64);
        bufp->chgQData(oldp+44,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                [vlSelf->Soc__DOT__core__DOT__mwreg_rd]),64);
        bufp->chgQData(oldp+46,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                [((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                   ? (IData)(vlSelf->__VdfgTmp_h049a0a75__0)
                                   : 0U)]),64);
        bufp->chgQData(oldp+48,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                [((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                   ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                       ? ((0x10U & 
                                           ((IData)(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R0_data) 
                                            << 4U)) 
                                          | (0xfU & 
                                             (vlSelf->__VdfgTmp_h7f65c8dc__0 
                                              >> 0x14U)))
                                       : 0U) : 0U)]),64);
        bufp->chgQData(oldp+50,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
        bufp->chgQData(oldp+52,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
        bufp->chgQData(oldp+54,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
        bufp->chgQData(oldp+56,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
        bufp->chgQData(oldp+58,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
        bufp->chgQData(oldp+60,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
        bufp->chgQData(oldp+62,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
        bufp->chgQData(oldp+64,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
        bufp->chgQData(oldp+66,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
        bufp->chgQData(oldp+68,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
        bufp->chgQData(oldp+70,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
        bufp->chgQData(oldp+72,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
        bufp->chgQData(oldp+74,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
        bufp->chgQData(oldp+76,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
        bufp->chgQData(oldp+78,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
        bufp->chgQData(oldp+80,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
        bufp->chgQData(oldp+82,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
        bufp->chgQData(oldp+84,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
        bufp->chgQData(oldp+86,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
        bufp->chgQData(oldp+88,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
        bufp->chgQData(oldp+90,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
        bufp->chgQData(oldp+92,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
        bufp->chgQData(oldp+94,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
        bufp->chgQData(oldp+96,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
        bufp->chgQData(oldp+98,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
        bufp->chgQData(oldp+100,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
        bufp->chgQData(oldp+102,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
        bufp->chgQData(oldp+104,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
        bufp->chgQData(oldp+106,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
        bufp->chgQData(oldp+108,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
        bufp->chgQData(oldp+110,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
        bufp->chgQData(oldp+112,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
        bufp->chgQData(oldp+114,((vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc 
                                  - 0x80000000ULL)),64);
        bufp->chgCData(oldp+116,((0xffU & ((IData)(3U) 
                                           + (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)))),8);
        bufp->chgCData(oldp+117,((0xffU & ((IData)(2U) 
                                           + (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)))),8);
        bufp->chgCData(oldp+118,((0xffU & ((IData)(1U) 
                                           + (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)))),8);
        bufp->chgCData(oldp+119,((0xffU & (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc))),8);
        bufp->chgCData(oldp+120,(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R0_data),8);
        bufp->chgCData(oldp+121,(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R1_data),8);
        bufp->chgCData(oldp+122,(((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_3)
                                   ? (IData)(vlSelf->__VdfgTmp_h483daa03__0)
                                   : 0U)),8);
        bufp->chgCData(oldp+123,(((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_5)
                                   ? (IData)(vlSelf->__VdfgTmp_h7cec4c01__0)
                                   : 0U)),8);
    }
    bufp->chgBit(oldp+124,(vlSelf->clock));
    bufp->chgBit(oldp+125,(vlSelf->reset));
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
