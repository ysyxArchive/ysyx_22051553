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
    tracep->declBit(c+239,"clock", false,-1);
    tracep->declBit(c+240,"reset", false,-1);
    tracep->declQuad(c+241,"io_next_pc", false,-1, 63,0);
    tracep->pushNamePrefix("Soc ");
    tracep->declBit(c+239,"clock", false,-1);
    tracep->declBit(c+240,"reset", false,-1);
    tracep->declQuad(c+241,"io_next_pc", false,-1, 63,0);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+239,"clock", false,-1);
    tracep->declBit(c+240,"reset", false,-1);
    tracep->declQuad(c+1,"io_inst", false,-1, 63,0);
    tracep->declQuad(c+3,"io_rdata", false,-1, 63,0);
    tracep->declQuad(c+5,"io_pc", false,-1, 63,0);
    tracep->declBit(c+7,"io_valid", false,-1);
    tracep->declBit(c+8,"io_load_use", false,-1);
    tracep->declQuad(c+9,"io_raddr", false,-1, 63,0);
    tracep->declQuad(c+11,"io_waddr", false,-1, 63,0);
    tracep->declQuad(c+13,"io_wdata", false,-1, 63,0);
    tracep->declBus(c+15,"io_wmask", false,-1, 7,0);
    tracep->declQuad(c+241,"io_next_pc", false,-1, 63,0);
    tracep->declQuad(c+16,"fdreg_pc", false,-1, 63,0);
    tracep->declQuad(c+18,"dereg_op_a", false,-1, 63,0);
    tracep->declQuad(c+20,"dereg_op_b", false,-1, 63,0);
    tracep->declBus(c+22,"dereg_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+23,"dereg_branch_type", false,-1);
    tracep->declQuad(c+24,"dereg_branch_addr", false,-1, 63,0);
    tracep->declBus(c+26,"dereg_alu_op", false,-1, 5,0);
    tracep->declBus(c+27,"dereg_shamt", false,-1, 5,0);
    tracep->declBus(c+28,"dereg_wb_type", false,-1, 1,0);
    tracep->declBus(c+29,"dereg_sd_type", false,-1, 2,0);
    tracep->declQuad(c+13,"dereg_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+30,"dereg_ld_type", false,-1, 2,0);
    tracep->declQuad(c+31,"dereg_csr_t", false,-1, 63,0);
    tracep->declBus(c+33,"dereg_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+34,"dereg_csr_wen", false,-1);
    tracep->declBit(c+35,"dereg_has_inst", false,-1);
    tracep->declQuad(c+36,"emreg_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+38,"emreg_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+39,"emreg_wb_type", false,-1, 1,0);
    tracep->declBus(c+40,"emreg_ld_type", false,-1, 2,0);
    tracep->declBus(c+41,"emreg_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+42,"emreg_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+44,"emreg_csr_wen", false,-1);
    tracep->declBus(c+45,"emreg_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+46,"emreg_has_inst", false,-1);
    tracep->declQuad(c+47,"mwreg_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+49,"mwreg_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+50,"mwreg_wb_type", false,-1, 1,0);
    tracep->declQuad(c+51,"mwreg_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+53,"mwreg_csr_wen", false,-1);
    tracep->declBus(c+54,"mwreg_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+55,"mwreg_has_inst", false,-1);
    tracep->pushNamePrefix("DI ");
    tracep->declBit(c+239,"clk", false,-1);
    tracep->declBit(c+240,"rst", false,-1);
    tracep->declQuad(c+5,"pc", false,-1, 63,0);
    tracep->declBit(c+7,"pc_req", false,-1);
    tracep->declBus(c+56,"inst", false,-1, 31,0);
    tracep->declBit(c+243,"inst_valid", false,-1);
    tracep->declBit(c+8,"load_use", false,-1);
    tracep->declQuad(c+18,"op_a", false,-1, 63,0);
    tracep->declQuad(c+20,"op_b", false,-1, 63,0);
    tracep->declQuad(c+57,"result", false,-1, 63,0);
    tracep->declBit(c+59,"br_yes", false,-1);
    tracep->declBit(c+60,"mem_access", false,-1);
    tracep->declQuad(c+61,"mem_addr", false,-1, 63,0);
    tracep->declBus(c+49,"rd", false,-1, 4,0);
    tracep->declQuad(c+47,"reg_wdata", false,-1, 63,0);
    tracep->declBit(c+63,"reg_wen", false,-1);
    tracep->declBit(c+53,"csr_wen", false,-1);
    tracep->declQuad(c+51,"csr_wdata", false,-1, 63,0);
    tracep->declBus(c+54,"csr_waddr", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csrs ");
    tracep->declBit(c+239,"clock", false,-1);
    tracep->declBit(c+240,"reset", false,-1);
    tracep->declBus(c+64,"io_CSRDe_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+54,"io_CSRWb_rd", false,-1, 11,0);
    tracep->declBit(c+53,"io_CSRWb_csr_wen", false,-1);
    tracep->declQuad(c+51,"io_CSRWb_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+65,"io_CSRTr_rd", false,-1, 11,0);
    tracep->declQuad(c+66,"io_CSRDe_csr_rdata", false,-1, 63,0);
    tracep->declQuad(c+68,"io_CSRTr_MTVEC", false,-1, 63,0);
    tracep->declQuad(c+70,"io_CSRTr_MEPC", false,-1, 63,0);
    tracep->declQuad(c+68,"MTVEC", false,-1, 63,0);
    tracep->declQuad(c+72,"MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+70,"MEPC", false,-1, 63,0);
    tracep->declQuad(c+74,"MIE", false,-1, 63,0);
    tracep->declQuad(c+76,"MSTATUS", false,-1, 63,0);
    tracep->declQuad(c+78,"MSCRATCH", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("decode ");
    tracep->declBit(c+239,"clock", false,-1);
    tracep->declBit(c+240,"reset", false,-1);
    tracep->declBus(c+56,"io_inst_bits", false,-1, 31,0);
    tracep->declQuad(c+16,"io_fdio_pc", false,-1, 63,0);
    tracep->declQuad(c+80,"io_rfio_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+82,"io_rfio_reg2_rdata", false,-1, 63,0);
    tracep->declBit(c+59,"io_branch", false,-1);
    tracep->declBit(c+84,"io_fwde_fw_sel1", false,-1);
    tracep->declBit(c+85,"io_fwde_fw_sel2", false,-1);
    tracep->declQuad(c+86,"io_fwde_fw_data1", false,-1, 63,0);
    tracep->declQuad(c+88,"io_fwde_fw_data2", false,-1, 63,0);
    tracep->declBit(c+90,"io_fwde_csr_fw_sel", false,-1);
    tracep->declQuad(c+91,"io_fwde_csr_fw_data", false,-1, 63,0);
    tracep->declQuad(c+66,"io_csrs_csr_rdata", false,-1, 63,0);
    tracep->declBus(c+93,"io_rfio_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+94,"io_rfio_reg2_raddr", false,-1, 4,0);
    tracep->declQuad(c+95,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+97,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+99,"io_deio_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+100,"io_deio_branch_type", false,-1);
    tracep->declQuad(c+101,"io_deio_branch_addr", false,-1, 63,0);
    tracep->declBus(c+103,"io_deio_alu_op", false,-1, 5,0);
    tracep->declBus(c+104,"io_deio_shamt", false,-1, 5,0);
    tracep->declBus(c+105,"io_deio_wb_type", false,-1, 1,0);
    tracep->declBus(c+106,"io_deio_sd_type", false,-1, 2,0);
    tracep->declQuad(c+107,"io_deio_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+109,"io_deio_ld_type", false,-1, 2,0);
    tracep->declQuad(c+110,"io_deio_csr_t", false,-1, 63,0);
    tracep->declBus(c+112,"io_deio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+113,"io_deio_csr_wen", false,-1);
    tracep->declBit(c+114,"io_deio_has_inst", false,-1);
    tracep->declBit(c+115,"io_jump_flag", false,-1);
    tracep->declQuad(c+116,"io_jump_pc", false,-1, 63,0);
    tracep->declBit(c+8,"io_load_use", false,-1);
    tracep->declBus(c+93,"io_fwde_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+94,"io_fwde_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+64,"io_fwde_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+64,"io_csrs_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+56,"inst", false,-1, 31,0);
    tracep->declBus(c+118,"lu_rd", false,-1, 4,0);
    tracep->pushNamePrefix("cu ");
    tracep->declBus(c+56,"io_inst", false,-1, 31,0);
    tracep->declBus(c+119,"io_jump_type", false,-1, 1,0);
    tracep->declBit(c+100,"io_branch_type", false,-1);
    tracep->declBus(c+120,"io_opa_type", false,-1, 1,0);
    tracep->declBus(c+121,"io_opb_type", false,-1, 2,0);
    tracep->declBus(c+122,"io_imm_type", false,-1, 2,0);
    tracep->declBus(c+103,"io_alu_op", false,-1, 5,0);
    tracep->declBus(c+105,"io_wb_type", false,-1, 1,0);
    tracep->declBus(c+106,"io_sd_type", false,-1, 2,0);
    tracep->declBus(c+109,"io_ld_type", false,-1, 2,0);
    tracep->declBus(c+123,"io_csr_type", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("eximm ");
    tracep->declBus(c+56,"io_inst", false,-1, 31,0);
    tracep->declBus(c+122,"io_imm_type", false,-1, 2,0);
    tracep->declQuad(c+124,"io_eximm", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("excute ");
    tracep->declQuad(c+18,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+20,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+22,"io_deio_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+23,"io_deio_branch_type", false,-1);
    tracep->declQuad(c+24,"io_deio_branch_addr", false,-1, 63,0);
    tracep->declBus(c+26,"io_deio_alu_op", false,-1, 5,0);
    tracep->declBus(c+27,"io_deio_shamt", false,-1, 5,0);
    tracep->declBus(c+28,"io_deio_wb_type", false,-1, 1,0);
    tracep->declBus(c+29,"io_deio_sd_type", false,-1, 2,0);
    tracep->declQuad(c+13,"io_deio_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+30,"io_deio_ld_type", false,-1, 2,0);
    tracep->declQuad(c+31,"io_deio_csr_t", false,-1, 63,0);
    tracep->declBus(c+33,"io_deio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+34,"io_deio_csr_wen", false,-1);
    tracep->declBit(c+35,"io_deio_has_inst", false,-1);
    tracep->declQuad(c+57,"io_emio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+22,"io_emio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+28,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+30,"io_emio_ld_type", false,-1, 2,0);
    tracep->declBus(c+126,"io_emio_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+127,"io_emio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+34,"io_emio_csr_wen", false,-1);
    tracep->declBus(c+33,"io_emio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+35,"io_emio_has_inst", false,-1);
    tracep->declBit(c+59,"io_jump_flag", false,-1);
    tracep->declQuad(c+24,"io_jump_pc", false,-1, 63,0);
    tracep->declQuad(c+9,"io_raddr", false,-1, 63,0);
    tracep->declQuad(c+11,"io_waddr", false,-1, 63,0);
    tracep->declQuad(c+13,"io_wdata", false,-1, 63,0);
    tracep->declBus(c+15,"io_wmask", false,-1, 7,0);
    tracep->declBus(c+22,"io_fwex_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+129,"io_fwex_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+131,"io_fwex_reg_we", false,-1);
    tracep->declQuad(c+127,"io_fwex_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+34,"io_fwex_csr_wen", false,-1);
    tracep->declBus(c+33,"io_fwex_csr_waddr", false,-1, 11,0);
    tracep->pushNamePrefix("alu ");
    tracep->declQuad(c+18,"io_op_a", false,-1, 63,0);
    tracep->declQuad(c+20,"io_op_b", false,-1, 63,0);
    tracep->declBus(c+26,"io_alu_op", false,-1, 5,0);
    tracep->declBus(c+27,"io_shamt", false,-1, 5,0);
    tracep->declQuad(c+127,"io_result", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fc ");
    tracep->declBit(c+115,"io_fcde_jump_flag", false,-1);
    tracep->declQuad(c+116,"io_fcde_jump_pc", false,-1, 63,0);
    tracep->declBit(c+8,"io_fcde_load_use", false,-1);
    tracep->declBit(c+59,"io_fcex_jump_flag", false,-1);
    tracep->declQuad(c+24,"io_fcex_jump_pc", false,-1, 63,0);
    tracep->declBit(c+132,"io_fctr_pop_NOP", false,-1);
    tracep->declBus(c+133,"io_fctr_trap_state", false,-1, 1,0);
    tracep->declBit(c+134,"io_fctr_jump_flag", false,-1);
    tracep->declQuad(c+135,"io_fctr_jump_pc", false,-1, 63,0);
    tracep->declBit(c+137,"io_fcfe_jump_flag", false,-1);
    tracep->declQuad(c+138,"io_fcfe_jump_pc", false,-1, 63,0);
    tracep->declBit(c+140,"io_fcfe_flush", false,-1);
    tracep->declBit(c+141,"io_fcfe_stall", false,-1);
    tracep->declBit(c+142,"io_fcde_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+239,"clock", false,-1);
    tracep->declBit(c+240,"reset", false,-1);
    tracep->declBit(c+137,"io_fcfe_jump_flag", false,-1);
    tracep->declQuad(c+138,"io_fcfe_jump_pc", false,-1, 63,0);
    tracep->declBit(c+140,"io_fcfe_flush", false,-1);
    tracep->declBit(c+141,"io_fcfe_stall", false,-1);
    tracep->declQuad(c+5,"io_fdio_pc", false,-1, 63,0);
    tracep->declBit(c+7,"io_pc_valid", false,-1);
    tracep->declQuad(c+5,"io_pc_bits", false,-1, 63,0);
    tracep->declQuad(c+241,"io_next_pc", false,-1, 63,0);
    tracep->declBit(c+143,"started", false,-1);
    tracep->declQuad(c+144,"pc", false,-1, 63,0);
    tracep->declQuad(c+146,"old_pc", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fw ");
    tracep->declBus(c+93,"io_fwde_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+94,"io_fwde_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+64,"io_fwde_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+22,"io_fwex_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+129,"io_fwex_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+131,"io_fwex_reg_we", false,-1);
    tracep->declQuad(c+127,"io_fwex_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+34,"io_fwex_csr_wen", false,-1);
    tracep->declBus(c+33,"io_fwex_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+38,"io_fwmem_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+148,"io_fwmem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+150,"io_fwmem_reg_we", false,-1);
    tracep->declQuad(c+42,"io_fwmem_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+44,"io_fwmem_csr_wen", false,-1);
    tracep->declBus(c+45,"io_fwmem_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+49,"io_fwwb_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+47,"io_fwwb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+63,"io_fwwb_reg_we", false,-1);
    tracep->declQuad(c+51,"io_fwwb_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+53,"io_fwwb_csr_wen", false,-1);
    tracep->declBus(c+54,"io_fwwb_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+84,"io_fwde_fw_sel1", false,-1);
    tracep->declBit(c+85,"io_fwde_fw_sel2", false,-1);
    tracep->declQuad(c+86,"io_fwde_fw_data1", false,-1, 63,0);
    tracep->declQuad(c+88,"io_fwde_fw_data2", false,-1, 63,0);
    tracep->declBit(c+90,"io_fwde_csr_fw_sel", false,-1);
    tracep->declQuad(c+91,"io_fwde_csr_fw_data", false,-1, 63,0);
    tracep->declBit(c+151,"reg1_ex_hazard", false,-1);
    tracep->declBit(c+152,"reg2_ex_hazard", false,-1);
    tracep->declBit(c+153,"reg1_mem_hazard", false,-1);
    tracep->declBit(c+154,"reg2_mem_hazard", false,-1);
    tracep->declBit(c+155,"reg1_wb_hazard", false,-1);
    tracep->declBit(c+156,"reg2_wb_hazard", false,-1);
    tracep->declBit(c+157,"csr_ex_harzard", false,-1);
    tracep->declBit(c+158,"csr_mem_harzard", false,-1);
    tracep->declBit(c+159,"csr_wb_harzard", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("interact ");
    tracep->declBus(c+56,"inst", false,-1, 31,0);
    tracep->declBit(c+239,"clk", false,-1);
    tracep->declBit(c+240,"rst", false,-1);
    tracep->declBit(c+160,"ebreak_flag", false,-1);
    tracep->declBus(c+161,"over_count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declQuad(c+36,"io_emio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+38,"io_emio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+39,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+40,"io_emio_ld_type", false,-1, 2,0);
    tracep->declBus(c+41,"io_emio_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+42,"io_emio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+44,"io_emio_csr_wen", false,-1);
    tracep->declBus(c+45,"io_emio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+46,"io_emio_has_inst", false,-1);
    tracep->declQuad(c+3,"io_rdata", false,-1, 63,0);
    tracep->declQuad(c+148,"io_mwio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+38,"io_mwio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+39,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declQuad(c+42,"io_mwio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+44,"io_mwio_csr_wen", false,-1);
    tracep->declBus(c+45,"io_mwio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+46,"io_mwio_has_inst", false,-1);
    tracep->declBus(c+38,"io_fwmem_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+148,"io_fwmem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+150,"io_fwmem_reg_we", false,-1);
    tracep->declQuad(c+42,"io_fwmem_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+44,"io_fwmem_csr_wen", false,-1);
    tracep->declBus(c+45,"io_fwmem_csr_waddr", false,-1, 11,0);
    tracep->declQuad(c+162,"rvalue", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+239,"clock", false,-1);
    tracep->declBus(c+93,"io_RfDe_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+94,"io_RfDe_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+49,"io_RfWb_rd", false,-1, 4,0);
    tracep->declBit(c+63,"io_RfWb_reg_wen", false,-1);
    tracep->declQuad(c+47,"io_RfWb_reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+80,"io_RfDe_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+82,"io_RfDe_reg2_rdata", false,-1, 63,0);
    tracep->pushNamePrefix("regs_ext ");
    tracep->declBus(c+49,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+244,"R0_en", false,-1);
    tracep->declBit(c+239,"R0_clk", false,-1);
    tracep->declBus(c+93,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+244,"R1_en", false,-1);
    tracep->declBit(c+239,"R1_clk", false,-1);
    tracep->declBus(c+94,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+244,"R2_en", false,-1);
    tracep->declBit(c+239,"R2_clk", false,-1);
    tracep->declBus(c+245,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+244,"W0_en", false,-1);
    tracep->declBit(c+239,"W0_clk", false,-1);
    tracep->declQuad(c+246,"W0_data", false,-1, 63,0);
    tracep->declBus(c+49,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+244,"W1_en", false,-1);
    tracep->declBit(c+239,"W1_clk", false,-1);
    tracep->declQuad(c+164,"W1_data", false,-1, 63,0);
    tracep->declQuad(c+166,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+168,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+170,"R2_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+172+i*2,"Memory", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("trap ");
    tracep->declBit(c+239,"clock", false,-1);
    tracep->declBit(c+240,"reset", false,-1);
    tracep->declBit(c+35,"io_ex_hasinst", false,-1);
    tracep->declBit(c+46,"io_mem_hasinst", false,-1);
    tracep->declBit(c+55,"io_wb_hasinst", false,-1);
    tracep->declQuad(c+68,"io_csrtr_MTVEC", false,-1, 63,0);
    tracep->declQuad(c+70,"io_csrtr_MEPC", false,-1, 63,0);
    tracep->declBus(c+56,"io_inst", false,-1, 31,0);
    tracep->declBus(c+65,"io_csrtr_rd", false,-1, 11,0);
    tracep->declBit(c+132,"io_fctr_pop_NOP", false,-1);
    tracep->declBus(c+133,"io_fctr_trap_state", false,-1, 1,0);
    tracep->declBit(c+134,"io_fctr_jump_flag", false,-1);
    tracep->declQuad(c+135,"io_fctr_jump_pc", false,-1, 63,0);
    tracep->declBus(c+236,"state", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb ");
    tracep->declQuad(c+47,"io_mwio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+49,"io_mwio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+50,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declQuad(c+51,"io_mwio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+53,"io_mwio_csr_wen", false,-1);
    tracep->declBus(c+54,"io_mwio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+55,"io_mwio_has_inst", false,-1);
    tracep->declBus(c+49,"io_rfio_rd", false,-1, 4,0);
    tracep->declBit(c+63,"io_rfio_reg_wen", false,-1);
    tracep->declQuad(c+47,"io_rfio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+49,"io_fwwb_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+47,"io_fwwb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+63,"io_fwwb_reg_we", false,-1);
    tracep->declQuad(c+51,"io_fwwb_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+53,"io_fwwb_csr_wen", false,-1);
    tracep->declBus(c+54,"io_fwwb_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+54,"io_csrs_rd", false,-1, 11,0);
    tracep->declBit(c+53,"io_csrs_csr_wen", false,-1);
    tracep->declQuad(c+51,"io_csrs_csr_wdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("tm ");
    tracep->declBit(c+239,"clk", false,-1);
    tracep->declBit(c+8,"load_use", false,-1);
    tracep->declQuad(c+1,"inst", false,-1, 63,0);
    tracep->declQuad(c+5,"pc", false,-1, 63,0);
    tracep->declBit(c+7,"valid", false,-1);
    tracep->declQuad(c+9,"raddr", false,-1, 63,0);
    tracep->declQuad(c+3,"rdata", false,-1, 63,0);
    tracep->declQuad(c+13,"wdata", false,-1, 63,0);
    tracep->declQuad(c+11,"waddr", false,-1, 63,0);
    tracep->declBus(c+15,"wmask", false,-1, 7,0);
    tracep->declQuad(c+237,"old_inst", false,-1, 63,0);
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
    VlWide<3>/*95:0*/ __Vtemp_hcd8b8aff__0;
    VlWide<8>/*255:0*/ __Vtemp_hc41d1282__0;
    // Body
    bufp->fullQData(oldp+1,(vlSelf->Soc__DOT___tm_inst),64);
    bufp->fullQData(oldp+3,(vlSelf->Soc__DOT___tm_rdata),64);
    bufp->fullQData(oldp+5,(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc),64);
    bufp->fullBit(oldp+7,(((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_stall)) 
                           & (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started))));
    bufp->fullBit(oldp+8,(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16));
    bufp->fullQData(oldp+9,(vlSelf->Soc__DOT__core__DOT__excute__DOT___io_raddr_T_1),64);
    bufp->fullQData(oldp+11,(vlSelf->Soc__DOT__core__DOT___excute_io_waddr),64);
    bufp->fullQData(oldp+13,(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata),64);
    bufp->fullCData(oldp+15,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                               ? 0xffU : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                                           ? 0xfU : 
                                          ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                                            ? 3U : 
                                           (1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))))),8);
    bufp->fullQData(oldp+16,(vlSelf->Soc__DOT__core__DOT__fdreg_pc),64);
    bufp->fullQData(oldp+18,(vlSelf->Soc__DOT__core__DOT__dereg_op_a),64);
    bufp->fullQData(oldp+20,(vlSelf->Soc__DOT__core__DOT__dereg_op_b),64);
    bufp->fullCData(oldp+22,(vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr),5);
    bufp->fullBit(oldp+23,(vlSelf->Soc__DOT__core__DOT__dereg_branch_type));
    bufp->fullQData(oldp+24,(vlSelf->Soc__DOT__core__DOT__dereg_branch_addr),64);
    bufp->fullCData(oldp+26,(vlSelf->Soc__DOT__core__DOT__dereg_alu_op),6);
    bufp->fullCData(oldp+27,(vlSelf->Soc__DOT__core__DOT__dereg_shamt),6);
    bufp->fullCData(oldp+28,(vlSelf->Soc__DOT__core__DOT__dereg_wb_type),2);
    bufp->fullCData(oldp+29,(vlSelf->Soc__DOT__core__DOT__dereg_sd_type),3);
    bufp->fullCData(oldp+30,(vlSelf->Soc__DOT__core__DOT__dereg_ld_type),3);
    bufp->fullQData(oldp+31,(vlSelf->Soc__DOT__core__DOT__dereg_csr_t),64);
    bufp->fullSData(oldp+33,(vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr),12);
    bufp->fullBit(oldp+34,(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen));
    bufp->fullBit(oldp+35,(vlSelf->Soc__DOT__core__DOT__dereg_has_inst));
    bufp->fullQData(oldp+36,(vlSelf->Soc__DOT__core__DOT__emreg_reg_wdata),64);
    bufp->fullCData(oldp+38,(vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr),5);
    bufp->fullCData(oldp+39,(vlSelf->Soc__DOT__core__DOT__emreg_wb_type),2);
    bufp->fullCData(oldp+40,(vlSelf->Soc__DOT__core__DOT__emreg_ld_type),3);
    bufp->fullCData(oldp+41,(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit),3);
    bufp->fullQData(oldp+42,(vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata),64);
    bufp->fullBit(oldp+44,(vlSelf->Soc__DOT__core__DOT__emreg_csr_wen));
    bufp->fullSData(oldp+45,(vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr),12);
    bufp->fullBit(oldp+46,(vlSelf->Soc__DOT__core__DOT__emreg_has_inst));
    bufp->fullQData(oldp+47,(vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata),64);
    bufp->fullCData(oldp+49,(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr),5);
    bufp->fullCData(oldp+50,(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type),2);
    bufp->fullQData(oldp+51,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata),64);
    bufp->fullBit(oldp+53,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen));
    bufp->fullSData(oldp+54,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr),12);
    bufp->fullBit(oldp+55,(vlSelf->Soc__DOT__core__DOT__mwreg_has_inst));
    bufp->fullIData(oldp+56,(vlSelf->Soc__DOT__core__DOT__decode__DOT__inst),32);
    bufp->fullQData(oldp+57,(((IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen)
                               ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                               : vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)),64);
    bufp->fullBit(oldp+59,(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag));
    bufp->fullBit(oldp+60,((0U != ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))));
    bufp->fullQData(oldp+61,((vlSelf->Soc__DOT__core__DOT__excute__DOT___io_raddr_T_1 
                              | vlSelf->Soc__DOT__core__DOT___excute_io_waddr)),64);
    bufp->fullBit(oldp+63,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))));
    bufp->fullSData(oldp+64,((vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                              >> 0x14U)),12);
    __Vtemp_hcd8b8aff__0[0U] = 0x41000000U;
    __Vtemp_hcd8b8aff__0[1U] = 0x3003423U;
    __Vtemp_hcd8b8aff__0[2U] = 0U;
    bufp->fullSData(oldp+65,(((0x5fU >= (0x7fU & ((IData)(0xcU) 
                                                  * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))))
                               ? (0xfffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0xcU) 
                                                  * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))))
                                              ? 0U : 
                                             (__Vtemp_hcd8b8aff__0[
                                              (((IData)(0xbU) 
                                                + (0x7fU 
                                                   & ((IData)(0xcU) 
                                                      * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xcU) 
                                                      * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)))))) 
                                            | (__Vtemp_hcd8b8aff__0[
                                               (3U 
                                                & (((IData)(0xcU) 
                                                    * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(0xcU) 
                                                      * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))))))
                               : 0U)),12);
    bufp->fullQData(oldp+66,(((0x340U == (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                          >> 0x14U))
                               ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH
                               : ((0x300U == (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                              >> 0x14U))
                                   ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS
                                   : ((0x304U == (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                  >> 0x14U))
                                       ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE
                                       : ((0x341U == 
                                           (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                            >> 0x14U))
                                           ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC
                                           : ((0x342U 
                                               == (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                   >> 0x14U))
                                               ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE
                                               : ((0x305U 
                                                   == 
                                                   (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                    >> 0x14U))
                                                   ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC
                                                   : 0ULL))))))),64);
    bufp->fullQData(oldp+68,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC),64);
    bufp->fullQData(oldp+70,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC),64);
    bufp->fullQData(oldp+72,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE),64);
    bufp->fullQData(oldp+74,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE),64);
    bufp->fullQData(oldp+76,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS),64);
    bufp->fullQData(oldp+78,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH),64);
    bufp->fullQData(oldp+80,(((0U != (0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                               >> 0xfU)))
                               ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [(0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                         >> 0xfU))]
                               : 0ULL)),64);
    bufp->fullQData(oldp+82,(((0U != (0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                               >> 0x14U)))
                               ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [(0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                         >> 0x14U))]
                               : 0ULL)),64);
    bufp->fullBit(oldp+84,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard) 
                            | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard) 
                               | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)))));
    bufp->fullBit(oldp+85,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
                            | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
                               | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))));
    bufp->fullQData(oldp+86,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard)
                               ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                               : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard)
                                   ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                   : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)
                                       ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                       : 0ULL)))),64);
    bufp->fullQData(oldp+88,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                               ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                               : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                                   ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                   : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                                       ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                       : 0ULL)))),64);
    bufp->fullBit(oldp+90,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard) 
                            | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard) 
                               | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)))));
    bufp->fullQData(oldp+91,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard)
                               ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                               : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard)
                                   ? vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata
                                   : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)
                                       ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                                       : 0ULL)))),64);
    bufp->fullCData(oldp+93,((0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+94,((0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
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
    bufp->fullQData(oldp+95,((((QData)((IData)(__Vtemp_hc41d1282__0[
                                               (((IData)(0x3fU) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type) 
                                                     << 6U))) 
                                                >> 5U)])) 
                               << ((0U == (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type) 
                                            << 6U)))
                                    ? 0x20U : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type) 
                                                     << 6U))))) 
                              | (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type) 
                                                   << 6U)))
                                   ? 0ULL : ((QData)((IData)(
                                                             __Vtemp_hc41d1282__0[
                                                             (((IData)(0x1fU) 
                                                               + 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type) 
                                                                   << 6U))) 
                                                              >> 5U)])) 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type) 
                                                     << 6U))))) 
                                 | ((QData)((IData)(
                                                    __Vtemp_hc41d1282__0[
                                                    (6U 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type) 
                                                        << 1U))])) 
                                    >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type) 
                                                 << 6U)))))),64);
    bufp->fullQData(oldp+97,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                               ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T
                               : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                   ? 4ULL : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                              ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T
                                              : ((1U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                                  ? vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm
                                                  : 0ULL))))),64);
    bufp->fullCData(oldp+99,((0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                       >> 7U))),5);
    bufp->fullBit(oldp+100,(((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                             & ((0x17U != (0x7fU & vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)) 
                                & ((0x37U != (0x7fU 
                                              & vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)) 
                                   & ((0x6fU != (0x7fU 
                                                 & vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)) 
                                      & ((0x67U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                         & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5))))))));
    bufp->fullQData(oldp+101,((vlSelf->Soc__DOT__core__DOT__fdreg_pc 
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
    bufp->fullCData(oldp+103,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op),6);
    bufp->fullCData(oldp+104,((0x3fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                        >> 0x14U))),6);
    bufp->fullCData(oldp+105,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_10)
                                         ? 1U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11) 
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
    bufp->fullCData(oldp+106,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0)
                                ? 0U : ((0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                         ? 1U : ((0xa3U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                  ? 2U
                                                  : 
                                                 ((0x123U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                   ? 3U
                                                   : 
                                                  ((0x1a3U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                   << 2U)))))),3);
    bufp->fullQData(oldp+107,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T),64);
    bufp->fullCData(oldp+109,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type),3);
    bufp->fullQData(oldp+110,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T),64);
    bufp->fullSData(oldp+112,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen)
                                ? (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                   >> 0x14U) : 0U)),12);
    bufp->fullBit(oldp+113,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen));
    bufp->fullBit(oldp+114,((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)));
    bufp->fullBit(oldp+115,(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag));
    bufp->fullQData(oldp+116,(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                ? (vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
                                   + vlSelf->Soc__DOT__core__DOT__fdreg_pc)
                                : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                    ? (0xfffffffffffffffeULL 
                                       & (vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4 
                                          + vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm))
                                    : 0x80000000ULL))),64);
    bufp->fullCData(oldp+118,(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd),5);
    bufp->fullCData(oldp+119,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type),2);
    bufp->fullCData(oldp+120,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type),2);
    bufp->fullCData(oldp+121,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type),3);
    bufp->fullCData(oldp+122,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                         ? 1U : ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->Soc__DOT__core__DOT__decode__DOT__inst))
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
                                                                     | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0))))))))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
                                                    ? 3U
                                                    : 
                                                   ((1U 
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
    bufp->fullCData(oldp+123,(((((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0) 
                                 | ((0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                    | ((0xa3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                       | ((0x123U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                          | ((0x1a3U 
                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                             | ((0x13U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_he9100215__0))))))) 
                                | ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h567a98b8__0) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h156a9c0e__0)))
                                ? 0U : ((0xf3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                         ? 1U : ((0x173U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                  ? 2U
                                                  : 
                                                 ((0x1f3U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                   ? 3U
                                                   : 
                                                  ((0x2f3U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                    ? 1U
                                                    : 
                                                   ((0x373U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                     ? 2U
                                                     : 
                                                    (3U 
                                                     & (- (IData)(
                                                                  (0x3f3U 
                                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))),2);
    bufp->fullQData(oldp+124,(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm),64);
    bufp->fullCData(oldp+126,(((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type))
                                ? ((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                    ? 0U : (7U & (IData)(vlSelf->__VdfgTmp_h6a80e86b__0)))
                                : 0U)),3);
    bufp->fullQData(oldp+127,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result),64);
    bufp->fullQData(oldp+129,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata),64);
    bufp->fullBit(oldp+131,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we));
    bufp->fullBit(oldp+132,(((0U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                             & ((0x73U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                                | (0x30200073U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)))));
    bufp->fullCData(oldp+133,((3U & (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))),2);
    bufp->fullBit(oldp+134,(vlSelf->Soc__DOT__core__DOT___trap_io_fctr_jump_flag));
    bufp->fullQData(oldp+135,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC
                                : ((6U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                    ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC
                                    : 0ULL))),64);
    bufp->fullBit(oldp+137,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT___trap_io_fctr_jump_flag)))));
    bufp->fullQData(oldp+138,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc),64);
    bufp->fullBit(oldp+140,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
                             & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)) 
                                & ((IData)(vlSelf->Soc__DOT__core__DOT___trap_io_fctr_jump_flag) 
                                   | ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                                      | (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag)))))));
    bufp->fullBit(oldp+141,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_stall));
    bufp->fullBit(oldp+142,(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush));
    bufp->fullBit(oldp+143,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started));
    bufp->fullQData(oldp+144,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),64);
    bufp->fullQData(oldp+146,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc),64);
    bufp->fullQData(oldp+148,(vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata),64);
    bufp->fullBit(oldp+150,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))));
    bufp->fullBit(oldp+151,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard));
    bufp->fullBit(oldp+152,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard));
    bufp->fullBit(oldp+153,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard));
    bufp->fullBit(oldp+154,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard));
    bufp->fullBit(oldp+155,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard));
    bufp->fullBit(oldp+156,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard));
    bufp->fullBit(oldp+157,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard));
    bufp->fullBit(oldp+158,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard));
    bufp->fullBit(oldp+159,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard));
    bufp->fullBit(oldp+160,(vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag));
    bufp->fullCData(oldp+161,(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count),3);
    bufp->fullQData(oldp+162,((((QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
                                                (((IData)(0x3fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                      << 6U))) 
                                                 >> 5U)])) 
                                << ((0U == (0x1fU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                             << 6U)))
                                     ? 0x20U : ((IData)(0x40U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                      << 6U))))) 
                               | (((0U == (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                            << 6U)))
                                    ? 0ULL : ((QData)((IData)(
                                                              vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
                                                              (((IData)(0x1fU) 
                                                                + 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                                    << 6U))) 
                                                               >> 5U)])) 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                      << 6U))))) 
                                  | ((QData)((IData)(
                                                     vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
                                                     (0xeU 
                                                      & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                         << 1U))])) 
                                     >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                  << 6U)))))),64);
    bufp->fullQData(oldp+164,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                                & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr)))
                                ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr])),64);
    bufp->fullQData(oldp+166,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr]),64);
    bufp->fullQData(oldp+168,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [(0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+170,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [(0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+172,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+174,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+176,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+178,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+180,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+182,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+184,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+186,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+188,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+190,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+192,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+194,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+196,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+198,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+200,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+202,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+204,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+206,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+208,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+210,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+212,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+214,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+216,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+218,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+220,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+222,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+224,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+226,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+228,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+230,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+232,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+234,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
    bufp->fullCData(oldp+236,(vlSelf->Soc__DOT__core__DOT__trap__DOT__state),3);
    bufp->fullQData(oldp+237,(vlSelf->Soc__DOT__tm__DOT__old_inst),64);
    bufp->fullBit(oldp+239,(vlSelf->clock));
    bufp->fullBit(oldp+240,(vlSelf->reset));
    bufp->fullQData(oldp+241,(vlSelf->io_next_pc),64);
    bufp->fullBit(oldp+243,(0U));
    bufp->fullBit(oldp+244,(1U));
    bufp->fullCData(oldp+245,(0U),5);
    bufp->fullQData(oldp+246,(0ULL),64);
}
