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
    tracep->declBit(c+226,"clock", false,-1);
    tracep->declBit(c+227,"reset", false,-1);
    tracep->declQuad(c+228,"io_next_pc", false,-1, 63,0);
    tracep->pushNamePrefix("Soc ");
    tracep->declBit(c+226,"clock", false,-1);
    tracep->declBit(c+227,"reset", false,-1);
    tracep->declQuad(c+228,"io_next_pc", false,-1, 63,0);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+226,"clock", false,-1);
    tracep->declBit(c+227,"reset", false,-1);
    tracep->declQuad(c+1,"io_inst", false,-1, 63,0);
    tracep->declQuad(c+3,"io_rdata", false,-1, 63,0);
    tracep->declQuad(c+5,"io_pc", false,-1, 63,0);
    tracep->declBit(c+7,"io_valid", false,-1);
    tracep->declBit(c+8,"io_load_use", false,-1);
    tracep->declQuad(c+9,"io_raddr", false,-1, 63,0);
    tracep->declQuad(c+11,"io_waddr", false,-1, 63,0);
    tracep->declQuad(c+13,"io_wdata", false,-1, 63,0);
    tracep->declBus(c+15,"io_wmask", false,-1, 7,0);
    tracep->declQuad(c+228,"io_next_pc", false,-1, 63,0);
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
    tracep->declQuad(c+35,"emreg_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+37,"emreg_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+38,"emreg_wb_type", false,-1, 1,0);
    tracep->declBus(c+39,"emreg_ld_type", false,-1, 2,0);
    tracep->declBus(c+40,"emreg_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+41,"emreg_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+43,"emreg_csr_wen", false,-1);
    tracep->declBus(c+44,"emreg_csr_waddr", false,-1, 11,0);
    tracep->declQuad(c+45,"mwreg_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+47,"mwreg_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+48,"mwreg_wb_type", false,-1, 1,0);
    tracep->declQuad(c+49,"mwreg_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+51,"mwreg_csr_wen", false,-1);
    tracep->declBus(c+52,"mwreg_csr_waddr", false,-1, 11,0);
    tracep->pushNamePrefix("DI ");
    tracep->declBit(c+226,"clk", false,-1);
    tracep->declBit(c+227,"rst", false,-1);
    tracep->declQuad(c+5,"pc", false,-1, 63,0);
    tracep->declBit(c+7,"pc_req", false,-1);
    tracep->declBus(c+53,"inst", false,-1, 31,0);
    tracep->declBit(c+230,"inst_valid", false,-1);
    tracep->declBit(c+8,"load_use", false,-1);
    tracep->declQuad(c+18,"op_a", false,-1, 63,0);
    tracep->declQuad(c+20,"op_b", false,-1, 63,0);
    tracep->declQuad(c+54,"result", false,-1, 63,0);
    tracep->declBit(c+56,"br_yes", false,-1);
    tracep->declBit(c+57,"mem_access", false,-1);
    tracep->declQuad(c+58,"mem_addr", false,-1, 63,0);
    tracep->declBus(c+47,"rd", false,-1, 4,0);
    tracep->declQuad(c+45,"reg_wdata", false,-1, 63,0);
    tracep->declBit(c+60,"reg_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csrs ");
    tracep->declBit(c+226,"clock", false,-1);
    tracep->declBit(c+227,"reset", false,-1);
    tracep->declBus(c+61,"io_CSRDe_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+52,"io_CSRWb_rd", false,-1, 11,0);
    tracep->declBit(c+51,"io_CSRWb_csr_wen", false,-1);
    tracep->declQuad(c+49,"io_CSRWb_csr_wdata", false,-1, 63,0);
    tracep->declQuad(c+62,"io_CSRDe_csr_rdata", false,-1, 63,0);
    tracep->declQuad(c+64,"MTVEC", false,-1, 63,0);
    tracep->declQuad(c+66,"MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+68,"MEPC", false,-1, 63,0);
    tracep->declQuad(c+70,"MIE", false,-1, 63,0);
    tracep->declQuad(c+72,"MSTATUS", false,-1, 63,0);
    tracep->declQuad(c+74,"MSCRATCH", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("decode ");
    tracep->declBit(c+226,"clock", false,-1);
    tracep->declBit(c+227,"reset", false,-1);
    tracep->declBus(c+53,"io_inst_bits", false,-1, 31,0);
    tracep->declQuad(c+16,"io_fdio_pc", false,-1, 63,0);
    tracep->declQuad(c+76,"io_rfio_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+78,"io_rfio_reg2_rdata", false,-1, 63,0);
    tracep->declBit(c+56,"io_branch", false,-1);
    tracep->declBit(c+80,"io_fwde_fw_sel1", false,-1);
    tracep->declBit(c+81,"io_fwde_fw_sel2", false,-1);
    tracep->declQuad(c+82,"io_fwde_fw_data1", false,-1, 63,0);
    tracep->declQuad(c+84,"io_fwde_fw_data2", false,-1, 63,0);
    tracep->declBit(c+86,"io_fwde_csr_fw_sel", false,-1);
    tracep->declQuad(c+87,"io_fwde_csr_fw_data", false,-1, 63,0);
    tracep->declQuad(c+62,"io_csrs_csr_rdata", false,-1, 63,0);
    tracep->declBus(c+89,"io_rfio_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+90,"io_rfio_reg2_raddr", false,-1, 4,0);
    tracep->declQuad(c+91,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+93,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+95,"io_deio_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+96,"io_deio_branch_type", false,-1);
    tracep->declQuad(c+97,"io_deio_branch_addr", false,-1, 63,0);
    tracep->declBus(c+99,"io_deio_alu_op", false,-1, 5,0);
    tracep->declBus(c+100,"io_deio_shamt", false,-1, 5,0);
    tracep->declBus(c+101,"io_deio_wb_type", false,-1, 1,0);
    tracep->declBus(c+102,"io_deio_sd_type", false,-1, 2,0);
    tracep->declQuad(c+103,"io_deio_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+105,"io_deio_ld_type", false,-1, 2,0);
    tracep->declQuad(c+106,"io_deio_csr_t", false,-1, 63,0);
    tracep->declBus(c+61,"io_deio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+108,"io_deio_csr_wen", false,-1);
    tracep->declBit(c+109,"io_jump_flag", false,-1);
    tracep->declQuad(c+110,"io_jump_pc", false,-1, 63,0);
    tracep->declBit(c+8,"io_load_use", false,-1);
    tracep->declBus(c+89,"io_fwde_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+90,"io_fwde_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+61,"io_fwde_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+61,"io_csrs_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+53,"inst", false,-1, 31,0);
    tracep->declBus(c+112,"lu_rd", false,-1, 4,0);
    tracep->pushNamePrefix("cu ");
    tracep->declBus(c+53,"io_inst", false,-1, 31,0);
    tracep->declBus(c+113,"io_jump_type", false,-1, 1,0);
    tracep->declBit(c+96,"io_branch_type", false,-1);
    tracep->declBus(c+114,"io_opa_type", false,-1, 1,0);
    tracep->declBus(c+115,"io_opb_type", false,-1, 2,0);
    tracep->declBus(c+116,"io_imm_type", false,-1, 2,0);
    tracep->declBus(c+99,"io_alu_op", false,-1, 5,0);
    tracep->declBus(c+101,"io_wb_type", false,-1, 1,0);
    tracep->declBus(c+102,"io_sd_type", false,-1, 2,0);
    tracep->declBus(c+105,"io_ld_type", false,-1, 2,0);
    tracep->declBus(c+117,"io_csr_type", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("eximm ");
    tracep->declBus(c+53,"io_inst", false,-1, 31,0);
    tracep->declBus(c+116,"io_imm_type", false,-1, 2,0);
    tracep->declQuad(c+118,"io_eximm", false,-1, 63,0);
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
    tracep->declQuad(c+54,"io_emio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+22,"io_emio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+28,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+30,"io_emio_ld_type", false,-1, 2,0);
    tracep->declBus(c+120,"io_emio_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+121,"io_emio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+34,"io_emio_csr_wen", false,-1);
    tracep->declBus(c+33,"io_emio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+56,"io_jump_flag", false,-1);
    tracep->declQuad(c+24,"io_jump_pc", false,-1, 63,0);
    tracep->declQuad(c+9,"io_raddr", false,-1, 63,0);
    tracep->declQuad(c+11,"io_waddr", false,-1, 63,0);
    tracep->declQuad(c+13,"io_wdata", false,-1, 63,0);
    tracep->declBus(c+15,"io_wmask", false,-1, 7,0);
    tracep->declBus(c+22,"io_fwex_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+123,"io_fwex_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+125,"io_fwex_reg_we", false,-1);
    tracep->declQuad(c+121,"io_fwex_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+34,"io_fwex_csr_wen", false,-1);
    tracep->declBus(c+33,"io_fwex_csr_waddr", false,-1, 11,0);
    tracep->pushNamePrefix("alu ");
    tracep->declQuad(c+18,"io_op_a", false,-1, 63,0);
    tracep->declQuad(c+20,"io_op_b", false,-1, 63,0);
    tracep->declBus(c+26,"io_alu_op", false,-1, 5,0);
    tracep->declBus(c+27,"io_shamt", false,-1, 5,0);
    tracep->declQuad(c+121,"io_result", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fc ");
    tracep->declBit(c+109,"io_fcde_jump_flag", false,-1);
    tracep->declQuad(c+110,"io_fcde_jump_pc", false,-1, 63,0);
    tracep->declBit(c+8,"io_fcde_load_use", false,-1);
    tracep->declBit(c+56,"io_fcex_jump_flag", false,-1);
    tracep->declQuad(c+24,"io_fcex_jump_pc", false,-1, 63,0);
    tracep->declBit(c+126,"io_fcfe_jump_flag", false,-1);
    tracep->declQuad(c+127,"io_fcfe_jump_pc", false,-1, 63,0);
    tracep->declBit(c+129,"io_fcfe_flush", false,-1);
    tracep->declBit(c+8,"io_fcfe_stall", false,-1);
    tracep->declBit(c+130,"io_fcde_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+226,"clock", false,-1);
    tracep->declBit(c+227,"reset", false,-1);
    tracep->declBit(c+126,"io_fcfe_jump_flag", false,-1);
    tracep->declQuad(c+127,"io_fcfe_jump_pc", false,-1, 63,0);
    tracep->declBit(c+129,"io_fcfe_flush", false,-1);
    tracep->declBit(c+8,"io_fcfe_stall", false,-1);
    tracep->declQuad(c+5,"io_fdio_pc", false,-1, 63,0);
    tracep->declBit(c+7,"io_pc_valid", false,-1);
    tracep->declQuad(c+5,"io_pc_bits", false,-1, 63,0);
    tracep->declQuad(c+228,"io_next_pc", false,-1, 63,0);
    tracep->declBit(c+131,"started", false,-1);
    tracep->declQuad(c+132,"pc", false,-1, 63,0);
    tracep->declQuad(c+134,"old_pc", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fw ");
    tracep->declBus(c+89,"io_fwde_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+90,"io_fwde_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+61,"io_fwde_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+22,"io_fwex_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+123,"io_fwex_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+125,"io_fwex_reg_we", false,-1);
    tracep->declQuad(c+121,"io_fwex_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+34,"io_fwex_csr_wen", false,-1);
    tracep->declBus(c+33,"io_fwex_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+37,"io_fwmem_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+136,"io_fwmem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+138,"io_fwmem_reg_we", false,-1);
    tracep->declQuad(c+41,"io_fwmem_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+43,"io_fwmem_csr_wen", false,-1);
    tracep->declBus(c+44,"io_fwmem_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+47,"io_fwwb_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+45,"io_fwwb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+60,"io_fwwb_reg_we", false,-1);
    tracep->declQuad(c+49,"io_fwwb_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+51,"io_fwwb_csr_wen", false,-1);
    tracep->declBus(c+52,"io_fwwb_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+80,"io_fwde_fw_sel1", false,-1);
    tracep->declBit(c+81,"io_fwde_fw_sel2", false,-1);
    tracep->declQuad(c+82,"io_fwde_fw_data1", false,-1, 63,0);
    tracep->declQuad(c+84,"io_fwde_fw_data2", false,-1, 63,0);
    tracep->declBit(c+86,"io_fwde_csr_fw_sel", false,-1);
    tracep->declQuad(c+87,"io_fwde_csr_fw_data", false,-1, 63,0);
    tracep->declBit(c+139,"reg1_ex_hazard", false,-1);
    tracep->declBit(c+140,"reg2_ex_hazard", false,-1);
    tracep->declBit(c+141,"reg1_mem_hazard", false,-1);
    tracep->declBit(c+142,"reg2_mem_hazard", false,-1);
    tracep->declBit(c+143,"reg1_wb_hazard", false,-1);
    tracep->declBit(c+144,"reg2_wb_hazard", false,-1);
    tracep->declBit(c+145,"csr_ex_harzard", false,-1);
    tracep->declBit(c+146,"csr_mem_harzard", false,-1);
    tracep->declBit(c+147,"csr_wb_harzard", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("interact ");
    tracep->declBus(c+53,"inst", false,-1, 31,0);
    tracep->declBit(c+226,"clk", false,-1);
    tracep->declBit(c+227,"rst", false,-1);
    tracep->declBit(c+148,"ebreak_flag", false,-1);
    tracep->declBus(c+149,"over_count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declQuad(c+35,"io_emio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+37,"io_emio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+38,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+39,"io_emio_ld_type", false,-1, 2,0);
    tracep->declBus(c+40,"io_emio_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+41,"io_emio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+43,"io_emio_csr_wen", false,-1);
    tracep->declBus(c+44,"io_emio_csr_waddr", false,-1, 11,0);
    tracep->declQuad(c+3,"io_rdata", false,-1, 63,0);
    tracep->declQuad(c+136,"io_mwio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+37,"io_mwio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+38,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declQuad(c+41,"io_mwio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+43,"io_mwio_csr_wen", false,-1);
    tracep->declBus(c+44,"io_mwio_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+37,"io_fwmem_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+136,"io_fwmem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+138,"io_fwmem_reg_we", false,-1);
    tracep->declQuad(c+41,"io_fwmem_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+43,"io_fwmem_csr_wen", false,-1);
    tracep->declBus(c+44,"io_fwmem_csr_waddr", false,-1, 11,0);
    tracep->declQuad(c+150,"rvalue", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+226,"clock", false,-1);
    tracep->declBus(c+89,"io_RfDe_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+90,"io_RfDe_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+47,"io_RfWb_rd", false,-1, 4,0);
    tracep->declBit(c+60,"io_RfWb_reg_wen", false,-1);
    tracep->declQuad(c+45,"io_RfWb_reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+76,"io_RfDe_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+78,"io_RfDe_reg2_rdata", false,-1, 63,0);
    tracep->pushNamePrefix("regs_ext ");
    tracep->declBus(c+47,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+231,"R0_en", false,-1);
    tracep->declBit(c+226,"R0_clk", false,-1);
    tracep->declBus(c+89,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+231,"R1_en", false,-1);
    tracep->declBit(c+226,"R1_clk", false,-1);
    tracep->declBus(c+90,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+231,"R2_en", false,-1);
    tracep->declBit(c+226,"R2_clk", false,-1);
    tracep->declBus(c+232,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+231,"W0_en", false,-1);
    tracep->declBit(c+226,"W0_clk", false,-1);
    tracep->declQuad(c+233,"W0_data", false,-1, 63,0);
    tracep->declBus(c+47,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+231,"W1_en", false,-1);
    tracep->declBit(c+226,"W1_clk", false,-1);
    tracep->declQuad(c+152,"W1_data", false,-1, 63,0);
    tracep->declQuad(c+154,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+156,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+158,"R2_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+160+i*2,"Memory", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb ");
    tracep->declQuad(c+45,"io_mwio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+47,"io_mwio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+48,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declQuad(c+49,"io_mwio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+51,"io_mwio_csr_wen", false,-1);
    tracep->declBus(c+52,"io_mwio_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+47,"io_rfio_rd", false,-1, 4,0);
    tracep->declBit(c+60,"io_rfio_reg_wen", false,-1);
    tracep->declQuad(c+45,"io_rfio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+47,"io_fwwb_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+45,"io_fwwb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+60,"io_fwwb_reg_we", false,-1);
    tracep->declQuad(c+49,"io_fwwb_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+51,"io_fwwb_csr_wen", false,-1);
    tracep->declBus(c+52,"io_fwwb_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+52,"io_csrs_rd", false,-1, 11,0);
    tracep->declBit(c+51,"io_csrs_csr_wen", false,-1);
    tracep->declQuad(c+49,"io_csrs_csr_wdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("tm ");
    tracep->declBit(c+226,"clk", false,-1);
    tracep->declBit(c+8,"load_use", false,-1);
    tracep->declQuad(c+1,"inst", false,-1, 63,0);
    tracep->declQuad(c+5,"pc", false,-1, 63,0);
    tracep->declBit(c+7,"valid", false,-1);
    tracep->declQuad(c+9,"raddr", false,-1, 63,0);
    tracep->declQuad(c+3,"rdata", false,-1, 63,0);
    tracep->declQuad(c+13,"wdata", false,-1, 63,0);
    tracep->declQuad(c+11,"waddr", false,-1, 63,0);
    tracep->declBus(c+15,"wmask", false,-1, 7,0);
    tracep->declQuad(c+224,"old_inst", false,-1, 63,0);
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
    // Body
    bufp->fullQData(oldp+1,(vlSelf->Soc__DOT___tm_inst),64);
    bufp->fullQData(oldp+3,(vlSelf->Soc__DOT___tm_rdata),64);
    bufp->fullQData(oldp+5,(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc),64);
    bufp->fullBit(oldp+7,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
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
    bufp->fullQData(oldp+35,(vlSelf->Soc__DOT__core__DOT__emreg_reg_wdata),64);
    bufp->fullCData(oldp+37,(vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr),5);
    bufp->fullCData(oldp+38,(vlSelf->Soc__DOT__core__DOT__emreg_wb_type),2);
    bufp->fullCData(oldp+39,(vlSelf->Soc__DOT__core__DOT__emreg_ld_type),3);
    bufp->fullCData(oldp+40,(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit),3);
    bufp->fullQData(oldp+41,(vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata),64);
    bufp->fullBit(oldp+43,(vlSelf->Soc__DOT__core__DOT__emreg_csr_wen));
    bufp->fullSData(oldp+44,(vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr),12);
    bufp->fullQData(oldp+45,(vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata),64);
    bufp->fullCData(oldp+47,(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr),5);
    bufp->fullCData(oldp+48,(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type),2);
    bufp->fullQData(oldp+49,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata),64);
    bufp->fullBit(oldp+51,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen));
    bufp->fullSData(oldp+52,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr),12);
    bufp->fullIData(oldp+53,(vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits),32);
    bufp->fullQData(oldp+54,(((IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen)
                               ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                               : vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)),64);
    bufp->fullBit(oldp+56,(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag));
    bufp->fullBit(oldp+57,((0U != ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))));
    bufp->fullQData(oldp+58,((vlSelf->Soc__DOT__core__DOT__excute__DOT___io_raddr_T_1 
                              | vlSelf->Soc__DOT__core__DOT___excute_io_waddr)),64);
    bufp->fullBit(oldp+60,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))));
    bufp->fullSData(oldp+61,((vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                              >> 0x14U)),12);
    bufp->fullQData(oldp+62,(((0x340U == (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                          >> 0x14U))
                               ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH
                               : ((0x300U == (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                              >> 0x14U))
                                   ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS
                                   : ((0x304U == (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                  >> 0x14U))
                                       ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE
                                       : ((0x341U == 
                                           (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                            >> 0x14U))
                                           ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC
                                           : ((0x342U 
                                               == (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                   >> 0x14U))
                                               ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE
                                               : ((0x305U 
                                                   == 
                                                   (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                    >> 0x14U))
                                                   ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC
                                                   : 0ULL))))))),64);
    bufp->fullQData(oldp+64,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC),64);
    bufp->fullQData(oldp+66,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE),64);
    bufp->fullQData(oldp+68,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC),64);
    bufp->fullQData(oldp+70,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE),64);
    bufp->fullQData(oldp+72,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS),64);
    bufp->fullQData(oldp+74,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH),64);
    bufp->fullQData(oldp+76,(((0U != (0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                               >> 0xfU)))
                               ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [(0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                         >> 0xfU))]
                               : 0ULL)),64);
    bufp->fullQData(oldp+78,(((0U != (0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                               >> 0x14U)))
                               ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [(0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                         >> 0x14U))]
                               : 0ULL)),64);
    bufp->fullBit(oldp+80,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard) 
                            | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard) 
                               | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)))));
    bufp->fullBit(oldp+81,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
                            | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
                               | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))));
    bufp->fullQData(oldp+82,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard)
                               ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                               : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard)
                                   ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                   : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)
                                       ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                       : 0ULL)))),64);
    bufp->fullQData(oldp+84,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                               ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                               : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                                   ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                   : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                                       ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                       : 0ULL)))),64);
    bufp->fullBit(oldp+86,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard) 
                            | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard) 
                               | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)))));
    bufp->fullQData(oldp+87,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard)
                               ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                               : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard)
                                   ? vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata
                                   : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)
                                       ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                                       : 0ULL)))),64);
    bufp->fullCData(oldp+89,((0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+90,((0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                       >> 0x14U))),5);
    bufp->fullQData(oldp+91,(((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type))
                               ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4
                               : ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type))
                                   ? vlSelf->Soc__DOT__core__DOT__fdreg_pc
                                   : 0ULL))),64);
    bufp->fullQData(oldp+93,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                               ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T
                               : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                   ? 4ULL : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                              ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T
                                              : ((1U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                                  ? vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm
                                                  : 0ULL))))),64);
    bufp->fullCData(oldp+95,((0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                       >> 7U))),5);
    bufp->fullBit(oldp+96,(((0x13U != vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits) 
                            & ((0x17U != (0x7fU & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)) 
                               & ((0x37U != (0x7fU 
                                             & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)) 
                                  & ((0x6fU != (0x7fU 
                                                & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)) 
                                     & ((0x67U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                        & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5))))))));
    bufp->fullQData(oldp+97,((vlSelf->Soc__DOT__core__DOT__fdreg_pc 
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
    bufp->fullCData(oldp+99,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op),6);
    bufp->fullCData(oldp+100,((0x3fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                        >> 0x14U))),6);
    bufp->fullCData(oldp+101,(((0x13U == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_7)
                                         ? 1U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0)
                                                   ? 2U
                                                   : 
                                                  (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd8cc4529__0) 
                                                    | (0x1a3U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))
                                                    ? 0U
                                                    : 
                                                   ((((0x13U 
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
                                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                        | ((0x293U 
                                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                           | ((0x4293U 
                                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                              | ((0x33U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x8033U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xb3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x133U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x1b3U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x233U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x2b3U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x82b3U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x333U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x3b3U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | (0x433U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)))))))))))))))))))) 
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
                                                    ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h7292fcd1__0)
                                                      ? 3U
                                                      : 
                                                     (3U 
                                                      & (- (IData)(
                                                                   (0x1f3U 
                                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))))),2);
    bufp->fullCData(oldp+102,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0)
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
    bufp->fullQData(oldp+103,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T),64);
    bufp->fullCData(oldp+105,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type),3);
    bufp->fullQData(oldp+106,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T),64);
    bufp->fullBit(oldp+108,(((~ (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0) 
                                  | ((0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                     | ((0xa3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                        | ((0x123U 
                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                           | ((0x1a3U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                              | ((0x13U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                 | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_he9100215__0))))))) 
                                 | ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h567a98b8__0) 
                                    | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h156a9c0e__0)))) 
                             & ((0xf3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                | ((0x173U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                   | (0U != (3U & (- (IData)(
                                                             (0x1f3U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))));
    bufp->fullBit(oldp+109,(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag));
    bufp->fullQData(oldp+110,(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                ? (vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
                                   + vlSelf->Soc__DOT__core__DOT__fdreg_pc)
                                : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                    ? (0xfffffffffffffffeULL 
                                       & (vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4 
                                          + vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm))
                                    : 0x80000000ULL))),64);
    bufp->fullCData(oldp+112,(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd),5);
    bufp->fullCData(oldp+113,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type),2);
    bufp->fullCData(oldp+114,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type),2);
    bufp->fullCData(oldp+115,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type),3);
    bufp->fullCData(oldp+116,(((0x13U == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
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
                                                                     | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0))))))))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd8cc4529__0)
                                                    ? 3U
                                                    : 
                                                   (3U 
                                                    & (- (IData)(
                                                                 (0x1a3U 
                                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))),3);
    bufp->fullCData(oldp+117,(((((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0) 
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
                                                 (3U 
                                                  & (- (IData)(
                                                               (0x1f3U 
                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))),2);
    bufp->fullQData(oldp+118,(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm),64);
    bufp->fullCData(oldp+120,(((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type))
                                ? ((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                    ? 0U : (7U & (IData)(vlSelf->__VdfgTmp_h6a80e86b__0)))
                                : 0U)),3);
    bufp->fullQData(oldp+121,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result),64);
    bufp->fullQData(oldp+123,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata),64);
    bufp->fullBit(oldp+125,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we));
    bufp->fullBit(oldp+126,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_flag));
    bufp->fullQData(oldp+127,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc),64);
    bufp->fullBit(oldp+129,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_flag))));
    bufp->fullBit(oldp+130,(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush));
    bufp->fullBit(oldp+131,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started));
    bufp->fullQData(oldp+132,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),64);
    bufp->fullQData(oldp+134,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc),64);
    bufp->fullQData(oldp+136,(vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata),64);
    bufp->fullBit(oldp+138,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))));
    bufp->fullBit(oldp+139,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard));
    bufp->fullBit(oldp+140,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard));
    bufp->fullBit(oldp+141,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard));
    bufp->fullBit(oldp+142,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard));
    bufp->fullBit(oldp+143,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard));
    bufp->fullBit(oldp+144,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard));
    bufp->fullBit(oldp+145,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard));
    bufp->fullBit(oldp+146,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard));
    bufp->fullBit(oldp+147,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard));
    bufp->fullBit(oldp+148,(vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag));
    bufp->fullCData(oldp+149,(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count),3);
    bufp->fullQData(oldp+150,((((QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
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
    bufp->fullQData(oldp+152,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                                & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr)))
                                ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr])),64);
    bufp->fullQData(oldp+154,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr]),64);
    bufp->fullQData(oldp+156,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [(0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+158,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [(0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+160,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+162,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+164,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+166,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+168,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+170,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+172,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+174,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+176,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+178,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+180,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+182,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+184,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+186,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+188,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+190,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+192,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+194,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+196,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+198,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+200,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+202,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+204,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+206,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+208,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+210,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+212,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+214,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+216,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+218,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+220,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+222,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
    bufp->fullQData(oldp+224,(vlSelf->Soc__DOT__tm__DOT__old_inst),64);
    bufp->fullBit(oldp+226,(vlSelf->clock));
    bufp->fullBit(oldp+227,(vlSelf->reset));
    bufp->fullQData(oldp+228,(vlSelf->io_next_pc),64);
    bufp->fullBit(oldp+230,(0U));
    bufp->fullBit(oldp+231,(1U));
    bufp->fullCData(oldp+232,(0U),5);
    bufp->fullQData(oldp+233,(0ULL),64);
}
