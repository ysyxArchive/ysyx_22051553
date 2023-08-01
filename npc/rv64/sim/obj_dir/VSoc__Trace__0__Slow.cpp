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
    tracep->declBit(c+123,"clock", false,-1);
    tracep->declBit(c+124,"reset", false,-1);
    tracep->pushNamePrefix("Soc ");
    tracep->declBit(c+123,"clock", false,-1);
    tracep->declBit(c+124,"reset", false,-1);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+123,"clock", false,-1);
    tracep->declBit(c+124,"reset", false,-1);
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
    tracep->declBus(c+25,"io_rfio_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+26,"io_rfio_reg2_raddr", false,-1, 4,0);
    tracep->declQuad(c+27,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+29,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+31,"io_deio_rd", false,-1, 4,0);
    tracep->declBus(c+32,"io_deio_alu_op", false,-1, 4,0);
    tracep->declBus(c+33,"io_deio_wb_type", false,-1, 1,0);
    tracep->pushNamePrefix("cu ");
    tracep->declBus(c+34,"io_inst", false,-1, 31,0);
    tracep->declBit(c+35,"io_opa_type", false,-1);
    tracep->declBus(c+36,"io_imm_type", false,-1, 1,0);
    tracep->declBus(c+32,"io_alu_op", false,-1, 4,0);
    tracep->declBus(c+33,"io_wb_type", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("eximm ");
    tracep->declBus(c+34,"io_inst", false,-1, 31,0);
    tracep->declBus(c+36,"io_imm_type", false,-1, 1,0);
    tracep->declQuad(c+29,"io_eximm", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("excute ");
    tracep->declQuad(c+8,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+10,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+12,"io_deio_rd", false,-1, 4,0);
    tracep->declBus(c+13,"io_deio_alu_op", false,-1, 4,0);
    tracep->declBus(c+14,"io_deio_wb_type", false,-1, 1,0);
    tracep->declQuad(c+37,"io_emio_alu_res", false,-1, 63,0);
    tracep->declBus(c+14,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+12,"io_emio_rd", false,-1, 4,0);
    tracep->pushNamePrefix("alu ");
    tracep->declQuad(c+8,"io_op_a", false,-1, 63,0);
    tracep->declQuad(c+10,"io_op_b", false,-1, 63,0);
    tracep->declBus(c+13,"io_alu_op", false,-1, 4,0);
    tracep->declQuad(c+37,"io_result", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+123,"clock", false,-1);
    tracep->declBit(c+124,"reset", false,-1);
    tracep->declQuad(c+4,"io_fdio_pc", false,-1, 63,0);
    tracep->declBit(c+3,"io_pc_valid", false,-1);
    tracep->declQuad(c+4,"io_pc_bits", false,-1, 63,0);
    tracep->declBit(c+3,"started", false,-1);
    tracep->declQuad(c+4,"pc", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("interact ");
    tracep->declBus(c+39,"inst", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
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
    tracep->declBit(c+123,"clock", false,-1);
    tracep->declBus(c+25,"io_RfDe_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+26,"io_RfDe_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+22,"io_RfWb_rd", false,-1, 4,0);
    tracep->declBit(c+40,"io_RfWb_reg_wen", false,-1);
    tracep->declQuad(c+19,"io_RfWb_reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+23,"io_RfDe_reg1_rdata", false,-1, 63,0);
    tracep->pushNamePrefix("regs_ext ");
    tracep->declBus(c+22,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+125,"R0_en", false,-1);
    tracep->declBit(c+123,"R0_clk", false,-1);
    tracep->declBus(c+25,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+125,"R1_en", false,-1);
    tracep->declBit(c+123,"R1_clk", false,-1);
    tracep->declBus(c+26,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+125,"R2_en", false,-1);
    tracep->declBit(c+123,"R2_clk", false,-1);
    tracep->declBus(c+126,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+125,"W0_en", false,-1);
    tracep->declBit(c+123,"W0_clk", false,-1);
    tracep->declQuad(c+127,"W0_data", false,-1, 63,0);
    tracep->declBus(c+22,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+125,"W1_en", false,-1);
    tracep->declBit(c+123,"W1_clk", false,-1);
    tracep->declQuad(c+41,"W1_data", false,-1, 63,0);
    tracep->declQuad(c+43,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+45,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+47,"R2_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+49+i*2,"Memory", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb ");
    tracep->declQuad(c+19,"io_mwio_alu_res", false,-1, 63,0);
    tracep->declBus(c+21,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declBus(c+22,"io_mwio_rd", false,-1, 4,0);
    tracep->declBus(c+22,"io_rfio_rd", false,-1, 4,0);
    tracep->declBit(c+40,"io_rfio_reg_wen", false,-1);
    tracep->declQuad(c+19,"io_rfio_reg_wdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ram ");
    tracep->declBit(c+123,"clock", false,-1);
    tracep->declBit(c+3,"io_pc_valid", false,-1);
    tracep->declQuad(c+113,"io_pc_bits", false,-1, 63,0);
    tracep->declBit(c+1,"io_dataOut_valid", false,-1);
    tracep->declBus(c+2,"io_dataOut_bits", false,-1, 31,0);
    tracep->declBit(c+1,"inst_valid", false,-1);
    tracep->pushNamePrefix("SyncMem_ext ");
    tracep->declBus(c+115,"R0_addr", false,-1, 7,0);
    tracep->declBit(c+3,"R0_en", false,-1);
    tracep->declBit(c+123,"R0_clk", false,-1);
    tracep->declBus(c+116,"R1_addr", false,-1, 7,0);
    tracep->declBit(c+3,"R1_en", false,-1);
    tracep->declBit(c+123,"R1_clk", false,-1);
    tracep->declBus(c+117,"R2_addr", false,-1, 7,0);
    tracep->declBit(c+3,"R2_en", false,-1);
    tracep->declBit(c+123,"R2_clk", false,-1);
    tracep->declBus(c+118,"R3_addr", false,-1, 7,0);
    tracep->declBit(c+3,"R3_en", false,-1);
    tracep->declBit(c+123,"R3_clk", false,-1);
    tracep->declBus(c+119,"R0_data", false,-1, 7,0);
    tracep->declBus(c+120,"R1_data", false,-1, 7,0);
    tracep->declBus(c+121,"R2_data", false,-1, 7,0);
    tracep->declBus(c+122,"R3_data", false,-1, 7,0);
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
                               & (0U != (IData)(vlSelf->__VdfgTmp_h049a0a75__0)))
                               ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                 ? (IData)(vlSelf->__VdfgTmp_h049a0a75__0)
                                 : 0U)] : 0ULL)),64);
    bufp->fullCData(oldp+25,(((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                               ? (IData)(vlSelf->__VdfgTmp_h049a0a75__0)
                               : 0U)),5);
    bufp->fullCData(oldp+26,(((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                               ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                   ? ((0x10U & ((IData)(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R0_data) 
                                                << 4U)) 
                                      | (0xfU & (vlSelf->__VdfgTmp_h7f65c8dc__0 
                                                 >> 0x14U)))
                                   : 0U) : 0U)),5);
    bufp->fullQData(oldp+27,((((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                               & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_9))
                               ? (((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid) 
                                   & (0U != (IData)(vlSelf->__VdfgTmp_h049a0a75__0)))
                                   ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                  [((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                     ? (IData)(vlSelf->__VdfgTmp_h049a0a75__0)
                                     : 0U)] : 0ULL)
                               : vlSelf->Soc__DOT__core__DOT__fdreg_pc)),64);
    bufp->fullQData(oldp+29,(((IData)(vlSelf->__VdfgTmp_h490969a2__0)
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
    bufp->fullCData(oldp+31,(((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                               ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                   ? (0x1fU & ((IData)(vlSelf->__VdfgTmp_h50f8190e__0) 
                                               >> 7U))
                                   : 0U) : 0U)),5);
    bufp->fullCData(oldp+32,((0x1fU & (- (IData)((1U 
                                                  & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h166f560e__0)) 
                                                     | (0x13U 
                                                        == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T))))))),5);
    bufp->fullCData(oldp+33,(((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                              & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h166f560e__0))),2);
    bufp->fullIData(oldp+34,(vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T),32);
    bufp->fullBit(oldp+35,(((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                            & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_9))));
    bufp->fullCData(oldp+36,(vlSelf->__VdfgTmp_h490969a2__0),2);
    bufp->fullQData(oldp+37,(((0U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                               ? (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                  + vlSelf->Soc__DOT__core__DOT__dereg_op_b)
                               : 0ULL)),64);
    bufp->fullIData(oldp+39,(((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                               ? vlSelf->Soc__DOT___ram_io_dataOut_bits
                               : 0U)),32);
    bufp->fullBit(oldp+40,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))));
    bufp->fullQData(oldp+41,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                               & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_rd)))
                               ? vlSelf->Soc__DOT__core__DOT__mwreg_alu_res
                               : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT__mwreg_rd])),64);
    bufp->fullQData(oldp+43,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                             [vlSelf->Soc__DOT__core__DOT__mwreg_rd]),64);
    bufp->fullQData(oldp+45,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                             [((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                ? (IData)(vlSelf->__VdfgTmp_h049a0a75__0)
                                : 0U)]),64);
    bufp->fullQData(oldp+47,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                             [((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                    ? ((0x10U & ((IData)(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R0_data) 
                                                 << 4U)) 
                                       | (0xfU & (vlSelf->__VdfgTmp_h7f65c8dc__0 
                                                  >> 0x14U)))
                                    : 0U) : 0U)]),64);
    bufp->fullQData(oldp+49,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+51,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+53,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+55,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+57,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+59,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+61,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+63,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+65,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+67,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+69,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+71,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+73,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+75,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+77,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+79,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+81,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+83,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+85,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+87,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+89,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+91,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+93,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+95,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+97,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+99,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+101,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+103,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+105,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+107,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+109,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+111,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
    bufp->fullQData(oldp+113,((vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc 
                               - 0x80000000ULL)),64);
    bufp->fullCData(oldp+115,((0xffU & ((IData)(3U) 
                                        + (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)))),8);
    bufp->fullCData(oldp+116,((0xffU & ((IData)(2U) 
                                        + (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)))),8);
    bufp->fullCData(oldp+117,((0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)))),8);
    bufp->fullCData(oldp+118,((0xffU & (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc))),8);
    bufp->fullCData(oldp+119,(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R0_data),8);
    bufp->fullCData(oldp+120,(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R1_data),8);
    bufp->fullCData(oldp+121,(((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_3)
                                ? (IData)(vlSelf->__VdfgTmp_h483daa03__0)
                                : 0U)),8);
    bufp->fullCData(oldp+122,(((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_5)
                                ? (IData)(vlSelf->__VdfgTmp_h7cec4c01__0)
                                : 0U)),8);
    bufp->fullBit(oldp+123,(vlSelf->clock));
    bufp->fullBit(oldp+124,(vlSelf->reset));
    bufp->fullBit(oldp+125,(1U));
    bufp->fullCData(oldp+126,(0U),5);
    bufp->fullQData(oldp+127,(0ULL),64);
}
