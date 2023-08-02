// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSoc__Syms.h"


VL_ATTR_COLD void VSoc___024root__trace_init_sub__TOP__0(VSoc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+130,"clock", false,-1);
    tracep->declBit(c+131,"reset", false,-1);
    tracep->pushNamePrefix("Soc ");
    tracep->declBit(c+130,"clock", false,-1);
    tracep->declBit(c+131,"reset", false,-1);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+130,"clock", false,-1);
    tracep->declBit(c+131,"reset", false,-1);
    tracep->declBit(c+1,"io_ramio_dataOut_valid", false,-1);
    tracep->declBus(c+2,"io_ramio_dataOut_bits", false,-1, 31,0);
    tracep->declBit(c+3,"io_ramio_pc_valid", false,-1);
    tracep->declQuad(c+4,"io_ramio_pc_bits", false,-1, 63,0);
    tracep->declQuad(c+6,"fdreg_pc", false,-1, 63,0);
    tracep->declQuad(c+8,"dereg_op_a", false,-1, 63,0);
    tracep->declQuad(c+10,"dereg_op_b", false,-1, 63,0);
    tracep->declBus(c+12,"dereg_rd", false,-1, 4,0);
    tracep->declBus(c+13,"dereg_alu_op", false,-1, 4,0);
    tracep->declBus(c+14,"dereg_wb_type", false,-1, 1,0);
    tracep->declQuad(c+15,"emreg_alu_res", false,-1, 63,0);
    tracep->declBus(c+17,"emreg_wb_type", false,-1, 1,0);
    tracep->declBus(c+18,"emreg_rd", false,-1, 4,0);
    tracep->declQuad(c+19,"mwreg_alu_res", false,-1, 63,0);
    tracep->declBus(c+21,"mwreg_wb_type", false,-1, 1,0);
    tracep->declBus(c+22,"mwreg_rd", false,-1, 4,0);
    tracep->pushNamePrefix("decode ");
    tracep->declBit(c+1,"io_inst_valid", false,-1);
    tracep->declBus(c+2,"io_inst_bits", false,-1, 31,0);
    tracep->declQuad(c+6,"io_fdio_pc", false,-1, 63,0);
    tracep->declQuad(c+23,"io_rfio_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+25,"io_rfio_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+27,"io_rfio_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+28,"io_rfio_reg2_raddr", false,-1, 4,0);
    tracep->declQuad(c+29,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+31,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+33,"io_deio_rd", false,-1, 4,0);
    tracep->declBus(c+34,"io_deio_alu_op", false,-1, 4,0);
    tracep->declBus(c+35,"io_deio_wb_type", false,-1, 1,0);
    tracep->pushNamePrefix("cu ");
    tracep->declBus(c+36,"io_inst", false,-1, 31,0);
    tracep->declBit(c+37,"io_opa_type", false,-1);
    tracep->declBit(c+38,"io_opb_type", false,-1);
    tracep->declBus(c+39,"io_imm_type", false,-1, 1,0);
    tracep->declBus(c+34,"io_alu_op", false,-1, 4,0);
    tracep->declBus(c+35,"io_wb_type", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("eximm ");
    tracep->declBus(c+36,"io_inst", false,-1, 31,0);
    tracep->declBus(c+39,"io_imm_type", false,-1, 1,0);
    tracep->declQuad(c+40,"io_eximm", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("excute ");
    tracep->declQuad(c+8,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+10,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+12,"io_deio_rd", false,-1, 4,0);
    tracep->declBus(c+13,"io_deio_alu_op", false,-1, 4,0);
    tracep->declBus(c+14,"io_deio_wb_type", false,-1, 1,0);
    tracep->declQuad(c+42,"io_emio_alu_res", false,-1, 63,0);
    tracep->declBus(c+14,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+12,"io_emio_rd", false,-1, 4,0);
    tracep->pushNamePrefix("alu ");
    tracep->declQuad(c+8,"io_op_a", false,-1, 63,0);
    tracep->declQuad(c+10,"io_op_b", false,-1, 63,0);
    tracep->declBus(c+13,"io_alu_op", false,-1, 4,0);
    tracep->declQuad(c+42,"io_result", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+130,"clock", false,-1);
    tracep->declBit(c+131,"reset", false,-1);
    tracep->declQuad(c+4,"io_fdio_pc", false,-1, 63,0);
    tracep->declBit(c+3,"io_pc_valid", false,-1);
    tracep->declQuad(c+4,"io_pc_bits", false,-1, 63,0);
    tracep->declBit(c+3,"started", false,-1);
    tracep->declQuad(c+4,"pc", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("interact ");
    tracep->declBus(c+44,"inst", false,-1, 31,0);
    tracep->declBit(c+130,"clk", false,-1);
    tracep->declBit(c+131,"rst", false,-1);
    tracep->declBit(c+45,"ebreak_flag", false,-1);
    tracep->declBus(c+46,"over_count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declQuad(c+15,"io_emio_alu_res", false,-1, 63,0);
    tracep->declBus(c+17,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+18,"io_emio_rd", false,-1, 4,0);
    tracep->declQuad(c+15,"io_mwio_alu_res", false,-1, 63,0);
    tracep->declBus(c+17,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declBus(c+18,"io_mwio_rd", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+130,"clock", false,-1);
    tracep->declBus(c+27,"io_RfDe_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+28,"io_RfDe_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+22,"io_RfWb_rd", false,-1, 4,0);
    tracep->declBit(c+47,"io_RfWb_reg_wen", false,-1);
    tracep->declQuad(c+19,"io_RfWb_reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+23,"io_RfDe_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+25,"io_RfDe_reg2_rdata", false,-1, 63,0);
    tracep->pushNamePrefix("regs_ext ");
    tracep->declBus(c+22,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+132,"R0_en", false,-1);
    tracep->declBit(c+130,"R0_clk", false,-1);
    tracep->declBus(c+27,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+132,"R1_en", false,-1);
    tracep->declBit(c+130,"R1_clk", false,-1);
    tracep->declBus(c+28,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+132,"R2_en", false,-1);
    tracep->declBit(c+130,"R2_clk", false,-1);
    tracep->declBus(c+133,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+132,"W0_en", false,-1);
    tracep->declBit(c+130,"W0_clk", false,-1);
    tracep->declQuad(c+134,"W0_data", false,-1, 63,0);
    tracep->declBus(c+22,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+132,"W1_en", false,-1);
    tracep->declBit(c+130,"W1_clk", false,-1);
    tracep->declQuad(c+48,"W1_data", false,-1, 63,0);
    tracep->declQuad(c+50,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+52,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+54,"R2_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+56+i*2,"Memory", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb ");
    tracep->declQuad(c+19,"io_mwio_alu_res", false,-1, 63,0);
    tracep->declBus(c+21,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declBus(c+22,"io_mwio_rd", false,-1, 4,0);
    tracep->declBus(c+22,"io_rfio_rd", false,-1, 4,0);
    tracep->declBit(c+47,"io_rfio_reg_wen", false,-1);
    tracep->declQuad(c+19,"io_rfio_reg_wdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ram ");
    tracep->declBit(c+130,"clock", false,-1);
    tracep->declBit(c+3,"io_pc_valid", false,-1);
    tracep->declQuad(c+120,"io_pc_bits", false,-1, 63,0);
    tracep->declBit(c+1,"io_dataOut_valid", false,-1);
    tracep->declBus(c+2,"io_dataOut_bits", false,-1, 31,0);
    tracep->declBit(c+1,"inst_valid", false,-1);
    tracep->pushNamePrefix("SyncMem_ext ");
    tracep->declBus(c+122,"R0_addr", false,-1, 7,0);
    tracep->declBit(c+3,"R0_en", false,-1);
    tracep->declBit(c+130,"R0_clk", false,-1);
    tracep->declBus(c+123,"R1_addr", false,-1, 7,0);
    tracep->declBit(c+3,"R1_en", false,-1);
    tracep->declBit(c+130,"R1_clk", false,-1);
    tracep->declBus(c+124,"R2_addr", false,-1, 7,0);
    tracep->declBit(c+3,"R2_en", false,-1);
    tracep->declBit(c+130,"R2_clk", false,-1);
    tracep->declBus(c+125,"R3_addr", false,-1, 7,0);
    tracep->declBit(c+3,"R3_en", false,-1);
    tracep->declBit(c+130,"R3_clk", false,-1);
    tracep->declBus(c+126,"R0_data", false,-1, 7,0);
    tracep->declBus(c+127,"R1_data", false,-1, 7,0);
    tracep->declBus(c+128,"R2_data", false,-1, 7,0);
    tracep->declBus(c+129,"R3_data", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VSoc___024root__trace_init_top(VSoc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_init_top\n"); );
    // Body
    VSoc___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSoc___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSoc___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSoc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSoc___024root__trace_register(VSoc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSoc___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSoc___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSoc___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSoc___024root__trace_full_sub_0(VSoc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSoc___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_full_top_0\n"); );
    // Init
    VSoc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSoc___024root*>(voidSelf);
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSoc___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSoc___024root__trace_full_sub_0(VSoc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<8>/*255:0*/ __Vtemp_h9fc936b5__0;
    VlWide<8>/*255:0*/ __Vtemp_h83f37362__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->Soc__DOT__ram__DOT__inst_valid));
    bufp->fullIData(oldp+2,(vlSelf->Soc__DOT___ram_io_dataOut_bits),32);
    bufp->fullBit(oldp+3,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started));
    bufp->fullQData(oldp+4,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),64);
    bufp->fullQData(oldp+6,(vlSelf->Soc__DOT__core__DOT__fdreg_pc),64);
    bufp->fullQData(oldp+8,(vlSelf->Soc__DOT__core__DOT__dereg_op_a),64);
    bufp->fullQData(oldp+10,(vlSelf->Soc__DOT__core__DOT__dereg_op_b),64);
    bufp->fullCData(oldp+12,(vlSelf->Soc__DOT__core__DOT__dereg_rd),5);
    bufp->fullCData(oldp+13,(vlSelf->Soc__DOT__core__DOT__dereg_alu_op),5);
    bufp->fullCData(oldp+14,(vlSelf->Soc__DOT__core__DOT__dereg_wb_type),2);
    bufp->fullQData(oldp+15,(vlSelf->Soc__DOT__core__DOT__emreg_alu_res),64);
    bufp->fullCData(oldp+17,(vlSelf->Soc__DOT__core__DOT__emreg_wb_type),2);
    bufp->fullCData(oldp+18,(vlSelf->Soc__DOT__core__DOT__emreg_rd),5);
    bufp->fullQData(oldp+19,(vlSelf->Soc__DOT__core__DOT__mwreg_alu_res),64);
    bufp->fullCData(oldp+21,(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type),2);
    bufp->fullCData(oldp+22,(vlSelf->Soc__DOT__core__DOT__mwreg_rd),5);
    bufp->fullQData(oldp+23,((((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid) 
                               & (0U != ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                          ? (0x1fU 
                                             & (vlSelf->__VdfgTmp_h7f65c8dc__0 
                                                >> 0xfU))
                                          : 0U))) ? 
                              vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                 ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                     ? (0x1fU & (vlSelf->__VdfgTmp_h7f65c8dc__0 
                                                 >> 0xfU))
                                     : 0U) : 0U)] : 0ULL)),64);
    bufp->fullQData(oldp+25,((((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid) 
                               & (0U != ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                          ? (0x1fU 
                                             & (vlSelf->__VdfgTmp_h27324541__0 
                                                >> 0x14U))
                                          : 0U))) ? 
                              vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                 ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                     ? (0x1fU & (vlSelf->__VdfgTmp_h27324541__0 
                                                 >> 0x14U))
                                     : 0U) : 0U)] : 0ULL)),64);
    bufp->fullCData(oldp+27,(((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                               ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                   ? (0x1fU & (vlSelf->__VdfgTmp_h7f65c8dc__0 
                                               >> 0xfU))
                                   : 0U) : 0U)),5);
    bufp->fullCData(oldp+28,(((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                               ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                   ? (0x1fU & (vlSelf->__VdfgTmp_h27324541__0 
                                               >> 0x14U))
                                   : 0U) : 0U)),5);
    bufp->fullQData(oldp+29,((((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                               & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3)) 
                                  & ((0x17U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                     | ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                        & (0x6fU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))))))
                               ? vlSelf->Soc__DOT__core__DOT__fdreg_pc
                               : 0ULL)),64);
    __Vtemp_h9fc936b5__0[0U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 << 0xcU) | ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                              ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
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
                                              : 0U));
    __Vtemp_h9fc936b5__0[1U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 >> 0x14U) | ((IData)(
                                                      ((0xfffffffffffffULL 
                                                        & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_h9fc936b5__0[2U] = ((((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                   ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                       ? (((IData)(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R0_data) 
                                           << 0xcU) 
                                          | (((IData)(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R1_data) 
                                              << 4U) 
                                             | ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_3)
                                                 ? 
                                                (0xfU 
                                                 & ((IData)(vlSelf->__VdfgTmp_h483daa03__0) 
                                                    >> 4U))
                                                 : 0U)))
                                       : 0U) : 0U) 
                                 << 0xcU) | ((IData)(
                                                     ((0xfffffffffffffULL 
                                                       & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                                      >> 0x20U)) 
                                             >> 0x14U));
    __Vtemp_h9fc936b5__0[3U] = (- (IData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)));
    __Vtemp_h9fc936b5__0[4U] = (((IData)((0xfffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 << 0x14U) | ((((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                 ? 
                                                ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                  ? 
                                                 (0x3ffU 
                                                  & ((IData)(vlSelf->__VdfgTmp_h50f8190e__0) 
                                                     >> 1U))
                                                  : 0U)
                                                 : 9U) 
                                               << 0xaU) 
                                              | ((0xfffffe00U 
                                                  & (((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid) 
                                                      << 9U) 
                                                     & (((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_3) 
                                                         << 9U) 
                                                        & ((IData)(vlSelf->__VdfgTmp_h483daa03__0) 
                                                           << 6U)))) 
                                                 | (((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                      ? 
                                                     ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                       ? 
                                                      (0xffU 
                                                       & (vlSelf->__VdfgTmp_h7f65c8dc__0 
                                                          >> 0xcU))
                                                       : 0U)
                                                      : 0U) 
                                                    << 1U))));
    __Vtemp_h9fc936b5__0[5U] = (((IData)((0xfffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 >> 0xcU) | ((IData)(
                                                     ((0xfffffffffffULL 
                                                       & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_h9fc936b5__0[6U] = 0U;
    __Vtemp_h9fc936b5__0[7U] = 0U;
    bufp->fullQData(oldp+31,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type)
                               ? (((QData)((IData)(
                                                   __Vtemp_h9fc936b5__0[
                                                   (((IData)(0x3fU) 
                                                     + 
                                                     (0xffU 
                                                      & ((((0x13U 
                                                            == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                                           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3))
                                                           ? 0U
                                                           : 
                                                          (((0x17U 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                            | (0x37U 
                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)))
                                                            ? 1U
                                                            : 
                                                           ((0x6fU 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                            << 1U))) 
                                                         << 6U))) 
                                                    >> 5U)])) 
                                   << ((0U == (0x1fU 
                                               & ((((0x13U 
                                                     == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                                    | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3))
                                                    ? 0U
                                                    : 
                                                   (((0x17U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                     | (0x37U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)))
                                                     ? 1U
                                                     : 
                                                    ((0x6fU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                     << 1U))) 
                                                  << 6U)))
                                        ? 0x20U : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((((0x13U 
                                                          == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                                         | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3))
                                                         ? 0U
                                                         : 
                                                        (((0x17U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                          | (0x37U 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)))
                                                          ? 1U
                                                          : 
                                                         ((0x6fU 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                          << 1U))) 
                                                       << 6U))))) 
                                  | (((0U == (0x1fU 
                                              & ((((0x13U 
                                                    == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                                   | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3))
                                                   ? 0U
                                                   : 
                                                  (((0x17U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                    | (0x37U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)))
                                                    ? 1U
                                                    : 
                                                   ((0x6fU 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                    << 1U))) 
                                                 << 6U)))
                                       ? 0ULL : ((QData)((IData)(
                                                                 __Vtemp_h9fc936b5__0[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((((0x13U 
                                                                          == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                                                         | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3))
                                                                         ? 0U
                                                                         : 
                                                                        (((0x17U 
                                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                                          | (0x37U 
                                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)))
                                                                          ? 1U
                                                                          : 
                                                                         ((0x6fU 
                                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                                          << 1U))) 
                                                                       << 6U))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((((0x13U 
                                                         == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                                        | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3))
                                                        ? 0U
                                                        : 
                                                       (((0x17U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                         | (0x37U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)))
                                                         ? 1U
                                                         : 
                                                        ((0x6fU 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                         << 1U))) 
                                                      << 6U))))) 
                                     | ((QData)((IData)(
                                                        __Vtemp_h9fc936b5__0[
                                                        (6U 
                                                         & ((((0x13U 
                                                               == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                                              | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3))
                                                              ? 0U
                                                              : 
                                                             (((0x17U 
                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                               | (0x37U 
                                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)))
                                                               ? 1U
                                                               : 
                                                              ((0x6fU 
                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                               << 1U))) 
                                                            << 1U))])) 
                                        >> (0x1fU & 
                                            ((((0x13U 
                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                               | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3))
                                               ? 0U
                                               : ((
                                                   (0x17U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                   | (0x37U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)))
                                                   ? 1U
                                                   : 
                                                  ((0x6fU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                   << 1U))) 
                                             << 6U)))))
                               : 0ULL)),64);
    bufp->fullCData(oldp+33,(((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                               ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                   ? (0x1fU & ((IData)(vlSelf->__VdfgTmp_h50f8190e__0) 
                                               >> 7U))
                                   : 0U) : 0U)),5);
    bufp->fullCData(oldp+34,((0x1fU & (- (IData)((1U 
                                                  & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                     | (0x13U 
                                                        == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T))))))),5);
    bufp->fullCData(oldp+35,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type),2);
    bufp->fullIData(oldp+36,(vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T),32);
    bufp->fullBit(oldp+37,(((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                            & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3)) 
                               & ((0x17U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                  | ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                     & (0x6fU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))))))));
    bufp->fullBit(oldp+38,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type));
    bufp->fullCData(oldp+39,((((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                               | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3))
                               ? 0U : (((0x17U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                        | (0x37U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)))
                                        ? 1U : ((0x6fU 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                << 1U)))),2);
    __Vtemp_h83f37362__0[0U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 << 0xcU) | ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                              ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
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
                                              : 0U));
    __Vtemp_h83f37362__0[1U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 >> 0x14U) | ((IData)(
                                                      ((0xfffffffffffffULL 
                                                        & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_h83f37362__0[2U] = ((((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                   ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                       ? (((IData)(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R0_data) 
                                           << 0xcU) 
                                          | (((IData)(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R1_data) 
                                              << 4U) 
                                             | ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_3)
                                                 ? 
                                                (0xfU 
                                                 & ((IData)(vlSelf->__VdfgTmp_h483daa03__0) 
                                                    >> 4U))
                                                 : 0U)))
                                       : 0U) : 0U) 
                                 << 0xcU) | ((IData)(
                                                     ((0xfffffffffffffULL 
                                                       & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                                      >> 0x20U)) 
                                             >> 0x14U));
    __Vtemp_h83f37362__0[3U] = (- (IData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)));
    __Vtemp_h83f37362__0[4U] = (((IData)((0xfffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 << 0x14U) | ((((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                 ? 
                                                ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                  ? 
                                                 (0x3ffU 
                                                  & ((IData)(vlSelf->__VdfgTmp_h50f8190e__0) 
                                                     >> 1U))
                                                  : 0U)
                                                 : 9U) 
                                               << 0xaU) 
                                              | ((0xfffffe00U 
                                                  & (((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid) 
                                                      << 9U) 
                                                     & (((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_3) 
                                                         << 9U) 
                                                        & ((IData)(vlSelf->__VdfgTmp_h483daa03__0) 
                                                           << 6U)))) 
                                                 | (((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                      ? 
                                                     ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                       ? 
                                                      (0xffU 
                                                       & (vlSelf->__VdfgTmp_h7f65c8dc__0 
                                                          >> 0xcU))
                                                       : 0U)
                                                      : 0U) 
                                                    << 1U))));
    __Vtemp_h83f37362__0[5U] = (((IData)((0xfffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 >> 0xcU) | ((IData)(
                                                     ((0xfffffffffffULL 
                                                       & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_h83f37362__0[6U] = 0U;
    __Vtemp_h83f37362__0[7U] = 0U;
    bufp->fullQData(oldp+40,((((QData)((IData)(__Vtemp_h83f37362__0[
                                               (((IData)(0x3fU) 
                                                 + 
                                                 (0xffU 
                                                  & ((((0x13U 
                                                        == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                                       | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3))
                                                       ? 0U
                                                       : 
                                                      (((0x17U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                        | (0x37U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)))
                                                        ? 1U
                                                        : 
                                                       ((0x6fU 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                        << 1U))) 
                                                     << 6U))) 
                                                >> 5U)])) 
                               << ((0U == (0x1fU & 
                                           ((((0x13U 
                                               == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                              | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3))
                                              ? 0U : 
                                             (((0x17U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                               | (0x37U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)))
                                               ? 1U
                                               : ((0x6fU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                  << 1U))) 
                                            << 6U)))
                                    ? 0x20U : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((((0x13U 
                                                        == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                                       | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3))
                                                       ? 0U
                                                       : 
                                                      (((0x17U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                        | (0x37U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)))
                                                        ? 1U
                                                        : 
                                                       ((0x6fU 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                        << 1U))) 
                                                     << 6U))))) 
                              | (((0U == (0x1fU & (
                                                   (((0x13U 
                                                      == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                                     | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3))
                                                     ? 0U
                                                     : 
                                                    (((0x17U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                      | (0x37U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)))
                                                      ? 1U
                                                      : 
                                                     ((0x6fU 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                      << 1U))) 
                                                   << 6U)))
                                   ? 0ULL : ((QData)((IData)(
                                                             __Vtemp_h83f37362__0[
                                                             (((IData)(0x1fU) 
                                                               + 
                                                               (0xffU 
                                                                & ((((0x13U 
                                                                      == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                                                     | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3))
                                                                     ? 0U
                                                                     : 
                                                                    (((0x17U 
                                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                                      | (0x37U 
                                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)))
                                                                      ? 1U
                                                                      : 
                                                                     ((0x6fU 
                                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                                      << 1U))) 
                                                                   << 6U))) 
                                                              >> 5U)])) 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((((0x13U 
                                                        == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                                       | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3))
                                                       ? 0U
                                                       : 
                                                      (((0x17U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                        | (0x37U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)))
                                                        ? 1U
                                                        : 
                                                       ((0x6fU 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                        << 1U))) 
                                                     << 6U))))) 
                                 | ((QData)((IData)(
                                                    __Vtemp_h83f37362__0[
                                                    (6U 
                                                     & ((((0x13U 
                                                           == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                                          | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3))
                                                          ? 0U
                                                          : 
                                                         (((0x17U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                           | (0x37U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)))
                                                           ? 1U
                                                           : 
                                                          ((0x6fU 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                           << 1U))) 
                                                        << 1U))])) 
                                    >> (0x1fU & (((
                                                   (0x13U 
                                                    == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                                   | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3))
                                                   ? 0U
                                                   : 
                                                  (((0x17U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                    | (0x37U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)))
                                                    ? 1U
                                                    : 
                                                   ((0x6fU 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                    << 1U))) 
                                                 << 6U)))))),64);
    bufp->fullQData(oldp+42,(((0U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                               ? (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                  + vlSelf->Soc__DOT__core__DOT__dereg_op_b)
                               : 0ULL)),64);
    bufp->fullIData(oldp+44,(((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                               ? vlSelf->Soc__DOT___ram_io_dataOut_bits
                               : 0U)),32);
    bufp->fullBit(oldp+45,(vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag));
    bufp->fullCData(oldp+46,(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count),3);
    bufp->fullBit(oldp+47,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))));
    bufp->fullQData(oldp+48,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                               & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_rd)))
                               ? vlSelf->Soc__DOT__core__DOT__mwreg_alu_res
                               : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT__mwreg_rd])),64);
    bufp->fullQData(oldp+50,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                             [vlSelf->Soc__DOT__core__DOT__mwreg_rd]),64);
    bufp->fullQData(oldp+52,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                             [((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                    ? (0x1fU & (vlSelf->__VdfgTmp_h7f65c8dc__0 
                                                >> 0xfU))
                                    : 0U) : 0U)]),64);
    bufp->fullQData(oldp+54,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                             [((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                    ? (0x1fU & (vlSelf->__VdfgTmp_h27324541__0 
                                                >> 0x14U))
                                    : 0U) : 0U)]),64);
    bufp->fullQData(oldp+56,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+58,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+60,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+62,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+64,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+66,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+68,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+70,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+72,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+74,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+76,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+78,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+80,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+82,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+84,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+86,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+88,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+90,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+92,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+94,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+96,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+98,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+100,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+102,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+104,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+106,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+108,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+110,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+112,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+114,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+116,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+118,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
    bufp->fullQData(oldp+120,((vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc 
                               - 0x80000000ULL)),64);
    bufp->fullCData(oldp+122,((0xffU & ((IData)(3U) 
                                        + (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)))),8);
    bufp->fullCData(oldp+123,((0xffU & ((IData)(2U) 
                                        + (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)))),8);
    bufp->fullCData(oldp+124,((0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)))),8);
    bufp->fullCData(oldp+125,((0xffU & (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc))),8);
    bufp->fullCData(oldp+126,(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R0_data),8);
    bufp->fullCData(oldp+127,(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R1_data),8);
    bufp->fullCData(oldp+128,(((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_3)
                                ? (IData)(vlSelf->__VdfgTmp_h483daa03__0)
                                : 0U)),8);
    bufp->fullCData(oldp+129,(((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_5)
                                ? (IData)(vlSelf->__VdfgTmp_h7cec4c01__0)
                                : 0U)),8);
    bufp->fullBit(oldp+130,(vlSelf->clock));
    bufp->fullBit(oldp+131,(vlSelf->reset));
    bufp->fullBit(oldp+132,(1U));
    bufp->fullCData(oldp+133,(0U),5);
    bufp->fullQData(oldp+134,(0ULL),64);
}
