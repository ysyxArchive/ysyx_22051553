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
        bufp->chgQData(oldp+3,(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc),64);
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
        bufp->chgQData(oldp+24,((((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid) 
                                  & (0U != ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                             ? (0x1fU 
                                                & (vlSelf->__VdfgTmp_h27324541__0 
                                                   >> 0x14U))
                                             : 0U)))
                                  ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                    ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                        ? (0x1fU & 
                                           (vlSelf->__VdfgTmp_h27324541__0 
                                            >> 0x14U))
                                        : 0U) : 0U)]
                                  : 0ULL)),64);
        bufp->chgCData(oldp+26,(((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                  ? (IData)(vlSelf->__VdfgTmp_h049a0a75__0)
                                  : 0U)),5);
        bufp->chgCData(oldp+27,(((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                  ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                      ? (0x1fU & (vlSelf->__VdfgTmp_h27324541__0 
                                                  >> 0x14U))
                                      : 0U) : 0U)),5);
        bufp->chgQData(oldp+28,((((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                  & ((0x13U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                     & ((0x17U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                        | ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                           & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h5d4f4c30__0)))))
                                  ? vlSelf->Soc__DOT__core__DOT__fdreg_pc
                                  : 0ULL)),64);
        bufp->chgQData(oldp+30,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type)
                                  ? vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm
                                  : 0ULL)),64);
        bufp->chgCData(oldp+32,(((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                  ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                      ? (0x1fU & ((IData)(vlSelf->__VdfgTmp_h50f8190e__0) 
                                                  >> 7U))
                                      : 0U) : 0U)),5);
        bufp->chgCData(oldp+33,((0x1fU & (- (IData)(
                                                    (1U 
                                                     & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                        | (0x13U 
                                                           == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T))))))),5);
        bufp->chgCData(oldp+34,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type),2);
        bufp->chgBit(oldp+35,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_flag));
        bufp->chgQData(oldp+36,(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                  ? (vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
                                     + vlSelf->Soc__DOT__core__DOT__fdreg_pc)
                                  : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                      ? (0xfffffffffffffffeULL 
                                         & (vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
                                            + (((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid) 
                                                & (0U 
                                                   != (IData)(vlSelf->__VdfgTmp_h049a0a75__0)))
                                                ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                               [((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                  ? (IData)(vlSelf->__VdfgTmp_h049a0a75__0)
                                                  : 0U)]
                                                : 0ULL)))
                                      : 0x80000000ULL))),64);
        bufp->chgIData(oldp+38,(vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T),32);
        bufp->chgCData(oldp+39,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type),2);
        bufp->chgBit(oldp+40,(((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                               & ((0x13U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                  & ((0x17U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                     | ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                        & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h5d4f4c30__0)))))));
        bufp->chgBit(oldp+41,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type));
        bufp->chgCData(oldp+42,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0)
                                  ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0)
                                           ? 1U : (
                                                   (0x6fU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                   << 1U)))),2);
        bufp->chgQData(oldp+43,(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm),64);
        bufp->chgQData(oldp+45,(((0U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                  ? (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                     + vlSelf->Soc__DOT__core__DOT__dereg_op_b)
                                  : 0ULL)),64);
        bufp->chgQData(oldp+47,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc),64);
        bufp->chgQData(oldp+49,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),64);
        bufp->chgIData(oldp+51,(((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                  ? vlSelf->Soc__DOT___ram_io_dataOut_bits
                                  : 0U)),32);
        bufp->chgBit(oldp+52,(vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag));
        bufp->chgCData(oldp+53,(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count),3);
        bufp->chgBit(oldp+54,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))));
        bufp->chgQData(oldp+55,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                                  & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_rd)))
                                  ? vlSelf->Soc__DOT__core__DOT__mwreg_alu_res
                                  : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [vlSelf->Soc__DOT__core__DOT__mwreg_rd])),64);
        bufp->chgQData(oldp+57,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                [vlSelf->Soc__DOT__core__DOT__mwreg_rd]),64);
        bufp->chgQData(oldp+59,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                [((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                   ? (IData)(vlSelf->__VdfgTmp_h049a0a75__0)
                                   : 0U)]),64);
        bufp->chgQData(oldp+61,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                [((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                   ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                       ? (0x1fU & (vlSelf->__VdfgTmp_h27324541__0 
                                                   >> 0x14U))
                                       : 0U) : 0U)]),64);
        bufp->chgQData(oldp+63,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
        bufp->chgQData(oldp+65,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
        bufp->chgQData(oldp+67,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
        bufp->chgQData(oldp+69,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
        bufp->chgQData(oldp+71,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
        bufp->chgQData(oldp+73,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
        bufp->chgQData(oldp+75,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
        bufp->chgQData(oldp+77,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
        bufp->chgQData(oldp+79,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
        bufp->chgQData(oldp+81,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
        bufp->chgQData(oldp+83,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
        bufp->chgQData(oldp+85,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
        bufp->chgQData(oldp+87,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
        bufp->chgQData(oldp+89,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
        bufp->chgQData(oldp+91,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
        bufp->chgQData(oldp+93,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
        bufp->chgQData(oldp+95,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
        bufp->chgQData(oldp+97,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
        bufp->chgQData(oldp+99,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
        bufp->chgQData(oldp+101,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
        bufp->chgQData(oldp+103,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
        bufp->chgQData(oldp+105,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
        bufp->chgQData(oldp+107,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
        bufp->chgQData(oldp+109,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
        bufp->chgQData(oldp+111,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
        bufp->chgQData(oldp+113,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
        bufp->chgQData(oldp+115,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
        bufp->chgQData(oldp+117,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
        bufp->chgQData(oldp+119,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
        bufp->chgQData(oldp+121,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
        bufp->chgQData(oldp+123,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
        bufp->chgQData(oldp+125,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
        bufp->chgQData(oldp+127,((vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                  - 0x80000000ULL)),64);
        bufp->chgCData(oldp+129,((0xffU & ((IData)(3U) 
                                           + (IData)(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc)))),8);
        bufp->chgCData(oldp+130,((0xffU & ((IData)(2U) 
                                           + (IData)(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc)))),8);
        bufp->chgCData(oldp+131,((0xffU & ((IData)(1U) 
                                           + (IData)(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc)))),8);
        bufp->chgCData(oldp+132,((0xffU & (IData)(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc))),8);
        bufp->chgCData(oldp+133,(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R0_data),8);
        bufp->chgCData(oldp+134,(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R1_data),8);
        bufp->chgCData(oldp+135,(((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_3)
                                   ? (IData)(vlSelf->__VdfgTmp_h483daa03__0)
                                   : 0U)),8);
        bufp->chgCData(oldp+136,(((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_5)
                                   ? (IData)(vlSelf->__VdfgTmp_h7cec4c01__0)
                                   : 0U)),8);
    }
    bufp->chgBit(oldp+137,(vlSelf->clock));
    bufp->chgBit(oldp+138,(vlSelf->reset));
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
