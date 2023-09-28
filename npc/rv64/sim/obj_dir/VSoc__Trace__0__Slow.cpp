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
    tracep->declBit(c+553,"clock", false,-1);
    tracep->declBit(c+554,"reset", false,-1);
    tracep->pushNamePrefix("Soc ");
    tracep->declBit(c+553,"clock", false,-1);
    tracep->declBit(c+554,"reset", false,-1);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+553,"clock", false,-1);
    tracep->declBit(c+554,"reset", false,-1);
    tracep->declBit(c+415,"io_AXI_Interface_aw_ready", false,-1);
    tracep->declBit(c+416,"io_AXI_Interface_w_ready", false,-1);
    tracep->declBit(c+417,"io_AXI_Interface_b_valid", false,-1);
    tracep->declBit(c+418,"io_AXI_Interface_ar_ready", false,-1);
    tracep->declBit(c+419,"io_AXI_Interface_r_valid", false,-1);
    tracep->declQuad(c+420,"io_AXI_Interface_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+428,"io_AXI_Interface_aw_valid", false,-1);
    tracep->declBus(c+429,"io_AXI_Interface_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+430,"io_AXI_Interface_w_valid", false,-1);
    tracep->declQuad(c+431,"io_AXI_Interface_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+433,"io_AXI_Interface_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+434,"io_AXI_Interface_ar_valid", false,-1);
    tracep->declBus(c+435,"io_AXI_Interface_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+436,"io_AXI_Interface_r_ready", false,-1);
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
    tracep->declQuad(c+437,"dereg_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+439,"dereg_ld_type", false,-1, 2,0);
    tracep->declQuad(c+14,"dereg_csr_t", false,-1, 63,0);
    tracep->declBus(c+16,"dereg_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+17,"dereg_csr_wen", false,-1);
    tracep->declBit(c+18,"dereg_has_inst", false,-1);
    tracep->declQuad(c+19,"emreg_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+21,"emreg_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+22,"emreg_wb_type", false,-1, 1,0);
    tracep->declBus(c+23,"emreg_ld_type", false,-1, 2,0);
    tracep->declBus(c+24,"emreg_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+25,"emreg_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+27,"emreg_csr_wen", false,-1);
    tracep->declBus(c+28,"emreg_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+29,"emreg_has_inst", false,-1);
    tracep->declQuad(c+30,"mwreg_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+32,"mwreg_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+33,"mwreg_wb_type", false,-1, 1,0);
    tracep->declQuad(c+34,"mwreg_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+36,"mwreg_csr_wen", false,-1);
    tracep->declBus(c+37,"mwreg_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+38,"mwreg_has_inst", false,-1);
    tracep->pushNamePrefix("DI ");
    tracep->declBit(c+553,"clk", false,-1);
    tracep->declBit(c+554,"rst", false,-1);
    tracep->declBus(c+523,"pc", false,-1, 31,0);
    tracep->declBit(c+39,"pc_req", false,-1);
    tracep->declBus(c+440,"inst", false,-1, 31,0);
    tracep->declBit(c+405,"inst_valid", false,-1);
    tracep->declBit(c+441,"load_use", false,-1);
    tracep->declQuad(c+2,"op_a", false,-1, 63,0);
    tracep->declQuad(c+4,"op_b", false,-1, 63,0);
    tracep->declQuad(c+40,"result", false,-1, 63,0);
    tracep->declBit(c+42,"br_yes", false,-1);
    tracep->declBit(c+365,"mem_access", false,-1);
    tracep->declQuad(c+442,"mem_addr", false,-1, 63,0);
    tracep->declBus(c+32,"rd", false,-1, 4,0);
    tracep->declQuad(c+30,"reg_wdata", false,-1, 63,0);
    tracep->declBit(c+406,"reg_wen", false,-1);
    tracep->declBit(c+524,"csr_wen", false,-1);
    tracep->declQuad(c+34,"csr_wdata", false,-1, 63,0);
    tracep->declBus(c+37,"csr_waddr", false,-1, 11,0);
    tracep->declBit(c+525,"sdb_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Dcache ");
    tracep->declBit(c+553,"clock", false,-1);
    tracep->declBit(c+554,"reset", false,-1);
    tracep->declBit(c+444,"io_cpu_req_valid", false,-1);
    tracep->declBit(c+566,"io_cpu_req_bits_inst_type", false,-1);
    tracep->declBus(c+445,"io_cpu_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+437,"io_cpu_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+446,"io_cpu_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+526,"io_axi_resp_valid", false,-1);
    tracep->declQuad(c+527,"io_axi_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+43,"io_cpu_resp_valid", false,-1);
    tracep->declQuad(c+447,"io_cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+44,"io_axi_req_valid", false,-1);
    tracep->declBit(c+45,"io_axi_req_bits_rw", false,-1);
    tracep->declBus(c+46,"io_axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+449,"io_axi_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+451,"io_axi_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+444,"io_fccache_req", false,-1);
    tracep->declBus(c+47,"io_fccache_state", false,-1, 2,0);
    tracep->declBus(c+446,"io_fccache_mask", false,-1, 7,0);
    tracep->declBit(c+452,"io_fccache_hit", false,-1);
    tracep->declBit(c+43,"io_fccache_cpu_valid", false,-1);
    tracep->declBit(c+526,"io_fccache_axi_valid", false,-1);
    tracep->declBus(c+47,"state", false,-1, 2,0);
    tracep->declBus(c+48,"tag", false,-1, 20,0);
    tracep->declBus(c+49,"index", false,-1, 7,0);
    tracep->declBus(c+50,"offset", false,-1, 2,0);
    tracep->declArray(c+51,"valid", false,-1, 511,0);
    tracep->declArray(c+67,"dirty", false,-1, 511,0);
    tracep->declArray(c+83,"replace", false,-1, 511,0);
    tracep->declBit(c+453,"hit0", false,-1);
    tracep->declBit(c+366,"hit1", false,-1);
    tracep->declQuad(c+454,"DataOneArray", false,-1, 63,0);
    tracep->declBit(c+367,"DataOneArrayRen", false,-1);
    tracep->declBus(c+368,"DataOneArrayAddr", false,-1, 31,0);
    tracep->declBit(c+456,"inDataOneArray", false,-1);
    tracep->declBit(c+99,"victim", false,-1);
    tracep->declBus(c+100,"addr", false,-1, 31,0);
    tracep->declQuad(c+101,"data", false,-1, 63,0);
    tracep->declBus(c+103,"mask", false,-1, 7,0);
    tracep->declBit(c+104,"inst_type", false,-1);
    tracep->declBit(c+105,"whitNum", false,-1);
    tracep->declBit(c+43,"cpu_resp_valid", false,-1);
    tracep->declQuad(c+106,"cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+44,"axi_req_valid", false,-1);
    tracep->declBit(c+45,"axi_req_bits_rw", false,-1);
    tracep->declBus(c+46,"axi_req_bits_addr", false,-1, 31,0);
    tracep->declBus(c+451,"axi_req_bits_mask", false,-1, 7,0);
    tracep->pushNamePrefix("DataArray_ext ");
    tracep->declBus(c+369,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+367,"R0_en", false,-1);
    tracep->declBit(c+553,"R0_clk", false,-1);
    tracep->declBus(c+108,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+529,"W0_en", false,-1);
    tracep->declBit(c+553,"W0_clk", false,-1);
    tracep->declQuad(c+527,"W0_data", false,-1, 63,0);
    tracep->declBus(c+109,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+530,"W1_en", false,-1);
    tracep->declBit(c+553,"W1_clk", false,-1);
    tracep->declQuad(c+527,"W1_data", false,-1, 63,0);
    tracep->declBus(c+108,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+110,"W2_en", false,-1);
    tracep->declBit(c+553,"W2_clk", false,-1);
    tracep->declQuad(c+111,"W2_data", false,-1, 63,0);
    tracep->declBus(c+109,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+113,"W3_en", false,-1);
    tracep->declBit(c+553,"W3_clk", false,-1);
    tracep->declQuad(c+111,"W3_data", false,-1, 63,0);
    tracep->declBus(c+108,"W4_addr", false,-1, 8,0);
    tracep->declBit(c+531,"W4_en", false,-1);
    tracep->declBit(c+553,"W4_clk", false,-1);
    tracep->declQuad(c+532,"W4_data", false,-1, 63,0);
    tracep->declBus(c+109,"W5_addr", false,-1, 8,0);
    tracep->declBit(c+534,"W5_en", false,-1);
    tracep->declBit(c+553,"W5_clk", false,-1);
    tracep->declQuad(c+532,"W5_data", false,-1, 63,0);
    tracep->declQuad(c+454,"R0_data", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("TagArray_ext ");
    tracep->declBus(c+114,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+115,"R0_en", false,-1);
    tracep->declBit(c+553,"R0_clk", false,-1);
    tracep->declBus(c+116,"R1_addr", false,-1, 8,0);
    tracep->declBit(c+117,"R1_en", false,-1);
    tracep->declBit(c+553,"R1_clk", false,-1);
    tracep->declBus(c+114,"R2_addr", false,-1, 8,0);
    tracep->declBit(c+118,"R2_en", false,-1);
    tracep->declBit(c+553,"R2_clk", false,-1);
    tracep->declBus(c+116,"R3_addr", false,-1, 8,0);
    tracep->declBit(c+119,"R3_en", false,-1);
    tracep->declBit(c+553,"R3_clk", false,-1);
    tracep->declBus(c+457,"R4_addr", false,-1, 8,0);
    tracep->declBit(c+567,"R4_en", false,-1);
    tracep->declBit(c+553,"R4_clk", false,-1);
    tracep->declBus(c+458,"R5_addr", false,-1, 8,0);
    tracep->declBit(c+567,"R5_en", false,-1);
    tracep->declBit(c+553,"R5_clk", false,-1);
    tracep->declBus(c+108,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+529,"W0_en", false,-1);
    tracep->declBit(c+553,"W0_clk", false,-1);
    tracep->declBus(c+48,"W0_data", false,-1, 20,0);
    tracep->declBus(c+109,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+530,"W1_en", false,-1);
    tracep->declBit(c+553,"W1_clk", false,-1);
    tracep->declBus(c+48,"W1_data", false,-1, 20,0);
    tracep->declBus(c+108,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+531,"W2_en", false,-1);
    tracep->declBit(c+553,"W2_clk", false,-1);
    tracep->declBus(c+48,"W2_data", false,-1, 20,0);
    tracep->declBus(c+109,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+534,"W3_en", false,-1);
    tracep->declBit(c+553,"W3_clk", false,-1);
    tracep->declBus(c+48,"W3_data", false,-1, 20,0);
    tracep->declBus(c+120,"R0_data", false,-1, 20,0);
    tracep->declBus(c+121,"R1_data", false,-1, 20,0);
    tracep->declBus(c+122,"R2_data", false,-1, 20,0);
    tracep->declBus(c+123,"R3_data", false,-1, 20,0);
    tracep->declBus(c+370,"R4_data", false,-1, 20,0);
    tracep->declBus(c+371,"R5_data", false,-1, 20,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Icache ");
    tracep->declBit(c+553,"clock", false,-1);
    tracep->declBit(c+554,"reset", false,-1);
    tracep->declBit(c+39,"io_cpu_req_valid", false,-1);
    tracep->declBit(c+567,"io_cpu_req_bits_inst_type", false,-1);
    tracep->declBus(c+523,"io_cpu_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+568,"io_cpu_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+570,"io_cpu_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+535,"io_axi_resp_valid", false,-1);
    tracep->declQuad(c+536,"io_axi_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+124,"io_cpu_resp_valid", false,-1);
    tracep->declQuad(c+459,"io_cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+125,"io_axi_req_valid", false,-1);
    tracep->declBit(c+126,"io_axi_req_bits_rw", false,-1);
    tracep->declBus(c+127,"io_axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+461,"io_axi_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+463,"io_axi_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+39,"io_fccache_req", false,-1);
    tracep->declBus(c+128,"io_fccache_state", false,-1, 2,0);
    tracep->declBus(c+570,"io_fccache_mask", false,-1, 7,0);
    tracep->declBit(c+538,"io_fccache_hit", false,-1);
    tracep->declBit(c+124,"io_fccache_cpu_valid", false,-1);
    tracep->declBit(c+535,"io_fccache_axi_valid", false,-1);
    tracep->declBus(c+128,"state", false,-1, 2,0);
    tracep->declBus(c+129,"tag", false,-1, 20,0);
    tracep->declBus(c+130,"index", false,-1, 7,0);
    tracep->declBus(c+131,"offset", false,-1, 2,0);
    tracep->declArray(c+132,"valid", false,-1, 511,0);
    tracep->declArray(c+148,"dirty", false,-1, 511,0);
    tracep->declArray(c+164,"replace", false,-1, 511,0);
    tracep->declBit(c+539,"hit0", false,-1);
    tracep->declBit(c+407,"hit1", false,-1);
    tracep->declQuad(c+464,"DataOneArray", false,-1, 63,0);
    tracep->declBit(c+408,"DataOneArrayRen", false,-1);
    tracep->declBus(c+409,"DataOneArrayAddr", false,-1, 31,0);
    tracep->declBit(c+466,"inDataOneArray", false,-1);
    tracep->declBit(c+180,"victim", false,-1);
    tracep->declBus(c+181,"addr", false,-1, 31,0);
    tracep->declQuad(c+182,"data", false,-1, 63,0);
    tracep->declBus(c+184,"mask", false,-1, 7,0);
    tracep->declBit(c+185,"inst_type", false,-1);
    tracep->declBit(c+186,"whitNum", false,-1);
    tracep->declBit(c+124,"cpu_resp_valid", false,-1);
    tracep->declQuad(c+187,"cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+125,"axi_req_valid", false,-1);
    tracep->declBit(c+126,"axi_req_bits_rw", false,-1);
    tracep->declBus(c+127,"axi_req_bits_addr", false,-1, 31,0);
    tracep->declBus(c+463,"axi_req_bits_mask", false,-1, 7,0);
    tracep->pushNamePrefix("DataArray_ext ");
    tracep->declBus(c+410,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+408,"R0_en", false,-1);
    tracep->declBit(c+553,"R0_clk", false,-1);
    tracep->declBus(c+189,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+540,"W0_en", false,-1);
    tracep->declBit(c+553,"W0_clk", false,-1);
    tracep->declQuad(c+536,"W0_data", false,-1, 63,0);
    tracep->declBus(c+190,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+541,"W1_en", false,-1);
    tracep->declBit(c+553,"W1_clk", false,-1);
    tracep->declQuad(c+536,"W1_data", false,-1, 63,0);
    tracep->declBus(c+189,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+191,"W2_en", false,-1);
    tracep->declBit(c+553,"W2_clk", false,-1);
    tracep->declQuad(c+192,"W2_data", false,-1, 63,0);
    tracep->declBus(c+190,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+194,"W3_en", false,-1);
    tracep->declBit(c+553,"W3_clk", false,-1);
    tracep->declQuad(c+192,"W3_data", false,-1, 63,0);
    tracep->declBus(c+189,"W4_addr", false,-1, 8,0);
    tracep->declBit(c+542,"W4_en", false,-1);
    tracep->declBit(c+553,"W4_clk", false,-1);
    tracep->declQuad(c+543,"W4_data", false,-1, 63,0);
    tracep->declBus(c+190,"W5_addr", false,-1, 8,0);
    tracep->declBit(c+545,"W5_en", false,-1);
    tracep->declBit(c+553,"W5_clk", false,-1);
    tracep->declQuad(c+543,"W5_data", false,-1, 63,0);
    tracep->declQuad(c+464,"R0_data", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("TagArray_ext ");
    tracep->declBus(c+195,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+196,"R0_en", false,-1);
    tracep->declBit(c+553,"R0_clk", false,-1);
    tracep->declBus(c+197,"R1_addr", false,-1, 8,0);
    tracep->declBit(c+198,"R1_en", false,-1);
    tracep->declBit(c+553,"R1_clk", false,-1);
    tracep->declBus(c+195,"R2_addr", false,-1, 8,0);
    tracep->declBit(c+199,"R2_en", false,-1);
    tracep->declBit(c+553,"R2_clk", false,-1);
    tracep->declBus(c+197,"R3_addr", false,-1, 8,0);
    tracep->declBit(c+200,"R3_en", false,-1);
    tracep->declBit(c+553,"R3_clk", false,-1);
    tracep->declBus(c+546,"R4_addr", false,-1, 8,0);
    tracep->declBit(c+567,"R4_en", false,-1);
    tracep->declBit(c+553,"R4_clk", false,-1);
    tracep->declBus(c+547,"R5_addr", false,-1, 8,0);
    tracep->declBit(c+567,"R5_en", false,-1);
    tracep->declBit(c+553,"R5_clk", false,-1);
    tracep->declBus(c+189,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+540,"W0_en", false,-1);
    tracep->declBit(c+553,"W0_clk", false,-1);
    tracep->declBus(c+129,"W0_data", false,-1, 20,0);
    tracep->declBus(c+190,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+541,"W1_en", false,-1);
    tracep->declBit(c+553,"W1_clk", false,-1);
    tracep->declBus(c+129,"W1_data", false,-1, 20,0);
    tracep->declBus(c+189,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+542,"W2_en", false,-1);
    tracep->declBit(c+553,"W2_clk", false,-1);
    tracep->declBus(c+129,"W2_data", false,-1, 20,0);
    tracep->declBus(c+190,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+545,"W3_en", false,-1);
    tracep->declBit(c+553,"W3_clk", false,-1);
    tracep->declBus(c+129,"W3_data", false,-1, 20,0);
    tracep->declBus(c+201,"R0_data", false,-1, 20,0);
    tracep->declBus(c+202,"R1_data", false,-1, 20,0);
    tracep->declBus(c+203,"R2_data", false,-1, 20,0);
    tracep->declBus(c+204,"R3_data", false,-1, 20,0);
    tracep->declBus(c+411,"R4_data", false,-1, 20,0);
    tracep->declBus(c+412,"R5_data", false,-1, 20,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("arbitor ");
    tracep->declBit(c+553,"clock", false,-1);
    tracep->declBit(c+554,"reset", false,-1);
    tracep->declBit(c+555,"io_master0_req_valid", false,-1);
    tracep->declBit(c+467,"io_master0_req_bits_rw", false,-1);
    tracep->declBus(c+468,"io_master0_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+469,"io_master0_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+471,"io_master0_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+44,"io_master1_req_valid", false,-1);
    tracep->declBit(c+45,"io_master1_req_bits_rw", false,-1);
    tracep->declBus(c+46,"io_master1_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+449,"io_master1_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+451,"io_master1_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+125,"io_master2_req_valid", false,-1);
    tracep->declBit(c+126,"io_master2_req_bits_rw", false,-1);
    tracep->declBus(c+127,"io_master2_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+461,"io_master2_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+463,"io_master2_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+415,"io_AXI_O_aw_ready", false,-1);
    tracep->declBit(c+416,"io_AXI_O_w_ready", false,-1);
    tracep->declBit(c+417,"io_AXI_O_b_valid", false,-1);
    tracep->declBit(c+418,"io_AXI_O_ar_ready", false,-1);
    tracep->declBit(c+419,"io_AXI_O_r_valid", false,-1);
    tracep->declQuad(c+420,"io_AXI_O_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+548,"io_master0_resp_valid", false,-1);
    tracep->declQuad(c+556,"io_master0_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+526,"io_master1_resp_valid", false,-1);
    tracep->declQuad(c+527,"io_master1_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+535,"io_master2_resp_valid", false,-1);
    tracep->declQuad(c+536,"io_master2_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+428,"io_AXI_O_aw_valid", false,-1);
    tracep->declBus(c+429,"io_AXI_O_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+430,"io_AXI_O_w_valid", false,-1);
    tracep->declQuad(c+431,"io_AXI_O_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+433,"io_AXI_O_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+434,"io_AXI_O_ar_valid", false,-1);
    tracep->declBus(c+435,"io_AXI_O_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+436,"io_AXI_O_r_ready", false,-1);
    tracep->declBus(c+549,"master_choose", false,-1, 3,0);
    tracep->declBus(c+472,"choose_buffer", false,-1, 3,0);
    tracep->declBus(c+473,"state", false,-1, 1,0);
    tracep->declBit(c+205,"aw_comp", false,-1);
    tracep->declBit(c+206,"w_comp", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("clint ");
    tracep->declBit(c+553,"clock", false,-1);
    tracep->declBit(c+554,"reset", false,-1);
    tracep->declBit(c+474,"io_clex_valid", false,-1);
    tracep->declBus(c+439,"io_clex_ld_type", false,-1, 2,0);
    tracep->declQuad(c+207,"io_clex_raddr", false,-1, 63,0);
    tracep->declBus(c+13,"io_clex_sd_type", false,-1, 2,0);
    tracep->declQuad(c+207,"io_clex_waddr", false,-1, 63,0);
    tracep->declBus(c+446,"io_clex_wmask", false,-1, 7,0);
    tracep->declQuad(c+437,"io_clex_wdata", false,-1, 63,0);
    tracep->declBit(c+209,"io_clmem_Clrvalue_valid", false,-1);
    tracep->declQuad(c+210,"io_clmem_Clrvalue_bits", false,-1, 63,0);
    tracep->declBit(c+212,"io_timer_int", false,-1);
    tracep->declBus(c+213,"MSIP", false,-1, 31,0);
    tracep->declQuad(c+214,"MTIMECMP", false,-1, 63,0);
    tracep->declQuad(c+216,"MTIME", false,-1, 63,0);
    tracep->declQuad(c+210,"rvalue_buf", false,-1, 63,0);
    tracep->declBit(c+209,"valid_buf", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csrs ");
    tracep->declBit(c+553,"clock", false,-1);
    tracep->declBit(c+554,"reset", false,-1);
    tracep->declBus(c+475,"io_CSRDe_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+37,"io_CSRWb_rd", false,-1, 11,0);
    tracep->declBit(c+524,"io_CSRWb_csr_wen", false,-1);
    tracep->declQuad(c+34,"io_CSRWb_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+218,"io_CSRTr_rd", false,-1, 11,0);
    tracep->declBit(c+219,"io_CSRTr_csr_wen", false,-1);
    tracep->declQuad(c+220,"io_CSRTr_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+212,"io_timer_int", false,-1);
    tracep->declQuad(c+372,"io_CSRDe_csr_rdata", false,-1, 63,0);
    tracep->declQuad(c+222,"io_CSRTr_MTVEC", false,-1, 63,0);
    tracep->declQuad(c+224,"io_CSRTr_MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+226,"io_CSRTr_MEPC", false,-1, 63,0);
    tracep->declQuad(c+228,"io_CSRTr_MIE", false,-1, 63,0);
    tracep->declQuad(c+230,"io_CSRTr_MIP", false,-1, 63,0);
    tracep->declQuad(c+232,"io_CSRTr_MSTATUS", false,-1, 63,0);
    tracep->declQuad(c+222,"MTVEC", false,-1, 63,0);
    tracep->declQuad(c+224,"MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+226,"MEPC", false,-1, 63,0);
    tracep->declQuad(c+228,"MIE", false,-1, 63,0);
    tracep->declQuad(c+230,"MIP", false,-1, 63,0);
    tracep->declQuad(c+232,"MSTATUS", false,-1, 63,0);
    tracep->declQuad(c+234,"MSCRATCH", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("decode ");
    tracep->declBit(c+553,"clock", false,-1);
    tracep->declBit(c+554,"reset", false,-1);
    tracep->declBit(c+124,"io_inst_valid", false,-1);
    tracep->declQuad(c+459,"io_inst_bits_data", false,-1, 63,0);
    tracep->declBus(c+1,"io_fdio_pc", false,-1, 31,0);
    tracep->declQuad(c+374,"io_rfio_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+376,"io_rfio_reg2_rdata", false,-1, 63,0);
    tracep->declBit(c+42,"io_branch", false,-1);
    tracep->declBit(c+550,"io_stall", false,-1);
    tracep->declBit(c+551,"io_flush", false,-1);
    tracep->declBit(c+476,"io_fwde_fw_sel1", false,-1);
    tracep->declBit(c+477,"io_fwde_fw_sel2", false,-1);
    tracep->declQuad(c+378,"io_fwde_fw_data1", false,-1, 63,0);
    tracep->declQuad(c+380,"io_fwde_fw_data2", false,-1, 63,0);
    tracep->declBit(c+478,"io_fwde_csr_fw_sel", false,-1);
    tracep->declQuad(c+382,"io_fwde_csr_fw_data", false,-1, 63,0);
    tracep->declQuad(c+372,"io_csrs_csr_rdata", false,-1, 63,0);
    tracep->declBus(c+479,"io_rfio_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+480,"io_rfio_reg2_raddr", false,-1, 4,0);
    tracep->declQuad(c+384,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+481,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+483,"io_deio_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+484,"io_deio_branch_type", false,-1);
    tracep->declQuad(c+386,"io_deio_branch_addr", false,-1, 63,0);
    tracep->declBus(c+485,"io_deio_alu_op", false,-1, 5,0);
    tracep->declBus(c+388,"io_deio_shamt", false,-1, 5,0);
    tracep->declBus(c+486,"io_deio_wb_type", false,-1, 1,0);
    tracep->declBus(c+487,"io_deio_sd_type", false,-1, 2,0);
    tracep->declQuad(c+488,"io_deio_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+490,"io_deio_ld_type", false,-1, 2,0);
    tracep->declQuad(c+491,"io_deio_csr_t", false,-1, 63,0);
    tracep->declBus(c+493,"io_deio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+494,"io_deio_csr_wen", false,-1);
    tracep->declBit(c+558,"io_deio_has_inst", false,-1);
    tracep->declBit(c+495,"io_jump_flag", false,-1);
    tracep->declBus(c+389,"io_jump_pc", false,-1, 31,0);
    tracep->declBit(c+441,"io_load_use", false,-1);
    tracep->declBus(c+479,"io_fwde_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+480,"io_fwde_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+475,"io_fwde_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+475,"io_csrs_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+496,"inst", false,-1, 31,0);
    tracep->declBus(c+236,"lu_rd", false,-1, 4,0);
    tracep->pushNamePrefix("cu ");
    tracep->declBus(c+496,"io_inst", false,-1, 31,0);
    tracep->declBus(c+497,"io_jump_type", false,-1, 1,0);
    tracep->declBit(c+484,"io_branch_type", false,-1);
    tracep->declBus(c+498,"io_opa_type", false,-1, 1,0);
    tracep->declBus(c+499,"io_opb_type", false,-1, 2,0);
    tracep->declBus(c+500,"io_imm_type", false,-1, 2,0);
    tracep->declBus(c+485,"io_alu_op", false,-1, 5,0);
    tracep->declBus(c+486,"io_wb_type", false,-1, 1,0);
    tracep->declBus(c+487,"io_sd_type", false,-1, 2,0);
    tracep->declBus(c+490,"io_ld_type", false,-1, 2,0);
    tracep->declBus(c+501,"io_csr_type", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("eximm ");
    tracep->declBus(c+496,"io_inst", false,-1, 31,0);
    tracep->declBus(c+500,"io_imm_type", false,-1, 2,0);
    tracep->declQuad(c+502,"io_eximm", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("excute ");
    tracep->declBit(c+553,"clock", false,-1);
    tracep->declBit(c+554,"reset", false,-1);
    tracep->declQuad(c+2,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+4,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+6,"io_deio_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+7,"io_deio_branch_type", false,-1);
    tracep->declQuad(c+8,"io_deio_branch_addr", false,-1, 63,0);
    tracep->declBus(c+10,"io_deio_alu_op", false,-1, 5,0);
    tracep->declBus(c+11,"io_deio_shamt", false,-1, 5,0);
    tracep->declBus(c+12,"io_deio_wb_type", false,-1, 1,0);
    tracep->declBus(c+13,"io_deio_sd_type", false,-1, 2,0);
    tracep->declQuad(c+437,"io_deio_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+439,"io_deio_ld_type", false,-1, 2,0);
    tracep->declQuad(c+14,"io_deio_csr_t", false,-1, 63,0);
    tracep->declBus(c+16,"io_deio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+17,"io_deio_csr_wen", false,-1);
    tracep->declBit(c+18,"io_deio_has_inst", false,-1);
    tracep->declBit(c+550,"io_fcex_stall", false,-1);
    tracep->declQuad(c+40,"io_emio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+6,"io_emio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+12,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+439,"io_emio_ld_type", false,-1, 2,0);
    tracep->declBus(c+390,"io_emio_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+207,"io_emio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+17,"io_emio_csr_wen", false,-1);
    tracep->declBus(c+16,"io_emio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+18,"io_emio_has_inst", false,-1);
    tracep->declBit(c+42,"io_fcex_jump_flag", false,-1);
    tracep->declBus(c+237,"io_fcex_jump_pc", false,-1, 31,0);
    tracep->declBit(c+238,"io_fcex_mul_div", false,-1);
    tracep->declBit(c+239,"io_fcex_mul_div_valid", false,-1);
    tracep->declQuad(c+391,"io_raddr", false,-1, 63,0);
    tracep->declQuad(c+393,"io_waddr", false,-1, 63,0);
    tracep->declQuad(c+437,"io_wdata", false,-1, 63,0);
    tracep->declBus(c+446,"io_wmask", false,-1, 7,0);
    tracep->declBit(c+474,"io_cl_type", false,-1);
    tracep->declBus(c+6,"io_fwex_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+240,"io_fwex_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+242,"io_fwex_reg_we", false,-1);
    tracep->declQuad(c+207,"io_fwex_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+17,"io_fwex_csr_wen", false,-1);
    tracep->declBus(c+16,"io_fwex_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+474,"io_clex_valid", false,-1);
    tracep->declBus(c+439,"io_clex_ld_type", false,-1, 2,0);
    tracep->declQuad(c+207,"io_clex_raddr", false,-1, 63,0);
    tracep->declBus(c+13,"io_clex_sd_type", false,-1, 2,0);
    tracep->declQuad(c+207,"io_clex_waddr", false,-1, 63,0);
    tracep->declBus(c+446,"io_clex_wmask", false,-1, 7,0);
    tracep->declQuad(c+437,"io_clex_wdata", false,-1, 63,0);
    tracep->declBit(c+243,"aluvalid_buffer", false,-1);
    tracep->declQuad(c+244,"alu_buffer", false,-1, 63,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+553,"clock", false,-1);
    tracep->declBit(c+554,"reset", false,-1);
    tracep->declQuad(c+2,"io_op_a", false,-1, 63,0);
    tracep->declQuad(c+4,"io_op_b", false,-1, 63,0);
    tracep->declBus(c+10,"io_alu_op", false,-1, 5,0);
    tracep->declBus(c+11,"io_shamt", false,-1, 5,0);
    tracep->declQuad(c+207,"io_result", false,-1, 63,0);
    tracep->declBit(c+239,"io_mul_div_outvalid", false,-1);
    tracep->pushNamePrefix("BM ");
    tracep->declBit(c+553,"clock", false,-1);
    tracep->declBit(c+554,"reset", false,-1);
    tracep->declBit(c+246,"io_mul_valid", false,-1);
    tracep->declBit(c+247,"io_mulw", false,-1);
    tracep->declBus(c+248,"io_mul_signed", false,-1, 1,0);
    tracep->declQuad(c+249,"io_multiplicand", false,-1, 63,0);
    tracep->declQuad(c+251,"io_multiplier", false,-1, 63,0);
    tracep->declBit(c+239,"io_out_valid", false,-1);
    tracep->declQuad(c+253,"io_result_hi", false,-1, 63,0);
    tracep->declQuad(c+255,"io_result_lo", false,-1, 63,0);
    tracep->declBit(c+239,"out_valid", false,-1);
    tracep->declQuad(c+253,"result_hi", false,-1, 63,0);
    tracep->declQuad(c+255,"result_lo", false,-1, 63,0);
    tracep->declArray(c+257,"multiplierReg", false,-1, 66,0);
    tracep->declArray(c+260,"multiplicandReg", false,-1, 131,0);
    tracep->declArray(c+265,"resultReg", false,-1, 131,0);
    tracep->declBit(c+270,"state", false,-1);
    tracep->declBus(c+271,"shiftCounter", false,-1, 5,0);
    tracep->declBus(c+272,"total", false,-1, 5,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fc ");
    tracep->declBit(c+495,"io_fcde_jump_flag", false,-1);
    tracep->declBus(c+389,"io_fcde_jump_pc", false,-1, 31,0);
    tracep->declBit(c+441,"io_fcde_load_use", false,-1);
    tracep->declBit(c+42,"io_fcex_jump_flag", false,-1);
    tracep->declBus(c+237,"io_fcex_jump_pc", false,-1, 31,0);
    tracep->declBit(c+238,"io_fcex_mul_div", false,-1);
    tracep->declBit(c+239,"io_fcex_mul_div_valid", false,-1);
    tracep->declBit(c+395,"io_fctr_pop_NOP", false,-1);
    tracep->declBus(c+273,"io_fctr_trap_state", false,-1, 2,0);
    tracep->declBit(c+274,"io_fctr_jump_flag", false,-1);
    tracep->declBus(c+275,"io_fctr_jump_pc", false,-1, 31,0);
    tracep->declBit(c+39,"io_fcIcache_req", false,-1);
    tracep->declBus(c+128,"io_fcIcache_state", false,-1, 2,0);
    tracep->declBus(c+570,"io_fcIcache_mask", false,-1, 7,0);
    tracep->declBit(c+124,"io_fcIcache_cpu_valid", false,-1);
    tracep->declBit(c+535,"io_fcIcache_axi_valid", false,-1);
    tracep->declBit(c+444,"io_fcDcache_req", false,-1);
    tracep->declBus(c+47,"io_fcDcache_state", false,-1, 2,0);
    tracep->declBus(c+446,"io_fcDcache_mask", false,-1, 7,0);
    tracep->declBit(c+452,"io_fcDcache_hit", false,-1);
    tracep->declBit(c+526,"io_fcDcache_axi_valid", false,-1);
    tracep->declBit(c+504,"io_fcio_req", false,-1);
    tracep->declBus(c+505,"io_fcio_state", false,-1, 1,0);
    tracep->declBit(c+396,"io_fcfe_jump_flag", false,-1);
    tracep->declBus(c+506,"io_fcfe_jump_pc", false,-1, 31,0);
    tracep->declBit(c+559,"io_fcfe_flush", false,-1);
    tracep->declBit(c+552,"io_fcfe_stall", false,-1);
    tracep->declBit(c+551,"io_fcde_flush", false,-1);
    tracep->declBit(c+550,"io_fcde_stall", false,-1);
    tracep->declBit(c+550,"io_fcex_stall", false,-1);
    tracep->declBit(c+550,"io_fcmem_stall", false,-1);
    tracep->declBit(c+550,"io_fcwb_stall", false,-1);
    tracep->declBit(c+550,"io_fcio_stall", false,-1);
    tracep->declBit(c+525,"io_sdb_stall", false,-1);
    tracep->declBit(c+560,"Icache_stall", false,-1);
    tracep->declBit(c+561,"Dcache_stall", false,-1);
    tracep->declBit(c+507,"IO_stall", false,-1);
    tracep->declBit(c+276,"MULDIV_stall", false,-1);
    tracep->declBit(c+552,"SFBundle_0", false,-1);
    tracep->declBit(c+550,"SFBundle_1", false,-1);
    tracep->declBit(c+550,"SFBundle_2", false,-1);
    tracep->declBit(c+550,"SFBundle_4", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+553,"clock", false,-1);
    tracep->declBit(c+554,"reset", false,-1);
    tracep->declBit(c+396,"io_fcfe_jump_flag", false,-1);
    tracep->declBus(c+506,"io_fcfe_jump_pc", false,-1, 31,0);
    tracep->declBit(c+559,"io_fcfe_flush", false,-1);
    tracep->declBit(c+552,"io_fcfe_stall", false,-1);
    tracep->declBus(c+523,"io_fdio_pc", false,-1, 31,0);
    tracep->declBit(c+39,"io_pc_valid", false,-1);
    tracep->declBus(c+523,"io_pc_bits", false,-1, 31,0);
    tracep->declBit(c+39,"started", false,-1);
    tracep->declBus(c+277,"pc", false,-1, 31,0);
    tracep->declBus(c+278,"old_pc", false,-1, 31,0);
    tracep->declBus(c+562,"next_pc", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fw ");
    tracep->declBus(c+479,"io_fwde_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+480,"io_fwde_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+475,"io_fwde_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+6,"io_fwex_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+240,"io_fwex_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+242,"io_fwex_reg_we", false,-1);
    tracep->declQuad(c+207,"io_fwex_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+17,"io_fwex_csr_wen", false,-1);
    tracep->declBus(c+16,"io_fwex_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+21,"io_fwmem_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+508,"io_fwmem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+279,"io_fwmem_reg_we", false,-1);
    tracep->declQuad(c+25,"io_fwmem_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+27,"io_fwmem_csr_wen", false,-1);
    tracep->declBus(c+28,"io_fwmem_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+32,"io_fwwb_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+30,"io_fwwb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+280,"io_fwwb_reg_we", false,-1);
    tracep->declQuad(c+34,"io_fwwb_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+36,"io_fwwb_csr_wen", false,-1);
    tracep->declBus(c+37,"io_fwwb_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+476,"io_fwde_fw_sel1", false,-1);
    tracep->declBit(c+477,"io_fwde_fw_sel2", false,-1);
    tracep->declQuad(c+378,"io_fwde_fw_data1", false,-1, 63,0);
    tracep->declQuad(c+380,"io_fwde_fw_data2", false,-1, 63,0);
    tracep->declBit(c+478,"io_fwde_csr_fw_sel", false,-1);
    tracep->declQuad(c+382,"io_fwde_csr_fw_data", false,-1, 63,0);
    tracep->declBit(c+510,"reg1_ex_hazard", false,-1);
    tracep->declBit(c+511,"reg2_ex_hazard", false,-1);
    tracep->declBit(c+512,"reg1_mem_hazard", false,-1);
    tracep->declBit(c+513,"reg2_mem_hazard", false,-1);
    tracep->declBit(c+514,"reg1_wb_hazard", false,-1);
    tracep->declBit(c+515,"reg2_wb_hazard", false,-1);
    tracep->declBit(c+516,"csr_ex_harzard", false,-1);
    tracep->declBit(c+517,"csr_mem_harzard", false,-1);
    tracep->declBit(c+518,"csr_wb_harzard", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("interact ");
    tracep->declBus(c+563,"inst", false,-1, 31,0);
    tracep->declBit(c+553,"clk", false,-1);
    tracep->declBit(c+554,"rst", false,-1);
    tracep->declBit(c+281,"ebreak_flag", false,-1);
    tracep->declBus(c+282,"over_count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ioformem ");
    tracep->declBit(c+553,"clock", false,-1);
    tracep->declBit(c+554,"reset", false,-1);
    tracep->declBit(c+548,"io_axi_resp_valid", false,-1);
    tracep->declQuad(c+556,"io_axi_resp_bits_data", false,-1, 63,0);
    tracep->declBus(c+397,"io_excute_waddr", false,-1, 31,0);
    tracep->declBus(c+398,"io_excute_raddr", false,-1, 31,0);
    tracep->declQuad(c+437,"io_excute_wdata", false,-1, 63,0);
    tracep->declBus(c+446,"io_excute_wmask", false,-1, 7,0);
    tracep->declBit(c+519,"io_excute_load", false,-1);
    tracep->declBit(c+283,"io_excute_store", false,-1);
    tracep->declBit(c+550,"io_fc_stall", false,-1);
    tracep->declBit(c+555,"io_axi_req_valid", false,-1);
    tracep->declBit(c+467,"io_axi_req_bits_rw", false,-1);
    tracep->declBus(c+468,"io_axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+469,"io_axi_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+471,"io_axi_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+284,"io_mem_data_valid", false,-1);
    tracep->declQuad(c+285,"io_mem_data_bits", false,-1, 63,0);
    tracep->declBit(c+504,"io_fc_req", false,-1);
    tracep->declBus(c+505,"io_fc_state", false,-1, 1,0);
    tracep->declBus(c+505,"state", false,-1, 1,0);
    tracep->declBit(c+520,"axi_req_valid", false,-1);
    tracep->declBit(c+467,"axi_req_bits_rw", false,-1);
    tracep->declBus(c+468,"axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+469,"axi_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+471,"axi_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+284,"mem_data_valid", false,-1);
    tracep->declQuad(c+285,"mem_data_bits", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+553,"clock", false,-1);
    tracep->declBit(c+554,"reset", false,-1);
    tracep->declQuad(c+19,"io_emio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+21,"io_emio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+22,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+23,"io_emio_ld_type", false,-1, 2,0);
    tracep->declBus(c+24,"io_emio_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+25,"io_emio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+27,"io_emio_csr_wen", false,-1);
    tracep->declBus(c+28,"io_emio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+29,"io_emio_has_inst", false,-1);
    tracep->declBit(c+43,"io_rdata_valid", false,-1);
    tracep->declQuad(c+447,"io_rdata_bits_data", false,-1, 63,0);
    tracep->declBit(c+284,"io_rdata_io_data_valid", false,-1);
    tracep->declQuad(c+285,"io_rdata_io_data_bits", false,-1, 63,0);
    tracep->declBit(c+209,"io_clmem_Clrvalue_valid", false,-1);
    tracep->declQuad(c+210,"io_clmem_Clrvalue_bits", false,-1, 63,0);
    tracep->declBit(c+550,"io_stall", false,-1);
    tracep->declQuad(c+508,"io_mwio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+21,"io_mwio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+22,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declQuad(c+25,"io_mwio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+27,"io_mwio_csr_wen", false,-1);
    tracep->declBus(c+28,"io_mwio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+29,"io_mwio_has_inst", false,-1);
    tracep->declBus(c+21,"io_fwmem_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+508,"io_fwmem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+279,"io_fwmem_reg_we", false,-1);
    tracep->declQuad(c+25,"io_fwmem_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+27,"io_fwmem_csr_wen", false,-1);
    tracep->declBus(c+28,"io_fwmem_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+287,"clmemvalid_buffer", false,-1);
    tracep->declBit(c+288,"rdatavalid_buffer", false,-1);
    tracep->declBit(c+289,"rdataiovalid_buffer", false,-1);
    tracep->declQuad(c+290,"clmem_buffer", false,-1, 63,0);
    tracep->declQuad(c+292,"rdata_buffer", false,-1, 63,0);
    tracep->declQuad(c+294,"rdataio_buffer", false,-1, 63,0);
    tracep->declQuad(c+521,"get_value", false,-1, 63,0);
    tracep->declQuad(c+399,"rvalue", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+553,"clock", false,-1);
    tracep->declBus(c+479,"io_RfDe_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+480,"io_RfDe_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+32,"io_RfWb_rd", false,-1, 4,0);
    tracep->declBit(c+406,"io_RfWb_reg_wen", false,-1);
    tracep->declQuad(c+30,"io_RfWb_reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+374,"io_RfDe_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+376,"io_RfDe_reg2_rdata", false,-1, 63,0);
    tracep->pushNamePrefix("regs_ext ");
    tracep->declBus(c+32,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+567,"R0_en", false,-1);
    tracep->declBit(c+553,"R0_clk", false,-1);
    tracep->declBus(c+479,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+567,"R1_en", false,-1);
    tracep->declBit(c+553,"R1_clk", false,-1);
    tracep->declBus(c+480,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+567,"R2_en", false,-1);
    tracep->declBit(c+553,"R2_clk", false,-1);
    tracep->declBus(c+571,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+567,"W0_en", false,-1);
    tracep->declBit(c+553,"W0_clk", false,-1);
    tracep->declQuad(c+568,"W0_data", false,-1, 63,0);
    tracep->declBus(c+32,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+567,"W1_en", false,-1);
    tracep->declBit(c+553,"W1_clk", false,-1);
    tracep->declQuad(c+413,"W1_data", false,-1, 63,0);
    tracep->declQuad(c+296,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+401,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+403,"R2_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+298+i*2,"Memory", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("trap ");
    tracep->declBit(c+553,"clock", false,-1);
    tracep->declBit(c+554,"reset", false,-1);
    tracep->declBit(c+18,"io_ex_hasinst", false,-1);
    tracep->declBit(c+29,"io_mem_hasinst", false,-1);
    tracep->declBit(c+38,"io_wb_hasinst", false,-1);
    tracep->declQuad(c+222,"io_csrtr_MTVEC", false,-1, 63,0);
    tracep->declQuad(c+224,"io_csrtr_MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+226,"io_csrtr_MEPC", false,-1, 63,0);
    tracep->declQuad(c+228,"io_csrtr_MIE", false,-1, 63,0);
    tracep->declQuad(c+230,"io_csrtr_MIP", false,-1, 63,0);
    tracep->declQuad(c+232,"io_csrtr_MSTATUS", false,-1, 63,0);
    tracep->declBus(c+440,"io_inst", false,-1, 31,0);
    tracep->declBus(c+523,"io_pc", false,-1, 31,0);
    tracep->declBus(c+218,"io_csrtr_rd", false,-1, 11,0);
    tracep->declBit(c+219,"io_csrtr_csr_wen", false,-1);
    tracep->declQuad(c+220,"io_csrtr_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+395,"io_fctr_pop_NOP", false,-1);
    tracep->declBus(c+273,"io_fctr_trap_state", false,-1, 2,0);
    tracep->declBit(c+274,"io_fctr_jump_flag", false,-1);
    tracep->declBus(c+275,"io_fctr_jump_pc", false,-1, 31,0);
    tracep->declQuad(c+362,"cause", false,-1, 63,0);
    tracep->declBus(c+364,"pc", false,-1, 31,0);
    tracep->declBus(c+273,"state", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb ");
    tracep->declQuad(c+30,"io_mwio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+32,"io_mwio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+33,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declQuad(c+34,"io_mwio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+36,"io_mwio_csr_wen", false,-1);
    tracep->declBus(c+37,"io_mwio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+38,"io_mwio_has_inst", false,-1);
    tracep->declBit(c+550,"io_stall", false,-1);
    tracep->declBus(c+32,"io_rfio_rd", false,-1, 4,0);
    tracep->declBit(c+406,"io_rfio_reg_wen", false,-1);
    tracep->declQuad(c+30,"io_rfio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+32,"io_fwwb_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+30,"io_fwwb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+280,"io_fwwb_reg_we", false,-1);
    tracep->declQuad(c+34,"io_fwwb_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+36,"io_fwwb_csr_wen", false,-1);
    tracep->declBus(c+37,"io_fwwb_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+37,"io_csrs_rd", false,-1, 11,0);
    tracep->declBit(c+524,"io_csrs_csr_wen", false,-1);
    tracep->declQuad(c+34,"io_csrs_csr_wdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+553,"ACLK", false,-1);
    tracep->declBit(c+564,"ARESETn", false,-1);
    tracep->declBus(c+429,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+572,"S_AXI_AWPROT", false,-1, 2,0);
    tracep->declBit(c+428,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+415,"S_AXI_AWREADY", false,-1);
    tracep->declQuad(c+431,"S_AXI_WDATA", false,-1, 63,0);
    tracep->declBus(c+433,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+430,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+416,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+422,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+417,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+567,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+435,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+572,"S_AXI_ARPROT", false,-1, 2,0);
    tracep->declBit(c+434,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+418,"S_AXI_ARREADY", false,-1);
    tracep->declQuad(c+420,"S_AXI_RDATA", false,-1, 63,0);
    tracep->declBus(c+423,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+419,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+436,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+415,"awready", false,-1);
    tracep->declBit(c+416,"wready", false,-1);
    tracep->declBus(c+422,"bresp", false,-1, 1,0);
    tracep->declBit(c+417,"bvalid", false,-1);
    tracep->declBit(c+418,"arready", false,-1);
    tracep->declQuad(c+420,"rdata", false,-1, 63,0);
    tracep->declBus(c+423,"rresp", false,-1, 1,0);
    tracep->declBit(c+419,"rvalid", false,-1);
    tracep->declBus(c+424,"awaddr_buffer", false,-1, 31,0);
    tracep->declBus(c+565,"awaddr", false,-1, 31,0);
    tracep->declBit(c+425,"need_resp", false,-1);
    tracep->declBus(c+426,"araddr", false,-1, 31,0);
    tracep->declBit(c+427,"need_read", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp_h5ee83ed9__0;
    VlWide<16>/*511:0*/ __Vtemp_h773c399d__0;
    VlWide<8>/*255:0*/ __Vtemp_hb99da695__0;
    VlWide<8>/*255:0*/ __Vtemp_hff88a999__0;
    VlWide<16>/*511:0*/ __Vtemp_hc4bbf11d__0;
    VlWide<8>/*255:0*/ __Vtemp_h1d13a2da__0;
    VlWide<8>/*255:0*/ __Vtemp_hf821f428__0;
    VlWide<8>/*255:0*/ __Vtemp_h554321c1__0;
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
    bufp->fullQData(oldp+14,(vlSelf->Soc__DOT__core__DOT__dereg_csr_t),64);
    bufp->fullSData(oldp+16,(vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr),12);
    bufp->fullBit(oldp+17,(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen));
    bufp->fullBit(oldp+18,(vlSelf->Soc__DOT__core__DOT__dereg_has_inst));
    bufp->fullQData(oldp+19,(vlSelf->Soc__DOT__core__DOT__emreg_reg_wdata),64);
    bufp->fullCData(oldp+21,(vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr),5);
    bufp->fullCData(oldp+22,(vlSelf->Soc__DOT__core__DOT__emreg_wb_type),2);
    bufp->fullCData(oldp+23,(vlSelf->Soc__DOT__core__DOT__emreg_ld_type),3);
    bufp->fullCData(oldp+24,(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit),3);
    bufp->fullQData(oldp+25,(vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata),64);
    bufp->fullBit(oldp+27,(vlSelf->Soc__DOT__core__DOT__emreg_csr_wen));
    bufp->fullSData(oldp+28,(vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr),12);
    bufp->fullBit(oldp+29,(vlSelf->Soc__DOT__core__DOT__emreg_has_inst));
    bufp->fullQData(oldp+30,(vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata),64);
    bufp->fullCData(oldp+32,(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr),5);
    bufp->fullCData(oldp+33,(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type),2);
    bufp->fullQData(oldp+34,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata),64);
    bufp->fullBit(oldp+36,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen));
    bufp->fullSData(oldp+37,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr),12);
    bufp->fullBit(oldp+38,(vlSelf->Soc__DOT__core__DOT__mwreg_has_inst));
    bufp->fullBit(oldp+39,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started));
    bufp->fullQData(oldp+40,(((IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen)
                               ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                               : vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_h2e8cd7a4__0)),64);
    bufp->fullBit(oldp+42,(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag));
    bufp->fullBit(oldp+43,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_valid));
    bufp->fullBit(oldp+44,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_valid));
    bufp->fullBit(oldp+45,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw));
    bufp->fullIData(oldp+46,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr),32);
    bufp->fullCData(oldp+47,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state),3);
    bufp->fullIData(oldp+48,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__tag),21);
    bufp->fullCData(oldp+49,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index),8);
    bufp->fullCData(oldp+50,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset),3);
    bufp->fullWData(oldp+51,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid),512);
    bufp->fullWData(oldp+67,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty),512);
    bufp->fullWData(oldp+83,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace),512);
    bufp->fullBit(oldp+99,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim));
    bufp->fullIData(oldp+100,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr),32);
    bufp->fullQData(oldp+101,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data),64);
    bufp->fullCData(oldp+103,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask),8);
    bufp->fullBit(oldp+104,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inst_type));
    bufp->fullBit(oldp+105,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum));
    bufp->fullQData(oldp+106,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_bits_data),64);
    bufp->fullSData(oldp+108,((0x1ffU & ((IData)(1U) 
                                         + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                            << 1U)))),9);
    bufp->fullSData(oldp+109,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                               << 1U)),9);
    bufp->fullBit(oldp+110,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum))));
    bufp->fullQData(oldp+111,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data),64);
    bufp->fullBit(oldp+113,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0))));
    bufp->fullSData(oldp+114,((0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                          << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN)))),9);
    bufp->fullBit(oldp+115,(((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                             & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]))));
    bufp->fullSData(oldp+116,((0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                          << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim)))),9);
    bufp->fullBit(oldp+117,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8854f984__0) 
                             & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))));
    bufp->fullBit(oldp+118,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8ecd23a9__0) 
                             & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]))));
    bufp->fullBit(oldp+119,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca93995__0) 
                             & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))));
    bufp->fullIData(oldp+120,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                   & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]))
                                ? vlSelf->__VdfgTmp_h2fe899d6__0
                                : 0U)),21);
    bufp->fullIData(oldp+121,((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8854f984__0) 
                                & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))
                                ? vlSelf->__VdfgTmp_h5f294843__0
                                : 0U)),21);
    bufp->fullIData(oldp+122,((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8ecd23a9__0) 
                                & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                   & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]))
                                ? vlSelf->__VdfgTmp_h2fe899d6__0
                                : 0U)),21);
    bufp->fullIData(oldp+123,((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca93995__0) 
                                & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))
                                ? vlSelf->__VdfgTmp_h5f294843__0
                                : 0U)),21);
    bufp->fullBit(oldp+124,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid));
    bufp->fullBit(oldp+125,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_valid));
    bufp->fullBit(oldp+126,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw));
    bufp->fullIData(oldp+127,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr),32);
    bufp->fullCData(oldp+128,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state),3);
    bufp->fullIData(oldp+129,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__tag),21);
    bufp->fullCData(oldp+130,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index),8);
    bufp->fullCData(oldp+131,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset),3);
    bufp->fullWData(oldp+132,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid),512);
    bufp->fullWData(oldp+148,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty),512);
    bufp->fullWData(oldp+164,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace),512);
    bufp->fullBit(oldp+180,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim));
    bufp->fullIData(oldp+181,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr),32);
    bufp->fullQData(oldp+182,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data),64);
    bufp->fullCData(oldp+184,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask),8);
    bufp->fullBit(oldp+185,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inst_type));
    bufp->fullBit(oldp+186,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum));
    bufp->fullQData(oldp+187,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data),64);
    bufp->fullSData(oldp+189,((0x1ffU & ((IData)(1U) 
                                         + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                            << 1U)))),9);
    bufp->fullSData(oldp+190,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                               << 1U)),9);
    bufp->fullBit(oldp+191,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum))));
    bufp->fullQData(oldp+192,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data),64);
    bufp->fullBit(oldp+194,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0))));
    bufp->fullSData(oldp+195,((0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                          << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN)))),9);
    bufp->fullBit(oldp+196,(((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                             & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]))));
    bufp->fullSData(oldp+197,((0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                          << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim)))),9);
    bufp->fullBit(oldp+198,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8854f984__0) 
                             & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))));
    bufp->fullBit(oldp+199,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8ecd23a9__0) 
                             & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]))));
    bufp->fullBit(oldp+200,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca93995__0) 
                             & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))));
    bufp->fullIData(oldp+201,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                   & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]))
                                ? vlSelf->__VdfgTmp_heb865217__0
                                : 0U)),21);
    bufp->fullIData(oldp+202,((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8854f984__0) 
                                & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))
                                ? vlSelf->__VdfgTmp_hb3a84c04__0
                                : 0U)),21);
    bufp->fullIData(oldp+203,((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8ecd23a9__0) 
                                & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                   & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]))
                                ? vlSelf->__VdfgTmp_heb865217__0
                                : 0U)),21);
    bufp->fullIData(oldp+204,((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca93995__0) 
                                & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))
                                ? vlSelf->__VdfgTmp_hb3a84c04__0
                                : 0U)),21);
    bufp->fullBit(oldp+205,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp));
    bufp->fullBit(oldp+206,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp));
    bufp->fullQData(oldp+207,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result),64);
    bufp->fullBit(oldp+209,(vlSelf->Soc__DOT__core__DOT__clint__DOT__valid_buf));
    bufp->fullQData(oldp+210,(vlSelf->Soc__DOT__core__DOT__clint__DOT__rvalue_buf),64);
    bufp->fullBit(oldp+212,((vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME 
                             >= vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP)));
    bufp->fullIData(oldp+213,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MSIP),32);
    bufp->fullQData(oldp+214,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP),64);
    bufp->fullQData(oldp+216,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME),64);
    __Vtemp_h5ee83ed9__0[0U] = 0x41000000U;
    __Vtemp_h5ee83ed9__0[1U] = 0x3003423U;
    __Vtemp_h5ee83ed9__0[2U] = (0x30000000U | (((0x8000000000000007ULL 
                                                 == vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE)
                                                 ? 0x344U
                                                 : 0U) 
                                               << 8U));
    bufp->fullSData(oldp+218,(((0x5fU >= (0x7fU & ((IData)(0xcU) 
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
    bufp->fullBit(oldp+219,(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen));
    bufp->fullQData(oldp+220,(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata),64);
    bufp->fullQData(oldp+222,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC),64);
    bufp->fullQData(oldp+224,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE),64);
    bufp->fullQData(oldp+226,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC),64);
    bufp->fullQData(oldp+228,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE),64);
    bufp->fullQData(oldp+230,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP),64);
    bufp->fullQData(oldp+232,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS),64);
    bufp->fullQData(oldp+234,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH),64);
    bufp->fullCData(oldp+236,(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd),5);
    bufp->fullIData(oldp+237,((IData)(vlSelf->Soc__DOT__core__DOT__dereg_branch_addr)),32);
    bufp->fullBit(oldp+238,(vlSelf->Soc__DOT__core__DOT__excute__DOT___mul_div_type_T_4));
    bufp->fullBit(oldp+239,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid));
    bufp->fullQData(oldp+240,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata),64);
    bufp->fullBit(oldp+242,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we));
    bufp->fullBit(oldp+243,(vlSelf->Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer));
    bufp->fullQData(oldp+244,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu_buffer),64);
    bufp->fullBit(oldp+246,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8));
    bufp->fullBit(oldp+247,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8) 
                             & (0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)))));
    bufp->fullCData(oldp+248,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8)
                                ? (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_h60d3cac5__0) 
                                    | (0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)))
                                    ? 3U : ((0x14U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
                                            << 1U))
                                : 0U)),2);
    bufp->fullQData(oldp+249,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand),64);
    bufp->fullQData(oldp+251,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier),64);
    bufp->fullQData(oldp+253,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_hi),64);
    bufp->fullQData(oldp+255,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_lo),64);
    bufp->fullWData(oldp+257,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg),67);
    bufp->fullWData(oldp+260,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg),132);
    bufp->fullWData(oldp+265,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg),132);
    bufp->fullBit(oldp+270,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state));
    bufp->fullCData(oldp+271,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter),6);
    bufp->fullCData(oldp+272,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total),6);
    bufp->fullCData(oldp+273,(vlSelf->Soc__DOT__core__DOT__trap__DOT__state),3);
    bufp->fullBit(oldp+274,(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3));
    bufp->fullIData(oldp+275,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC)
                                : ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                    ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC)
                                    : 0U))),32);
    bufp->fullBit(oldp+276,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___mul_div_type_T_4))));
    bufp->fullIData(oldp+277,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),32);
    bufp->fullIData(oldp+278,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc),32);
    bufp->fullBit(oldp+279,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))));
    bufp->fullBit(oldp+280,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))));
    bufp->fullBit(oldp+281,(vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag));
    bufp->fullCData(oldp+282,(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count),3);
    bufp->fullBit(oldp+283,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))));
    bufp->fullBit(oldp+284,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid));
    bufp->fullQData(oldp+285,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_bits),64);
    bufp->fullBit(oldp+287,(vlSelf->Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer));
    bufp->fullBit(oldp+288,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer));
    bufp->fullBit(oldp+289,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer));
    bufp->fullQData(oldp+290,(vlSelf->Soc__DOT__core__DOT__mem__DOT__clmem_buffer),64);
    bufp->fullQData(oldp+292,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdata_buffer),64);
    bufp->fullQData(oldp+294,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataio_buffer),64);
    bufp->fullQData(oldp+296,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr]),64);
    bufp->fullQData(oldp+298,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+300,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+302,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+304,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+306,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+308,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+310,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+312,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+314,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+316,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+318,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+320,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+322,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+324,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+326,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+328,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+330,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+332,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+334,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+336,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+338,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+340,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+342,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+344,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+346,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+348,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+350,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+352,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+354,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+356,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+358,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+360,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
    bufp->fullQData(oldp+362,(vlSelf->Soc__DOT__core__DOT__trap__DOT__cause),64);
    bufp->fullIData(oldp+364,(vlSelf->Soc__DOT__core__DOT__trap__DOT__pc),32);
    bufp->fullBit(oldp+365,((0U != ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type) 
                                    | (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))));
    VL_SHIFTR_WWI(512,512,10, __Vtemp_h773c399d__0, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid, 
                  (0x3ffU & ((IData)(1U) + (0x1feU 
                                            & ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                        >> 3U)) 
                                               << 1U)))));
    bufp->fullBit(oldp+366,(((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
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
    bufp->fullBit(oldp+367,((1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))
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
    bufp->fullIData(oldp+368,((((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                 << 5U)))
                                 ? 0U : (__Vtemp_hb99da695__0[
                                         (((IData)(0x1fU) 
                                           + (0xffU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                 << 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                << 5U))))) 
                               | (__Vtemp_hb99da695__0[
                                  (7U & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))] 
                                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                               << 5U))))),32);
    __Vtemp_hff88a999__0[0U] = (IData)((QData)((IData)(
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
    __Vtemp_hff88a999__0[1U] = (IData)(((QData)((IData)(
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
    __Vtemp_hff88a999__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7326076__0;
    __Vtemp_hff88a999__0[3U] = (IData)((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h56b90ebc__0)));
    __Vtemp_hff88a999__0[4U] = (IData)(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h56b90ebc__0)) 
                                        >> 0x20U));
    __Vtemp_hff88a999__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7326076__0;
    __Vtemp_hff88a999__0[6U] = (IData)((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h56b90ebc__0)));
    __Vtemp_hff88a999__0[7U] = (IData)(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h56b90ebc__0)) 
                                        >> 0x20U));
    bufp->fullSData(oldp+369,((0x1ffU & (((0U == (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 5U)))
                                           ? 0U : (
                                                   __Vtemp_hff88a999__0[
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
                                         | (__Vtemp_hff88a999__0[
                                            (7U & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))] 
                                            >> (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                   << 5U)))))),9);
    bufp->fullIData(oldp+370,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                              [(0x1feU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                   >> 3U)) 
                                          << 1U))]),21);
    bufp->fullIData(oldp+371,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                              [(0x1ffU & ((IData)(1U) 
                                          + (0x1feU 
                                             & ((IData)(
                                                        (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                         >> 3U)) 
                                                << 1U))))]),21);
    bufp->fullQData(oldp+372,(((0x340U == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
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
    bufp->fullQData(oldp+374,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0)
                                ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]
                                : 0ULL)),64);
    bufp->fullQData(oldp+376,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0)
                                ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]
                                : 0ULL)),64);
    bufp->fullQData(oldp+378,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard)
                                ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard)
                                    ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)
                                        ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                        : 0ULL)))),64);
    bufp->fullQData(oldp+380,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                                ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                                    ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                                        ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                        : 0ULL)))),64);
    bufp->fullQData(oldp+382,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard)
                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard)
                                    ? vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)
                                        ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                                        : 0ULL)))),64);
    bufp->fullQData(oldp+384,((((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
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
    bufp->fullQData(oldp+386,(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__fdreg_pc)) 
                               + (((- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))) 
                                   << 0xcU) | (QData)((IData)(
                                                              (((IData)(vlSelf->__VdfgTmp_h315738f9__0) 
                                                                << 0xbU) 
                                                               | (((IData)(vlSelf->__VdfgTmp_h722d7b58__0) 
                                                                   << 5U) 
                                                                  | ((IData)(vlSelf->__VdfgTmp_h6dbd61c0__0) 
                                                                     << 1U)))))))),64);
    bufp->fullCData(oldp+388,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
                                ? (0x3fU & (IData)(
                                                   (vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                                    >> 0x14U)))
                                : 0U)),6);
    bufp->fullIData(oldp+389,(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                ? (vlSelf->Soc__DOT__core__DOT__fdreg_pc 
                                   + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm))
                                : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                    ? (0xfffffffeU 
                                       & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4) 
                                          + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm)))
                                    : 0x80000000U))),32);
    bufp->fullCData(oldp+390,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                ? (7U & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result))
                                : 0U)),3);
    bufp->fullQData(oldp+391,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                : 0ULL)),64);
    bufp->fullQData(oldp+393,(((IData)(vlSelf->__VdfgTmp_h565791da__0)
                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                : 0ULL)),64);
    bufp->fullBit(oldp+395,(((0U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                             & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2) 
                                | ((0x30200073U == (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7))))));
    bufp->fullBit(oldp+396,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)))));
    bufp->fullIData(oldp+397,(((IData)(vlSelf->__VdfgTmp_h565791da__0)
                                ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)
                                : 0U)),32);
    bufp->fullIData(oldp+398,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)
                                : 0U)),32);
    bufp->fullQData(oldp+399,((((QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
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
    bufp->fullQData(oldp+401,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]),64);
    bufp->fullQData(oldp+403,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]),64);
    bufp->fullBit(oldp+405,(((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid))));
    bufp->fullBit(oldp+406,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
                             & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)))));
    VL_SHIFTR_WWI(512,512,10, __Vtemp_hc4bbf11d__0, vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid, 
                  (0x3ffU & ((IData)(1U) + (0x1feU 
                                            & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                               >> 2U)))));
    bufp->fullBit(oldp+407,(((vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                              [(0x1ffU & ((IData)(1U) 
                                          + (0x1feU 
                                             & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                >> 2U))))] 
                              == (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                  >> 0xbU)) & __Vtemp_hc4bbf11d__0[0U])));
    bufp->fullBit(oldp+408,((1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))
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
    bufp->fullIData(oldp+409,((((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                 << 5U)))
                                 ? 0U : (__Vtemp_h1d13a2da__0[
                                         (((IData)(0x1fU) 
                                           + (0xffU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                 << 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                << 5U))))) 
                               | (__Vtemp_h1d13a2da__0[
                                  (7U & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))] 
                                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                               << 5U))))),32);
    __Vtemp_hf821f428__0[0U] = (IData)((QData)((IData)(
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
    __Vtemp_hf821f428__0[1U] = (IData)(((QData)((IData)(
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
    __Vtemp_hf821f428__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7326076__0;
    __Vtemp_hf821f428__0[3U] = (IData)((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h56b90ebc__0)));
    __Vtemp_hf821f428__0[4U] = (IData)(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h56b90ebc__0)) 
                                        >> 0x20U));
    __Vtemp_hf821f428__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7326076__0;
    __Vtemp_hf821f428__0[6U] = (IData)((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h56b90ebc__0)));
    __Vtemp_hf821f428__0[7U] = (IData)(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h56b90ebc__0)) 
                                        >> 0x20U));
    bufp->fullSData(oldp+410,((0x1ffU & (((0U == (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 5U)))
                                           ? 0U : (
                                                   __Vtemp_hf821f428__0[
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
                                         | (__Vtemp_hf821f428__0[
                                            (7U & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))] 
                                            >> (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                   << 5U)))))),9);
    bufp->fullIData(oldp+411,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                              [(0x1feU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                          >> 2U))]),21);
    bufp->fullIData(oldp+412,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                              [(0x1ffU & ((IData)(1U) 
                                          + (0x1feU 
                                             & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                >> 2U))))]),21);
    bufp->fullQData(oldp+413,(((((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
                                 & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))) 
                                & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr)))
                                ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr])),64);
    bufp->fullBit(oldp+415,(vlSelf->Soc__DOT__sram__DOT__awready));
    bufp->fullBit(oldp+416,(vlSelf->Soc__DOT__sram__DOT__wready));
    bufp->fullBit(oldp+417,(vlSelf->Soc__DOT__sram__DOT__bvalid));
    bufp->fullBit(oldp+418,(vlSelf->Soc__DOT__sram__DOT__arready));
    bufp->fullBit(oldp+419,(vlSelf->Soc__DOT__sram__DOT__rvalid));
    bufp->fullQData(oldp+420,(vlSelf->Soc__DOT__sram__DOT__rdata),64);
    bufp->fullCData(oldp+422,(vlSelf->Soc__DOT__sram__DOT__bresp),2);
    bufp->fullCData(oldp+423,(vlSelf->Soc__DOT__sram__DOT__rresp),2);
    bufp->fullIData(oldp+424,(vlSelf->Soc__DOT__sram__DOT__awaddr_buffer),32);
    bufp->fullBit(oldp+425,(vlSelf->Soc__DOT__sram__DOT__need_resp));
    bufp->fullIData(oldp+426,(vlSelf->Soc__DOT__sram__DOT__araddr),32);
    bufp->fullBit(oldp+427,(vlSelf->Soc__DOT__sram__DOT__need_read));
    bufp->fullBit(oldp+428,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN));
    bufp->fullIData(oldp+429,(vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr),32);
    bufp->fullBit(oldp+430,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1));
    bufp->fullQData(oldp+431,(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0)
                                ? 0ULL : ((1U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                           ? vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_data
                                           : ((2U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                               ? ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray)
                                                   ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray
                                                   : 0ULL)
                                               : ((4U 
                                                   & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                                   ? 
                                                  ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray)
                                                    ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray
                                                    : 0ULL)
                                                   : 0ULL))))),64);
    bufp->fullCData(oldp+433,(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0)
                                ? 0U : ((1U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                         ? (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_mask)
                                         : ((2U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                             ? (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask)
                                             : ((4U 
                                                 & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                                 ? (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask)
                                                 : 0U))))),8);
    bufp->fullBit(oldp+434,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4));
    bufp->fullIData(oldp+435,(((1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                      | ((~ ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                >> 3U))) 
                                         | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)))))
                                ? 0U : vlSelf->Soc__DOT__core__DOT__arbitor__DOT___addr_T_6)),32);
    bufp->fullBit(oldp+436,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_5));
    bufp->fullQData(oldp+437,(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata),64);
    bufp->fullCData(oldp+439,(vlSelf->Soc__DOT__core__DOT__dereg_ld_type),3);
    bufp->fullIData(oldp+440,((IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)),32);
    bufp->fullBit(oldp+441,(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16));
    bufp->fullQData(oldp+442,(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T),64);
    bufp->fullBit(oldp+444,(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid));
    bufp->fullIData(oldp+445,((IData)(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T)),32);
    bufp->fullCData(oldp+446,(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask),8);
    bufp->fullQData(oldp+447,(vlSelf->Soc__DOT__core__DOT___Dcache_io_cpu_resp_bits_data),64);
    bufp->fullQData(oldp+449,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray
                                : 0ULL)),64);
    bufp->fullCData(oldp+451,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask),8);
    bufp->fullBit(oldp+452,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3));
    bufp->fullBit(oldp+453,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0));
    bufp->fullQData(oldp+454,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray),64);
    bufp->fullBit(oldp+456,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray));
    bufp->fullSData(oldp+457,((0x1feU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                  >> 3U)) 
                                         << 1U))),9);
    bufp->fullSData(oldp+458,((0x1ffU & ((IData)(1U) 
                                         + (0x1feU 
                                            & ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                        >> 3U)) 
                                               << 1U))))),9);
    bufp->fullQData(oldp+459,(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data),64);
    bufp->fullQData(oldp+461,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray
                                : 0ULL)),64);
    bufp->fullCData(oldp+463,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask),8);
    bufp->fullQData(oldp+464,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray),64);
    bufp->fullBit(oldp+466,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray));
    bufp->fullBit(oldp+467,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_rw));
    bufp->fullIData(oldp+468,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_addr),32);
    bufp->fullQData(oldp+469,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_data),64);
    bufp->fullCData(oldp+471,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_mask),8);
    bufp->fullCData(oldp+472,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer),4);
    bufp->fullCData(oldp+473,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state),2);
    bufp->fullBit(oldp+474,(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6));
    bufp->fullSData(oldp+475,(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr),12);
    bufp->fullBit(oldp+476,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)))));
    bufp->fullBit(oldp+477,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))));
    bufp->fullBit(oldp+478,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)))));
    bufp->fullCData(oldp+479,(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr),5);
    bufp->fullCData(oldp+480,(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr),5);
    bufp->fullQData(oldp+481,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T
                                : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                    ? 4ULL : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                               ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T
                                               : ((1U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                                   ? vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm
                                                   : 0ULL))))),64);
    bufp->fullCData(oldp+483,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_reg_waddr),5);
    bufp->fullBit(oldp+484,(((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                             & ((0x17U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                & ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                   & ((0x6fU != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                      & ((0x67U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                         & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5))))))));
    bufp->fullCData(oldp+485,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op),6);
    bufp->fullCData(oldp+486,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
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
    bufp->fullCData(oldp+487,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0)
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
    bufp->fullQData(oldp+488,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T),64);
    bufp->fullCData(oldp+490,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type),3);
    bufp->fullQData(oldp+491,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T),64);
    bufp->fullSData(oldp+493,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen)
                                ? (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr)
                                : 0U)),12);
    bufp->fullBit(oldp+494,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen));
    bufp->fullBit(oldp+495,(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag));
    bufp->fullIData(oldp+496,(vlSelf->Soc__DOT__core__DOT__decode__DOT__inst),32);
    bufp->fullCData(oldp+497,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type),2);
    bufp->fullCData(oldp+498,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type),2);
    bufp->fullCData(oldp+499,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type),3);
    bufp->fullCData(oldp+500,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
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
    bufp->fullCData(oldp+501,(((((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0) 
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
    bufp->fullQData(oldp+502,(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm),64);
    bufp->fullBit(oldp+504,(((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_1) 
                             & (0x9fffffffU < vlSelf->Soc__DOT__core__DOT__ioformem__DOT___axi_req_bits_addr_T))));
    bufp->fullCData(oldp+505,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state),2);
    bufp->fullIData(oldp+506,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc),32);
    bufp->fullBit(oldp+507,(vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall));
    bufp->fullQData(oldp+508,(vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata),64);
    bufp->fullBit(oldp+510,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard));
    bufp->fullBit(oldp+511,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard));
    bufp->fullBit(oldp+512,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard));
    bufp->fullBit(oldp+513,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard));
    bufp->fullBit(oldp+514,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard));
    bufp->fullBit(oldp+515,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard));
    bufp->fullBit(oldp+516,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard));
    bufp->fullBit(oldp+517,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard));
    bufp->fullBit(oldp+518,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard));
    bufp->fullBit(oldp+519,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type))));
    bufp->fullBit(oldp+520,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_valid));
    bufp->fullQData(oldp+521,(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value),64);
    bufp->fullIData(oldp+523,(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc),32);
    bufp->fullBit(oldp+524,(vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen));
    bufp->fullBit(oldp+525,(((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1))));
    bufp->fullBit(oldp+526,(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid));
    bufp->fullQData(oldp+527,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data),64);
    bufp->fullBit(oldp+529,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_13));
    bufp->fullBit(oldp+530,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_15));
    bufp->fullBit(oldp+531,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20));
    bufp->fullQData(oldp+532,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data),64);
    bufp->fullBit(oldp+534,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_27));
    bufp->fullBit(oldp+535,(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid));
    bufp->fullQData(oldp+536,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data),64);
    bufp->fullBit(oldp+538,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3));
    bufp->fullBit(oldp+539,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0));
    bufp->fullBit(oldp+540,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_13));
    bufp->fullBit(oldp+541,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_15));
    bufp->fullBit(oldp+542,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20));
    bufp->fullQData(oldp+543,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data),64);
    bufp->fullBit(oldp+545,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_27));
    bufp->fullSData(oldp+546,((0x1feU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                         >> 2U))),9);
    bufp->fullSData(oldp+547,((0x1ffU & ((IData)(1U) 
                                         + (0x1feU 
                                            & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                               >> 2U))))),9);
    bufp->fullBit(oldp+548,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_valid));
    bufp->fullCData(oldp+549,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose),4);
    bufp->fullBit(oldp+550,(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1));
    bufp->fullBit(oldp+551,(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush));
    bufp->fullBit(oldp+552,(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0));
    bufp->fullBit(oldp+553,(vlSelf->clock));
    bufp->fullBit(oldp+554,(vlSelf->reset));
    bufp->fullBit(oldp+555,((((~ ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
                                  & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_valid))) 
                              | (0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_valid))));
    __Vtemp_h554321c1__0[0U] = 0U;
    __Vtemp_h554321c1__0[1U] = 0U;
    __Vtemp_h554321c1__0[2U] = 0U;
    __Vtemp_h554321c1__0[3U] = 0U;
    __Vtemp_h554321c1__0[4U] = 0U;
    __Vtemp_h554321c1__0[5U] = 0U;
    __Vtemp_h554321c1__0[6U] = (IData)(((1U & ((~ (
                                                   (3U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_6) 
                                                      & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer)))) 
                                               | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hfea5ad76__0)))
                                         ? 0ULL : vlSelf->Soc__DOT__sram__DOT__rdata));
    __Vtemp_h554321c1__0[7U] = (IData)((((1U & ((~ 
                                                 ((3U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_6) 
                                                     & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer)))) 
                                                | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hfea5ad76__0)))
                                          ? 0ULL : vlSelf->Soc__DOT__sram__DOT__rdata) 
                                        >> 0x20U));
    bufp->fullQData(oldp+556,((((QData)((IData)(__Vtemp_h554321c1__0[
                                                (((IData)(0x3fU) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 6U))) 
                                                 >> 5U)])) 
                                << ((0U == (0x1fU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 6U)))
                                     ? 0x20U : ((IData)(0x40U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 6U))))) 
                               | (((0U == (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 6U)))
                                    ? 0ULL : ((QData)((IData)(
                                                              __Vtemp_h554321c1__0[
                                                              (((IData)(0x1fU) 
                                                                + 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                                    << 6U))) 
                                                               >> 5U)])) 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 6U))))) 
                                  | ((QData)((IData)(
                                                     __Vtemp_h554321c1__0[
                                                     (6U 
                                                      & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                         << 1U))])) 
                                     >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 6U)))))),64);
    bufp->fullBit(oldp+558,((1U & (~ ((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                                      | (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush))))));
    bufp->fullBit(oldp+559,(((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hd527f3ac__0) 
                             & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
                                & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                                   | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14)) 
                                      & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                                         | ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                                            | (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag)))))))));
    bufp->fullBit(oldp+560,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)) 
                             & ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_19)) 
                                   & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                      | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)) 
                                         & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                            & (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)))))))));
    bufp->fullBit(oldp+561,(((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                             & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_19)) 
                                & ((~ ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                       & (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid))) 
                                   & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                      | (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                          & (IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)) 
                                         & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h02ae5b32__0) 
                                            | (~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3))))))))));
    bufp->fullIData(oldp+562,(((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2)
                                ? ((IData)(4U) + vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc)
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                                    ? ((IData)(4U) 
                                       + vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)
                                    : vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc))),32);
    bufp->fullIData(oldp+563,((((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid))
                                ? (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)
                                : 0U)),32);
    bufp->fullBit(oldp+564,(vlSelf->Soc__DOT____Vcellinp__sram__ARESETn));
    bufp->fullIData(oldp+565,((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1) 
                                & ((IData)(vlSelf->Soc__DOT__sram__DOT__wready) 
                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN) 
                                      & (IData)(vlSelf->Soc__DOT__sram__DOT__awready))))
                                ? vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr
                                : vlSelf->Soc__DOT__sram__DOT__awaddr_buffer)),32);
    bufp->fullBit(oldp+566,(0U));
    bufp->fullBit(oldp+567,(1U));
    bufp->fullQData(oldp+568,(0ULL),64);
    bufp->fullCData(oldp+570,(0U),8);
    bufp->fullCData(oldp+571,(0U),5);
    bufp->fullCData(oldp+572,(0U),3);
}
