// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCore__Syms.h"


VL_ATTR_COLD void VCore___024root__trace_init_sub__TOP__0(VCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+95,"clock", false,-1);
    tracep->declBit(c+96,"reset", false,-1);
    tracep->declBit(c+97,"io_ramio_dataOut_valid", false,-1);
    tracep->declBus(c+98,"io_ramio_dataOut_bits", false,-1, 31,0);
    tracep->declBit(c+99,"io_ramio_pc_valid", false,-1);
    tracep->declQuad(c+100,"io_ramio_pc_bits", false,-1, 63,0);
    tracep->pushNamePrefix("Core ");
    tracep->declBit(c+95,"clock", false,-1);
    tracep->declBit(c+96,"reset", false,-1);
    tracep->declBit(c+97,"io_ramio_dataOut_valid", false,-1);
    tracep->declBus(c+98,"io_ramio_dataOut_bits", false,-1, 31,0);
    tracep->declBit(c+99,"io_ramio_pc_valid", false,-1);
    tracep->declQuad(c+100,"io_ramio_pc_bits", false,-1, 63,0);
    tracep->declQuad(c+5,"fdreg_pc", false,-1, 63,0);
    tracep->declQuad(c+7,"dereg_op_a", false,-1, 63,0);
    tracep->declQuad(c+9,"dereg_op_b", false,-1, 63,0);
    tracep->declBus(c+11,"dereg_rd", false,-1, 4,0);
    tracep->declBus(c+12,"dereg_alu_op", false,-1, 4,0);
    tracep->declBus(c+13,"dereg_wb_type", false,-1, 1,0);
    tracep->declQuad(c+14,"emreg_alu_res", false,-1, 63,0);
    tracep->declBus(c+16,"emreg_wb_type", false,-1, 1,0);
    tracep->declBus(c+17,"emreg_rd", false,-1, 4,0);
    tracep->declQuad(c+18,"mwreg_alu_res", false,-1, 63,0);
    tracep->declBus(c+20,"mwreg_wb_type", false,-1, 1,0);
    tracep->declBus(c+21,"mwreg_rd", false,-1, 4,0);
    tracep->pushNamePrefix("decode ");
    tracep->declBit(c+97,"io_inst_valid", false,-1);
    tracep->declBus(c+98,"io_inst_bits", false,-1, 31,0);
    tracep->declQuad(c+5,"io_fdio_pc", false,-1, 63,0);
    tracep->declQuad(c+102,"io_rfio_reg1_rdata", false,-1, 63,0);
    tracep->declBus(c+104,"io_rfio_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+105,"io_rfio_reg2_raddr", false,-1, 4,0);
    tracep->declQuad(c+106,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+108,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+110,"io_deio_rd", false,-1, 4,0);
    tracep->declBus(c+1,"io_deio_alu_op", false,-1, 4,0);
    tracep->declBus(c+2,"io_deio_wb_type", false,-1, 1,0);
    tracep->pushNamePrefix("cu ");
    tracep->declBus(c+3,"io_inst", false,-1, 31,0);
    tracep->declBit(c+4,"io_opa_type", false,-1);
    tracep->declBus(c+1,"io_alu_op", false,-1, 4,0);
    tracep->declBus(c+2,"io_wb_type", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("eximm ");
    tracep->declBus(c+3,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+108,"io_eximm", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("excute ");
    tracep->declQuad(c+7,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+9,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+11,"io_deio_rd", false,-1, 4,0);
    tracep->declBus(c+12,"io_deio_alu_op", false,-1, 4,0);
    tracep->declBus(c+13,"io_deio_wb_type", false,-1, 1,0);
    tracep->declQuad(c+22,"io_emio_alu_res", false,-1, 63,0);
    tracep->declBus(c+13,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+11,"io_emio_rd", false,-1, 4,0);
    tracep->pushNamePrefix("alu ");
    tracep->declQuad(c+7,"io_op_a", false,-1, 63,0);
    tracep->declQuad(c+9,"io_op_b", false,-1, 63,0);
    tracep->declBus(c+12,"io_alu_op", false,-1, 4,0);
    tracep->declQuad(c+22,"io_result", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+95,"clock", false,-1);
    tracep->declBit(c+96,"reset", false,-1);
    tracep->declQuad(c+100,"io_fdio_pc", false,-1, 63,0);
    tracep->declBit(c+99,"io_pc_valid", false,-1);
    tracep->declQuad(c+100,"io_pc_bits", false,-1, 63,0);
    tracep->declBit(c+24,"started", false,-1);
    tracep->declBus(c+25,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem ");
    tracep->declQuad(c+14,"io_emio_alu_res", false,-1, 63,0);
    tracep->declBus(c+16,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+17,"io_emio_rd", false,-1, 4,0);
    tracep->declQuad(c+14,"io_mwio_alu_res", false,-1, 63,0);
    tracep->declBus(c+16,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declBus(c+17,"io_mwio_rd", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+95,"clock", false,-1);
    tracep->declBus(c+104,"io_RfDe_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+105,"io_RfDe_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+21,"io_RfWb_rd", false,-1, 4,0);
    tracep->declBit(c+26,"io_RfWb_reg_wen", false,-1);
    tracep->declQuad(c+18,"io_RfWb_reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+102,"io_RfDe_reg1_rdata", false,-1, 63,0);
    tracep->pushNamePrefix("regs_ext ");
    tracep->declBus(c+21,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+115,"R0_en", false,-1);
    tracep->declBit(c+95,"R0_clk", false,-1);
    tracep->declBus(c+104,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+115,"R1_en", false,-1);
    tracep->declBit(c+95,"R1_clk", false,-1);
    tracep->declBus(c+105,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+115,"R2_en", false,-1);
    tracep->declBit(c+95,"R2_clk", false,-1);
    tracep->declBus(c+116,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+115,"W0_en", false,-1);
    tracep->declBit(c+95,"W0_clk", false,-1);
    tracep->declQuad(c+117,"W0_data", false,-1, 63,0);
    tracep->declBus(c+21,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+115,"W1_en", false,-1);
    tracep->declBit(c+95,"W1_clk", false,-1);
    tracep->declQuad(c+27,"W1_data", false,-1, 63,0);
    tracep->declQuad(c+29,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+111,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+113,"R2_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+31+i*2,"Memory", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb ");
    tracep->declQuad(c+18,"io_mwio_alu_res", false,-1, 63,0);
    tracep->declBus(c+20,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declBus(c+21,"io_mwio_rd", false,-1, 4,0);
    tracep->declBus(c+21,"io_rfio_rd", false,-1, 4,0);
    tracep->declBit(c+26,"io_rfio_reg_wen", false,-1);
    tracep->declQuad(c+18,"io_rfio_reg_wdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VCore___024root__trace_init_top(VCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root__trace_init_top\n"); );
    // Body
    VCore___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCore___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCore___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCore___024root__trace_register(VCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VCore___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VCore___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VCore___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCore___024root__trace_full_sub_0(VCore___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCore___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root__trace_full_top_0\n"); );
    // Init
    VCore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCore___024root*>(voidSelf);
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCore___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCore___024root__trace_full_sub_0(VCore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,((0x1fU & (- (IData)((1U 
                                                 & ((~ (IData)(vlSelf->Core__DOT__decode__DOT__cu__DOT___controlsig_T_9)) 
                                                    | (0x13U 
                                                       == vlSelf->Core__DOT__decode__DOT___inst_T))))))),5);
    bufp->fullCData(oldp+2,(vlSelf->Core__DOT__decode__DOT___cu_io_opa_type),2);
    bufp->fullIData(oldp+3,(vlSelf->Core__DOT__decode__DOT___inst_T),32);
    bufp->fullBit(oldp+4,(vlSelf->Core__DOT__decode__DOT___cu_io_opa_type));
    bufp->fullQData(oldp+5,(vlSelf->Core__DOT__fdreg_pc),64);
    bufp->fullQData(oldp+7,(vlSelf->Core__DOT__dereg_op_a),64);
    bufp->fullQData(oldp+9,(vlSelf->Core__DOT__dereg_op_b),64);
    bufp->fullCData(oldp+11,(vlSelf->Core__DOT__dereg_rd),5);
    bufp->fullCData(oldp+12,(vlSelf->Core__DOT__dereg_alu_op),5);
    bufp->fullCData(oldp+13,(vlSelf->Core__DOT__dereg_wb_type),2);
    bufp->fullQData(oldp+14,(vlSelf->Core__DOT__emreg_alu_res),64);
    bufp->fullCData(oldp+16,(vlSelf->Core__DOT__emreg_wb_type),2);
    bufp->fullCData(oldp+17,(vlSelf->Core__DOT__emreg_rd),5);
    bufp->fullQData(oldp+18,(vlSelf->Core__DOT__mwreg_alu_res),64);
    bufp->fullCData(oldp+20,(vlSelf->Core__DOT__mwreg_wb_type),2);
    bufp->fullCData(oldp+21,(vlSelf->Core__DOT__mwreg_rd),5);
    bufp->fullQData(oldp+22,(((0U == (IData)(vlSelf->Core__DOT__dereg_alu_op))
                               ? (vlSelf->Core__DOT__dereg_op_a 
                                  + vlSelf->Core__DOT__dereg_op_b)
                               : 0ULL)),64);
    bufp->fullBit(oldp+24,(vlSelf->Core__DOT__fetch__DOT__started));
    bufp->fullIData(oldp+25,(vlSelf->Core__DOT__fetch__DOT__pc),32);
    bufp->fullBit(oldp+26,((0U != (IData)(vlSelf->Core__DOT__mwreg_wb_type))));
    bufp->fullQData(oldp+27,((((0U != (IData)(vlSelf->Core__DOT__mwreg_wb_type)) 
                               & (0U != (IData)(vlSelf->Core__DOT__mwreg_rd)))
                               ? vlSelf->Core__DOT__mwreg_alu_res
                               : vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Core__DOT__mwreg_rd])),64);
    bufp->fullQData(oldp+29,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory
                             [vlSelf->Core__DOT__mwreg_rd]),64);
    bufp->fullQData(oldp+31,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+33,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+35,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+37,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+39,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+41,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+43,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+45,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+47,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+49,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+51,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+53,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+55,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+57,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+59,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+61,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+63,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+65,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+67,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+69,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+71,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+73,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+75,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+77,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+79,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+81,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+83,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+85,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+87,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+89,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+91,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+93,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
    bufp->fullBit(oldp+95,(vlSelf->clock));
    bufp->fullBit(oldp+96,(vlSelf->reset));
    bufp->fullBit(oldp+97,(vlSelf->io_ramio_dataOut_valid));
    bufp->fullIData(oldp+98,(vlSelf->io_ramio_dataOut_bits),32);
    bufp->fullBit(oldp+99,(vlSelf->io_ramio_pc_valid));
    bufp->fullQData(oldp+100,(vlSelf->io_ramio_pc_bits),64);
    bufp->fullQData(oldp+102,((((IData)(vlSelf->io_ramio_dataOut_valid) 
                                & (0U != (0x1fU & (vlSelf->io_ramio_dataOut_bits 
                                                   >> 0xfU))))
                                ? vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [((IData)(vlSelf->io_ramio_dataOut_valid)
                                  ? (0x1fU & (vlSelf->io_ramio_dataOut_bits 
                                              >> 0xfU))
                                  : 0U)] : 0ULL)),64);
    bufp->fullCData(oldp+104,(((IData)(vlSelf->io_ramio_dataOut_valid)
                                ? (0x1fU & (vlSelf->io_ramio_dataOut_bits 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+105,(((IData)(vlSelf->io_ramio_dataOut_valid)
                                ? (0x1fU & (vlSelf->io_ramio_dataOut_bits 
                                            >> 0x14U))
                                : 0U)),5);
    bufp->fullQData(oldp+106,(((IData)(vlSelf->Core__DOT__decode__DOT___cu_io_opa_type)
                                ? (((IData)(vlSelf->io_ramio_dataOut_valid) 
                                    & (0U != (0x1fU 
                                              & (vlSelf->io_ramio_dataOut_bits 
                                                 >> 0xfU))))
                                    ? vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                   [((IData)(vlSelf->io_ramio_dataOut_valid)
                                      ? (0x1fU & (vlSelf->io_ramio_dataOut_bits 
                                                  >> 0xfU))
                                      : 0U)] : 0ULL)
                                : vlSelf->Core__DOT__fdreg_pc)),64);
    bufp->fullQData(oldp+108,((((- (QData)((IData)(
                                                   ((IData)(vlSelf->io_ramio_dataOut_valid) 
                                                    & (vlSelf->io_ramio_dataOut_bits 
                                                       >> 0x1fU))))) 
                                << 0xcU) | (QData)((IData)(
                                                           ((IData)(vlSelf->io_ramio_dataOut_valid)
                                                             ? 
                                                            (vlSelf->io_ramio_dataOut_bits 
                                                             >> 0x14U)
                                                             : 0U))))),64);
    bufp->fullCData(oldp+110,(((IData)(vlSelf->io_ramio_dataOut_valid)
                                ? (0x1fU & (vlSelf->io_ramio_dataOut_bits 
                                            >> 7U))
                                : 0U)),5);
    bufp->fullQData(oldp+111,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [((IData)(vlSelf->io_ramio_dataOut_valid)
                                 ? (0x1fU & (vlSelf->io_ramio_dataOut_bits 
                                             >> 0xfU))
                                 : 0U)]),64);
    bufp->fullQData(oldp+113,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [((IData)(vlSelf->io_ramio_dataOut_valid)
                                 ? (0x1fU & (vlSelf->io_ramio_dataOut_bits 
                                             >> 0x14U))
                                 : 0U)]),64);
    bufp->fullBit(oldp+115,(1U));
    bufp->fullCData(oldp+116,(0U),5);
    bufp->fullQData(oldp+117,(0ULL),64);
}
