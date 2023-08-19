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
    tracep->declBit(c+138,"clock", false,-1);
    tracep->declBit(c+139,"reset", false,-1);
    tracep->pushNamePrefix("Soc ");
    tracep->declBit(c+138,"clock", false,-1);
    tracep->declBit(c+139,"reset", false,-1);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+138,"clock", false,-1);
    tracep->declBit(c+139,"reset", false,-1);
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
    tracep->pushNamePrefix("DI ");
    tracep->declBit(c+138,"clk", false,-1);
    tracep->declQuad(c+4,"pc", false,-1, 63,0);
    tracep->declBit(c+3,"pc_req", false,-1);
    tracep->declBus(c+2,"inst", false,-1, 31,0);
    tracep->declBit(c+1,"inst_valid", false,-1);
    tracep->declQuad(c+8,"op_a", false,-1, 63,0);
    tracep->declQuad(c+10,"op_b", false,-1, 63,0);
    tracep->declQuad(c+23,"result", false,-1, 63,0);
    tracep->declBus(c+22,"rd", false,-1, 4,0);
    tracep->declQuad(c+19,"reg_wdata", false,-1, 63,0);
    tracep->declBit(c+25,"reg_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode ");
    tracep->declBit(c+1,"io_inst_valid", false,-1);
    tracep->declBus(c+2,"io_inst_bits", false,-1, 31,0);
    tracep->declQuad(c+6,"io_fdio_pc", false,-1, 63,0);
    tracep->declQuad(c+26,"io_rfio_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+28,"io_rfio_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+30,"io_rfio_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+31,"io_rfio_reg2_raddr", false,-1, 4,0);
    tracep->declQuad(c+32,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+34,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+36,"io_deio_rd", false,-1, 4,0);
    tracep->declBus(c+37,"io_deio_alu_op", false,-1, 4,0);
    tracep->declBus(c+38,"io_deio_wb_type", false,-1, 1,0);
    tracep->declBit(c+39,"io_jump_flag", false,-1);
    tracep->declQuad(c+40,"io_jump_pc", false,-1, 63,0);
    tracep->pushNamePrefix("cu ");
    tracep->declBus(c+42,"io_inst", false,-1, 31,0);
    tracep->declBus(c+43,"io_jump_type", false,-1, 1,0);
    tracep->declBit(c+44,"io_opa_type", false,-1);
    tracep->declBit(c+45,"io_opb_type", false,-1);
    tracep->declBus(c+46,"io_imm_type", false,-1, 1,0);
    tracep->declBus(c+37,"io_alu_op", false,-1, 4,0);
    tracep->declBus(c+38,"io_wb_type", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("eximm ");
    tracep->declBus(c+42,"io_inst", false,-1, 31,0);
    tracep->declBus(c+46,"io_imm_type", false,-1, 1,0);
    tracep->declQuad(c+47,"io_eximm", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("excute ");
    tracep->declQuad(c+8,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+10,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+12,"io_deio_rd", false,-1, 4,0);
    tracep->declBus(c+13,"io_deio_alu_op", false,-1, 4,0);
    tracep->declBus(c+14,"io_deio_wb_type", false,-1, 1,0);
    tracep->declQuad(c+23,"io_emio_alu_res", false,-1, 63,0);
    tracep->declBus(c+14,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+12,"io_emio_rd", false,-1, 4,0);
    tracep->pushNamePrefix("alu ");
    tracep->declQuad(c+8,"io_op_a", false,-1, 63,0);
    tracep->declQuad(c+10,"io_op_b", false,-1, 63,0);
    tracep->declBus(c+13,"io_alu_op", false,-1, 4,0);
    tracep->declQuad(c+23,"io_result", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fc ");
    tracep->declBit(c+39,"io_fcde_jump_flag", false,-1);
    tracep->declQuad(c+40,"io_fcde_jump_pc", false,-1, 63,0);
    tracep->declBit(c+39,"io_fcfe_jump_flag", false,-1);
    tracep->declQuad(c+49,"io_fcfe_jump_pc", false,-1, 63,0);
    tracep->declBit(c+39,"io_fcfe_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+138,"clock", false,-1);
    tracep->declBit(c+139,"reset", false,-1);
    tracep->declBit(c+39,"io_fcfe_jump_flag", false,-1);
    tracep->declQuad(c+49,"io_fcfe_jump_pc", false,-1, 63,0);
    tracep->declBit(c+39,"io_fcfe_flush", false,-1);
    tracep->declQuad(c+4,"io_fdio_pc", false,-1, 63,0);
    tracep->declBit(c+3,"io_pc_valid", false,-1);
    tracep->declQuad(c+4,"io_pc_bits", false,-1, 63,0);
    tracep->declBit(c+3,"started", false,-1);
    tracep->declQuad(c+51,"pc", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("interact ");
    tracep->declBus(c+53,"inst", false,-1, 31,0);
    tracep->declBit(c+138,"clk", false,-1);
    tracep->declBit(c+139,"rst", false,-1);
    tracep->declBit(c+54,"ebreak_flag", false,-1);
    tracep->declBus(c+55,"over_count", false,-1, 2,0);
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
    tracep->declBit(c+138,"clock", false,-1);
    tracep->declBus(c+30,"io_RfDe_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+31,"io_RfDe_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+22,"io_RfWb_rd", false,-1, 4,0);
    tracep->declBit(c+25,"io_RfWb_reg_wen", false,-1);
    tracep->declQuad(c+19,"io_RfWb_reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+26,"io_RfDe_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+28,"io_RfDe_reg2_rdata", false,-1, 63,0);
    tracep->pushNamePrefix("regs_ext ");
    tracep->declBus(c+22,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+140,"R0_en", false,-1);
    tracep->declBit(c+138,"R0_clk", false,-1);
    tracep->declBus(c+30,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+140,"R1_en", false,-1);
    tracep->declBit(c+138,"R1_clk", false,-1);
    tracep->declBus(c+31,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+140,"R2_en", false,-1);
    tracep->declBit(c+138,"R2_clk", false,-1);
    tracep->declBus(c+141,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+140,"W0_en", false,-1);
    tracep->declBit(c+138,"W0_clk", false,-1);
    tracep->declQuad(c+142,"W0_data", false,-1, 63,0);
    tracep->declBus(c+22,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+140,"W1_en", false,-1);
    tracep->declBit(c+138,"W1_clk", false,-1);
    tracep->declQuad(c+56,"W1_data", false,-1, 63,0);
    tracep->declQuad(c+58,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+60,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+62,"R2_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+64+i*2,"Memory", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb ");
    tracep->declQuad(c+19,"io_mwio_alu_res", false,-1, 63,0);
    tracep->declBus(c+21,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declBus(c+22,"io_mwio_rd", false,-1, 4,0);
    tracep->declBus(c+22,"io_rfio_rd", false,-1, 4,0);
    tracep->declBit(c+25,"io_rfio_reg_wen", false,-1);
    tracep->declQuad(c+19,"io_rfio_reg_wdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ram ");
    tracep->declBit(c+138,"clock", false,-1);
    tracep->declBit(c+3,"io_pc_valid", false,-1);
    tracep->declQuad(c+128,"io_pc_bits", false,-1, 63,0);
    tracep->declBit(c+1,"io_dataOut_valid", false,-1);
    tracep->declBus(c+2,"io_dataOut_bits", false,-1, 31,0);
    tracep->declBit(c+1,"inst_valid", false,-1);
    tracep->pushNamePrefix("SyncMem_ext ");
    tracep->declBus(c+130,"R0_addr", false,-1, 7,0);
    tracep->declBit(c+3,"R0_en", false,-1);
    tracep->declBit(c+138,"R0_clk", false,-1);
    tracep->declBus(c+131,"R1_addr", false,-1, 7,0);
    tracep->declBit(c+3,"R1_en", false,-1);
    tracep->declBit(c+138,"R1_clk", false,-1);
    tracep->declBus(c+132,"R2_addr", false,-1, 7,0);
    tracep->declBit(c+3,"R2_en", false,-1);
    tracep->declBit(c+138,"R2_clk", false,-1);
    tracep->declBus(c+133,"R3_addr", false,-1, 7,0);
    tracep->declBit(c+3,"R3_en", false,-1);
    tracep->declBit(c+138,"R3_clk", false,-1);
    tracep->declBus(c+134,"R0_data", false,-1, 7,0);
    tracep->declBus(c+135,"R1_data", false,-1, 7,0);
    tracep->declBus(c+136,"R2_data", false,-1, 7,0);
    tracep->declBus(c+137,"R3_data", false,-1, 7,0);
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
    bufp->fullQData(oldp+4,(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc),64);
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
    bufp->fullQData(oldp+23,(((0U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                               ? (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                  + vlSelf->Soc__DOT__core__DOT__dereg_op_b)
                               : 0ULL)),64);
    bufp->fullBit(oldp+25,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))));
    bufp->fullQData(oldp+26,((((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid) 
                               & (0U != (IData)(vlSelf->__VdfgTmp_h049a0a75__0)))
                               ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                 ? (IData)(vlSelf->__VdfgTmp_h049a0a75__0)
                                 : 0U)] : 0ULL)),64);
    bufp->fullQData(oldp+28,((((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid) 
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
    bufp->fullCData(oldp+30,(((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                               ? (IData)(vlSelf->__VdfgTmp_h049a0a75__0)
                               : 0U)),5);
    bufp->fullCData(oldp+31,(((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                               ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                   ? (0x1fU & (vlSelf->__VdfgTmp_h27324541__0 
                                               >> 0x14U))
                                   : 0U) : 0U)),5);
    bufp->fullQData(oldp+32,((((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                               & ((0x13U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                  & ((0x17U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                     | ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                        & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h5d4f4c30__0)))))
                               ? vlSelf->Soc__DOT__core__DOT__fdreg_pc
                               : 0ULL)),64);
    bufp->fullQData(oldp+34,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type)
                               ? vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm
                               : 0ULL)),64);
    bufp->fullCData(oldp+36,(((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                               ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                   ? (0x1fU & ((IData)(vlSelf->__VdfgTmp_h50f8190e__0) 
                                               >> 7U))
                                   : 0U) : 0U)),5);
    bufp->fullCData(oldp+37,((0x1fU & (- (IData)((1U 
                                                  & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                     | (0x13U 
                                                        == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T))))))),5);
    bufp->fullCData(oldp+38,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type),2);
    bufp->fullBit(oldp+39,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_flag));
    bufp->fullQData(oldp+40,(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
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
    bufp->fullIData(oldp+42,(vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T),32);
    bufp->fullCData(oldp+43,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type),2);
    bufp->fullBit(oldp+44,(((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                            & ((0x13U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                               & ((0x17U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                  | ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                     & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h5d4f4c30__0)))))));
    bufp->fullBit(oldp+45,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type));
    bufp->fullCData(oldp+46,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0)
                               ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0)
                                        ? 1U : ((0x6fU 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                << 1U)))),2);
    bufp->fullQData(oldp+47,(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm),64);
    bufp->fullQData(oldp+49,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc),64);
    bufp->fullQData(oldp+51,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),64);
    bufp->fullIData(oldp+53,(((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                               ? vlSelf->Soc__DOT___ram_io_dataOut_bits
                               : 0U)),32);
    bufp->fullBit(oldp+54,(vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag));
    bufp->fullCData(oldp+55,(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count),3);
    bufp->fullQData(oldp+56,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                               & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_rd)))
                               ? vlSelf->Soc__DOT__core__DOT__mwreg_alu_res
                               : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT__mwreg_rd])),64);
    bufp->fullQData(oldp+58,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                             [vlSelf->Soc__DOT__core__DOT__mwreg_rd]),64);
    bufp->fullQData(oldp+60,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                             [((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                ? (IData)(vlSelf->__VdfgTmp_h049a0a75__0)
                                : 0U)]),64);
    bufp->fullQData(oldp+62,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                             [((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                    ? (0x1fU & (vlSelf->__VdfgTmp_h27324541__0 
                                                >> 0x14U))
                                    : 0U) : 0U)]),64);
    bufp->fullQData(oldp+64,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+66,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+68,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+70,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+72,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+74,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+76,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+78,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+80,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+82,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+84,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+86,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+88,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+90,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+92,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+94,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+96,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+98,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+100,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+102,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+104,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+106,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+108,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+110,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+112,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+114,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+116,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+118,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+120,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+122,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+124,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+126,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
    bufp->fullQData(oldp+128,((vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                               - 0x80000000ULL)),64);
    bufp->fullCData(oldp+130,((0xffU & ((IData)(3U) 
                                        + (IData)(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc)))),8);
    bufp->fullCData(oldp+131,((0xffU & ((IData)(2U) 
                                        + (IData)(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc)))),8);
    bufp->fullCData(oldp+132,((0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc)))),8);
    bufp->fullCData(oldp+133,((0xffU & (IData)(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc))),8);
    bufp->fullCData(oldp+134,(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R0_data),8);
    bufp->fullCData(oldp+135,(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R1_data),8);
    bufp->fullCData(oldp+136,(((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_3)
                                ? (IData)(vlSelf->__VdfgTmp_h483daa03__0)
                                : 0U)),8);
    bufp->fullCData(oldp+137,(((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_5)
                                ? (IData)(vlSelf->__VdfgTmp_h7cec4c01__0)
                                : 0U)),8);
    bufp->fullBit(oldp+138,(vlSelf->clock));
    bufp->fullBit(oldp+139,(vlSelf->reset));
    bufp->fullBit(oldp+140,(1U));
    bufp->fullCData(oldp+141,(0U),5);
    bufp->fullQData(oldp+142,(0ULL),64);
}
