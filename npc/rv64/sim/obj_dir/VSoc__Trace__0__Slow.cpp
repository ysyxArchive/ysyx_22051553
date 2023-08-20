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
    tracep->declBit(c+133,"clock", false,-1);
    tracep->declBit(c+134,"reset", false,-1);
    tracep->pushNamePrefix("Soc ");
    tracep->declBit(c+133,"clock", false,-1);
    tracep->declBit(c+134,"reset", false,-1);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+133,"clock", false,-1);
    tracep->declBit(c+134,"reset", false,-1);
    tracep->declBus(c+1,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+135,"io_rdata", false,-1, 63,0);
    tracep->declBus(c+2,"io_pc", false,-1, 31,0);
    tracep->declQuad(c+3,"io_waddr", false,-1, 63,0);
    tracep->declQuad(c+5,"io_wdata", false,-1, 63,0);
    tracep->declBus(c+7,"io_wmask", false,-1, 7,0);
    tracep->declBus(c+8,"fdreg_pc", false,-1, 31,0);
    tracep->declQuad(c+9,"dereg_op_a", false,-1, 63,0);
    tracep->declQuad(c+11,"dereg_op_b", false,-1, 63,0);
    tracep->declBus(c+13,"dereg_rd", false,-1, 4,0);
    tracep->declBus(c+14,"dereg_alu_op", false,-1, 4,0);
    tracep->declBus(c+15,"dereg_wb_type", false,-1, 1,0);
    tracep->declBus(c+16,"dereg_sd_type", false,-1, 2,0);
    tracep->declQuad(c+5,"dereg_reg2_rdata", false,-1, 63,0);
    tracep->declQuad(c+17,"emreg_alu_res", false,-1, 63,0);
    tracep->declBus(c+19,"emreg_wb_type", false,-1, 1,0);
    tracep->declBus(c+20,"emreg_rd", false,-1, 4,0);
    tracep->declQuad(c+21,"mwreg_alu_res", false,-1, 63,0);
    tracep->declBus(c+23,"mwreg_wb_type", false,-1, 1,0);
    tracep->declBus(c+24,"mwreg_rd", false,-1, 4,0);
    tracep->pushNamePrefix("DI ");
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBus(c+2,"pc", false,-1, 31,0);
    tracep->declBit(c+25,"pc_req", false,-1);
    tracep->declBus(c+137,"inst", false,-1, 31,0);
    tracep->declBit(c+138,"inst_valid", false,-1);
    tracep->declQuad(c+9,"op_a", false,-1, 63,0);
    tracep->declQuad(c+11,"op_b", false,-1, 63,0);
    tracep->declQuad(c+26,"result", false,-1, 63,0);
    tracep->declBus(c+24,"rd", false,-1, 4,0);
    tracep->declQuad(c+28,"reg_wdata", false,-1, 63,0);
    tracep->declBit(c+30,"reg_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode ");
    tracep->declBus(c+1,"io_inst_bits", false,-1, 31,0);
    tracep->declBus(c+8,"io_fdio_pc", false,-1, 31,0);
    tracep->declQuad(c+31,"io_rfio_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+33,"io_rfio_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+35,"io_rfio_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+36,"io_rfio_reg2_raddr", false,-1, 4,0);
    tracep->declQuad(c+37,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+39,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+41,"io_deio_rd", false,-1, 4,0);
    tracep->declBus(c+42,"io_deio_alu_op", false,-1, 4,0);
    tracep->declBus(c+43,"io_deio_wb_type", false,-1, 1,0);
    tracep->declBus(c+44,"io_deio_sd_type", false,-1, 2,0);
    tracep->declQuad(c+33,"io_deio_reg2_rdata", false,-1, 63,0);
    tracep->declBit(c+45,"io_jump_flag", false,-1);
    tracep->declBus(c+46,"io_jump_pc", false,-1, 31,0);
    tracep->pushNamePrefix("cu ");
    tracep->declBus(c+1,"io_inst", false,-1, 31,0);
    tracep->declBus(c+47,"io_jump_type", false,-1, 1,0);
    tracep->declBus(c+48,"io_opa_type", false,-1, 1,0);
    tracep->declBus(c+49,"io_opb_type", false,-1, 1,0);
    tracep->declBus(c+50,"io_imm_type", false,-1, 1,0);
    tracep->declBus(c+42,"io_alu_op", false,-1, 4,0);
    tracep->declBus(c+43,"io_wb_type", false,-1, 1,0);
    tracep->declBus(c+44,"io_sd_type", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("eximm ");
    tracep->declBus(c+1,"io_inst", false,-1, 31,0);
    tracep->declBus(c+50,"io_imm_type", false,-1, 1,0);
    tracep->declQuad(c+51,"io_eximm", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("excute ");
    tracep->declQuad(c+9,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+11,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+13,"io_deio_rd", false,-1, 4,0);
    tracep->declBus(c+14,"io_deio_alu_op", false,-1, 4,0);
    tracep->declBus(c+15,"io_deio_wb_type", false,-1, 1,0);
    tracep->declBus(c+16,"io_deio_sd_type", false,-1, 2,0);
    tracep->declQuad(c+5,"io_deio_reg2_rdata", false,-1, 63,0);
    tracep->declQuad(c+26,"io_emio_alu_res", false,-1, 63,0);
    tracep->declBus(c+15,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+13,"io_emio_rd", false,-1, 4,0);
    tracep->declQuad(c+3,"io_waddr", false,-1, 63,0);
    tracep->declQuad(c+5,"io_wdata", false,-1, 63,0);
    tracep->declBus(c+7,"io_wmask", false,-1, 7,0);
    tracep->pushNamePrefix("alu ");
    tracep->declQuad(c+9,"io_op_a", false,-1, 63,0);
    tracep->declQuad(c+11,"io_op_b", false,-1, 63,0);
    tracep->declBus(c+14,"io_alu_op", false,-1, 4,0);
    tracep->declQuad(c+26,"io_result", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fc ");
    tracep->declBit(c+45,"io_fcde_jump_flag", false,-1);
    tracep->declBus(c+46,"io_fcde_jump_pc", false,-1, 31,0);
    tracep->declBit(c+45,"io_fcfe_jump_flag", false,-1);
    tracep->declBus(c+53,"io_fcfe_jump_pc", false,-1, 31,0);
    tracep->declBit(c+45,"io_fcfe_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+133,"clock", false,-1);
    tracep->declBit(c+134,"reset", false,-1);
    tracep->declBit(c+45,"io_fcfe_jump_flag", false,-1);
    tracep->declBus(c+53,"io_fcfe_jump_pc", false,-1, 31,0);
    tracep->declBit(c+45,"io_fcfe_flush", false,-1);
    tracep->declBus(c+2,"io_fdio_pc", false,-1, 31,0);
    tracep->declBit(c+25,"io_pc_valid", false,-1);
    tracep->declBus(c+2,"io_pc_bits", false,-1, 31,0);
    tracep->declBit(c+25,"started", false,-1);
    tracep->declBus(c+54,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("interact ");
    tracep->declBus(c+1,"inst", false,-1, 31,0);
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+134,"rst", false,-1);
    tracep->declBit(c+55,"ebreak_flag", false,-1);
    tracep->declBus(c+56,"over_count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declQuad(c+17,"io_emio_alu_res", false,-1, 63,0);
    tracep->declBus(c+19,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+20,"io_emio_rd", false,-1, 4,0);
    tracep->declQuad(c+17,"io_mwio_alu_res", false,-1, 63,0);
    tracep->declBus(c+19,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declBus(c+20,"io_mwio_rd", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+133,"clock", false,-1);
    tracep->declBus(c+35,"io_RfDe_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+36,"io_RfDe_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+24,"io_RfWb_rd", false,-1, 4,0);
    tracep->declBit(c+30,"io_RfWb_reg_wen", false,-1);
    tracep->declQuad(c+28,"io_RfWb_reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+31,"io_RfDe_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+33,"io_RfDe_reg2_rdata", false,-1, 63,0);
    tracep->pushNamePrefix("regs_ext ");
    tracep->declBus(c+24,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+139,"R0_en", false,-1);
    tracep->declBit(c+133,"R0_clk", false,-1);
    tracep->declBus(c+35,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+139,"R1_en", false,-1);
    tracep->declBit(c+133,"R1_clk", false,-1);
    tracep->declBus(c+36,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+139,"R2_en", false,-1);
    tracep->declBit(c+133,"R2_clk", false,-1);
    tracep->declBus(c+140,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+139,"W0_en", false,-1);
    tracep->declBit(c+133,"W0_clk", false,-1);
    tracep->declQuad(c+141,"W0_data", false,-1, 63,0);
    tracep->declBus(c+24,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+139,"W1_en", false,-1);
    tracep->declBit(c+133,"W1_clk", false,-1);
    tracep->declQuad(c+57,"W1_data", false,-1, 63,0);
    tracep->declQuad(c+59,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+61,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+63,"R2_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+65+i*2,"Memory", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb ");
    tracep->declQuad(c+21,"io_mwio_alu_res", false,-1, 63,0);
    tracep->declBus(c+23,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declBus(c+24,"io_mwio_rd", false,-1, 4,0);
    tracep->declBus(c+24,"io_rfio_rd", false,-1, 4,0);
    tracep->declBit(c+30,"io_rfio_reg_wen", false,-1);
    tracep->declQuad(c+28,"io_rfio_reg_wdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("tm ");
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBus(c+1,"inst", false,-1, 31,0);
    tracep->declQuad(c+129,"pc", false,-1, 63,0);
    tracep->declQuad(c+141,"raddr", false,-1, 63,0);
    tracep->declQuad(c+135,"rdata", false,-1, 63,0);
    tracep->declQuad(c+5,"wdata", false,-1, 63,0);
    tracep->declQuad(c+3,"waddr", false,-1, 63,0);
    tracep->declBus(c+7,"wmask", false,-1, 7,0);
    tracep->declQuad(c+131,"temp_inst", false,-1, 63,0);
    tracep->popNamePrefix(2);
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
    VlWide<8>/*255:0*/ __Vtemp_h1de70962__0;
    // Body
    bufp->fullIData(oldp+1,((IData)(vlSelf->Soc__DOT__tm__DOT__temp_inst)),32);
    bufp->fullIData(oldp+2,(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc),32);
    bufp->fullQData(oldp+3,(vlSelf->Soc__DOT___core_io_waddr),64);
    bufp->fullQData(oldp+5,(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata),64);
    bufp->fullCData(oldp+7,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                              ? 0xffU : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                                          ? 0xfU : 
                                         ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                                           ? 3U : (1U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))))),8);
    bufp->fullIData(oldp+8,(vlSelf->Soc__DOT__core__DOT__fdreg_pc),32);
    bufp->fullQData(oldp+9,(vlSelf->Soc__DOT__core__DOT__dereg_op_a),64);
    bufp->fullQData(oldp+11,(vlSelf->Soc__DOT__core__DOT__dereg_op_b),64);
    bufp->fullCData(oldp+13,(vlSelf->Soc__DOT__core__DOT__dereg_rd),5);
    bufp->fullCData(oldp+14,(vlSelf->Soc__DOT__core__DOT__dereg_alu_op),5);
    bufp->fullCData(oldp+15,(vlSelf->Soc__DOT__core__DOT__dereg_wb_type),2);
    bufp->fullCData(oldp+16,(vlSelf->Soc__DOT__core__DOT__dereg_sd_type),3);
    bufp->fullQData(oldp+17,(vlSelf->Soc__DOT__core__DOT__emreg_alu_res),64);
    bufp->fullCData(oldp+19,(vlSelf->Soc__DOT__core__DOT__emreg_wb_type),2);
    bufp->fullCData(oldp+20,(vlSelf->Soc__DOT__core__DOT__emreg_rd),5);
    bufp->fullQData(oldp+21,(vlSelf->Soc__DOT__core__DOT__mwreg_alu_res),64);
    bufp->fullCData(oldp+23,(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type),2);
    bufp->fullCData(oldp+24,(vlSelf->Soc__DOT__core__DOT__mwreg_rd),5);
    bufp->fullBit(oldp+25,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started));
    bufp->fullQData(oldp+26,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result),64);
    bufp->fullQData(oldp+28,((((2U == (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                               | (1U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)))
                               ? 0ULL : vlSelf->Soc__DOT__core__DOT__mwreg_alu_res)),64);
    bufp->fullBit(oldp+30,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))));
    bufp->fullQData(oldp+31,(((0U != (0x1fU & (IData)(
                                                      (vlSelf->Soc__DOT__tm__DOT__temp_inst 
                                                       >> 0xfU))))
                               ? vlSelf->Soc__DOT__core__DOT__regfile__DOT___regs_ext_R1_data
                               : 0ULL)),64);
    bufp->fullQData(oldp+33,(vlSelf->Soc__DOT__core__DOT___regfile_io_RfDe_reg2_rdata),64);
    bufp->fullCData(oldp+35,((0x1fU & (IData)((vlSelf->Soc__DOT__tm__DOT__temp_inst 
                                               >> 0xfU)))),5);
    bufp->fullCData(oldp+36,((0x1fU & (IData)((vlSelf->Soc__DOT__tm__DOT__temp_inst 
                                               >> 0x14U)))),5);
    bufp->fullQData(oldp+37,(((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type))
                               ? ((0U != (0x1fU & (IData)(
                                                          (vlSelf->Soc__DOT__tm__DOT__temp_inst 
                                                           >> 0xfU))))
                                   ? vlSelf->Soc__DOT__core__DOT__regfile__DOT___regs_ext_R1_data
                                   : 0ULL) : (QData)((IData)(
                                                             ((1U 
                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type))
                                                               ? vlSelf->Soc__DOT__core__DOT__fdreg_pc
                                                               : 0U))))),64);
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
    bufp->fullQData(oldp+39,((((QData)((IData)(__Vtemp_h1de70962__0[
                                               (((IData)(0x3fU) 
                                                 + 
                                                 (0xffU 
                                                  & (((0x13U 
                                                       == (IData)(vlSelf->Soc__DOT__tm__DOT__temp_inst))
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
                               << ((0U == (0x1fU & 
                                           (((0x13U 
                                              == (IData)(vlSelf->Soc__DOT__tm__DOT__temp_inst))
                                              ? 0U : 
                                             ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h73d7e1c7__0)
                                               ? 1U
                                               : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)
                                                   ? 3U
                                                   : 
                                                  (0x1a3U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))) 
                                            << 6U)))
                                    ? 0x20U : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & (((0x13U 
                                                       == (IData)(vlSelf->Soc__DOT__tm__DOT__temp_inst))
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
                              | (((0U == (0x1fU & (
                                                   ((0x13U 
                                                     == (IData)(vlSelf->Soc__DOT__tm__DOT__temp_inst))
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
                                                                     == (IData)(vlSelf->Soc__DOT__tm__DOT__temp_inst))
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
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & (((0x13U 
                                                       == (IData)(vlSelf->Soc__DOT__tm__DOT__temp_inst))
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
                                                          == (IData)(vlSelf->Soc__DOT__tm__DOT__temp_inst))
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
                                    >> (0x1fU & (((0x13U 
                                                   == (IData)(vlSelf->Soc__DOT__tm__DOT__temp_inst))
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
                                                 << 6U)))))),64);
    bufp->fullCData(oldp+41,((0x1fU & (IData)((vlSelf->Soc__DOT__tm__DOT__temp_inst 
                                               >> 7U)))),5);
    bufp->fullCData(oldp+42,((0x1fU & (- (IData)((1U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hbf1f1a09__0) 
                                                       | (0x1a3U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))) 
                                                     | (0x13U 
                                                        == (IData)(vlSelf->Soc__DOT__tm__DOT__temp_inst)))))))),5);
    bufp->fullCData(oldp+43,(((0x13U == (IData)(vlSelf->Soc__DOT__tm__DOT__temp_inst))
                               ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hbf1f1a09__0)
                                        ? 1U : ((0x1a3U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                << 1U)))),2);
    bufp->fullCData(oldp+44,((((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_ha79e1490__0) 
                               | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0))
                               ? 0U : ((0x1a3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                       << 2U))),3);
    bufp->fullBit(oldp+45,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_flag));
    bufp->fullIData(oldp+46,(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                               ? (vlSelf->Soc__DOT__core__DOT__fdreg_pc 
                                  + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm))
                               : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                   ? (0xfffffffeU & 
                                      (((0U != (0x1fU 
                                                & (IData)(
                                                          (vlSelf->Soc__DOT__tm__DOT__temp_inst 
                                                           >> 0xfU))))
                                         ? (IData)(vlSelf->Soc__DOT__core__DOT__regfile__DOT___regs_ext_R1_data)
                                         : 0U) + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm)))
                                   : 0x80000000U))),32);
    bufp->fullCData(oldp+47,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type),2);
    bufp->fullCData(oldp+48,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type),2);
    bufp->fullCData(oldp+49,(((0x13U == (IData)(vlSelf->Soc__DOT__tm__DOT__temp_inst))
                               ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h73d7e1c7__0)
                                        ? 1U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)
                                                 ? 3U
                                                 : 
                                                (0x1a3U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))),2);
    bufp->fullCData(oldp+50,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0)
                               ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0)
                                        ? 1U : ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(vlSelf->Soc__DOT__tm__DOT__temp_inst)))
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
    bufp->fullQData(oldp+51,(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm),64);
    bufp->fullIData(oldp+53,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc),32);
    bufp->fullIData(oldp+54,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),32);
    bufp->fullBit(oldp+55,(vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag));
    bufp->fullCData(oldp+56,(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count),3);
    bufp->fullQData(oldp+57,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                               & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_rd)))
                               ? (((2U == (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                                   | (1U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)))
                                   ? 0ULL : vlSelf->Soc__DOT__core__DOT__mwreg_alu_res)
                               : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT__mwreg_rd])),64);
    bufp->fullQData(oldp+59,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                             [vlSelf->Soc__DOT__core__DOT__mwreg_rd]),64);
    bufp->fullQData(oldp+61,(vlSelf->Soc__DOT__core__DOT__regfile__DOT___regs_ext_R1_data),64);
    bufp->fullQData(oldp+63,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                             [(0x1fU & (IData)((vlSelf->Soc__DOT__tm__DOT__temp_inst 
                                                >> 0x14U)))]),64);
    bufp->fullQData(oldp+65,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+67,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+69,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+71,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+73,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+75,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+77,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+79,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+81,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+83,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+85,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+87,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+89,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+91,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+93,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+95,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+97,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+99,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+101,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+103,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+105,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+107,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+109,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+111,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+113,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+115,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+117,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+119,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+121,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+123,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+125,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+127,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
    bufp->fullQData(oldp+129,((QData)((IData)(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc))),64);
    bufp->fullQData(oldp+131,(vlSelf->Soc__DOT__tm__DOT__temp_inst),64);
    bufp->fullBit(oldp+133,(vlSelf->clock));
    bufp->fullBit(oldp+134,(vlSelf->reset));
    bufp->fullQData(oldp+135,(vlSelf->Soc__DOT___tm_rdata),64);
    bufp->fullIData(oldp+137,((IData)(vlSelf->Soc__DOT___tm_rdata)),32);
    bufp->fullBit(oldp+138,(0U));
    bufp->fullBit(oldp+139,(1U));
    bufp->fullCData(oldp+140,(0U),5);
    bufp->fullQData(oldp+141,(0ULL),64);
}
