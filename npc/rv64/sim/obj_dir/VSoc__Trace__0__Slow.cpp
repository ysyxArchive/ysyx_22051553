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
    tracep->declBit(c+507,"clock", false,-1);
    tracep->declBit(c+508,"reset", false,-1);
    tracep->pushNamePrefix("Soc ");
    tracep->declBit(c+507,"clock", false,-1);
    tracep->declBit(c+508,"reset", false,-1);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+507,"clock", false,-1);
    tracep->declBit(c+508,"reset", false,-1);
    tracep->declBit(c+385,"io_AXI_Interface_aw_ready", false,-1);
    tracep->declBit(c+386,"io_AXI_Interface_w_ready", false,-1);
    tracep->declBit(c+387,"io_AXI_Interface_b_valid", false,-1);
    tracep->declBit(c+388,"io_AXI_Interface_ar_ready", false,-1);
    tracep->declBit(c+389,"io_AXI_Interface_r_valid", false,-1);
    tracep->declQuad(c+390,"io_AXI_Interface_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+398,"io_AXI_Interface_aw_valid", false,-1);
    tracep->declBus(c+399,"io_AXI_Interface_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+400,"io_AXI_Interface_w_valid", false,-1);
    tracep->declQuad(c+401,"io_AXI_Interface_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+403,"io_AXI_Interface_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+404,"io_AXI_Interface_ar_valid", false,-1);
    tracep->declBus(c+405,"io_AXI_Interface_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+406,"io_AXI_Interface_r_ready", false,-1);
    tracep->declBus(c+1,"fdreg_pc", false,-1, 31,0);
    tracep->declQuad(c+2,"dereg_op_a", false,-1, 63,0);
    tracep->declQuad(c+4,"dereg_op_b", false,-1, 63,0);
    tracep->declBus(c+6,"dereg_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+7,"dereg_branch_type", false,-1);
    tracep->declQuad(c+8,"dereg_branch_addr", false,-1, 63,0);
    tracep->declBus(c+10,"dereg_alu_op", false,-1, 5,0);
    tracep->declBus(c+11,"dereg_shamt", false,-1, 5,0);
    tracep->declBus(c+12,"dereg_wb_type", false,-1, 1,0);
    tracep->declBus(c+13,"dereg_sd_type", false,-1, 2,0);
    tracep->declQuad(c+407,"dereg_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+14,"dereg_ld_type", false,-1, 2,0);
    tracep->declQuad(c+15,"dereg_csr_t", false,-1, 63,0);
    tracep->declBus(c+17,"dereg_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+18,"dereg_csr_wen", false,-1);
    tracep->declBit(c+19,"dereg_has_inst", false,-1);
    tracep->declQuad(c+20,"emreg_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+22,"emreg_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+23,"emreg_wb_type", false,-1, 1,0);
    tracep->declBus(c+24,"emreg_ld_type", false,-1, 2,0);
    tracep->declBus(c+25,"emreg_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+26,"emreg_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+28,"emreg_csr_wen", false,-1);
    tracep->declBus(c+29,"emreg_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+30,"emreg_has_inst", false,-1);
    tracep->declQuad(c+31,"mwreg_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+33,"mwreg_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+34,"mwreg_wb_type", false,-1, 1,0);
    tracep->declQuad(c+35,"mwreg_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+37,"mwreg_csr_wen", false,-1);
    tracep->declBus(c+38,"mwreg_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+39,"mwreg_has_inst", false,-1);
    tracep->declBit(c+40,"master0_resp_valid", false,-1);
    tracep->declQuad(c+41,"master0_resp_data", false,-1, 63,0);
    tracep->pushNamePrefix("DI ");
    tracep->declBit(c+507,"clk", false,-1);
    tracep->declBit(c+508,"rst", false,-1);
    tracep->declBus(c+465,"pc", false,-1, 31,0);
    tracep->declBit(c+43,"pc_req", false,-1);
    tracep->declBus(c+409,"inst", false,-1, 31,0);
    tracep->declBit(c+371,"inst_valid", false,-1);
    tracep->declBit(c+410,"load_use", false,-1);
    tracep->declQuad(c+2,"op_a", false,-1, 63,0);
    tracep->declQuad(c+4,"op_b", false,-1, 63,0);
    tracep->declQuad(c+44,"result", false,-1, 63,0);
    tracep->declBit(c+46,"br_yes", false,-1);
    tracep->declBit(c+47,"mem_access", false,-1);
    tracep->declQuad(c+48,"mem_addr", false,-1, 63,0);
    tracep->declBus(c+33,"rd", false,-1, 4,0);
    tracep->declQuad(c+31,"reg_wdata", false,-1, 63,0);
    tracep->declBit(c+372,"reg_wen", false,-1);
    tracep->declBit(c+466,"csr_wen", false,-1);
    tracep->declQuad(c+35,"csr_wdata", false,-1, 63,0);
    tracep->declBus(c+38,"csr_waddr", false,-1, 11,0);
    tracep->declBit(c+467,"sdb_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Dcache ");
    tracep->declBit(c+507,"clock", false,-1);
    tracep->declBit(c+508,"reset", false,-1);
    tracep->declBit(c+50,"io_cpu_req_valid", false,-1);
    tracep->declBit(c+523,"io_cpu_req_bits_inst_type", false,-1);
    tracep->declBus(c+51,"io_cpu_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+407,"io_cpu_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+411,"io_cpu_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+468,"io_axi_resp_valid", false,-1);
    tracep->declQuad(c+469,"io_axi_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+52,"io_cpu_resp_valid", false,-1);
    tracep->declQuad(c+412,"io_cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+53,"io_axi_req_valid", false,-1);
    tracep->declBit(c+54,"io_axi_req_bits_rw", false,-1);
    tracep->declBus(c+55,"io_axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+414,"io_axi_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+416,"io_axi_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+50,"io_fccache_req", false,-1);
    tracep->declBus(c+56,"io_fccache_state", false,-1, 2,0);
    tracep->declBus(c+411,"io_fccache_mask", false,-1, 7,0);
    tracep->declBit(c+57,"io_fccache_hit", false,-1);
    tracep->declBit(c+52,"io_fccache_cpu_valid", false,-1);
    tracep->declBit(c+468,"io_fccache_axi_valid", false,-1);
    tracep->declBus(c+56,"state", false,-1, 2,0);
    tracep->declBus(c+58,"tag", false,-1, 20,0);
    tracep->declBus(c+59,"index", false,-1, 7,0);
    tracep->declBus(c+60,"offset", false,-1, 2,0);
    tracep->declArray(c+61,"valid", false,-1, 511,0);
    tracep->declArray(c+77,"dirty", false,-1, 511,0);
    tracep->declArray(c+93,"replace", false,-1, 511,0);
    tracep->declBit(c+109,"hit0", false,-1);
    tracep->declBit(c+110,"hit1", false,-1);
    tracep->declBit(c+417,"inDataOneArray", false,-1);
    tracep->declBit(c+111,"victim", false,-1);
    tracep->declBus(c+112,"addr", false,-1, 31,0);
    tracep->declQuad(c+113,"data", false,-1, 63,0);
    tracep->declBus(c+115,"mask", false,-1, 7,0);
    tracep->declBit(c+116,"inst_type", false,-1);
    tracep->declBit(c+117,"whitNum", false,-1);
    tracep->declBit(c+52,"cpu_resp_valid", false,-1);
    tracep->declQuad(c+118,"cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+53,"axi_req_valid", false,-1);
    tracep->declBit(c+54,"axi_req_bits_rw", false,-1);
    tracep->declBus(c+55,"axi_req_bits_addr", false,-1, 31,0);
    tracep->declBus(c+416,"axi_req_bits_mask", false,-1, 7,0);
    tracep->pushNamePrefix("DataArray_ext ");
    tracep->declBus(c+120,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+121,"R0_en", false,-1);
    tracep->declBit(c+507,"R0_clk", false,-1);
    tracep->declBus(c+122,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+471,"W0_en", false,-1);
    tracep->declBit(c+507,"W0_clk", false,-1);
    tracep->declQuad(c+469,"W0_data", false,-1, 63,0);
    tracep->declBus(c+123,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+472,"W1_en", false,-1);
    tracep->declBit(c+507,"W1_clk", false,-1);
    tracep->declQuad(c+469,"W1_data", false,-1, 63,0);
    tracep->declBus(c+122,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+124,"W2_en", false,-1);
    tracep->declBit(c+507,"W2_clk", false,-1);
    tracep->declQuad(c+125,"W2_data", false,-1, 63,0);
    tracep->declBus(c+123,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+127,"W3_en", false,-1);
    tracep->declBit(c+507,"W3_clk", false,-1);
    tracep->declQuad(c+125,"W3_data", false,-1, 63,0);
    tracep->declBus(c+122,"W4_addr", false,-1, 8,0);
    tracep->declBit(c+473,"W4_en", false,-1);
    tracep->declBit(c+507,"W4_clk", false,-1);
    tracep->declQuad(c+474,"W4_data", false,-1, 63,0);
    tracep->declBus(c+123,"W5_addr", false,-1, 8,0);
    tracep->declBit(c+476,"W5_en", false,-1);
    tracep->declBit(c+507,"W5_clk", false,-1);
    tracep->declQuad(c+474,"W5_data", false,-1, 63,0);
    tracep->declQuad(c+418,"R0_data", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("TagArray_ext ");
    tracep->declBus(c+128,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+129,"R0_en", false,-1);
    tracep->declBit(c+507,"R0_clk", false,-1);
    tracep->declBus(c+130,"R1_addr", false,-1, 8,0);
    tracep->declBit(c+131,"R1_en", false,-1);
    tracep->declBit(c+507,"R1_clk", false,-1);
    tracep->declBus(c+128,"R2_addr", false,-1, 8,0);
    tracep->declBit(c+132,"R2_en", false,-1);
    tracep->declBit(c+507,"R2_clk", false,-1);
    tracep->declBus(c+130,"R3_addr", false,-1, 8,0);
    tracep->declBit(c+133,"R3_en", false,-1);
    tracep->declBit(c+507,"R3_clk", false,-1);
    tracep->declBus(c+134,"R4_addr", false,-1, 8,0);
    tracep->declBit(c+524,"R4_en", false,-1);
    tracep->declBit(c+507,"R4_clk", false,-1);
    tracep->declBus(c+135,"R5_addr", false,-1, 8,0);
    tracep->declBit(c+524,"R5_en", false,-1);
    tracep->declBit(c+507,"R5_clk", false,-1);
    tracep->declBus(c+122,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+471,"W0_en", false,-1);
    tracep->declBit(c+507,"W0_clk", false,-1);
    tracep->declBus(c+58,"W0_data", false,-1, 20,0);
    tracep->declBus(c+123,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+472,"W1_en", false,-1);
    tracep->declBit(c+507,"W1_clk", false,-1);
    tracep->declBus(c+58,"W1_data", false,-1, 20,0);
    tracep->declBus(c+122,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+473,"W2_en", false,-1);
    tracep->declBit(c+507,"W2_clk", false,-1);
    tracep->declBus(c+58,"W2_data", false,-1, 20,0);
    tracep->declBus(c+123,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+476,"W3_en", false,-1);
    tracep->declBit(c+507,"W3_clk", false,-1);
    tracep->declBus(c+58,"W3_data", false,-1, 20,0);
    tracep->declBus(c+136,"R0_data", false,-1, 20,0);
    tracep->declBus(c+137,"R1_data", false,-1, 20,0);
    tracep->declBus(c+138,"R2_data", false,-1, 20,0);
    tracep->declBus(c+139,"R3_data", false,-1, 20,0);
    tracep->declBus(c+140,"R4_data", false,-1, 20,0);
    tracep->declBus(c+141,"R5_data", false,-1, 20,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Icache ");
    tracep->declBit(c+507,"clock", false,-1);
    tracep->declBit(c+508,"reset", false,-1);
    tracep->declBit(c+43,"io_cpu_req_valid", false,-1);
    tracep->declBit(c+524,"io_cpu_req_bits_inst_type", false,-1);
    tracep->declBus(c+465,"io_cpu_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+525,"io_cpu_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+527,"io_cpu_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+477,"io_axi_resp_valid", false,-1);
    tracep->declQuad(c+478,"io_axi_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+142,"io_cpu_resp_valid", false,-1);
    tracep->declQuad(c+420,"io_cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+143,"io_axi_req_valid", false,-1);
    tracep->declBit(c+144,"io_axi_req_bits_rw", false,-1);
    tracep->declBus(c+145,"io_axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+422,"io_axi_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+424,"io_axi_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+43,"io_fccache_req", false,-1);
    tracep->declBus(c+146,"io_fccache_state", false,-1, 2,0);
    tracep->declBus(c+527,"io_fccache_mask", false,-1, 7,0);
    tracep->declBit(c+480,"io_fccache_hit", false,-1);
    tracep->declBit(c+142,"io_fccache_cpu_valid", false,-1);
    tracep->declBit(c+477,"io_fccache_axi_valid", false,-1);
    tracep->declBus(c+146,"state", false,-1, 2,0);
    tracep->declBus(c+147,"tag", false,-1, 20,0);
    tracep->declBus(c+148,"index", false,-1, 7,0);
    tracep->declBus(c+149,"offset", false,-1, 2,0);
    tracep->declArray(c+150,"valid", false,-1, 511,0);
    tracep->declArray(c+166,"dirty", false,-1, 511,0);
    tracep->declArray(c+182,"replace", false,-1, 511,0);
    tracep->declBit(c+481,"hit0", false,-1);
    tracep->declBit(c+373,"hit1", false,-1);
    tracep->declBit(c+425,"inDataOneArray", false,-1);
    tracep->declBit(c+198,"victim", false,-1);
    tracep->declBus(c+199,"addr", false,-1, 31,0);
    tracep->declQuad(c+200,"data", false,-1, 63,0);
    tracep->declBus(c+202,"mask", false,-1, 7,0);
    tracep->declBit(c+203,"inst_type", false,-1);
    tracep->declBit(c+204,"whitNum", false,-1);
    tracep->declBit(c+142,"cpu_resp_valid", false,-1);
    tracep->declQuad(c+205,"cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+143,"axi_req_valid", false,-1);
    tracep->declBit(c+144,"axi_req_bits_rw", false,-1);
    tracep->declBus(c+145,"axi_req_bits_addr", false,-1, 31,0);
    tracep->declBus(c+424,"axi_req_bits_mask", false,-1, 7,0);
    tracep->pushNamePrefix("DataArray_ext ");
    tracep->declBus(c+374,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+375,"R0_en", false,-1);
    tracep->declBit(c+507,"R0_clk", false,-1);
    tracep->declBus(c+207,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+482,"W0_en", false,-1);
    tracep->declBit(c+507,"W0_clk", false,-1);
    tracep->declQuad(c+478,"W0_data", false,-1, 63,0);
    tracep->declBus(c+208,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+483,"W1_en", false,-1);
    tracep->declBit(c+507,"W1_clk", false,-1);
    tracep->declQuad(c+478,"W1_data", false,-1, 63,0);
    tracep->declBus(c+207,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+209,"W2_en", false,-1);
    tracep->declBit(c+507,"W2_clk", false,-1);
    tracep->declQuad(c+210,"W2_data", false,-1, 63,0);
    tracep->declBus(c+208,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+212,"W3_en", false,-1);
    tracep->declBit(c+507,"W3_clk", false,-1);
    tracep->declQuad(c+210,"W3_data", false,-1, 63,0);
    tracep->declBus(c+207,"W4_addr", false,-1, 8,0);
    tracep->declBit(c+484,"W4_en", false,-1);
    tracep->declBit(c+507,"W4_clk", false,-1);
    tracep->declQuad(c+485,"W4_data", false,-1, 63,0);
    tracep->declBus(c+208,"W5_addr", false,-1, 8,0);
    tracep->declBit(c+487,"W5_en", false,-1);
    tracep->declBit(c+507,"W5_clk", false,-1);
    tracep->declQuad(c+485,"W5_data", false,-1, 63,0);
    tracep->declQuad(c+426,"R0_data", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("TagArray_ext ");
    tracep->declBus(c+213,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+214,"R0_en", false,-1);
    tracep->declBit(c+507,"R0_clk", false,-1);
    tracep->declBus(c+215,"R1_addr", false,-1, 8,0);
    tracep->declBit(c+216,"R1_en", false,-1);
    tracep->declBit(c+507,"R1_clk", false,-1);
    tracep->declBus(c+213,"R2_addr", false,-1, 8,0);
    tracep->declBit(c+217,"R2_en", false,-1);
    tracep->declBit(c+507,"R2_clk", false,-1);
    tracep->declBus(c+215,"R3_addr", false,-1, 8,0);
    tracep->declBit(c+218,"R3_en", false,-1);
    tracep->declBit(c+507,"R3_clk", false,-1);
    tracep->declBus(c+488,"R4_addr", false,-1, 8,0);
    tracep->declBit(c+524,"R4_en", false,-1);
    tracep->declBit(c+507,"R4_clk", false,-1);
    tracep->declBus(c+489,"R5_addr", false,-1, 8,0);
    tracep->declBit(c+524,"R5_en", false,-1);
    tracep->declBit(c+507,"R5_clk", false,-1);
    tracep->declBus(c+207,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+482,"W0_en", false,-1);
    tracep->declBit(c+507,"W0_clk", false,-1);
    tracep->declBus(c+147,"W0_data", false,-1, 20,0);
    tracep->declBus(c+208,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+483,"W1_en", false,-1);
    tracep->declBit(c+507,"W1_clk", false,-1);
    tracep->declBus(c+147,"W1_data", false,-1, 20,0);
    tracep->declBus(c+207,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+484,"W2_en", false,-1);
    tracep->declBit(c+507,"W2_clk", false,-1);
    tracep->declBus(c+147,"W2_data", false,-1, 20,0);
    tracep->declBus(c+208,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+487,"W3_en", false,-1);
    tracep->declBit(c+507,"W3_clk", false,-1);
    tracep->declBus(c+147,"W3_data", false,-1, 20,0);
    tracep->declBus(c+219,"R0_data", false,-1, 20,0);
    tracep->declBus(c+220,"R1_data", false,-1, 20,0);
    tracep->declBus(c+221,"R2_data", false,-1, 20,0);
    tracep->declBus(c+222,"R3_data", false,-1, 20,0);
    tracep->declBus(c+376,"R4_data", false,-1, 20,0);
    tracep->declBus(c+377,"R5_data", false,-1, 20,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("arbitor ");
    tracep->declBit(c+507,"clock", false,-1);
    tracep->declBit(c+508,"reset", false,-1);
    tracep->declBit(c+223,"io_master0_req_valid", false,-1);
    tracep->declBit(c+224,"io_master0_req_bits_rw", false,-1);
    tracep->declBus(c+51,"io_master0_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+407,"io_master0_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+411,"io_master0_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+53,"io_master1_req_valid", false,-1);
    tracep->declBit(c+54,"io_master1_req_bits_rw", false,-1);
    tracep->declBus(c+55,"io_master1_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+414,"io_master1_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+416,"io_master1_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+143,"io_master2_req_valid", false,-1);
    tracep->declBit(c+144,"io_master2_req_bits_rw", false,-1);
    tracep->declBus(c+145,"io_master2_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+422,"io_master2_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+424,"io_master2_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+385,"io_AXI_O_aw_ready", false,-1);
    tracep->declBit(c+386,"io_AXI_O_w_ready", false,-1);
    tracep->declBit(c+387,"io_AXI_O_b_valid", false,-1);
    tracep->declBit(c+388,"io_AXI_O_ar_ready", false,-1);
    tracep->declBit(c+389,"io_AXI_O_r_valid", false,-1);
    tracep->declQuad(c+390,"io_AXI_O_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+490,"io_master0_resp_valid", false,-1);
    tracep->declQuad(c+491,"io_master0_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+468,"io_master1_resp_valid", false,-1);
    tracep->declQuad(c+469,"io_master1_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+477,"io_master2_resp_valid", false,-1);
    tracep->declQuad(c+478,"io_master2_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+398,"io_AXI_O_aw_valid", false,-1);
    tracep->declBus(c+399,"io_AXI_O_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+400,"io_AXI_O_w_valid", false,-1);
    tracep->declQuad(c+401,"io_AXI_O_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+403,"io_AXI_O_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+404,"io_AXI_O_ar_valid", false,-1);
    tracep->declBus(c+405,"io_AXI_O_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+406,"io_AXI_O_r_ready", false,-1);
    tracep->declBus(c+428,"master_choose", false,-1, 3,0);
    tracep->declBus(c+429,"choose_buffer", false,-1, 3,0);
    tracep->declBus(c+430,"state", false,-1, 1,0);
    tracep->declBit(c+225,"aw_comp", false,-1);
    tracep->declBit(c+226,"w_comp", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("clint ");
    tracep->declBit(c+507,"clock", false,-1);
    tracep->declBit(c+508,"reset", false,-1);
    tracep->declBit(c+227,"io_clex_valid", false,-1);
    tracep->declBus(c+14,"io_clex_ld_type", false,-1, 2,0);
    tracep->declQuad(c+228,"io_clex_raddr", false,-1, 63,0);
    tracep->declBus(c+13,"io_clex_sd_type", false,-1, 2,0);
    tracep->declQuad(c+228,"io_clex_waddr", false,-1, 63,0);
    tracep->declBus(c+411,"io_clex_wmask", false,-1, 7,0);
    tracep->declQuad(c+407,"io_clex_wdata", false,-1, 63,0);
    tracep->declBit(c+230,"io_clmem_Clrvalue_valid", false,-1);
    tracep->declQuad(c+231,"io_clmem_Clrvalue_bits", false,-1, 63,0);
    tracep->declBit(c+233,"io_timer_int", false,-1);
    tracep->declBus(c+234,"MSIP", false,-1, 31,0);
    tracep->declQuad(c+235,"MTIMECMP", false,-1, 63,0);
    tracep->declQuad(c+237,"MTIME", false,-1, 63,0);
    tracep->declQuad(c+231,"rvalue_buf", false,-1, 63,0);
    tracep->declBit(c+230,"valid_buf", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csrs ");
    tracep->declBit(c+507,"clock", false,-1);
    tracep->declBit(c+508,"reset", false,-1);
    tracep->declBus(c+431,"io_CSRDe_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+38,"io_CSRWb_rd", false,-1, 11,0);
    tracep->declBit(c+466,"io_CSRWb_csr_wen", false,-1);
    tracep->declQuad(c+35,"io_CSRWb_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+239,"io_CSRTr_rd", false,-1, 11,0);
    tracep->declBit(c+240,"io_CSRTr_csr_wen", false,-1);
    tracep->declQuad(c+241,"io_CSRTr_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+233,"io_timer_int", false,-1);
    tracep->declQuad(c+354,"io_CSRDe_csr_rdata", false,-1, 63,0);
    tracep->declQuad(c+243,"io_CSRTr_MTVEC", false,-1, 63,0);
    tracep->declQuad(c+245,"io_CSRTr_MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+247,"io_CSRTr_MEPC", false,-1, 63,0);
    tracep->declQuad(c+249,"io_CSRTr_MIE", false,-1, 63,0);
    tracep->declQuad(c+251,"io_CSRTr_MIP", false,-1, 63,0);
    tracep->declQuad(c+253,"io_CSRTr_MSTATUS", false,-1, 63,0);
    tracep->declQuad(c+243,"MTVEC", false,-1, 63,0);
    tracep->declQuad(c+245,"MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+247,"MEPC", false,-1, 63,0);
    tracep->declQuad(c+249,"MIE", false,-1, 63,0);
    tracep->declQuad(c+251,"MIP", false,-1, 63,0);
    tracep->declQuad(c+253,"MSTATUS", false,-1, 63,0);
    tracep->declQuad(c+255,"MSCRATCH", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("decode ");
    tracep->declBit(c+507,"clock", false,-1);
    tracep->declBit(c+508,"reset", false,-1);
    tracep->declBit(c+142,"io_inst_valid", false,-1);
    tracep->declQuad(c+420,"io_inst_bits_data", false,-1, 63,0);
    tracep->declBus(c+1,"io_fdio_pc", false,-1, 31,0);
    tracep->declQuad(c+356,"io_rfio_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+358,"io_rfio_reg2_rdata", false,-1, 63,0);
    tracep->declBit(c+46,"io_branch", false,-1);
    tracep->declBit(c+493,"io_stall", false,-1);
    tracep->declBit(c+494,"io_flush", false,-1);
    tracep->declBit(c+432,"io_fwde_fw_sel1", false,-1);
    tracep->declBit(c+433,"io_fwde_fw_sel2", false,-1);
    tracep->declQuad(c+509,"io_fwde_fw_data1", false,-1, 63,0);
    tracep->declQuad(c+511,"io_fwde_fw_data2", false,-1, 63,0);
    tracep->declBit(c+434,"io_fwde_csr_fw_sel", false,-1);
    tracep->declQuad(c+360,"io_fwde_csr_fw_data", false,-1, 63,0);
    tracep->declQuad(c+354,"io_csrs_csr_rdata", false,-1, 63,0);
    tracep->declBus(c+435,"io_rfio_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+436,"io_rfio_reg2_raddr", false,-1, 4,0);
    tracep->declQuad(c+513,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+515,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+437,"io_deio_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+438,"io_deio_branch_type", false,-1);
    tracep->declQuad(c+362,"io_deio_branch_addr", false,-1, 63,0);
    tracep->declBus(c+439,"io_deio_alu_op", false,-1, 5,0);
    tracep->declBus(c+364,"io_deio_shamt", false,-1, 5,0);
    tracep->declBus(c+440,"io_deio_wb_type", false,-1, 1,0);
    tracep->declBus(c+441,"io_deio_sd_type", false,-1, 2,0);
    tracep->declQuad(c+495,"io_deio_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+442,"io_deio_ld_type", false,-1, 2,0);
    tracep->declQuad(c+443,"io_deio_csr_t", false,-1, 63,0);
    tracep->declBus(c+445,"io_deio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+446,"io_deio_csr_wen", false,-1);
    tracep->declBit(c+517,"io_deio_has_inst", false,-1);
    tracep->declBit(c+447,"io_jump_flag", false,-1);
    tracep->declBus(c+518,"io_jump_pc", false,-1, 31,0);
    tracep->declBit(c+410,"io_load_use", false,-1);
    tracep->declBus(c+435,"io_fwde_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+436,"io_fwde_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+431,"io_fwde_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+431,"io_csrs_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+448,"inst", false,-1, 31,0);
    tracep->declBus(c+257,"lu_rd", false,-1, 4,0);
    tracep->pushNamePrefix("cu ");
    tracep->declBus(c+448,"io_inst", false,-1, 31,0);
    tracep->declBus(c+449,"io_jump_type", false,-1, 1,0);
    tracep->declBit(c+438,"io_branch_type", false,-1);
    tracep->declBus(c+450,"io_opa_type", false,-1, 1,0);
    tracep->declBus(c+451,"io_opb_type", false,-1, 2,0);
    tracep->declBus(c+452,"io_imm_type", false,-1, 2,0);
    tracep->declBus(c+439,"io_alu_op", false,-1, 5,0);
    tracep->declBus(c+440,"io_wb_type", false,-1, 1,0);
    tracep->declBus(c+441,"io_sd_type", false,-1, 2,0);
    tracep->declBus(c+442,"io_ld_type", false,-1, 2,0);
    tracep->declBus(c+453,"io_csr_type", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("eximm ");
    tracep->declBus(c+448,"io_inst", false,-1, 31,0);
    tracep->declBus(c+452,"io_imm_type", false,-1, 2,0);
    tracep->declQuad(c+454,"io_eximm", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("excute ");
    tracep->declQuad(c+2,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+4,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+6,"io_deio_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+7,"io_deio_branch_type", false,-1);
    tracep->declQuad(c+8,"io_deio_branch_addr", false,-1, 63,0);
    tracep->declBus(c+10,"io_deio_alu_op", false,-1, 5,0);
    tracep->declBus(c+11,"io_deio_shamt", false,-1, 5,0);
    tracep->declBus(c+12,"io_deio_wb_type", false,-1, 1,0);
    tracep->declBus(c+13,"io_deio_sd_type", false,-1, 2,0);
    tracep->declQuad(c+407,"io_deio_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+14,"io_deio_ld_type", false,-1, 2,0);
    tracep->declQuad(c+15,"io_deio_csr_t", false,-1, 63,0);
    tracep->declBus(c+17,"io_deio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+18,"io_deio_csr_wen", false,-1);
    tracep->declBit(c+19,"io_deio_has_inst", false,-1);
    tracep->declQuad(c+44,"io_emio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+6,"io_emio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+12,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+14,"io_emio_ld_type", false,-1, 2,0);
    tracep->declBus(c+258,"io_emio_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+228,"io_emio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+18,"io_emio_csr_wen", false,-1);
    tracep->declBus(c+17,"io_emio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+19,"io_emio_has_inst", false,-1);
    tracep->declBit(c+46,"io_jump_flag", false,-1);
    tracep->declBus(c+259,"io_jump_pc", false,-1, 31,0);
    tracep->declQuad(c+260,"io_raddr", false,-1, 63,0);
    tracep->declQuad(c+262,"io_waddr", false,-1, 63,0);
    tracep->declQuad(c+407,"io_wdata", false,-1, 63,0);
    tracep->declBus(c+411,"io_wmask", false,-1, 7,0);
    tracep->declBus(c+6,"io_fwex_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+264,"io_fwex_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+266,"io_fwex_reg_we", false,-1);
    tracep->declQuad(c+228,"io_fwex_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+18,"io_fwex_csr_wen", false,-1);
    tracep->declBus(c+17,"io_fwex_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+227,"io_clex_valid", false,-1);
    tracep->declBus(c+14,"io_clex_ld_type", false,-1, 2,0);
    tracep->declQuad(c+228,"io_clex_raddr", false,-1, 63,0);
    tracep->declBus(c+13,"io_clex_sd_type", false,-1, 2,0);
    tracep->declQuad(c+228,"io_clex_waddr", false,-1, 63,0);
    tracep->declBus(c+411,"io_clex_wmask", false,-1, 7,0);
    tracep->declQuad(c+407,"io_clex_wdata", false,-1, 63,0);
    tracep->pushNamePrefix("alu ");
    tracep->declQuad(c+2,"io_op_a", false,-1, 63,0);
    tracep->declQuad(c+4,"io_op_b", false,-1, 63,0);
    tracep->declBus(c+10,"io_alu_op", false,-1, 5,0);
    tracep->declBus(c+11,"io_shamt", false,-1, 5,0);
    tracep->declQuad(c+228,"io_result", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fc ");
    tracep->declBit(c+447,"io_fcde_jump_flag", false,-1);
    tracep->declBus(c+518,"io_fcde_jump_pc", false,-1, 31,0);
    tracep->declBit(c+410,"io_fcde_load_use", false,-1);
    tracep->declBit(c+46,"io_fcex_jump_flag", false,-1);
    tracep->declBus(c+259,"io_fcex_jump_pc", false,-1, 31,0);
    tracep->declBit(c+365,"io_fctr_pop_NOP", false,-1);
    tracep->declBus(c+267,"io_fctr_trap_state", false,-1, 2,0);
    tracep->declBit(c+268,"io_fctr_jump_flag", false,-1);
    tracep->declBus(c+269,"io_fctr_jump_pc", false,-1, 31,0);
    tracep->declBit(c+43,"io_fcIcache_req", false,-1);
    tracep->declBus(c+146,"io_fcIcache_state", false,-1, 2,0);
    tracep->declBus(c+527,"io_fcIcache_mask", false,-1, 7,0);
    tracep->declBit(c+142,"io_fcIcache_cpu_valid", false,-1);
    tracep->declBit(c+477,"io_fcIcache_axi_valid", false,-1);
    tracep->declBit(c+50,"io_fcDcache_req", false,-1);
    tracep->declBus(c+56,"io_fcDcache_state", false,-1, 2,0);
    tracep->declBus(c+411,"io_fcDcache_mask", false,-1, 7,0);
    tracep->declBit(c+57,"io_fcDcache_hit", false,-1);
    tracep->declBit(c+468,"io_fcDcache_axi_valid", false,-1);
    tracep->declBit(c+223,"io_fcio_req", false,-1);
    tracep->declBit(c+497,"io_fcio_valid", false,-1);
    tracep->declBit(c+366,"io_fcfe_jump_flag", false,-1);
    tracep->declBus(c+498,"io_fcfe_jump_pc", false,-1, 31,0);
    tracep->declBit(c+519,"io_fcfe_flush", false,-1);
    tracep->declBit(c+499,"io_fcfe_stall", false,-1);
    tracep->declBit(c+494,"io_fcde_flush", false,-1);
    tracep->declBit(c+493,"io_fcde_stall", false,-1);
    tracep->declBit(c+493,"io_fcex_stall", false,-1);
    tracep->declBit(c+493,"io_fcmem_stall", false,-1);
    tracep->declBit(c+493,"io_fcwb_stall", false,-1);
    tracep->declBit(c+467,"io_sdb_stall", false,-1);
    tracep->declBit(c+378,"Icache_stall", false,-1);
    tracep->declBit(c+379,"Dcache_stall", false,-1);
    tracep->declBit(c+500,"IO_stall", false,-1);
    tracep->declBit(c+499,"SFBundle_0", false,-1);
    tracep->declBit(c+493,"SFBundle_1", false,-1);
    tracep->declBit(c+493,"SFBundle_2", false,-1);
    tracep->declBit(c+493,"SFBundle_4", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+507,"clock", false,-1);
    tracep->declBit(c+508,"reset", false,-1);
    tracep->declBit(c+366,"io_fcfe_jump_flag", false,-1);
    tracep->declBus(c+498,"io_fcfe_jump_pc", false,-1, 31,0);
    tracep->declBit(c+519,"io_fcfe_flush", false,-1);
    tracep->declBit(c+499,"io_fcfe_stall", false,-1);
    tracep->declBus(c+465,"io_fdio_pc", false,-1, 31,0);
    tracep->declBit(c+43,"io_pc_valid", false,-1);
    tracep->declBus(c+465,"io_pc_bits", false,-1, 31,0);
    tracep->declBit(c+43,"started", false,-1);
    tracep->declBus(c+270,"pc", false,-1, 31,0);
    tracep->declBus(c+271,"old_pc", false,-1, 31,0);
    tracep->declBus(c+380,"next_pc", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fw ");
    tracep->declBus(c+435,"io_fwde_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+436,"io_fwde_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+431,"io_fwde_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+6,"io_fwex_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+264,"io_fwex_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+266,"io_fwex_reg_we", false,-1);
    tracep->declQuad(c+228,"io_fwex_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+18,"io_fwex_csr_wen", false,-1);
    tracep->declBus(c+17,"io_fwex_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+22,"io_fwmem_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+501,"io_fwmem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+272,"io_fwmem_reg_we", false,-1);
    tracep->declQuad(c+26,"io_fwmem_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+28,"io_fwmem_csr_wen", false,-1);
    tracep->declBus(c+29,"io_fwmem_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+33,"io_fwwb_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+31,"io_fwwb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+273,"io_fwwb_reg_we", false,-1);
    tracep->declQuad(c+35,"io_fwwb_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+37,"io_fwwb_csr_wen", false,-1);
    tracep->declBus(c+38,"io_fwwb_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+432,"io_fwde_fw_sel1", false,-1);
    tracep->declBit(c+433,"io_fwde_fw_sel2", false,-1);
    tracep->declQuad(c+509,"io_fwde_fw_data1", false,-1, 63,0);
    tracep->declQuad(c+511,"io_fwde_fw_data2", false,-1, 63,0);
    tracep->declBit(c+434,"io_fwde_csr_fw_sel", false,-1);
    tracep->declQuad(c+360,"io_fwde_csr_fw_data", false,-1, 63,0);
    tracep->declBit(c+456,"reg1_ex_hazard", false,-1);
    tracep->declBit(c+457,"reg2_ex_hazard", false,-1);
    tracep->declBit(c+458,"reg1_mem_hazard", false,-1);
    tracep->declBit(c+459,"reg2_mem_hazard", false,-1);
    tracep->declBit(c+460,"reg1_wb_hazard", false,-1);
    tracep->declBit(c+461,"reg2_wb_hazard", false,-1);
    tracep->declBit(c+462,"csr_ex_harzard", false,-1);
    tracep->declBit(c+463,"csr_mem_harzard", false,-1);
    tracep->declBit(c+464,"csr_wb_harzard", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("interact ");
    tracep->declBus(c+520,"inst", false,-1, 31,0);
    tracep->declBit(c+507,"clk", false,-1);
    tracep->declBit(c+508,"rst", false,-1);
    tracep->declBit(c+274,"ebreak_flag", false,-1);
    tracep->declBus(c+275,"over_count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+507,"clock", false,-1);
    tracep->declBit(c+508,"reset", false,-1);
    tracep->declQuad(c+20,"io_emio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+22,"io_emio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+23,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+24,"io_emio_ld_type", false,-1, 2,0);
    tracep->declBus(c+25,"io_emio_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+26,"io_emio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+28,"io_emio_csr_wen", false,-1);
    tracep->declBus(c+29,"io_emio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+30,"io_emio_has_inst", false,-1);
    tracep->declBit(c+52,"io_rdata_valid", false,-1);
    tracep->declQuad(c+412,"io_rdata_bits_data", false,-1, 63,0);
    tracep->declBit(c+497,"io_rdata_io_valid", false,-1);
    tracep->declQuad(c+503,"io_rdata_io_bits_data", false,-1, 63,0);
    tracep->declBit(c+230,"io_clmem_Clrvalue_valid", false,-1);
    tracep->declQuad(c+231,"io_clmem_Clrvalue_bits", false,-1, 63,0);
    tracep->declBit(c+493,"io_stall", false,-1);
    tracep->declQuad(c+501,"io_mwio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+22,"io_mwio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+23,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declQuad(c+26,"io_mwio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+28,"io_mwio_csr_wen", false,-1);
    tracep->declBus(c+29,"io_mwio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+30,"io_mwio_has_inst", false,-1);
    tracep->declBus(c+22,"io_fwmem_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+501,"io_fwmem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+272,"io_fwmem_reg_we", false,-1);
    tracep->declQuad(c+26,"io_fwmem_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+28,"io_fwmem_csr_wen", false,-1);
    tracep->declBus(c+29,"io_fwmem_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+276,"clmemvalid_buffer", false,-1);
    tracep->declBit(c+277,"rdatavalid_buffer", false,-1);
    tracep->declBit(c+278,"rdataiovalid_buffer", false,-1);
    tracep->declQuad(c+279,"clmem_buffer", false,-1, 63,0);
    tracep->declQuad(c+281,"rdata_buffer", false,-1, 63,0);
    tracep->declQuad(c+283,"rdataio_buffer", false,-1, 63,0);
    tracep->declQuad(c+505,"get_value", false,-1, 63,0);
    tracep->declQuad(c+381,"rvalue", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+507,"clock", false,-1);
    tracep->declBus(c+435,"io_RfDe_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+436,"io_RfDe_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+33,"io_RfWb_rd", false,-1, 4,0);
    tracep->declBit(c+372,"io_RfWb_reg_wen", false,-1);
    tracep->declQuad(c+31,"io_RfWb_reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+356,"io_RfDe_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+358,"io_RfDe_reg2_rdata", false,-1, 63,0);
    tracep->pushNamePrefix("regs_ext ");
    tracep->declBus(c+33,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+524,"R0_en", false,-1);
    tracep->declBit(c+507,"R0_clk", false,-1);
    tracep->declBus(c+435,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+524,"R1_en", false,-1);
    tracep->declBit(c+507,"R1_clk", false,-1);
    tracep->declBus(c+436,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+524,"R2_en", false,-1);
    tracep->declBit(c+507,"R2_clk", false,-1);
    tracep->declBus(c+528,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+524,"W0_en", false,-1);
    tracep->declBit(c+507,"W0_clk", false,-1);
    tracep->declQuad(c+525,"W0_data", false,-1, 63,0);
    tracep->declBus(c+33,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+524,"W1_en", false,-1);
    tracep->declBit(c+507,"W1_clk", false,-1);
    tracep->declQuad(c+383,"W1_data", false,-1, 63,0);
    tracep->declQuad(c+285,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+367,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+369,"R2_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+287+i*2,"Memory", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("trap ");
    tracep->declBit(c+507,"clock", false,-1);
    tracep->declBit(c+508,"reset", false,-1);
    tracep->declBit(c+19,"io_ex_hasinst", false,-1);
    tracep->declBit(c+30,"io_mem_hasinst", false,-1);
    tracep->declBit(c+39,"io_wb_hasinst", false,-1);
    tracep->declQuad(c+243,"io_csrtr_MTVEC", false,-1, 63,0);
    tracep->declQuad(c+245,"io_csrtr_MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+247,"io_csrtr_MEPC", false,-1, 63,0);
    tracep->declQuad(c+249,"io_csrtr_MIE", false,-1, 63,0);
    tracep->declQuad(c+251,"io_csrtr_MIP", false,-1, 63,0);
    tracep->declQuad(c+253,"io_csrtr_MSTATUS", false,-1, 63,0);
    tracep->declBus(c+409,"io_inst", false,-1, 31,0);
    tracep->declBus(c+465,"io_pc", false,-1, 31,0);
    tracep->declBus(c+239,"io_csrtr_rd", false,-1, 11,0);
    tracep->declBit(c+240,"io_csrtr_csr_wen", false,-1);
    tracep->declQuad(c+241,"io_csrtr_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+365,"io_fctr_pop_NOP", false,-1);
    tracep->declBus(c+267,"io_fctr_trap_state", false,-1, 2,0);
    tracep->declBit(c+268,"io_fctr_jump_flag", false,-1);
    tracep->declBus(c+269,"io_fctr_jump_pc", false,-1, 31,0);
    tracep->declQuad(c+351,"cause", false,-1, 63,0);
    tracep->declBus(c+353,"pc", false,-1, 31,0);
    tracep->declBus(c+267,"state", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb ");
    tracep->declQuad(c+31,"io_mwio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+33,"io_mwio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+34,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declQuad(c+35,"io_mwio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+37,"io_mwio_csr_wen", false,-1);
    tracep->declBus(c+38,"io_mwio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+39,"io_mwio_has_inst", false,-1);
    tracep->declBit(c+493,"io_stall", false,-1);
    tracep->declBus(c+33,"io_rfio_rd", false,-1, 4,0);
    tracep->declBit(c+372,"io_rfio_reg_wen", false,-1);
    tracep->declQuad(c+31,"io_rfio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+33,"io_fwwb_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+31,"io_fwwb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+273,"io_fwwb_reg_we", false,-1);
    tracep->declQuad(c+35,"io_fwwb_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+37,"io_fwwb_csr_wen", false,-1);
    tracep->declBus(c+38,"io_fwwb_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+38,"io_csrs_rd", false,-1, 11,0);
    tracep->declBit(c+466,"io_csrs_csr_wen", false,-1);
    tracep->declQuad(c+35,"io_csrs_csr_wdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+507,"ACLK", false,-1);
    tracep->declBit(c+521,"ARESETn", false,-1);
    tracep->declBus(c+399,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+529,"S_AXI_AWPROT", false,-1, 2,0);
    tracep->declBit(c+398,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+385,"S_AXI_AWREADY", false,-1);
    tracep->declQuad(c+401,"S_AXI_WDATA", false,-1, 63,0);
    tracep->declBus(c+403,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+400,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+386,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+392,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+387,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+524,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+405,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+529,"S_AXI_ARPROT", false,-1, 2,0);
    tracep->declBit(c+404,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+388,"S_AXI_ARREADY", false,-1);
    tracep->declQuad(c+390,"S_AXI_RDATA", false,-1, 63,0);
    tracep->declBus(c+393,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+389,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+406,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+385,"awready", false,-1);
    tracep->declBit(c+386,"wready", false,-1);
    tracep->declBus(c+392,"bresp", false,-1, 1,0);
    tracep->declBit(c+387,"bvalid", false,-1);
    tracep->declBit(c+388,"arready", false,-1);
    tracep->declQuad(c+390,"rdata", false,-1, 63,0);
    tracep->declBus(c+393,"rresp", false,-1, 1,0);
    tracep->declBit(c+389,"rvalid", false,-1);
    tracep->declBus(c+394,"awaddr_buffer", false,-1, 31,0);
    tracep->declBus(c+522,"awaddr", false,-1, 31,0);
    tracep->declBit(c+395,"need_resp", false,-1);
    tracep->declBus(c+396,"araddr", false,-1, 31,0);
    tracep->declBit(c+397,"need_read", false,-1);
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
    VlWide<16>/*511:0*/ __Vtemp_h773c399d__0;
    VlWide<8>/*255:0*/ __Vtemp_hb99da695__0;
    VlWide<3>/*95:0*/ __Vtemp_h5ee83ed9__0;
    VlWide<16>/*511:0*/ __Vtemp_hc4bbf11d__0;
    VlWide<8>/*255:0*/ __Vtemp_h1d13a2da__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->Soc__DOT__core__DOT__fdreg_pc),32);
    bufp->fullQData(oldp+2,(vlSelf->Soc__DOT__core__DOT__dereg_op_a),64);
    bufp->fullQData(oldp+4,(vlSelf->Soc__DOT__core__DOT__dereg_op_b),64);
    bufp->fullCData(oldp+6,(vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr),5);
    bufp->fullBit(oldp+7,(vlSelf->Soc__DOT__core__DOT__dereg_branch_type));
    bufp->fullQData(oldp+8,(vlSelf->Soc__DOT__core__DOT__dereg_branch_addr),64);
    bufp->fullCData(oldp+10,(vlSelf->Soc__DOT__core__DOT__dereg_alu_op),6);
    bufp->fullCData(oldp+11,(vlSelf->Soc__DOT__core__DOT__dereg_shamt),6);
    bufp->fullCData(oldp+12,(vlSelf->Soc__DOT__core__DOT__dereg_wb_type),2);
    bufp->fullCData(oldp+13,(vlSelf->Soc__DOT__core__DOT__dereg_sd_type),3);
    bufp->fullCData(oldp+14,(vlSelf->Soc__DOT__core__DOT__dereg_ld_type),3);
    bufp->fullQData(oldp+15,(vlSelf->Soc__DOT__core__DOT__dereg_csr_t),64);
    bufp->fullSData(oldp+17,(vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr),12);
    bufp->fullBit(oldp+18,(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen));
    bufp->fullBit(oldp+19,(vlSelf->Soc__DOT__core__DOT__dereg_has_inst));
    bufp->fullQData(oldp+20,(vlSelf->Soc__DOT__core__DOT__emreg_reg_wdata),64);
    bufp->fullCData(oldp+22,(vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr),5);
    bufp->fullCData(oldp+23,(vlSelf->Soc__DOT__core__DOT__emreg_wb_type),2);
    bufp->fullCData(oldp+24,(vlSelf->Soc__DOT__core__DOT__emreg_ld_type),3);
    bufp->fullCData(oldp+25,(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit),3);
    bufp->fullQData(oldp+26,(vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata),64);
    bufp->fullBit(oldp+28,(vlSelf->Soc__DOT__core__DOT__emreg_csr_wen));
    bufp->fullSData(oldp+29,(vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr),12);
    bufp->fullBit(oldp+30,(vlSelf->Soc__DOT__core__DOT__emreg_has_inst));
    bufp->fullQData(oldp+31,(vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata),64);
    bufp->fullCData(oldp+33,(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr),5);
    bufp->fullCData(oldp+34,(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type),2);
    bufp->fullQData(oldp+35,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata),64);
    bufp->fullBit(oldp+37,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen));
    bufp->fullSData(oldp+38,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr),12);
    bufp->fullBit(oldp+39,(vlSelf->Soc__DOT__core__DOT__mwreg_has_inst));
    bufp->fullBit(oldp+40,(vlSelf->Soc__DOT__core__DOT__master0_resp_valid));
    bufp->fullQData(oldp+41,(vlSelf->Soc__DOT__core__DOT__master0_resp_data),64);
    bufp->fullBit(oldp+43,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started));
    bufp->fullQData(oldp+44,(((IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen)
                               ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                               : vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)),64);
    bufp->fullBit(oldp+46,(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag));
    bufp->fullBit(oldp+47,(vlSelf->Soc__DOT__core__DOT____Vcellinp__DI__mem_access));
    bufp->fullQData(oldp+48,(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T),64);
    bufp->fullBit(oldp+50,(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid));
    bufp->fullIData(oldp+51,((IData)(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T)),32);
    bufp->fullBit(oldp+52,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_valid));
    bufp->fullBit(oldp+53,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_valid));
    bufp->fullBit(oldp+54,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw));
    bufp->fullIData(oldp+55,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr),32);
    bufp->fullCData(oldp+56,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state),3);
    bufp->fullBit(oldp+57,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3));
    bufp->fullIData(oldp+58,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__tag),21);
    bufp->fullCData(oldp+59,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index),8);
    bufp->fullCData(oldp+60,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset),3);
    bufp->fullWData(oldp+61,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid),512);
    bufp->fullWData(oldp+77,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty),512);
    bufp->fullWData(oldp+93,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace),512);
    bufp->fullBit(oldp+109,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0));
    VL_SHIFTR_WWI(512,512,10, __Vtemp_h773c399d__0, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid, 
                  (0x3ffU & ((IData)(1U) + (0x1feU 
                                            & ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                        >> 3U)) 
                                               << 1U)))));
    bufp->fullBit(oldp+110,(((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                              [(0x1ffU & ((IData)(1U) 
                                          + (0x1feU 
                                             & ((IData)(
                                                        (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                         >> 3U)) 
                                                << 1U))))] 
                              == (0x1fffffU & (IData)(
                                                      (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                       >> 0xbU)))) 
                             & __Vtemp_h773c399d__0[0U])));
    bufp->fullBit(oldp+111,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim));
    bufp->fullIData(oldp+112,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr),32);
    bufp->fullQData(oldp+113,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data),64);
    bufp->fullCData(oldp+115,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask),8);
    bufp->fullBit(oldp+116,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inst_type));
    bufp->fullBit(oldp+117,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum));
    bufp->fullQData(oldp+118,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_bits_data),64);
    __Vtemp_hb99da695__0[0U] = (IData)((QData)((IData)(
                                                       ((IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)
                                                         ? 
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h02ae5b32__0)
                                                          ? 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)
                                                           ? 
                                                          (0x1feU 
                                                           & ((IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                                       >> 3U)) 
                                                              << 1U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)
                                                           ? 
                                                          ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0)
                                                            ? 
                                                           (0x1feU 
                                                            & ((IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                                        >> 3U)) 
                                                               << 1U))
                                                            : 
                                                           (0x3ffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               (0x1feU 
                                                                & ((IData)(
                                                                           (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                                            >> 3U)) 
                                                                   << 1U)))))
                                                           : 0U))
                                                         : 0U))));
    __Vtemp_hb99da695__0[1U] = (IData)(((QData)((IData)(
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)
                                                          ? 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h02ae5b32__0)
                                                           ? 
                                                          ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)
                                                            ? 
                                                           (0x1feU 
                                                            & ((IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                                        >> 3U)) 
                                                               << 1U))
                                                            : 0U)
                                                           : 
                                                          ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)
                                                            ? 
                                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0)
                                                             ? 
                                                            (0x1feU 
                                                             & ((IData)(
                                                                        (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                                         >> 3U)) 
                                                                << 1U))
                                                             : 
                                                            (0x3ffU 
                                                             & ((IData)(1U) 
                                                                + 
                                                                (0x1feU 
                                                                 & ((IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                                             >> 3U)) 
                                                                    << 1U)))))
                                                            : 0U))
                                                          : 0U))) 
                                        >> 0x20U));
    __Vtemp_hb99da695__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7326076__0;
    __Vtemp_hb99da695__0[3U] = (IData)((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h56b90ebc__0)));
    __Vtemp_hb99da695__0[4U] = (IData)(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h56b90ebc__0)) 
                                        >> 0x20U));
    __Vtemp_hb99da695__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7326076__0;
    __Vtemp_hb99da695__0[6U] = (IData)((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h56b90ebc__0)));
    __Vtemp_hb99da695__0[7U] = (IData)(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h56b90ebc__0)) 
                                        >> 0x20U));
    bufp->fullSData(oldp+120,((0x1ffU & (((0U == (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 5U)))
                                           ? 0U : (
                                                   __Vtemp_hb99da695__0[
                                                   (((IData)(8U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                         << 5U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                        << 5U))))) 
                                         | (__Vtemp_hb99da695__0[
                                            (7U & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))] 
                                            >> (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                   << 5U)))))),9);
    bufp->fullBit(oldp+121,((1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))
                                    ? ((IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid) 
                                       & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3))
                                    : ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))
                                        ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]
                                        : ((6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                           | ((~ (IData)(
                                                         (7U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))) 
                                              & ((1U 
                                                  != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                                 & ((2U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]
                                                     : 
                                                    (3U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))))))))));
    bufp->fullSData(oldp+122,((0x1ffU & ((IData)(1U) 
                                         + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                            << 1U)))),9);
    bufp->fullSData(oldp+123,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                               << 1U)),9);
    bufp->fullBit(oldp+124,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum))));
    bufp->fullQData(oldp+125,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data),64);
    bufp->fullBit(oldp+127,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0))));
    bufp->fullSData(oldp+128,((0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                          << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0)))),9);
    bufp->fullBit(oldp+129,(((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                             & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]))));
    bufp->fullSData(oldp+130,((0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                          << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim)))),9);
    bufp->fullBit(oldp+131,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8854f984__0) 
                             & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))));
    bufp->fullBit(oldp+132,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8ecd23a9__0) 
                             & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]))));
    bufp->fullBit(oldp+133,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca93995__0) 
                             & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))));
    bufp->fullSData(oldp+134,((0x1feU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                  >> 3U)) 
                                         << 1U))),9);
    bufp->fullSData(oldp+135,((0x1ffU & ((IData)(1U) 
                                         + (0x1feU 
                                            & ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                        >> 3U)) 
                                               << 1U))))),9);
    bufp->fullIData(oldp+136,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                   & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]))
                                ? vlSelf->__VdfgTmp_h2fe899d6__0
                                : 0U)),21);
    bufp->fullIData(oldp+137,((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8854f984__0) 
                                & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))
                                ? vlSelf->__VdfgTmp_h5f294843__0
                                : 0U)),21);
    bufp->fullIData(oldp+138,((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8ecd23a9__0) 
                                & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                   & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]))
                                ? vlSelf->__VdfgTmp_h2fe899d6__0
                                : 0U)),21);
    bufp->fullIData(oldp+139,((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca93995__0) 
                                & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))
                                ? vlSelf->__VdfgTmp_h5f294843__0
                                : 0U)),21);
    bufp->fullIData(oldp+140,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                              [(0x1feU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                   >> 3U)) 
                                          << 1U))]),21);
    bufp->fullIData(oldp+141,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                              [(0x1ffU & ((IData)(1U) 
                                          + (0x1feU 
                                             & ((IData)(
                                                        (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                         >> 3U)) 
                                                << 1U))))]),21);
    bufp->fullBit(oldp+142,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid));
    bufp->fullBit(oldp+143,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_valid));
    bufp->fullBit(oldp+144,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw));
    bufp->fullIData(oldp+145,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr),32);
    bufp->fullCData(oldp+146,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state),3);
    bufp->fullIData(oldp+147,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__tag),21);
    bufp->fullCData(oldp+148,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index),8);
    bufp->fullCData(oldp+149,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset),3);
    bufp->fullWData(oldp+150,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid),512);
    bufp->fullWData(oldp+166,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty),512);
    bufp->fullWData(oldp+182,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace),512);
    bufp->fullBit(oldp+198,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim));
    bufp->fullIData(oldp+199,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr),32);
    bufp->fullQData(oldp+200,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data),64);
    bufp->fullCData(oldp+202,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask),8);
    bufp->fullBit(oldp+203,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inst_type));
    bufp->fullBit(oldp+204,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum));
    bufp->fullQData(oldp+205,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data),64);
    bufp->fullSData(oldp+207,((0x1ffU & ((IData)(1U) 
                                         + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                            << 1U)))),9);
    bufp->fullSData(oldp+208,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                               << 1U)),9);
    bufp->fullBit(oldp+209,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum))));
    bufp->fullQData(oldp+210,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data),64);
    bufp->fullBit(oldp+212,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0))));
    bufp->fullSData(oldp+213,((0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                          << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_0)))),9);
    bufp->fullBit(oldp+214,(((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                             & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]))));
    bufp->fullSData(oldp+215,((0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                          << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim)))),9);
    bufp->fullBit(oldp+216,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8854f984__0) 
                             & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))));
    bufp->fullBit(oldp+217,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8ecd23a9__0) 
                             & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]))));
    bufp->fullBit(oldp+218,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca93995__0) 
                             & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))));
    bufp->fullIData(oldp+219,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                   & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]))
                                ? vlSelf->__VdfgTmp_heb865217__0
                                : 0U)),21);
    bufp->fullIData(oldp+220,((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8854f984__0) 
                                & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))
                                ? vlSelf->__VdfgTmp_hb3a84c04__0
                                : 0U)),21);
    bufp->fullIData(oldp+221,((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8ecd23a9__0) 
                                & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                   & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]))
                                ? vlSelf->__VdfgTmp_heb865217__0
                                : 0U)),21);
    bufp->fullIData(oldp+222,((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca93995__0) 
                                & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))
                                ? vlSelf->__VdfgTmp_hb3a84c04__0
                                : 0U)),21);
    bufp->fullBit(oldp+223,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_req_valid_T_5));
    bufp->fullBit(oldp+224,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type))));
    bufp->fullBit(oldp+225,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp));
    bufp->fullBit(oldp+226,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp));
    bufp->fullBit(oldp+227,(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6));
    bufp->fullQData(oldp+228,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result),64);
    bufp->fullBit(oldp+230,(vlSelf->Soc__DOT__core__DOT__clint__DOT__valid_buf));
    bufp->fullQData(oldp+231,(vlSelf->Soc__DOT__core__DOT__clint__DOT__rvalue_buf),64);
    bufp->fullBit(oldp+233,((vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME 
                             >= vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP)));
    bufp->fullIData(oldp+234,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MSIP),32);
    bufp->fullQData(oldp+235,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP),64);
    bufp->fullQData(oldp+237,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME),64);
    __Vtemp_h5ee83ed9__0[0U] = 0x41000000U;
    __Vtemp_h5ee83ed9__0[1U] = 0x3003423U;
    __Vtemp_h5ee83ed9__0[2U] = (0x30000000U | (((0x8000000000000007ULL 
                                                 == vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE)
                                                 ? 0x344U
                                                 : 0U) 
                                               << 8U));
    bufp->fullSData(oldp+239,(((0x5fU >= (0x7fU & ((IData)(0xcU) 
                                                   * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))))
                                ? (0xfffU & (((0U == 
                                               (0x1fU 
                                                & ((IData)(0xcU) 
                                                   * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))))
                                               ? 0U
                                               : (__Vtemp_h5ee83ed9__0[
                                                  (((IData)(0xbU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0xcU) 
                                                        * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0xcU) 
                                                       * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)))))) 
                                             | (__Vtemp_h5ee83ed9__0[
                                                (3U 
                                                 & (((IData)(0xcU) 
                                                     * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0xcU) 
                                                    * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))))))
                                : 0U)),12);
    bufp->fullBit(oldp+240,(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen));
    bufp->fullQData(oldp+241,(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata),64);
    bufp->fullQData(oldp+243,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC),64);
    bufp->fullQData(oldp+245,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE),64);
    bufp->fullQData(oldp+247,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC),64);
    bufp->fullQData(oldp+249,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE),64);
    bufp->fullQData(oldp+251,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP),64);
    bufp->fullQData(oldp+253,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS),64);
    bufp->fullQData(oldp+255,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH),64);
    bufp->fullCData(oldp+257,(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd),5);
    bufp->fullCData(oldp+258,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                ? ((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                    ? 0U : (7U & (IData)(vlSelf->__VdfgTmp_h6a80e86b__0)))
                                : 0U)),3);
    bufp->fullIData(oldp+259,((IData)(vlSelf->Soc__DOT__core__DOT__dereg_branch_addr)),32);
    bufp->fullQData(oldp+260,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                : 0ULL)),64);
    bufp->fullQData(oldp+262,((((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6)) 
                                & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))
                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                : 0ULL)),64);
    bufp->fullQData(oldp+264,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata),64);
    bufp->fullBit(oldp+266,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we));
    bufp->fullCData(oldp+267,(vlSelf->Soc__DOT__core__DOT__trap__DOT__state),3);
    bufp->fullBit(oldp+268,(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3));
    bufp->fullIData(oldp+269,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC)
                                : ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                    ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC)
                                    : 0U))),32);
    bufp->fullIData(oldp+270,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),32);
    bufp->fullIData(oldp+271,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc),32);
    bufp->fullBit(oldp+272,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))));
    bufp->fullBit(oldp+273,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))));
    bufp->fullBit(oldp+274,(vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag));
    bufp->fullCData(oldp+275,(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count),3);
    bufp->fullBit(oldp+276,(vlSelf->Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer));
    bufp->fullBit(oldp+277,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer));
    bufp->fullBit(oldp+278,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer));
    bufp->fullQData(oldp+279,(vlSelf->Soc__DOT__core__DOT__mem__DOT__clmem_buffer),64);
    bufp->fullQData(oldp+281,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdata_buffer),64);
    bufp->fullQData(oldp+283,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataio_buffer),64);
    bufp->fullQData(oldp+285,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr]),64);
    bufp->fullQData(oldp+287,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+289,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+291,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+293,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+295,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+297,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+299,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+301,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+303,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+305,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+307,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+309,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+311,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+313,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+315,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+317,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+319,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+321,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+323,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+325,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+327,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+329,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+331,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+333,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+335,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+337,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+339,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+341,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+343,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+345,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+347,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+349,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
    bufp->fullQData(oldp+351,(vlSelf->Soc__DOT__core__DOT__trap__DOT__cause),64);
    bufp->fullIData(oldp+353,(vlSelf->Soc__DOT__core__DOT__trap__DOT__pc),32);
    bufp->fullQData(oldp+354,(((0x340U == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
                                ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH
                                : ((0x300U == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
                                    ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS
                                    : (((0x344U == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr)) 
                                        | (0x304U == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr)))
                                        ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE
                                        : ((0x341U 
                                            == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
                                            ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC
                                            : ((0x342U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
                                                ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE
                                                : (
                                                   (0x305U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
                                                    ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC
                                                    : 0ULL))))))),64);
    bufp->fullQData(oldp+356,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0)
                                ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]
                                : 0ULL)),64);
    bufp->fullQData(oldp+358,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0)
                                ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]
                                : 0ULL)),64);
    bufp->fullQData(oldp+360,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard)
                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard)
                                    ? vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)
                                        ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                                        : 0ULL)))),64);
    bufp->fullQData(oldp+362,(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__fdreg_pc)) 
                               + (((- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))) 
                                   << 0xcU) | (QData)((IData)(
                                                              (((IData)(vlSelf->__VdfgTmp_h315738f9__0) 
                                                                << 0xbU) 
                                                               | (((IData)(vlSelf->__VdfgTmp_h722d7b58__0) 
                                                                   << 5U) 
                                                                  | ((IData)(vlSelf->__VdfgTmp_h6dbd61c0__0) 
                                                                     << 1U)))))))),64);
    bufp->fullCData(oldp+364,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
                                ? (0x3fU & (IData)(
                                                   (vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                                    >> 0x14U)))
                                : 0U)),6);
    bufp->fullBit(oldp+365,(((0U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                             & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2) 
                                | ((0x30200073U == (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7))))));
    bufp->fullBit(oldp+366,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)))));
    bufp->fullQData(oldp+367,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]),64);
    bufp->fullQData(oldp+369,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]),64);
    bufp->fullBit(oldp+371,(((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid))));
    bufp->fullBit(oldp+372,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
                             & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)))));
    VL_SHIFTR_WWI(512,512,10, __Vtemp_hc4bbf11d__0, vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid, 
                  (0x3ffU & ((IData)(1U) + (0x1feU 
                                            & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                               >> 2U)))));
    bufp->fullBit(oldp+373,(((vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                              [(0x1ffU & ((IData)(1U) 
                                          + (0x1feU 
                                             & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                >> 2U))))] 
                              == (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                  >> 0xbU)) & __Vtemp_hc4bbf11d__0[0U])));
    __Vtemp_h1d13a2da__0[0U] = (IData)((QData)((IData)(
                                                       ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                                                         ? 
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3)
                                                          ? 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0)
                                                           ? 
                                                          (0x1feU 
                                                           & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                              >> 2U))
                                                           : 
                                                          (0x3ffU 
                                                           & ((IData)(1U) 
                                                              + 
                                                              (0x1feU 
                                                               & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                                  >> 2U)))))
                                                          : 0U)
                                                         : 0U))));
    __Vtemp_h1d13a2da__0[1U] = (IData)(((QData)((IData)(
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                                                          ? 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3)
                                                           ? 
                                                          ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0)
                                                            ? 
                                                           (0x1feU 
                                                            & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                               >> 2U))
                                                            : 
                                                           (0x3ffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               (0x1feU 
                                                                & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                                   >> 2U)))))
                                                           : 0U)
                                                          : 0U))) 
                                        >> 0x20U));
    __Vtemp_h1d13a2da__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7326076__0;
    __Vtemp_h1d13a2da__0[3U] = (IData)((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h56b90ebc__0)));
    __Vtemp_h1d13a2da__0[4U] = (IData)(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h56b90ebc__0)) 
                                        >> 0x20U));
    __Vtemp_h1d13a2da__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7326076__0;
    __Vtemp_h1d13a2da__0[6U] = (IData)((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h56b90ebc__0)));
    __Vtemp_h1d13a2da__0[7U] = (IData)(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h56b90ebc__0)) 
                                        >> 0x20U));
    bufp->fullSData(oldp+374,((0x1ffU & (((0U == (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 5U)))
                                           ? 0U : (
                                                   __Vtemp_h1d13a2da__0[
                                                   (((IData)(8U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                         << 5U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                        << 5U))))) 
                                         | (__Vtemp_h1d13a2da__0[
                                            (7U & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))] 
                                            >> (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                   << 5U)))))),9);
    bufp->fullBit(oldp+375,((1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))
                                    ? ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started) 
                                       & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3))
                                    : ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))
                                        ? vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]
                                        : ((6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                           | ((~ (IData)(
                                                         (7U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))) 
                                              & ((1U 
                                                  != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                                 & ((2U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]
                                                     : 
                                                    (3U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))))))))));
    bufp->fullIData(oldp+376,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                              [(0x1feU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                          >> 2U))]),21);
    bufp->fullIData(oldp+377,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                              [(0x1ffU & ((IData)(1U) 
                                          + (0x1feU 
                                             & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                >> 2U))))]),21);
    bufp->fullBit(oldp+378,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)) 
                             & ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20)) 
                                   & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                      | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)) 
                                         & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                            & (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)))))))));
    bufp->fullBit(oldp+379,(((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                             & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20)) 
                                & ((~ ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                       & (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid))) 
                                   & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                      | (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                          & (IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)) 
                                         & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h02ae5b32__0) 
                                            | (~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3))))))))));
    bufp->fullIData(oldp+380,(((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2)
                                ? ((IData)(4U) + vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc)
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                                    ? ((IData)(4U) 
                                       + vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)
                                    : vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc))),32);
    bufp->fullQData(oldp+381,((((QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
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
    bufp->fullQData(oldp+383,(((((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
                                 & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))) 
                                & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr)))
                                ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr])),64);
    bufp->fullBit(oldp+385,(vlSelf->Soc__DOT__sram__DOT__awready));
    bufp->fullBit(oldp+386,(vlSelf->Soc__DOT__sram__DOT__wready));
    bufp->fullBit(oldp+387,(vlSelf->Soc__DOT__sram__DOT__bvalid));
    bufp->fullBit(oldp+388,(vlSelf->Soc__DOT__sram__DOT__arready));
    bufp->fullBit(oldp+389,(vlSelf->Soc__DOT__sram__DOT__rvalid));
    bufp->fullQData(oldp+390,(vlSelf->Soc__DOT__sram__DOT__rdata),64);
    bufp->fullCData(oldp+392,(vlSelf->Soc__DOT__sram__DOT__bresp),2);
    bufp->fullCData(oldp+393,(vlSelf->Soc__DOT__sram__DOT__rresp),2);
    bufp->fullIData(oldp+394,(vlSelf->Soc__DOT__sram__DOT__awaddr_buffer),32);
    bufp->fullBit(oldp+395,(vlSelf->Soc__DOT__sram__DOT__need_resp));
    bufp->fullIData(oldp+396,(vlSelf->Soc__DOT__sram__DOT__araddr),32);
    bufp->fullBit(oldp+397,(vlSelf->Soc__DOT__sram__DOT__need_read));
    bufp->fullBit(oldp+398,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN));
    bufp->fullIData(oldp+399,(vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr),32);
    bufp->fullBit(oldp+400,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1));
    bufp->fullQData(oldp+401,(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0)
                                ? 0ULL : ((1U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                           ? vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata
                                           : ((2U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                               ? ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray)
                                                   ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT___DataArray_ext_R0_data
                                                   : 0ULL)
                                               : ((4U 
                                                   & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                                   ? 
                                                  ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray)
                                                    ? vlSelf->Soc__DOT__core__DOT__Icache__DOT___DataArray_ext_R0_data
                                                    : 0ULL)
                                                   : 0ULL))))),64);
    bufp->fullCData(oldp+403,(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0)
                                ? 0U : ((1U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                         ? (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask)
                                         : ((2U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                             ? (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask)
                                             : ((4U 
                                                 & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                                 ? (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask)
                                                 : 0U))))),8);
    bufp->fullBit(oldp+404,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4));
    bufp->fullIData(oldp+405,(((1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                      | ((~ ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                >> 3U))) 
                                         | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)))))
                                ? 0U : vlSelf->Soc__DOT__core__DOT__arbitor__DOT___addr_T_6)),32);
    bufp->fullBit(oldp+406,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_5));
    bufp->fullQData(oldp+407,(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata),64);
    bufp->fullIData(oldp+409,((IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)),32);
    bufp->fullBit(oldp+410,(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16));
    bufp->fullCData(oldp+411,(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask),8);
    bufp->fullQData(oldp+412,(vlSelf->Soc__DOT__core__DOT___Dcache_io_cpu_resp_bits_data),64);
    bufp->fullQData(oldp+414,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT___DataArray_ext_R0_data
                                : 0ULL)),64);
    bufp->fullCData(oldp+416,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask),8);
    bufp->fullBit(oldp+417,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray));
    bufp->fullQData(oldp+418,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___DataArray_ext_R0_data),64);
    bufp->fullQData(oldp+420,(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data),64);
    bufp->fullQData(oldp+422,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT___DataArray_ext_R0_data
                                : 0ULL)),64);
    bufp->fullCData(oldp+424,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask),8);
    bufp->fullBit(oldp+425,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray));
    bufp->fullQData(oldp+426,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___DataArray_ext_R0_data),64);
    bufp->fullCData(oldp+428,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose),4);
    bufp->fullCData(oldp+429,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer),4);
    bufp->fullCData(oldp+430,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state),2);
    bufp->fullSData(oldp+431,(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr),12);
    bufp->fullBit(oldp+432,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)))));
    bufp->fullBit(oldp+433,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))));
    bufp->fullBit(oldp+434,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)))));
    bufp->fullCData(oldp+435,(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr),5);
    bufp->fullCData(oldp+436,(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr),5);
    bufp->fullCData(oldp+437,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_reg_waddr),5);
    bufp->fullBit(oldp+438,(((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                             & ((0x17U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                & ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                   & ((0x6fU != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                      & ((0x67U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                         & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5))))))));
    bufp->fullCData(oldp+439,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op),6);
    bufp->fullCData(oldp+440,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
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
    bufp->fullCData(oldp+441,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0)
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
    bufp->fullCData(oldp+442,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type),3);
    bufp->fullQData(oldp+443,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T),64);
    bufp->fullSData(oldp+445,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen)
                                ? (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr)
                                : 0U)),12);
    bufp->fullBit(oldp+446,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen));
    bufp->fullBit(oldp+447,(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag));
    bufp->fullIData(oldp+448,(vlSelf->Soc__DOT__core__DOT__decode__DOT__inst),32);
    bufp->fullCData(oldp+449,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type),2);
    bufp->fullCData(oldp+450,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type),2);
    bufp->fullCData(oldp+451,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type),3);
    bufp->fullCData(oldp+452,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                         ? 1U : ((0x6fU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
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
    bufp->fullCData(oldp+453,(((((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0) 
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
    bufp->fullQData(oldp+454,(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm),64);
    bufp->fullBit(oldp+456,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard));
    bufp->fullBit(oldp+457,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard));
    bufp->fullBit(oldp+458,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard));
    bufp->fullBit(oldp+459,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard));
    bufp->fullBit(oldp+460,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard));
    bufp->fullBit(oldp+461,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard));
    bufp->fullBit(oldp+462,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard));
    bufp->fullBit(oldp+463,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard));
    bufp->fullBit(oldp+464,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard));
    bufp->fullIData(oldp+465,(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc),32);
    bufp->fullBit(oldp+466,(vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen));
    bufp->fullBit(oldp+467,(((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1))));
    bufp->fullBit(oldp+468,(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid));
    bufp->fullQData(oldp+469,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data),64);
    bufp->fullBit(oldp+471,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_14));
    bufp->fullBit(oldp+472,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16));
    bufp->fullBit(oldp+473,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21));
    bufp->fullQData(oldp+474,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data),64);
    bufp->fullBit(oldp+476,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_28));
    bufp->fullBit(oldp+477,(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid));
    bufp->fullQData(oldp+478,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data),64);
    bufp->fullBit(oldp+480,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3));
    bufp->fullBit(oldp+481,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0));
    bufp->fullBit(oldp+482,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_14));
    bufp->fullBit(oldp+483,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16));
    bufp->fullBit(oldp+484,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21));
    bufp->fullQData(oldp+485,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data),64);
    bufp->fullBit(oldp+487,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_28));
    bufp->fullSData(oldp+488,((0x1feU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                         >> 2U))),9);
    bufp->fullSData(oldp+489,((0x1ffU & ((IData)(1U) 
                                         + (0x1feU 
                                            & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                               >> 2U))))),9);
    bufp->fullBit(oldp+490,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_valid));
    bufp->fullQData(oldp+491,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_bits_data),64);
    bufp->fullBit(oldp+493,(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1));
    bufp->fullBit(oldp+494,(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush));
    bufp->fullQData(oldp+495,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T),64);
    bufp->fullBit(oldp+497,(vlSelf->Soc__DOT__core__DOT___mem_io_rdata_io_valid_T));
    bufp->fullIData(oldp+498,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc),32);
    bufp->fullBit(oldp+499,(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0));
    bufp->fullBit(oldp+500,(vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall));
    bufp->fullQData(oldp+501,(vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata),64);
    bufp->fullQData(oldp+503,(vlSelf->Soc__DOT__core__DOT____Vcellinp__mem__io_rdata_io_bits_data),64);
    bufp->fullQData(oldp+505,(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value),64);
    bufp->fullBit(oldp+507,(vlSelf->clock));
    bufp->fullBit(oldp+508,(vlSelf->reset));
    bufp->fullQData(oldp+509,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard)
                                ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard)
                                    ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)
                                        ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                        : 0ULL)))),64);
    bufp->fullQData(oldp+511,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                                ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                                    ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                                        ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                        : 0ULL)))),64);
    bufp->fullQData(oldp+513,((((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                                & ((0x17U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                   & ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                      & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4)) 
                                         & ((~ (IData)(vlSelf->__VdfgTmp_ha3b20136__0)) 
                                            & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0) 
                                               | (3U 
                                                  == 
                                                  (3U 
                                                   & (- (IData)(
                                                                (0x3f3U 
                                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))))
                                ? vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm
                                : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type))
                                    ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4
                                    : (QData)((IData)(
                                                      ((1U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type))
                                                        ? vlSelf->Soc__DOT__core__DOT__fdreg_pc
                                                        : 0U)))))),64);
    bufp->fullQData(oldp+515,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T
                                : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                    ? 4ULL : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                               ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T
                                               : ((1U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                                   ? vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm
                                                   : 0ULL))))),64);
    bufp->fullBit(oldp+517,((1U & (~ ((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                                      | (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush))))));
    bufp->fullIData(oldp+518,(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                ? (vlSelf->Soc__DOT__core__DOT__fdreg_pc 
                                   + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm))
                                : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                    ? (0xfffffffeU 
                                       & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4) 
                                          + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm)))
                                    : 0x80000000U))),32);
    bufp->fullBit(oldp+519,(((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hab062043__0) 
                             & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
                                & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                                   | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_21_0)) 
                                      & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                                         | ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                                            | (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag)))))))));
    bufp->fullIData(oldp+520,((((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid))
                                ? (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)
                                : 0U)),32);
    bufp->fullBit(oldp+521,(vlSelf->Soc__DOT____Vcellinp__sram__ARESETn));
    bufp->fullIData(oldp+522,((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1) 
                                & ((IData)(vlSelf->Soc__DOT__sram__DOT__wready) 
                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN) 
                                      & (IData)(vlSelf->Soc__DOT__sram__DOT__awready))))
                                ? vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr
                                : vlSelf->Soc__DOT__sram__DOT__awaddr_buffer)),32);
    bufp->fullBit(oldp+523,(0U));
    bufp->fullBit(oldp+524,(1U));
    bufp->fullQData(oldp+525,(0ULL),64);
    bufp->fullCData(oldp+527,(0U),8);
    bufp->fullCData(oldp+528,(0U),5);
    bufp->fullCData(oldp+529,(0U),3);
}
