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
    tracep->declBit(c+171,"clock", false,-1);
    tracep->declBit(c+172,"reset", false,-1);
    tracep->declQuad(c+173,"io_next_pc", false,-1, 63,0);
    tracep->pushNamePrefix("Soc ");
    tracep->declBit(c+171,"clock", false,-1);
    tracep->declBit(c+172,"reset", false,-1);
    tracep->declQuad(c+173,"io_next_pc", false,-1, 63,0);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+171,"clock", false,-1);
    tracep->declBit(c+172,"reset", false,-1);
    tracep->declQuad(c+1,"io_inst", false,-1, 63,0);
    tracep->declQuad(c+3,"io_rdata", false,-1, 63,0);
    tracep->declQuad(c+5,"io_pc", false,-1, 63,0);
    tracep->declBit(c+7,"io_valid", false,-1);
    tracep->declQuad(c+8,"io_raddr", false,-1, 63,0);
    tracep->declQuad(c+10,"io_waddr", false,-1, 63,0);
    tracep->declQuad(c+12,"io_wdata", false,-1, 63,0);
    tracep->declBus(c+14,"io_wmask", false,-1, 7,0);
    tracep->declQuad(c+173,"io_next_pc", false,-1, 63,0);
    tracep->declQuad(c+15,"fdreg_pc", false,-1, 63,0);
    tracep->declQuad(c+17,"dereg_op_a", false,-1, 63,0);
    tracep->declQuad(c+19,"dereg_op_b", false,-1, 63,0);
    tracep->declBus(c+21,"dereg_rd", false,-1, 4,0);
    tracep->declBit(c+22,"dereg_branch_type", false,-1);
    tracep->declQuad(c+23,"dereg_branch_addr", false,-1, 63,0);
    tracep->declBus(c+25,"dereg_alu_op", false,-1, 5,0);
    tracep->declBus(c+26,"dereg_shamt", false,-1, 4,0);
    tracep->declBus(c+27,"dereg_wb_type", false,-1, 1,0);
    tracep->declBus(c+28,"dereg_sd_type", false,-1, 2,0);
    tracep->declQuad(c+12,"dereg_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+29,"dereg_ld_type", false,-1, 2,0);
    tracep->declQuad(c+30,"emreg_alu_res", false,-1, 63,0);
    tracep->declBus(c+32,"emreg_wb_type", false,-1, 1,0);
    tracep->declBus(c+33,"emreg_rd", false,-1, 4,0);
    tracep->declBus(c+34,"emreg_ld_type", false,-1, 2,0);
    tracep->declBus(c+35,"emreg_ld_addr_lowbit", false,-1, 2,0);
    tracep->declBus(c+36,"mwreg_wb_type", false,-1, 1,0);
    tracep->declQuad(c+37,"mwreg_wb_data", false,-1, 63,0);
    tracep->declBus(c+39,"mwreg_rd", false,-1, 4,0);
    tracep->pushNamePrefix("DI ");
    tracep->declBit(c+171,"clk", false,-1);
    tracep->declBit(c+172,"rst", false,-1);
    tracep->declQuad(c+5,"pc", false,-1, 63,0);
    tracep->declBit(c+7,"pc_req", false,-1);
    tracep->declBus(c+40,"inst", false,-1, 31,0);
    tracep->declBit(c+175,"inst_valid", false,-1);
    tracep->declQuad(c+17,"op_a", false,-1, 63,0);
    tracep->declQuad(c+19,"op_b", false,-1, 63,0);
    tracep->declQuad(c+41,"result", false,-1, 63,0);
    tracep->declBit(c+43,"br_yes", false,-1);
    tracep->declBus(c+39,"rd", false,-1, 4,0);
    tracep->declQuad(c+37,"reg_wdata", false,-1, 63,0);
    tracep->declBit(c+44,"reg_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode ");
    tracep->declBus(c+40,"io_inst_bits", false,-1, 31,0);
    tracep->declQuad(c+15,"io_fdio_pc", false,-1, 63,0);
    tracep->declQuad(c+45,"io_rfio_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+47,"io_rfio_reg2_rdata", false,-1, 63,0);
    tracep->declBit(c+49,"io_fwde_fw_sel1", false,-1);
    tracep->declBit(c+50,"io_fwde_fw_sel2", false,-1);
    tracep->declQuad(c+51,"io_fwde_fw_data1", false,-1, 63,0);
    tracep->declQuad(c+53,"io_fwde_fw_data2", false,-1, 63,0);
    tracep->declBus(c+55,"io_rfio_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+56,"io_rfio_reg2_raddr", false,-1, 4,0);
    tracep->declQuad(c+57,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+59,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+61,"io_deio_rd", false,-1, 4,0);
    tracep->declBit(c+62,"io_deio_branch_type", false,-1);
    tracep->declQuad(c+63,"io_deio_branch_addr", false,-1, 63,0);
    tracep->declBus(c+65,"io_deio_alu_op", false,-1, 5,0);
    tracep->declBus(c+56,"io_deio_shamt", false,-1, 4,0);
    tracep->declBus(c+66,"io_deio_wb_type", false,-1, 1,0);
    tracep->declBus(c+67,"io_deio_sd_type", false,-1, 2,0);
    tracep->declQuad(c+47,"io_deio_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+68,"io_deio_ld_type", false,-1, 2,0);
    tracep->declBit(c+69,"io_jump_flag", false,-1);
    tracep->declQuad(c+70,"io_jump_pc", false,-1, 63,0);
    tracep->declBus(c+55,"io_fwde_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+56,"io_fwde_reg2_raddr", false,-1, 4,0);
    tracep->pushNamePrefix("cu ");
    tracep->declBus(c+40,"io_inst", false,-1, 31,0);
    tracep->declBus(c+72,"io_jump_type", false,-1, 1,0);
    tracep->declBit(c+62,"io_branch_type", false,-1);
    tracep->declBus(c+73,"io_opa_type", false,-1, 1,0);
    tracep->declBus(c+74,"io_opb_type", false,-1, 1,0);
    tracep->declBus(c+75,"io_imm_type", false,-1, 2,0);
    tracep->declBus(c+65,"io_alu_op", false,-1, 5,0);
    tracep->declBus(c+66,"io_wb_type", false,-1, 1,0);
    tracep->declBus(c+67,"io_sd_type", false,-1, 2,0);
    tracep->declBus(c+68,"io_ld_type", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("eximm ");
    tracep->declBus(c+40,"io_inst", false,-1, 31,0);
    tracep->declBus(c+75,"io_imm_type", false,-1, 2,0);
    tracep->declQuad(c+76,"io_eximm", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("excute ");
    tracep->declQuad(c+17,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+19,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+21,"io_deio_rd", false,-1, 4,0);
    tracep->declBit(c+22,"io_deio_branch_type", false,-1);
    tracep->declQuad(c+23,"io_deio_branch_addr", false,-1, 63,0);
    tracep->declBus(c+25,"io_deio_alu_op", false,-1, 5,0);
    tracep->declBus(c+26,"io_deio_shamt", false,-1, 4,0);
    tracep->declBus(c+27,"io_deio_wb_type", false,-1, 1,0);
    tracep->declBus(c+28,"io_deio_sd_type", false,-1, 2,0);
    tracep->declQuad(c+12,"io_deio_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+29,"io_deio_ld_type", false,-1, 2,0);
    tracep->declQuad(c+41,"io_emio_alu_res", false,-1, 63,0);
    tracep->declBus(c+27,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+21,"io_emio_rd", false,-1, 4,0);
    tracep->declBus(c+29,"io_emio_ld_type", false,-1, 2,0);
    tracep->declBus(c+78,"io_emio_ld_addr_lowbit", false,-1, 2,0);
    tracep->declBit(c+43,"io_jump_flag", false,-1);
    tracep->declQuad(c+23,"io_jump_pc", false,-1, 63,0);
    tracep->declQuad(c+8,"io_raddr", false,-1, 63,0);
    tracep->declQuad(c+10,"io_waddr", false,-1, 63,0);
    tracep->declQuad(c+12,"io_wdata", false,-1, 63,0);
    tracep->declBus(c+14,"io_wmask", false,-1, 7,0);
    tracep->declBus(c+21,"io_fwex_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+41,"io_fwex_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+79,"io_fwex_reg_we", false,-1);
    tracep->pushNamePrefix("alu ");
    tracep->declQuad(c+17,"io_op_a", false,-1, 63,0);
    tracep->declQuad(c+19,"io_op_b", false,-1, 63,0);
    tracep->declBus(c+25,"io_alu_op", false,-1, 5,0);
    tracep->declBus(c+26,"io_shamt", false,-1, 4,0);
    tracep->declQuad(c+41,"io_result", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fc ");
    tracep->declBit(c+69,"io_fcde_jump_flag", false,-1);
    tracep->declQuad(c+70,"io_fcde_jump_pc", false,-1, 63,0);
    tracep->declBit(c+43,"io_fcex_jump_flag", false,-1);
    tracep->declQuad(c+23,"io_fcex_jump_pc", false,-1, 63,0);
    tracep->declBit(c+80,"io_fcfe_jump_flag", false,-1);
    tracep->declQuad(c+81,"io_fcfe_jump_pc", false,-1, 63,0);
    tracep->declBit(c+80,"io_fcfe_flush", false,-1);
    tracep->declBit(c+43,"io_fcde_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+171,"clock", false,-1);
    tracep->declBit(c+172,"reset", false,-1);
    tracep->declBit(c+80,"io_fcfe_jump_flag", false,-1);
    tracep->declQuad(c+81,"io_fcfe_jump_pc", false,-1, 63,0);
    tracep->declBit(c+80,"io_fcfe_flush", false,-1);
    tracep->declQuad(c+5,"io_fdio_pc", false,-1, 63,0);
    tracep->declBit(c+7,"io_pc_valid", false,-1);
    tracep->declQuad(c+5,"io_pc_bits", false,-1, 63,0);
    tracep->declQuad(c+173,"io_next_pc", false,-1, 63,0);
    tracep->declBit(c+7,"started", false,-1);
    tracep->declQuad(c+83,"pc", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fw ");
    tracep->declBus(c+55,"io_fwde_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+56,"io_fwde_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+21,"io_fwex_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+41,"io_fwex_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+79,"io_fwex_reg_we", false,-1);
    tracep->declBus(c+33,"io_fwmem_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+85,"io_fwmem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+87,"io_fwmem_reg_we", false,-1);
    tracep->declBus(c+39,"io_fwwb_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+37,"io_fwwb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+44,"io_fwwb_reg_we", false,-1);
    tracep->declBit(c+49,"io_fwde_fw_sel1", false,-1);
    tracep->declBit(c+50,"io_fwde_fw_sel2", false,-1);
    tracep->declQuad(c+51,"io_fwde_fw_data1", false,-1, 63,0);
    tracep->declQuad(c+53,"io_fwde_fw_data2", false,-1, 63,0);
    tracep->declBit(c+88,"reg1_ex_hazard", false,-1);
    tracep->declBit(c+89,"reg2_ex_hazard", false,-1);
    tracep->declBit(c+90,"reg1_mem_hazard", false,-1);
    tracep->declBit(c+91,"reg2_mem_hazard", false,-1);
    tracep->declBit(c+92,"reg1_wb_hazard", false,-1);
    tracep->declBit(c+93,"reg2_wb_hazard", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("interact ");
    tracep->declBus(c+94,"inst", false,-1, 31,0);
    tracep->declBit(c+171,"clk", false,-1);
    tracep->declBit(c+172,"rst", false,-1);
    tracep->declBit(c+95,"ebreak_flag", false,-1);
    tracep->declBus(c+96,"over_count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declQuad(c+30,"io_emio_alu_res", false,-1, 63,0);
    tracep->declBus(c+32,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+33,"io_emio_rd", false,-1, 4,0);
    tracep->declBus(c+34,"io_emio_ld_type", false,-1, 2,0);
    tracep->declBus(c+35,"io_emio_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+3,"io_rdata", false,-1, 63,0);
    tracep->declBus(c+32,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declQuad(c+97,"io_mwio_wb_data", false,-1, 63,0);
    tracep->declBus(c+33,"io_mwio_rd", false,-1, 4,0);
    tracep->declBus(c+33,"io_fwmem_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+85,"io_fwmem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+87,"io_fwmem_reg_we", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+171,"clock", false,-1);
    tracep->declBus(c+55,"io_RfDe_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+56,"io_RfDe_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+39,"io_RfWb_rd", false,-1, 4,0);
    tracep->declBit(c+44,"io_RfWb_reg_wen", false,-1);
    tracep->declQuad(c+37,"io_RfWb_reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+45,"io_RfDe_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+47,"io_RfDe_reg2_rdata", false,-1, 63,0);
    tracep->pushNamePrefix("regs_ext ");
    tracep->declBus(c+39,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+176,"R0_en", false,-1);
    tracep->declBit(c+171,"R0_clk", false,-1);
    tracep->declBus(c+55,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+176,"R1_en", false,-1);
    tracep->declBit(c+171,"R1_clk", false,-1);
    tracep->declBus(c+56,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+176,"R2_en", false,-1);
    tracep->declBit(c+171,"R2_clk", false,-1);
    tracep->declBus(c+177,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+176,"W0_en", false,-1);
    tracep->declBit(c+171,"W0_clk", false,-1);
    tracep->declQuad(c+178,"W0_data", false,-1, 63,0);
    tracep->declBus(c+39,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+176,"W1_en", false,-1);
    tracep->declBit(c+171,"W1_clk", false,-1);
    tracep->declQuad(c+99,"W1_data", false,-1, 63,0);
    tracep->declQuad(c+101,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+103,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+105,"R2_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+107+i*2,"Memory", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb ");
    tracep->declBus(c+36,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declQuad(c+37,"io_mwio_wb_data", false,-1, 63,0);
    tracep->declBus(c+39,"io_mwio_rd", false,-1, 4,0);
    tracep->declBus(c+39,"io_rfio_rd", false,-1, 4,0);
    tracep->declBit(c+44,"io_rfio_reg_wen", false,-1);
    tracep->declQuad(c+37,"io_rfio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+39,"io_fwwb_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+37,"io_fwwb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+44,"io_fwwb_reg_we", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("tm ");
    tracep->declBit(c+171,"clk", false,-1);
    tracep->declQuad(c+1,"inst", false,-1, 63,0);
    tracep->declQuad(c+5,"pc", false,-1, 63,0);
    tracep->declBit(c+7,"valid", false,-1);
    tracep->declQuad(c+8,"raddr", false,-1, 63,0);
    tracep->declQuad(c+3,"rdata", false,-1, 63,0);
    tracep->declQuad(c+12,"wdata", false,-1, 63,0);
    tracep->declQuad(c+10,"waddr", false,-1, 63,0);
    tracep->declBus(c+14,"wmask", false,-1, 7,0);
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
    VlWide<8>/*255:0*/ __Vtemp_h073bfb9e__0;
    // Body
    bufp->fullQData(oldp+1,(vlSelf->Soc__DOT___tm_inst),64);
    bufp->fullQData(oldp+3,(vlSelf->Soc__DOT___tm_rdata),64);
    bufp->fullQData(oldp+5,(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc),64);
    bufp->fullBit(oldp+7,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started));
    bufp->fullQData(oldp+8,(vlSelf->Soc__DOT__core__DOT__excute__DOT___io_raddr_T_1),64);
    bufp->fullQData(oldp+10,(vlSelf->Soc__DOT___core_io_waddr),64);
    bufp->fullQData(oldp+12,(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata),64);
    bufp->fullCData(oldp+14,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                               ? 0xffU : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                                           ? 0xfU : 
                                          ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                                            ? 3U : 
                                           (1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))))),8);
    bufp->fullQData(oldp+15,(vlSelf->Soc__DOT__core__DOT__fdreg_pc),64);
    bufp->fullQData(oldp+17,(vlSelf->Soc__DOT__core__DOT__dereg_op_a),64);
    bufp->fullQData(oldp+19,(vlSelf->Soc__DOT__core__DOT__dereg_op_b),64);
    bufp->fullCData(oldp+21,(vlSelf->Soc__DOT__core__DOT__dereg_rd),5);
    bufp->fullBit(oldp+22,(vlSelf->Soc__DOT__core__DOT__dereg_branch_type));
    bufp->fullQData(oldp+23,(vlSelf->Soc__DOT__core__DOT__dereg_branch_addr),64);
    bufp->fullCData(oldp+25,(vlSelf->Soc__DOT__core__DOT__dereg_alu_op),6);
    bufp->fullCData(oldp+26,(vlSelf->Soc__DOT__core__DOT__dereg_shamt),5);
    bufp->fullCData(oldp+27,(vlSelf->Soc__DOT__core__DOT__dereg_wb_type),2);
    bufp->fullCData(oldp+28,(vlSelf->Soc__DOT__core__DOT__dereg_sd_type),3);
    bufp->fullCData(oldp+29,(vlSelf->Soc__DOT__core__DOT__dereg_ld_type),3);
    bufp->fullQData(oldp+30,(vlSelf->Soc__DOT__core__DOT__emreg_alu_res),64);
    bufp->fullCData(oldp+32,(vlSelf->Soc__DOT__core__DOT__emreg_wb_type),2);
    bufp->fullCData(oldp+33,(vlSelf->Soc__DOT__core__DOT__emreg_rd),5);
    bufp->fullCData(oldp+34,(vlSelf->Soc__DOT__core__DOT__emreg_ld_type),3);
    bufp->fullCData(oldp+35,(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit),3);
    bufp->fullCData(oldp+36,(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type),2);
    bufp->fullQData(oldp+37,(vlSelf->Soc__DOT__core__DOT__mwreg_wb_data),64);
    bufp->fullCData(oldp+39,(vlSelf->Soc__DOT__core__DOT__mwreg_rd),5);
    bufp->fullIData(oldp+40,(vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits),32);
    bufp->fullQData(oldp+41,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result),64);
    bufp->fullBit(oldp+43,(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush));
    bufp->fullBit(oldp+44,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))));
    bufp->fullQData(oldp+45,(((0U != (0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                               >> 0xfU)))
                               ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [(0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                         >> 0xfU))]
                               : 0ULL)),64);
    bufp->fullQData(oldp+47,(vlSelf->Soc__DOT__core__DOT___regfile_io_RfDe_reg2_rdata),64);
    bufp->fullBit(oldp+49,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard) 
                            | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard) 
                               | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)))));
    bufp->fullBit(oldp+50,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
                            | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
                               | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))));
    bufp->fullQData(oldp+51,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard)
                               ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                               : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard)
                                   ? vlSelf->Soc__DOT__core__DOT___mem_io_fwmem_reg_wdata
                                   : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)
                                       ? vlSelf->Soc__DOT__core__DOT__mwreg_wb_data
                                       : 0ULL)))),64);
    bufp->fullQData(oldp+53,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                               ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                               : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                                   ? vlSelf->Soc__DOT__core__DOT___mem_io_fwmem_reg_wdata
                                   : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                                       ? vlSelf->Soc__DOT__core__DOT__mwreg_wb_data
                                       : 0ULL)))),64);
    bufp->fullCData(oldp+55,((0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+56,((0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                       >> 0x14U))),5);
    bufp->fullQData(oldp+57,(((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type))
                               ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4
                               : ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type))
                                   ? vlSelf->Soc__DOT__core__DOT__fdreg_pc
                                   : 0ULL))),64);
    __Vtemp_h073bfb9e__0[0U] = 0U;
    __Vtemp_h073bfb9e__0[1U] = 0U;
    __Vtemp_h073bfb9e__0[2U] = (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm);
    __Vtemp_h073bfb9e__0[3U] = (IData)((vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
                                        >> 0x20U));
    __Vtemp_h073bfb9e__0[4U] = (IData)((((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
                                         | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
                                            | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))
                                         ? ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                                             ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                             : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                                                 ? vlSelf->Soc__DOT__core__DOT___mem_io_fwmem_reg_wdata
                                                 : 
                                                ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                                                  ? vlSelf->Soc__DOT__core__DOT__mwreg_wb_data
                                                  : 0ULL)))
                                         : vlSelf->Soc__DOT__core__DOT___regfile_io_RfDe_reg2_rdata));
    __Vtemp_h073bfb9e__0[5U] = (IData)(((((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
                                          | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
                                             | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))
                                          ? ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                                              ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                              : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                                                  ? vlSelf->Soc__DOT__core__DOT___mem_io_fwmem_reg_wdata
                                                  : 
                                                 ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                                                   ? vlSelf->Soc__DOT__core__DOT__mwreg_wb_data
                                                   : 0ULL)))
                                          : vlSelf->Soc__DOT__core__DOT___regfile_io_RfDe_reg2_rdata) 
                                        >> 0x20U));
    __Vtemp_h073bfb9e__0[6U] = 4U;
    __Vtemp_h073bfb9e__0[7U] = 0U;
    bufp->fullQData(oldp+59,((((QData)((IData)(__Vtemp_h073bfb9e__0[
                                               (((IData)(0x3fU) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type) 
                                                     << 6U))) 
                                                >> 5U)])) 
                               << ((0U == (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type) 
                                            << 6U)))
                                    ? 0x20U : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type) 
                                                     << 6U))))) 
                              | (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type) 
                                                   << 6U)))
                                   ? 0ULL : ((QData)((IData)(
                                                             __Vtemp_h073bfb9e__0[
                                                             (((IData)(0x1fU) 
                                                               + 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type) 
                                                                   << 6U))) 
                                                              >> 5U)])) 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type) 
                                                     << 6U))))) 
                                 | ((QData)((IData)(
                                                    __Vtemp_h073bfb9e__0[
                                                    (6U 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type) 
                                                        << 1U))])) 
                                    >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type) 
                                                 << 6U)))))),64);
    bufp->fullCData(oldp+61,((0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                       >> 7U))),5);
    bufp->fullBit(oldp+62,(((0x13U != vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits) 
                            & ((0x17U != (0x7fU & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)) 
                               & ((0x37U != (0x7fU 
                                             & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)) 
                                  & ((0x6fU != (0x7fU 
                                                & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)) 
                                     & ((0x67U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                        & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4))))))));
    bufp->fullQData(oldp+63,((vlSelf->Soc__DOT__core__DOT__fdreg_pc 
                              + (((- (QData)((IData)(
                                                     (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                      >> 0x1fU)))) 
                                  << 0xcU) | (QData)((IData)(
                                                             ((0x800U 
                                                               & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                  << 4U)) 
                                                              | ((0x7e0U 
                                                                  & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                     >> 0x14U)) 
                                                                 | (0x1eU 
                                                                    & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                       >> 7U))))))))),64);
    bufp->fullCData(oldp+65,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op),6);
    bufp->fullCData(oldp+66,(((0x13U == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                               ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                        ? 1U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
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
    bufp->fullCData(oldp+67,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_10)
                               ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
                                        ? 4U : ((0x23U 
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
    bufp->fullCData(oldp+68,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_10)
                               ? 0U : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                        ? 1U : ((0x83U 
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
    bufp->fullBit(oldp+69,(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag));
    bufp->fullQData(oldp+70,(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                               ? (vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
                                  + vlSelf->Soc__DOT__core__DOT__fdreg_pc)
                               : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                   ? (0xfffffffffffffffeULL 
                                      & (vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4 
                                         + vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm))
                                   : 0x80000000ULL))),64);
    bufp->fullCData(oldp+72,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type),2);
    bufp->fullCData(oldp+73,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type),2);
    bufp->fullCData(oldp+74,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type),2);
    bufp->fullCData(oldp+75,(((0x13U == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                               ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                        ? 1U : ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits))
                                                 ? 2U
                                                 : 
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
                                                                    | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9))))))))
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
                                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))),3);
    bufp->fullQData(oldp+76,(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm),64);
    bufp->fullCData(oldp+78,(((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type))
                               ? ((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                   ? 0U : (3U & (IData)(vlSelf->__VdfgTmp_h0601aa63__0)))
                               : 0U)),3);
    bufp->fullBit(oldp+79,((1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type))));
    bufp->fullBit(oldp+80,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_flag));
    bufp->fullQData(oldp+81,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc),64);
    bufp->fullQData(oldp+83,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),64);
    bufp->fullQData(oldp+85,(vlSelf->Soc__DOT__core__DOT___mem_io_fwmem_reg_wdata),64);
    bufp->fullBit(oldp+87,(vlSelf->Soc__DOT__core__DOT___mem_io_fwmem_reg_we));
    bufp->fullBit(oldp+88,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard));
    bufp->fullBit(oldp+89,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard));
    bufp->fullBit(oldp+90,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard));
    bufp->fullBit(oldp+91,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard));
    bufp->fullBit(oldp+92,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard));
    bufp->fullBit(oldp+93,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard));
    bufp->fullIData(oldp+94,((IData)(vlSelf->Soc__DOT___tm_inst)),32);
    bufp->fullBit(oldp+95,(vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag));
    bufp->fullCData(oldp+96,(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count),3);
    bufp->fullQData(oldp+97,(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))
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
                                       << ((0U == (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                      << 6U)))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                     << 6U))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                     << 6U)))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
                                                           (((IData)(0x1fU) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                                 << 6U))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
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
    bufp->fullQData(oldp+99,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                               & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_rd)))
                               ? vlSelf->Soc__DOT__core__DOT__mwreg_wb_data
                               : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT__mwreg_rd])),64);
    bufp->fullQData(oldp+101,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT__mwreg_rd]),64);
    bufp->fullQData(oldp+103,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [(0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+105,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [(0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+107,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+109,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+111,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+113,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+115,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+117,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+119,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+121,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+123,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+125,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+127,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+129,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+131,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+133,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+135,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+137,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+139,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+141,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+143,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+145,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+147,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+149,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+151,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+153,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+155,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+157,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+159,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+161,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+163,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+165,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+167,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+169,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
    bufp->fullBit(oldp+171,(vlSelf->clock));
    bufp->fullBit(oldp+172,(vlSelf->reset));
    bufp->fullQData(oldp+173,(vlSelf->io_next_pc),64);
    bufp->fullBit(oldp+175,(0U));
    bufp->fullBit(oldp+176,(1U));
    bufp->fullCData(oldp+177,(0U),5);
    bufp->fullQData(oldp+178,(0ULL),64);
}
