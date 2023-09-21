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
    tracep->declBit(c+539,"clock", false,-1);
    tracep->declBit(c+540,"reset", false,-1);
    tracep->pushNamePrefix("Soc ");
    tracep->declBit(c+539,"clock", false,-1);
    tracep->declBit(c+540,"reset", false,-1);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+539,"clock", false,-1);
    tracep->declBit(c+540,"reset", false,-1);
    tracep->declBit(c+486,"io_AXI_Interface_aw_ready", false,-1);
    tracep->declBit(c+487,"io_AXI_Interface_w_ready", false,-1);
    tracep->declBit(c+543,"io_AXI_Interface_b_valid", false,-1);
    tracep->declBit(c+488,"io_AXI_Interface_ar_ready", false,-1);
    tracep->declBit(c+489,"io_AXI_Interface_r_valid", false,-1);
    tracep->declQuad(c+490,"io_AXI_Interface_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+499,"io_AXI_Interface_aw_valid", false,-1);
    tracep->declBus(c+500,"io_AXI_Interface_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+501,"io_AXI_Interface_w_valid", false,-1);
    tracep->declQuad(c+502,"io_AXI_Interface_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+504,"io_AXI_Interface_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+505,"io_AXI_Interface_ar_valid", false,-1);
    tracep->declBus(c+506,"io_AXI_Interface_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+476,"io_AXI_Interface_r_ready", false,-1);
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
    tracep->declQuad(c+14,"dereg_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+16,"dereg_ld_type", false,-1, 2,0);
    tracep->declQuad(c+17,"dereg_csr_t", false,-1, 63,0);
    tracep->declBus(c+19,"dereg_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+20,"dereg_csr_wen", false,-1);
    tracep->declBit(c+21,"dereg_has_inst", false,-1);
    tracep->declQuad(c+22,"emreg_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+24,"emreg_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+25,"emreg_wb_type", false,-1, 1,0);
    tracep->declBus(c+26,"emreg_ld_type", false,-1, 2,0);
    tracep->declBus(c+27,"emreg_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+28,"emreg_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+30,"emreg_csr_wen", false,-1);
    tracep->declBus(c+31,"emreg_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+32,"emreg_has_inst", false,-1);
    tracep->declQuad(c+33,"mwreg_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+35,"mwreg_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+36,"mwreg_wb_type", false,-1, 1,0);
    tracep->declQuad(c+37,"mwreg_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+39,"mwreg_csr_wen", false,-1);
    tracep->declBus(c+40,"mwreg_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+41,"mwreg_has_inst", false,-1);
    tracep->pushNamePrefix("DI ");
    tracep->declBit(c+539,"clk", false,-1);
    tracep->declBit(c+540,"rst", false,-1);
    tracep->declBus(c+507,"pc", false,-1, 31,0);
    tracep->declBit(c+42,"pc_req", false,-1);
    tracep->declBus(c+43,"inst", false,-1, 31,0);
    tracep->declBit(c+544,"inst_valid", false,-1);
    tracep->declBit(c+44,"load_use", false,-1);
    tracep->declQuad(c+2,"op_a", false,-1, 63,0);
    tracep->declQuad(c+4,"op_b", false,-1, 63,0);
    tracep->declQuad(c+45,"result", false,-1, 63,0);
    tracep->declBit(c+47,"br_yes", false,-1);
    tracep->declBit(c+48,"mem_access", false,-1);
    tracep->declQuad(c+49,"mem_addr", false,-1, 63,0);
    tracep->declBus(c+35,"rd", false,-1, 4,0);
    tracep->declQuad(c+33,"reg_wdata", false,-1, 63,0);
    tracep->declBit(c+51,"reg_wen", false,-1);
    tracep->declBit(c+39,"csr_wen", false,-1);
    tracep->declQuad(c+37,"csr_wdata", false,-1, 63,0);
    tracep->declBus(c+40,"csr_waddr", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Dcache ");
    tracep->declBit(c+539,"clock", false,-1);
    tracep->declBit(c+540,"reset", false,-1);
    tracep->declBit(c+48,"io_cpu_req_valid", false,-1);
    tracep->declBit(c+544,"io_cpu_req_bits_inst_type", false,-1);
    tracep->declBus(c+52,"io_cpu_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+14,"io_cpu_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+53,"io_cpu_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+508,"io_axi_resp_valid", false,-1);
    tracep->declQuad(c+531,"io_axi_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+54,"io_cpu_resp_valid", false,-1);
    tracep->declQuad(c+55,"io_cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+57,"io_axi_req_valid", false,-1);
    tracep->declBit(c+58,"io_axi_req_bits_rw", false,-1);
    tracep->declBus(c+59,"io_axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+509,"io_axi_req_bits_data", false,-1, 63,0);
    tracep->declBit(c+48,"io_fccache_req", false,-1);
    tracep->declBus(c+60,"io_fccache_state", false,-1, 2,0);
    tracep->declBus(c+53,"io_fccache_mask", false,-1, 7,0);
    tracep->declBit(c+61,"io_fccache_hit", false,-1);
    tracep->declBit(c+54,"io_fccache_cpu_valid", false,-1);
    tracep->declBit(c+508,"io_fccache_axi_valid", false,-1);
    tracep->declBus(c+60,"state", false,-1, 2,0);
    tracep->declBus(c+62,"tag", false,-1, 20,0);
    tracep->declBus(c+63,"index", false,-1, 7,0);
    tracep->declBus(c+64,"offset", false,-1, 2,0);
    tracep->declArray(c+65,"valid", false,-1, 511,0);
    tracep->declArray(c+81,"dirty", false,-1, 511,0);
    tracep->declArray(c+97,"replace", false,-1, 511,0);
    tracep->declBit(c+113,"hit0", false,-1);
    tracep->declBit(c+114,"hit1", false,-1);
    tracep->declBit(c+115,"victim", false,-1);
    tracep->declBus(c+116,"addr", false,-1, 31,0);
    tracep->declQuad(c+117,"data", false,-1, 63,0);
    tracep->declBus(c+119,"mask", false,-1, 7,0);
    tracep->declBit(c+120,"inst_type", false,-1);
    tracep->declQuad(c+121,"whitDataArray", false,-1, 63,0);
    tracep->declBit(c+123,"whitNum", false,-1);
    tracep->declBit(c+54,"cpu_resp_valid", false,-1);
    tracep->declQuad(c+55,"cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+57,"axi_req_valid", false,-1);
    tracep->declBit(c+58,"axi_req_bits_rw", false,-1);
    tracep->declBus(c+59,"axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+509,"axi_req_bits_data", false,-1, 63,0);
    tracep->pushNamePrefix("DataArray_ext ");
    tracep->declBus(c+124,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+125,"R0_en", false,-1);
    tracep->declBit(c+539,"R0_clk", false,-1);
    tracep->declBus(c+126,"R1_addr", false,-1, 8,0);
    tracep->declBit(c+127,"R1_en", false,-1);
    tracep->declBit(c+539,"R1_clk", false,-1);
    tracep->declBus(c+124,"R2_addr", false,-1, 8,0);
    tracep->declBit(c+128,"R2_en", false,-1);
    tracep->declBit(c+539,"R2_clk", false,-1);
    tracep->declBus(c+126,"R3_addr", false,-1, 8,0);
    tracep->declBit(c+129,"R3_en", false,-1);
    tracep->declBit(c+539,"R3_clk", false,-1);
    tracep->declBus(c+130,"R4_addr", false,-1, 8,0);
    tracep->declBit(c+131,"R4_en", false,-1);
    tracep->declBit(c+539,"R4_clk", false,-1);
    tracep->declBus(c+130,"R5_addr", false,-1, 8,0);
    tracep->declBit(c+132,"R5_en", false,-1);
    tracep->declBit(c+539,"R5_clk", false,-1);
    tracep->declBus(c+130,"R6_addr", false,-1, 8,0);
    tracep->declBit(c+133,"R6_en", false,-1);
    tracep->declBit(c+539,"R6_clk", false,-1);
    tracep->declBus(c+134,"R7_addr", false,-1, 8,0);
    tracep->declBit(c+135,"R7_en", false,-1);
    tracep->declBit(c+539,"R7_clk", false,-1);
    tracep->declBus(c+134,"R8_addr", false,-1, 8,0);
    tracep->declBit(c+136,"R8_en", false,-1);
    tracep->declBit(c+539,"R8_clk", false,-1);
    tracep->declBus(c+134,"R9_addr", false,-1, 8,0);
    tracep->declBit(c+137,"R9_en", false,-1);
    tracep->declBit(c+539,"R9_clk", false,-1);
    tracep->declBus(c+130,"R10_addr", false,-1, 8,0);
    tracep->declBit(c+138,"R10_en", false,-1);
    tracep->declBit(c+539,"R10_clk", false,-1);
    tracep->declBus(c+134,"R11_addr", false,-1, 8,0);
    tracep->declBit(c+139,"R11_en", false,-1);
    tracep->declBit(c+539,"R11_clk", false,-1);
    tracep->declBus(c+140,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+511,"W0_en", false,-1);
    tracep->declBit(c+539,"W0_clk", false,-1);
    tracep->declQuad(c+531,"W0_data", false,-1, 63,0);
    tracep->declBus(c+141,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+512,"W1_en", false,-1);
    tracep->declBit(c+539,"W1_clk", false,-1);
    tracep->declQuad(c+531,"W1_data", false,-1, 63,0);
    tracep->declBus(c+140,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+142,"W2_en", false,-1);
    tracep->declBit(c+539,"W2_clk", false,-1);
    tracep->declQuad(c+143,"W2_data", false,-1, 63,0);
    tracep->declBus(c+141,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+145,"W3_en", false,-1);
    tracep->declBit(c+539,"W3_clk", false,-1);
    tracep->declQuad(c+143,"W3_data", false,-1, 63,0);
    tracep->declBus(c+140,"W4_addr", false,-1, 8,0);
    tracep->declBit(c+513,"W4_en", false,-1);
    tracep->declBit(c+539,"W4_clk", false,-1);
    tracep->declQuad(c+533,"W4_data", false,-1, 63,0);
    tracep->declBus(c+141,"W5_addr", false,-1, 8,0);
    tracep->declBit(c+514,"W5_en", false,-1);
    tracep->declBit(c+539,"W5_clk", false,-1);
    tracep->declQuad(c+533,"W5_data", false,-1, 63,0);
    tracep->declQuad(c+146,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+148,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+150,"R2_data", false,-1, 63,0);
    tracep->declQuad(c+152,"R3_data", false,-1, 63,0);
    tracep->declQuad(c+154,"R4_data", false,-1, 63,0);
    tracep->declQuad(c+156,"R5_data", false,-1, 63,0);
    tracep->declQuad(c+158,"R6_data", false,-1, 63,0);
    tracep->declQuad(c+160,"R7_data", false,-1, 63,0);
    tracep->declQuad(c+162,"R8_data", false,-1, 63,0);
    tracep->declQuad(c+164,"R9_data", false,-1, 63,0);
    tracep->declQuad(c+166,"R10_data", false,-1, 63,0);
    tracep->declQuad(c+168,"R11_data", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("TagArray_ext ");
    tracep->declBus(c+124,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+125,"R0_en", false,-1);
    tracep->declBit(c+539,"R0_clk", false,-1);
    tracep->declBus(c+126,"R1_addr", false,-1, 8,0);
    tracep->declBit(c+127,"R1_en", false,-1);
    tracep->declBit(c+539,"R1_clk", false,-1);
    tracep->declBus(c+124,"R2_addr", false,-1, 8,0);
    tracep->declBit(c+128,"R2_en", false,-1);
    tracep->declBit(c+539,"R2_clk", false,-1);
    tracep->declBus(c+126,"R3_addr", false,-1, 8,0);
    tracep->declBit(c+129,"R3_en", false,-1);
    tracep->declBit(c+539,"R3_clk", false,-1);
    tracep->declBus(c+130,"R4_addr", false,-1, 8,0);
    tracep->declBit(c+545,"R4_en", false,-1);
    tracep->declBit(c+539,"R4_clk", false,-1);
    tracep->declBus(c+134,"R5_addr", false,-1, 8,0);
    tracep->declBit(c+545,"R5_en", false,-1);
    tracep->declBit(c+539,"R5_clk", false,-1);
    tracep->declBus(c+140,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+511,"W0_en", false,-1);
    tracep->declBit(c+539,"W0_clk", false,-1);
    tracep->declBus(c+62,"W0_data", false,-1, 20,0);
    tracep->declBus(c+141,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+512,"W1_en", false,-1);
    tracep->declBit(c+539,"W1_clk", false,-1);
    tracep->declBus(c+62,"W1_data", false,-1, 20,0);
    tracep->declBus(c+140,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+513,"W2_en", false,-1);
    tracep->declBit(c+539,"W2_clk", false,-1);
    tracep->declBus(c+62,"W2_data", false,-1, 20,0);
    tracep->declBus(c+141,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+514,"W3_en", false,-1);
    tracep->declBit(c+539,"W3_clk", false,-1);
    tracep->declBus(c+62,"W3_data", false,-1, 20,0);
    tracep->declBus(c+170,"R0_data", false,-1, 20,0);
    tracep->declBus(c+171,"R1_data", false,-1, 20,0);
    tracep->declBus(c+172,"R2_data", false,-1, 20,0);
    tracep->declBus(c+173,"R3_data", false,-1, 20,0);
    tracep->declBus(c+174,"R4_data", false,-1, 20,0);
    tracep->declBus(c+175,"R5_data", false,-1, 20,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Icache ");
    tracep->declBit(c+539,"clock", false,-1);
    tracep->declBit(c+540,"reset", false,-1);
    tracep->declBit(c+42,"io_cpu_req_valid", false,-1);
    tracep->declBit(c+545,"io_cpu_req_bits_inst_type", false,-1);
    tracep->declBus(c+507,"io_cpu_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+546,"io_cpu_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+548,"io_cpu_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+515,"io_axi_resp_valid", false,-1);
    tracep->declQuad(c+535,"io_axi_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+176,"io_cpu_resp_valid", false,-1);
    tracep->declQuad(c+177,"io_cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+179,"io_axi_req_valid", false,-1);
    tracep->declBit(c+180,"io_axi_req_bits_rw", false,-1);
    tracep->declBus(c+181,"io_axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+516,"io_axi_req_bits_data", false,-1, 63,0);
    tracep->declBit(c+42,"io_fccache_req", false,-1);
    tracep->declBus(c+182,"io_fccache_state", false,-1, 2,0);
    tracep->declBus(c+548,"io_fccache_mask", false,-1, 7,0);
    tracep->declBit(c+518,"io_fccache_hit", false,-1);
    tracep->declBit(c+176,"io_fccache_cpu_valid", false,-1);
    tracep->declBit(c+515,"io_fccache_axi_valid", false,-1);
    tracep->declBus(c+182,"state", false,-1, 2,0);
    tracep->declBus(c+183,"tag", false,-1, 20,0);
    tracep->declBus(c+184,"index", false,-1, 7,0);
    tracep->declBus(c+185,"offset", false,-1, 2,0);
    tracep->declArray(c+186,"valid", false,-1, 511,0);
    tracep->declArray(c+202,"dirty", false,-1, 511,0);
    tracep->declArray(c+218,"replace", false,-1, 511,0);
    tracep->declBit(c+519,"hit0", false,-1);
    tracep->declBit(c+477,"hit1", false,-1);
    tracep->declBit(c+234,"victim", false,-1);
    tracep->declBus(c+235,"addr", false,-1, 31,0);
    tracep->declQuad(c+236,"data", false,-1, 63,0);
    tracep->declBus(c+238,"mask", false,-1, 7,0);
    tracep->declBit(c+239,"inst_type", false,-1);
    tracep->declQuad(c+240,"whitDataArray", false,-1, 63,0);
    tracep->declBit(c+242,"whitNum", false,-1);
    tracep->declBit(c+176,"cpu_resp_valid", false,-1);
    tracep->declQuad(c+177,"cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+179,"axi_req_valid", false,-1);
    tracep->declBit(c+180,"axi_req_bits_rw", false,-1);
    tracep->declBus(c+181,"axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+516,"axi_req_bits_data", false,-1, 63,0);
    tracep->pushNamePrefix("DataArray_ext ");
    tracep->declBus(c+243,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+244,"R0_en", false,-1);
    tracep->declBit(c+539,"R0_clk", false,-1);
    tracep->declBus(c+245,"R1_addr", false,-1, 8,0);
    tracep->declBit(c+246,"R1_en", false,-1);
    tracep->declBit(c+539,"R1_clk", false,-1);
    tracep->declBus(c+243,"R2_addr", false,-1, 8,0);
    tracep->declBit(c+247,"R2_en", false,-1);
    tracep->declBit(c+539,"R2_clk", false,-1);
    tracep->declBus(c+245,"R3_addr", false,-1, 8,0);
    tracep->declBit(c+248,"R3_en", false,-1);
    tracep->declBit(c+539,"R3_clk", false,-1);
    tracep->declBus(c+520,"R4_addr", false,-1, 8,0);
    tracep->declBit(c+478,"R4_en", false,-1);
    tracep->declBit(c+539,"R4_clk", false,-1);
    tracep->declBus(c+520,"R5_addr", false,-1, 8,0);
    tracep->declBit(c+479,"R5_en", false,-1);
    tracep->declBit(c+539,"R5_clk", false,-1);
    tracep->declBus(c+520,"R6_addr", false,-1, 8,0);
    tracep->declBit(c+480,"R6_en", false,-1);
    tracep->declBit(c+539,"R6_clk", false,-1);
    tracep->declBus(c+521,"R7_addr", false,-1, 8,0);
    tracep->declBit(c+481,"R7_en", false,-1);
    tracep->declBit(c+539,"R7_clk", false,-1);
    tracep->declBus(c+521,"R8_addr", false,-1, 8,0);
    tracep->declBit(c+482,"R8_en", false,-1);
    tracep->declBit(c+539,"R8_clk", false,-1);
    tracep->declBus(c+521,"R9_addr", false,-1, 8,0);
    tracep->declBit(c+483,"R9_en", false,-1);
    tracep->declBit(c+539,"R9_clk", false,-1);
    tracep->declBus(c+520,"R10_addr", false,-1, 8,0);
    tracep->declBit(c+544,"R10_en", false,-1);
    tracep->declBit(c+539,"R10_clk", false,-1);
    tracep->declBus(c+521,"R11_addr", false,-1, 8,0);
    tracep->declBit(c+544,"R11_en", false,-1);
    tracep->declBit(c+539,"R11_clk", false,-1);
    tracep->declBus(c+249,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+522,"W0_en", false,-1);
    tracep->declBit(c+539,"W0_clk", false,-1);
    tracep->declQuad(c+535,"W0_data", false,-1, 63,0);
    tracep->declBus(c+250,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+523,"W1_en", false,-1);
    tracep->declBit(c+539,"W1_clk", false,-1);
    tracep->declQuad(c+535,"W1_data", false,-1, 63,0);
    tracep->declBus(c+249,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+251,"W2_en", false,-1);
    tracep->declBit(c+539,"W2_clk", false,-1);
    tracep->declQuad(c+252,"W2_data", false,-1, 63,0);
    tracep->declBus(c+250,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+254,"W3_en", false,-1);
    tracep->declBit(c+539,"W3_clk", false,-1);
    tracep->declQuad(c+252,"W3_data", false,-1, 63,0);
    tracep->declBus(c+249,"W4_addr", false,-1, 8,0);
    tracep->declBit(c+524,"W4_en", false,-1);
    tracep->declBit(c+539,"W4_clk", false,-1);
    tracep->declQuad(c+537,"W4_data", false,-1, 63,0);
    tracep->declBus(c+250,"W5_addr", false,-1, 8,0);
    tracep->declBit(c+525,"W5_en", false,-1);
    tracep->declBit(c+539,"W5_clk", false,-1);
    tracep->declQuad(c+537,"W5_data", false,-1, 63,0);
    tracep->declQuad(c+255,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+257,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+259,"R2_data", false,-1, 63,0);
    tracep->declQuad(c+261,"R3_data", false,-1, 63,0);
    tracep->declQuad(c+263,"R4_data", false,-1, 63,0);
    tracep->declQuad(c+265,"R5_data", false,-1, 63,0);
    tracep->declQuad(c+267,"R6_data", false,-1, 63,0);
    tracep->declQuad(c+269,"R7_data", false,-1, 63,0);
    tracep->declQuad(c+271,"R8_data", false,-1, 63,0);
    tracep->declQuad(c+273,"R9_data", false,-1, 63,0);
    tracep->declQuad(c+275,"R10_data", false,-1, 63,0);
    tracep->declQuad(c+277,"R11_data", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("TagArray_ext ");
    tracep->declBus(c+243,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+244,"R0_en", false,-1);
    tracep->declBit(c+539,"R0_clk", false,-1);
    tracep->declBus(c+245,"R1_addr", false,-1, 8,0);
    tracep->declBit(c+246,"R1_en", false,-1);
    tracep->declBit(c+539,"R1_clk", false,-1);
    tracep->declBus(c+243,"R2_addr", false,-1, 8,0);
    tracep->declBit(c+247,"R2_en", false,-1);
    tracep->declBit(c+539,"R2_clk", false,-1);
    tracep->declBus(c+245,"R3_addr", false,-1, 8,0);
    tracep->declBit(c+248,"R3_en", false,-1);
    tracep->declBit(c+539,"R3_clk", false,-1);
    tracep->declBus(c+520,"R4_addr", false,-1, 8,0);
    tracep->declBit(c+545,"R4_en", false,-1);
    tracep->declBit(c+539,"R4_clk", false,-1);
    tracep->declBus(c+521,"R5_addr", false,-1, 8,0);
    tracep->declBit(c+545,"R5_en", false,-1);
    tracep->declBit(c+539,"R5_clk", false,-1);
    tracep->declBus(c+249,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+522,"W0_en", false,-1);
    tracep->declBit(c+539,"W0_clk", false,-1);
    tracep->declBus(c+183,"W0_data", false,-1, 20,0);
    tracep->declBus(c+250,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+523,"W1_en", false,-1);
    tracep->declBit(c+539,"W1_clk", false,-1);
    tracep->declBus(c+183,"W1_data", false,-1, 20,0);
    tracep->declBus(c+249,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+524,"W2_en", false,-1);
    tracep->declBit(c+539,"W2_clk", false,-1);
    tracep->declBus(c+183,"W2_data", false,-1, 20,0);
    tracep->declBus(c+250,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+525,"W3_en", false,-1);
    tracep->declBit(c+539,"W3_clk", false,-1);
    tracep->declBus(c+183,"W3_data", false,-1, 20,0);
    tracep->declBus(c+279,"R0_data", false,-1, 20,0);
    tracep->declBus(c+280,"R1_data", false,-1, 20,0);
    tracep->declBus(c+281,"R2_data", false,-1, 20,0);
    tracep->declBus(c+282,"R3_data", false,-1, 20,0);
    tracep->declBus(c+484,"R4_data", false,-1, 20,0);
    tracep->declBus(c+485,"R5_data", false,-1, 20,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("arbitor ");
    tracep->declBit(c+539,"clock", false,-1);
    tracep->declBit(c+540,"reset", false,-1);
    tracep->declBit(c+179,"io_master0_req_valid", false,-1);
    tracep->declBit(c+180,"io_master0_req_bits_rw", false,-1);
    tracep->declBus(c+181,"io_master0_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+516,"io_master0_req_bits_data", false,-1, 63,0);
    tracep->declBit(c+57,"io_master1_req_valid", false,-1);
    tracep->declBit(c+58,"io_master1_req_bits_rw", false,-1);
    tracep->declBus(c+59,"io_master1_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+509,"io_master1_req_bits_data", false,-1, 63,0);
    tracep->declBit(c+486,"io_AXI_O_aw_ready", false,-1);
    tracep->declBit(c+487,"io_AXI_O_w_ready", false,-1);
    tracep->declBit(c+543,"io_AXI_O_b_valid", false,-1);
    tracep->declBit(c+488,"io_AXI_O_ar_ready", false,-1);
    tracep->declBit(c+489,"io_AXI_O_r_valid", false,-1);
    tracep->declQuad(c+490,"io_AXI_O_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+515,"io_master0_resp_valid", false,-1);
    tracep->declQuad(c+535,"io_master0_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+508,"io_master1_resp_valid", false,-1);
    tracep->declQuad(c+531,"io_master1_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+499,"io_AXI_O_aw_valid", false,-1);
    tracep->declBus(c+500,"io_AXI_O_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+501,"io_AXI_O_w_valid", false,-1);
    tracep->declQuad(c+502,"io_AXI_O_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+504,"io_AXI_O_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+505,"io_AXI_O_ar_valid", false,-1);
    tracep->declBus(c+506,"io_AXI_O_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+476,"io_AXI_O_r_ready", false,-1);
    tracep->declBus(c+526,"state", false,-1, 1,0);
    tracep->declBit(c+283,"aw_comp", false,-1);
    tracep->declBit(c+284,"w_comp", false,-1);
    tracep->declBit(c+285,"b_comp", false,-1);
    tracep->declBit(c+286,"ar_comp", false,-1);
    tracep->declBit(c+287,"r_comp", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("clint ");
    tracep->declBit(c+539,"clock", false,-1);
    tracep->declBit(c+540,"reset", false,-1);
    tracep->declBit(c+288,"io_clex_valid", false,-1);
    tracep->declBus(c+16,"io_clex_ld_type", false,-1, 2,0);
    tracep->declQuad(c+289,"io_clex_raddr", false,-1, 63,0);
    tracep->declBus(c+13,"io_clex_sd_type", false,-1, 2,0);
    tracep->declQuad(c+289,"io_clex_waddr", false,-1, 63,0);
    tracep->declBus(c+53,"io_clex_wmask", false,-1, 7,0);
    tracep->declQuad(c+14,"io_clex_wdata", false,-1, 63,0);
    tracep->declBit(c+291,"io_clmem_Clrvalue_valid", false,-1);
    tracep->declQuad(c+292,"io_clmem_Clrvalue_bits", false,-1, 63,0);
    tracep->declBit(c+294,"io_timer_int", false,-1);
    tracep->declBus(c+295,"MSIP", false,-1, 31,0);
    tracep->declQuad(c+296,"MTIMECMP", false,-1, 63,0);
    tracep->declQuad(c+298,"MTIME", false,-1, 63,0);
    tracep->declQuad(c+292,"rvalue_buf", false,-1, 63,0);
    tracep->declBit(c+291,"valid_buf", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csrs ");
    tracep->declBit(c+539,"clock", false,-1);
    tracep->declBit(c+540,"reset", false,-1);
    tracep->declBus(c+300,"io_CSRDe_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+40,"io_CSRWb_rd", false,-1, 11,0);
    tracep->declBit(c+39,"io_CSRWb_csr_wen", false,-1);
    tracep->declQuad(c+37,"io_CSRWb_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+301,"io_CSRTr_rd", false,-1, 11,0);
    tracep->declBit(c+302,"io_CSRTr_csr_wen", false,-1);
    tracep->declQuad(c+303,"io_CSRTr_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+294,"io_timer_int", false,-1);
    tracep->declQuad(c+305,"io_CSRDe_csr_rdata", false,-1, 63,0);
    tracep->declQuad(c+307,"io_CSRTr_MTVEC", false,-1, 63,0);
    tracep->declQuad(c+309,"io_CSRTr_MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+311,"io_CSRTr_MEPC", false,-1, 63,0);
    tracep->declQuad(c+313,"io_CSRTr_MIE", false,-1, 63,0);
    tracep->declQuad(c+315,"io_CSRTr_MIP", false,-1, 63,0);
    tracep->declQuad(c+317,"io_CSRTr_MSTATUS", false,-1, 63,0);
    tracep->declQuad(c+307,"MTVEC", false,-1, 63,0);
    tracep->declQuad(c+309,"MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+311,"MEPC", false,-1, 63,0);
    tracep->declQuad(c+313,"MIE", false,-1, 63,0);
    tracep->declQuad(c+315,"MIP", false,-1, 63,0);
    tracep->declQuad(c+317,"MSTATUS", false,-1, 63,0);
    tracep->declQuad(c+319,"MSCRATCH", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("decode ");
    tracep->declBit(c+539,"clock", false,-1);
    tracep->declBit(c+540,"reset", false,-1);
    tracep->declBit(c+176,"io_inst_valid", false,-1);
    tracep->declQuad(c+177,"io_inst_bits_data", false,-1, 63,0);
    tracep->declBus(c+1,"io_fdio_pc", false,-1, 31,0);
    tracep->declQuad(c+321,"io_rfio_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+323,"io_rfio_reg2_rdata", false,-1, 63,0);
    tracep->declBit(c+47,"io_branch", false,-1);
    tracep->declBit(c+325,"io_fwde_fw_sel1", false,-1);
    tracep->declBit(c+326,"io_fwde_fw_sel2", false,-1);
    tracep->declQuad(c+327,"io_fwde_fw_data1", false,-1, 63,0);
    tracep->declQuad(c+329,"io_fwde_fw_data2", false,-1, 63,0);
    tracep->declBit(c+331,"io_fwde_csr_fw_sel", false,-1);
    tracep->declQuad(c+332,"io_fwde_csr_fw_data", false,-1, 63,0);
    tracep->declQuad(c+305,"io_csrs_csr_rdata", false,-1, 63,0);
    tracep->declBus(c+334,"io_rfio_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+335,"io_rfio_reg2_raddr", false,-1, 4,0);
    tracep->declQuad(c+336,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+338,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+340,"io_deio_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+341,"io_deio_branch_type", false,-1);
    tracep->declQuad(c+342,"io_deio_branch_addr", false,-1, 63,0);
    tracep->declBus(c+344,"io_deio_alu_op", false,-1, 5,0);
    tracep->declBus(c+345,"io_deio_shamt", false,-1, 5,0);
    tracep->declBus(c+346,"io_deio_wb_type", false,-1, 1,0);
    tracep->declBus(c+347,"io_deio_sd_type", false,-1, 2,0);
    tracep->declQuad(c+348,"io_deio_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+350,"io_deio_ld_type", false,-1, 2,0);
    tracep->declQuad(c+351,"io_deio_csr_t", false,-1, 63,0);
    tracep->declBus(c+353,"io_deio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+354,"io_deio_csr_wen", false,-1);
    tracep->declBit(c+355,"io_deio_has_inst", false,-1);
    tracep->declBit(c+356,"io_jump_flag", false,-1);
    tracep->declBus(c+357,"io_jump_pc", false,-1, 31,0);
    tracep->declBit(c+44,"io_load_use", false,-1);
    tracep->declBus(c+334,"io_fwde_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+335,"io_fwde_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+300,"io_fwde_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+300,"io_csrs_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+358,"lu_rd", false,-1, 4,0);
    tracep->pushNamePrefix("cu ");
    tracep->declBus(c+359,"io_inst", false,-1, 31,0);
    tracep->declBus(c+360,"io_jump_type", false,-1, 1,0);
    tracep->declBit(c+341,"io_branch_type", false,-1);
    tracep->declBus(c+361,"io_opa_type", false,-1, 1,0);
    tracep->declBus(c+362,"io_opb_type", false,-1, 2,0);
    tracep->declBus(c+363,"io_imm_type", false,-1, 2,0);
    tracep->declBus(c+344,"io_alu_op", false,-1, 5,0);
    tracep->declBus(c+346,"io_wb_type", false,-1, 1,0);
    tracep->declBus(c+347,"io_sd_type", false,-1, 2,0);
    tracep->declBus(c+350,"io_ld_type", false,-1, 2,0);
    tracep->declBus(c+364,"io_csr_type", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("eximm ");
    tracep->declBus(c+359,"io_inst", false,-1, 31,0);
    tracep->declBus(c+363,"io_imm_type", false,-1, 2,0);
    tracep->declQuad(c+365,"io_eximm", false,-1, 63,0);
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
    tracep->declQuad(c+14,"io_deio_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+16,"io_deio_ld_type", false,-1, 2,0);
    tracep->declQuad(c+17,"io_deio_csr_t", false,-1, 63,0);
    tracep->declBus(c+19,"io_deio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+20,"io_deio_csr_wen", false,-1);
    tracep->declBit(c+21,"io_deio_has_inst", false,-1);
    tracep->declQuad(c+45,"io_emio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+6,"io_emio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+12,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+16,"io_emio_ld_type", false,-1, 2,0);
    tracep->declBus(c+367,"io_emio_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+289,"io_emio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+20,"io_emio_csr_wen", false,-1);
    tracep->declBus(c+19,"io_emio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+21,"io_emio_has_inst", false,-1);
    tracep->declBit(c+47,"io_jump_flag", false,-1);
    tracep->declBus(c+368,"io_jump_pc", false,-1, 31,0);
    tracep->declQuad(c+369,"io_raddr", false,-1, 63,0);
    tracep->declQuad(c+371,"io_waddr", false,-1, 63,0);
    tracep->declQuad(c+14,"io_wdata", false,-1, 63,0);
    tracep->declBus(c+53,"io_wmask", false,-1, 7,0);
    tracep->declBus(c+6,"io_fwex_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+373,"io_fwex_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+375,"io_fwex_reg_we", false,-1);
    tracep->declQuad(c+289,"io_fwex_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+20,"io_fwex_csr_wen", false,-1);
    tracep->declBus(c+19,"io_fwex_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+288,"io_clex_valid", false,-1);
    tracep->declBus(c+16,"io_clex_ld_type", false,-1, 2,0);
    tracep->declQuad(c+289,"io_clex_raddr", false,-1, 63,0);
    tracep->declBus(c+13,"io_clex_sd_type", false,-1, 2,0);
    tracep->declQuad(c+289,"io_clex_waddr", false,-1, 63,0);
    tracep->declBus(c+53,"io_clex_wmask", false,-1, 7,0);
    tracep->declQuad(c+14,"io_clex_wdata", false,-1, 63,0);
    tracep->pushNamePrefix("alu ");
    tracep->declQuad(c+2,"io_op_a", false,-1, 63,0);
    tracep->declQuad(c+4,"io_op_b", false,-1, 63,0);
    tracep->declBus(c+10,"io_alu_op", false,-1, 5,0);
    tracep->declBus(c+11,"io_shamt", false,-1, 5,0);
    tracep->declQuad(c+289,"io_result", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fc ");
    tracep->declBit(c+356,"io_fcde_jump_flag", false,-1);
    tracep->declBus(c+357,"io_fcde_jump_pc", false,-1, 31,0);
    tracep->declBit(c+44,"io_fcde_load_use", false,-1);
    tracep->declBit(c+47,"io_fcex_jump_flag", false,-1);
    tracep->declBus(c+368,"io_fcex_jump_pc", false,-1, 31,0);
    tracep->declBit(c+376,"io_fctr_pop_NOP", false,-1);
    tracep->declBus(c+377,"io_fctr_trap_state", false,-1, 2,0);
    tracep->declBit(c+378,"io_fctr_jump_flag", false,-1);
    tracep->declBus(c+379,"io_fctr_jump_pc", false,-1, 31,0);
    tracep->declBit(c+42,"io_fcIcache_req", false,-1);
    tracep->declBus(c+182,"io_fcIcache_state", false,-1, 2,0);
    tracep->declBus(c+548,"io_fcIcache_mask", false,-1, 7,0);
    tracep->declBit(c+176,"io_fcIcache_cpu_valid", false,-1);
    tracep->declBit(c+515,"io_fcIcache_axi_valid", false,-1);
    tracep->declBit(c+48,"io_fcDcache_req", false,-1);
    tracep->declBus(c+60,"io_fcDcache_state", false,-1, 2,0);
    tracep->declBus(c+53,"io_fcDcache_mask", false,-1, 7,0);
    tracep->declBit(c+61,"io_fcDcache_hit", false,-1);
    tracep->declBit(c+54,"io_fcDcache_cpu_valid", false,-1);
    tracep->declBit(c+508,"io_fcDcache_axi_valid", false,-1);
    tracep->declBit(c+380,"io_fcfe_jump_flag", false,-1);
    tracep->declBus(c+381,"io_fcfe_jump_pc", false,-1, 31,0);
    tracep->declBit(c+527,"io_fcfe_flush", false,-1);
    tracep->declBit(c+528,"io_fcfe_stall", false,-1);
    tracep->declBit(c+529,"io_fcde_flush", false,-1);
    tracep->declBit(c+530,"io_fcde_stall", false,-1);
    tracep->declBit(c+530,"io_fcex_stall", false,-1);
    tracep->declBit(c+530,"io_fcmem_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+539,"clock", false,-1);
    tracep->declBit(c+540,"reset", false,-1);
    tracep->declBit(c+380,"io_fcfe_jump_flag", false,-1);
    tracep->declBus(c+381,"io_fcfe_jump_pc", false,-1, 31,0);
    tracep->declBit(c+527,"io_fcfe_flush", false,-1);
    tracep->declBit(c+528,"io_fcfe_stall", false,-1);
    tracep->declBus(c+507,"io_fdio_pc", false,-1, 31,0);
    tracep->declBit(c+42,"io_pc_valid", false,-1);
    tracep->declBus(c+507,"io_pc_bits", false,-1, 31,0);
    tracep->declBit(c+42,"started", false,-1);
    tracep->declBus(c+382,"pc", false,-1, 31,0);
    tracep->declBus(c+383,"old_pc", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fw ");
    tracep->declBus(c+334,"io_fwde_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+335,"io_fwde_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+300,"io_fwde_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+6,"io_fwex_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+373,"io_fwex_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+375,"io_fwex_reg_we", false,-1);
    tracep->declQuad(c+289,"io_fwex_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+20,"io_fwex_csr_wen", false,-1);
    tracep->declBus(c+19,"io_fwex_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+24,"io_fwmem_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+384,"io_fwmem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+386,"io_fwmem_reg_we", false,-1);
    tracep->declQuad(c+28,"io_fwmem_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+30,"io_fwmem_csr_wen", false,-1);
    tracep->declBus(c+31,"io_fwmem_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+35,"io_fwwb_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+33,"io_fwwb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+51,"io_fwwb_reg_we", false,-1);
    tracep->declQuad(c+37,"io_fwwb_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+39,"io_fwwb_csr_wen", false,-1);
    tracep->declBus(c+40,"io_fwwb_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+325,"io_fwde_fw_sel1", false,-1);
    tracep->declBit(c+326,"io_fwde_fw_sel2", false,-1);
    tracep->declQuad(c+327,"io_fwde_fw_data1", false,-1, 63,0);
    tracep->declQuad(c+329,"io_fwde_fw_data2", false,-1, 63,0);
    tracep->declBit(c+331,"io_fwde_csr_fw_sel", false,-1);
    tracep->declQuad(c+332,"io_fwde_csr_fw_data", false,-1, 63,0);
    tracep->declBit(c+387,"reg1_ex_hazard", false,-1);
    tracep->declBit(c+388,"reg2_ex_hazard", false,-1);
    tracep->declBit(c+389,"reg1_mem_hazard", false,-1);
    tracep->declBit(c+390,"reg2_mem_hazard", false,-1);
    tracep->declBit(c+391,"reg1_wb_hazard", false,-1);
    tracep->declBit(c+392,"reg2_wb_hazard", false,-1);
    tracep->declBit(c+393,"csr_ex_harzard", false,-1);
    tracep->declBit(c+394,"csr_mem_harzard", false,-1);
    tracep->declBit(c+395,"csr_wb_harzard", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("interact ");
    tracep->declBus(c+43,"inst", false,-1, 31,0);
    tracep->declBit(c+539,"clk", false,-1);
    tracep->declBit(c+540,"rst", false,-1);
    tracep->declBit(c+396,"ebreak_flag", false,-1);
    tracep->declBus(c+397,"over_count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declQuad(c+22,"io_emio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+24,"io_emio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+25,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+26,"io_emio_ld_type", false,-1, 2,0);
    tracep->declBus(c+27,"io_emio_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+28,"io_emio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+30,"io_emio_csr_wen", false,-1);
    tracep->declBus(c+31,"io_emio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+32,"io_emio_has_inst", false,-1);
    tracep->declBit(c+54,"io_rdata_valid", false,-1);
    tracep->declQuad(c+55,"io_rdata_bits_data", false,-1, 63,0);
    tracep->declBit(c+291,"io_clmem_Clrvalue_valid", false,-1);
    tracep->declQuad(c+292,"io_clmem_Clrvalue_bits", false,-1, 63,0);
    tracep->declQuad(c+384,"io_mwio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+24,"io_mwio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+25,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declQuad(c+28,"io_mwio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+30,"io_mwio_csr_wen", false,-1);
    tracep->declBus(c+31,"io_mwio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+32,"io_mwio_has_inst", false,-1);
    tracep->declBus(c+24,"io_fwmem_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+384,"io_fwmem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+386,"io_fwmem_reg_we", false,-1);
    tracep->declQuad(c+28,"io_fwmem_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+30,"io_fwmem_csr_wen", false,-1);
    tracep->declBus(c+31,"io_fwmem_csr_waddr", false,-1, 11,0);
    tracep->declQuad(c+398,"rvalue", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+539,"clock", false,-1);
    tracep->declBus(c+334,"io_RfDe_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+335,"io_RfDe_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+35,"io_RfWb_rd", false,-1, 4,0);
    tracep->declBit(c+51,"io_RfWb_reg_wen", false,-1);
    tracep->declQuad(c+33,"io_RfWb_reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+321,"io_RfDe_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+323,"io_RfDe_reg2_rdata", false,-1, 63,0);
    tracep->pushNamePrefix("regs_ext ");
    tracep->declBus(c+35,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+545,"R0_en", false,-1);
    tracep->declBit(c+539,"R0_clk", false,-1);
    tracep->declBus(c+334,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+545,"R1_en", false,-1);
    tracep->declBit(c+539,"R1_clk", false,-1);
    tracep->declBus(c+335,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+545,"R2_en", false,-1);
    tracep->declBit(c+539,"R2_clk", false,-1);
    tracep->declBus(c+549,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+545,"W0_en", false,-1);
    tracep->declBit(c+539,"W0_clk", false,-1);
    tracep->declQuad(c+546,"W0_data", false,-1, 63,0);
    tracep->declBus(c+35,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+545,"W1_en", false,-1);
    tracep->declBit(c+539,"W1_clk", false,-1);
    tracep->declQuad(c+400,"W1_data", false,-1, 63,0);
    tracep->declQuad(c+402,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+404,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+406,"R2_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+408+i*2,"Memory", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("trap ");
    tracep->declBit(c+539,"clock", false,-1);
    tracep->declBit(c+540,"reset", false,-1);
    tracep->declBit(c+21,"io_ex_hasinst", false,-1);
    tracep->declBit(c+32,"io_mem_hasinst", false,-1);
    tracep->declBit(c+41,"io_wb_hasinst", false,-1);
    tracep->declQuad(c+307,"io_csrtr_MTVEC", false,-1, 63,0);
    tracep->declQuad(c+309,"io_csrtr_MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+311,"io_csrtr_MEPC", false,-1, 63,0);
    tracep->declQuad(c+313,"io_csrtr_MIE", false,-1, 63,0);
    tracep->declQuad(c+315,"io_csrtr_MIP", false,-1, 63,0);
    tracep->declQuad(c+317,"io_csrtr_MSTATUS", false,-1, 63,0);
    tracep->declBus(c+472,"io_inst", false,-1, 31,0);
    tracep->declBus(c+507,"io_pc", false,-1, 31,0);
    tracep->declBus(c+301,"io_csrtr_rd", false,-1, 11,0);
    tracep->declBit(c+302,"io_csrtr_csr_wen", false,-1);
    tracep->declQuad(c+303,"io_csrtr_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+376,"io_fctr_pop_NOP", false,-1);
    tracep->declBus(c+377,"io_fctr_trap_state", false,-1, 2,0);
    tracep->declBit(c+378,"io_fctr_jump_flag", false,-1);
    tracep->declBus(c+379,"io_fctr_jump_pc", false,-1, 31,0);
    tracep->declQuad(c+473,"cause", false,-1, 63,0);
    tracep->declBus(c+475,"pc", false,-1, 31,0);
    tracep->declBus(c+377,"state", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb ");
    tracep->declQuad(c+33,"io_mwio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+35,"io_mwio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+36,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declQuad(c+37,"io_mwio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+39,"io_mwio_csr_wen", false,-1);
    tracep->declBus(c+40,"io_mwio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+41,"io_mwio_has_inst", false,-1);
    tracep->declBus(c+35,"io_rfio_rd", false,-1, 4,0);
    tracep->declBit(c+51,"io_rfio_reg_wen", false,-1);
    tracep->declQuad(c+33,"io_rfio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+35,"io_fwwb_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+33,"io_fwwb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+51,"io_fwwb_reg_we", false,-1);
    tracep->declQuad(c+37,"io_fwwb_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+39,"io_fwwb_csr_wen", false,-1);
    tracep->declBus(c+40,"io_fwwb_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+40,"io_csrs_rd", false,-1, 11,0);
    tracep->declBit(c+39,"io_csrs_csr_wen", false,-1);
    tracep->declQuad(c+37,"io_csrs_csr_wdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+539,"ACLK", false,-1);
    tracep->declBit(c+541,"ARESETn", false,-1);
    tracep->declBus(c+500,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+550,"S_AXI_AWPROT", false,-1, 2,0);
    tracep->declBit(c+499,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+486,"S_AXI_AWREADY", false,-1);
    tracep->declQuad(c+502,"S_AXI_WDATA", false,-1, 63,0);
    tracep->declBus(c+504,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+501,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+487,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+492,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+543,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+545,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+506,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+550,"S_AXI_ARPROT", false,-1, 2,0);
    tracep->declBit(c+505,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+488,"S_AXI_ARREADY", false,-1);
    tracep->declQuad(c+490,"S_AXI_RDATA", false,-1, 63,0);
    tracep->declBus(c+493,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+489,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+476,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+486,"awready", false,-1);
    tracep->declBit(c+487,"wready", false,-1);
    tracep->declBus(c+492,"bresp", false,-1, 1,0);
    tracep->declBit(c+494,"bvalid", false,-1);
    tracep->declBit(c+488,"arready", false,-1);
    tracep->declQuad(c+490,"rdata", false,-1, 63,0);
    tracep->declBus(c+493,"rresp", false,-1, 1,0);
    tracep->declBit(c+489,"rvalid", false,-1);
    tracep->declBus(c+495,"awaddr_buffer", false,-1, 31,0);
    tracep->declBus(c+542,"awaddr", false,-1, 31,0);
    tracep->declBit(c+496,"need_resp", false,-1);
    tracep->declBus(c+497,"araddr", false,-1, 31,0);
    tracep->declBit(c+498,"need_read", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp_h5ee83ed9__0;
    VlWide<16>/*511:0*/ __Vtemp_hc4bbf11d__0;
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
    bufp->fullQData(oldp+14,(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata),64);
    bufp->fullCData(oldp+16,(vlSelf->Soc__DOT__core__DOT__dereg_ld_type),3);
    bufp->fullQData(oldp+17,(vlSelf->Soc__DOT__core__DOT__dereg_csr_t),64);
    bufp->fullSData(oldp+19,(vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr),12);
    bufp->fullBit(oldp+20,(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen));
    bufp->fullBit(oldp+21,(vlSelf->Soc__DOT__core__DOT__dereg_has_inst));
    bufp->fullQData(oldp+22,(vlSelf->Soc__DOT__core__DOT__emreg_reg_wdata),64);
    bufp->fullCData(oldp+24,(vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr),5);
    bufp->fullCData(oldp+25,(vlSelf->Soc__DOT__core__DOT__emreg_wb_type),2);
    bufp->fullCData(oldp+26,(vlSelf->Soc__DOT__core__DOT__emreg_ld_type),3);
    bufp->fullCData(oldp+27,(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit),3);
    bufp->fullQData(oldp+28,(vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata),64);
    bufp->fullBit(oldp+30,(vlSelf->Soc__DOT__core__DOT__emreg_csr_wen));
    bufp->fullSData(oldp+31,(vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr),12);
    bufp->fullBit(oldp+32,(vlSelf->Soc__DOT__core__DOT__emreg_has_inst));
    bufp->fullQData(oldp+33,(vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata),64);
    bufp->fullCData(oldp+35,(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr),5);
    bufp->fullCData(oldp+36,(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type),2);
    bufp->fullQData(oldp+37,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata),64);
    bufp->fullBit(oldp+39,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen));
    bufp->fullSData(oldp+40,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr),12);
    bufp->fullBit(oldp+41,(vlSelf->Soc__DOT__core__DOT__mwreg_has_inst));
    bufp->fullBit(oldp+42,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started));
    bufp->fullIData(oldp+43,(((4U & vlSelf->Soc__DOT__core__DOT__fdreg_pc)
                               ? (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_bits_data 
                                          >> 0x20U))
                               : (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_bits_data))),32);
    bufp->fullBit(oldp+44,(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16));
    bufp->fullQData(oldp+45,(((IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen)
                               ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                               : vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)),64);
    bufp->fullBit(oldp+47,(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag));
    bufp->fullBit(oldp+48,(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid));
    bufp->fullQData(oldp+49,(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T),64);
    bufp->fullBit(oldp+51,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))));
    bufp->fullIData(oldp+52,((IData)(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T)),32);
    bufp->fullCData(oldp+53,(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask),8);
    bufp->fullBit(oldp+54,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_valid));
    bufp->fullQData(oldp+55,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_bits_data),64);
    bufp->fullBit(oldp+57,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_valid));
    bufp->fullBit(oldp+58,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw));
    bufp->fullIData(oldp+59,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr),32);
    bufp->fullCData(oldp+60,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state),3);
    bufp->fullBit(oldp+61,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3));
    bufp->fullIData(oldp+62,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__tag),21);
    bufp->fullCData(oldp+63,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index),8);
    bufp->fullCData(oldp+64,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset),3);
    bufp->fullWData(oldp+65,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid),512);
    bufp->fullWData(oldp+81,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty),512);
    bufp->fullWData(oldp+97,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace),512);
    bufp->fullBit(oldp+113,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0));
    VL_SHIFTR_WWI(512,512,10, __Vtemp_h773c399d__0, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid, 
                  (0x3ffU & ((IData)(1U) + (0x1feU 
                                            & ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                        >> 3U)) 
                                               << 1U)))));
    bufp->fullBit(oldp+114,(((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
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
    bufp->fullBit(oldp+115,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim));
    bufp->fullIData(oldp+116,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr),32);
    bufp->fullQData(oldp+117,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data),64);
    bufp->fullCData(oldp+119,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask),8);
    bufp->fullBit(oldp+120,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inst_type));
    bufp->fullQData(oldp+121,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitDataArray),64);
    bufp->fullBit(oldp+123,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum));
    bufp->fullSData(oldp+124,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__TagArray_ext__R0_addr),9);
    bufp->fullBit(oldp+125,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_9));
    bufp->fullSData(oldp+126,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__TagArray_ext__R1_addr),9);
    bufp->fullBit(oldp+127,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_11));
    bufp->fullBit(oldp+128,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_17));
    bufp->fullBit(oldp+129,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_18));
    bufp->fullSData(oldp+130,((0x1feU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                  >> 3U)) 
                                         << 1U))),9);
    bufp->fullBit(oldp+131,(((~ (IData)((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset)))) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf083ccdf__0))));
    bufp->fullBit(oldp+132,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf083ccdf__0) 
                             & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset)))));
    bufp->fullBit(oldp+133,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inst_type)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h0ae5a5ca__0))));
    bufp->fullSData(oldp+134,((0x1ffU & ((IData)(1U) 
                                         + (0x1feU 
                                            & ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                        >> 3U)) 
                                               << 1U))))),9);
    bufp->fullBit(oldp+135,(((~ (IData)((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset)))) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h5f2f9edc__0))));
    bufp->fullBit(oldp+136,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h5f2f9edc__0) 
                             & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset)))));
    bufp->fullBit(oldp+137,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inst_type)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h297c29be__0))));
    bufp->fullBit(oldp+138,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4d70bffc__0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0))));
    bufp->fullBit(oldp+139,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4d70bffc__0))));
    bufp->fullSData(oldp+140,((0x1ffU & ((IData)(1U) 
                                         + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                            << 1U)))),9);
    bufp->fullSData(oldp+141,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                               << 1U)),9);
    bufp->fullBit(oldp+142,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum))));
    bufp->fullQData(oldp+143,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data),64);
    bufp->fullBit(oldp+145,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0))));
    bufp->fullQData(oldp+146,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_0]
                                : 0ULL)),64);
    bufp->fullQData(oldp+148,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_1)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_2]
                                : 0ULL)),64);
    bufp->fullQData(oldp+150,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_3)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_4]
                                : 0ULL)),64);
    bufp->fullQData(oldp+152,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_5)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_6]
                                : 0ULL)),64);
    bufp->fullQData(oldp+154,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_7)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_8]
                                : 0ULL)),64);
    bufp->fullQData(oldp+156,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_9)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_10]
                                : 0ULL)),64);
    bufp->fullQData(oldp+158,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_11)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_12]
                                : 0ULL)),64);
    bufp->fullQData(oldp+160,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_13)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_14]
                                : 0ULL)),64);
    bufp->fullQData(oldp+162,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_15)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_16]
                                : 0ULL)),64);
    bufp->fullQData(oldp+164,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_17)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_18]
                                : 0ULL)),64);
    bufp->fullQData(oldp+166,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_19)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_20]
                                : 0ULL)),64);
    bufp->fullQData(oldp+168,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_21)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_22]
                                : 0ULL)),64);
    bufp->fullIData(oldp+170,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_9)
                                ? vlSelf->__VdfgTmp_h2fe899d6__0
                                : 0U)),21);
    bufp->fullIData(oldp+171,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_11)
                                ? vlSelf->__VdfgTmp_h5f294843__0
                                : 0U)),21);
    bufp->fullIData(oldp+172,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_17)
                                ? vlSelf->__VdfgTmp_h2fe899d6__0
                                : 0U)),21);
    bufp->fullIData(oldp+173,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_18)
                                ? vlSelf->__VdfgTmp_h5f294843__0
                                : 0U)),21);
    bufp->fullIData(oldp+174,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                              [(0x1feU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                   >> 3U)) 
                                          << 1U))]),21);
    bufp->fullIData(oldp+175,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                              [(0x1ffU & ((IData)(1U) 
                                          + (0x1feU 
                                             & ((IData)(
                                                        (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                         >> 3U)) 
                                                << 1U))))]),21);
    bufp->fullBit(oldp+176,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid));
    bufp->fullQData(oldp+177,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data),64);
    bufp->fullBit(oldp+179,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_valid));
    bufp->fullBit(oldp+180,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw));
    bufp->fullIData(oldp+181,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr),32);
    bufp->fullCData(oldp+182,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state),3);
    bufp->fullIData(oldp+183,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__tag),21);
    bufp->fullCData(oldp+184,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index),8);
    bufp->fullCData(oldp+185,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset),3);
    bufp->fullWData(oldp+186,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid),512);
    bufp->fullWData(oldp+202,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty),512);
    bufp->fullWData(oldp+218,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace),512);
    bufp->fullBit(oldp+234,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim));
    bufp->fullIData(oldp+235,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr),32);
    bufp->fullQData(oldp+236,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data),64);
    bufp->fullCData(oldp+238,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask),8);
    bufp->fullBit(oldp+239,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inst_type));
    bufp->fullQData(oldp+240,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitDataArray),64);
    bufp->fullBit(oldp+242,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum));
    bufp->fullSData(oldp+243,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__TagArray_ext__R0_addr),9);
    bufp->fullBit(oldp+244,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_9));
    bufp->fullSData(oldp+245,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__TagArray_ext__R1_addr),9);
    bufp->fullBit(oldp+246,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_11));
    bufp->fullBit(oldp+247,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_17));
    bufp->fullBit(oldp+248,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_18));
    bufp->fullSData(oldp+249,((0x1ffU & ((IData)(1U) 
                                         + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                            << 1U)))),9);
    bufp->fullSData(oldp+250,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                               << 1U)),9);
    bufp->fullBit(oldp+251,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum))));
    bufp->fullQData(oldp+252,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data),64);
    bufp->fullBit(oldp+254,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0))));
    bufp->fullQData(oldp+255,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_0]
                                : 0ULL)),64);
    bufp->fullQData(oldp+257,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_1)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_2]
                                : 0ULL)),64);
    bufp->fullQData(oldp+259,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_3)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_4]
                                : 0ULL)),64);
    bufp->fullQData(oldp+261,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_5)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_6]
                                : 0ULL)),64);
    bufp->fullQData(oldp+263,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_7)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_8]
                                : 0ULL)),64);
    bufp->fullQData(oldp+265,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_9)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_10]
                                : 0ULL)),64);
    bufp->fullQData(oldp+267,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_11)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_12]
                                : 0ULL)),64);
    bufp->fullQData(oldp+269,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_13)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_14]
                                : 0ULL)),64);
    bufp->fullQData(oldp+271,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_15)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_16]
                                : 0ULL)),64);
    bufp->fullQData(oldp+273,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_17)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_18]
                                : 0ULL)),64);
    bufp->fullQData(oldp+275,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_19)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_20]
                                : 0ULL)),64);
    bufp->fullQData(oldp+277,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_21)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_22]
                                : 0ULL)),64);
    bufp->fullIData(oldp+279,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_9)
                                ? vlSelf->__VdfgTmp_heb865217__0
                                : 0U)),21);
    bufp->fullIData(oldp+280,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_11)
                                ? vlSelf->__VdfgTmp_hb3a84c04__0
                                : 0U)),21);
    bufp->fullIData(oldp+281,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_17)
                                ? vlSelf->__VdfgTmp_heb865217__0
                                : 0U)),21);
    bufp->fullIData(oldp+282,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_18)
                                ? vlSelf->__VdfgTmp_hb3a84c04__0
                                : 0U)),21);
    bufp->fullBit(oldp+283,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp));
    bufp->fullBit(oldp+284,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp));
    bufp->fullBit(oldp+285,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__b_comp));
    bufp->fullBit(oldp+286,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__ar_comp));
    bufp->fullBit(oldp+287,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_comp));
    bufp->fullBit(oldp+288,(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6));
    bufp->fullQData(oldp+289,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result),64);
    bufp->fullBit(oldp+291,(vlSelf->Soc__DOT__core__DOT__clint__DOT__valid_buf));
    bufp->fullQData(oldp+292,(vlSelf->Soc__DOT__core__DOT__clint__DOT__rvalue_buf),64);
    bufp->fullBit(oldp+294,((vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME 
                             >= vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP)));
    bufp->fullIData(oldp+295,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MSIP),32);
    bufp->fullQData(oldp+296,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP),64);
    bufp->fullQData(oldp+298,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME),64);
    bufp->fullSData(oldp+300,(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr),12);
    __Vtemp_h5ee83ed9__0[0U] = 0x41000000U;
    __Vtemp_h5ee83ed9__0[1U] = 0x3003423U;
    __Vtemp_h5ee83ed9__0[2U] = (0x30000000U | (((0x8000000000000007ULL 
                                                 == vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE)
                                                 ? 0x344U
                                                 : 0U) 
                                               << 8U));
    bufp->fullSData(oldp+301,(((0x5fU >= (0x7fU & ((IData)(0xcU) 
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
    bufp->fullBit(oldp+302,(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen));
    bufp->fullQData(oldp+303,(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata),64);
    bufp->fullQData(oldp+305,(((0x340U == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
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
    bufp->fullQData(oldp+307,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC),64);
    bufp->fullQData(oldp+309,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE),64);
    bufp->fullQData(oldp+311,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC),64);
    bufp->fullQData(oldp+313,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE),64);
    bufp->fullQData(oldp+315,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP),64);
    bufp->fullQData(oldp+317,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS),64);
    bufp->fullQData(oldp+319,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH),64);
    bufp->fullQData(oldp+321,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0)
                                ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]
                                : 0ULL)),64);
    bufp->fullQData(oldp+323,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0)
                                ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]
                                : 0ULL)),64);
    bufp->fullBit(oldp+325,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)))));
    bufp->fullBit(oldp+326,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))));
    bufp->fullQData(oldp+327,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard)
                                ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard)
                                    ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)
                                        ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                        : 0ULL)))),64);
    bufp->fullQData(oldp+329,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                                ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                                    ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                                        ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                        : 0ULL)))),64);
    bufp->fullBit(oldp+331,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)))));
    bufp->fullQData(oldp+332,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard)
                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard)
                                    ? vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)
                                        ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                                        : 0ULL)))),64);
    bufp->fullCData(oldp+334,(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr),5);
    bufp->fullCData(oldp+335,(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr),5);
    bufp->fullQData(oldp+336,((((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT___GEN) 
                                & ((0x17U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                   & ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                      & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4)) 
                                         & ((~ (IData)(vlSelf->__VdfgTmp_hc6cf554e__0)) 
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
    bufp->fullQData(oldp+338,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T
                                : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                    ? 4ULL : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                               ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T
                                               : ((1U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                                   ? vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm
                                                   : 0ULL))))),64);
    bufp->fullCData(oldp+340,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_reg_waddr),5);
    bufp->fullBit(oldp+341,(((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT___GEN) 
                             & ((0x17U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                & ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                   & ((0x6fU != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                      & ((0x67U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                         & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5))))))));
    bufp->fullQData(oldp+342,(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__fdreg_pc)) 
                               + (((- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))) 
                                   << 0xcU) | (QData)((IData)(
                                                              (((IData)(vlSelf->__VdfgTmp_h0501020c__0) 
                                                                << 0xbU) 
                                                               | (((IData)(vlSelf->__VdfgTmp_h409dce0e__0) 
                                                                   << 5U) 
                                                                  | ((IData)(vlSelf->__VdfgTmp_h7b06c240__0) 
                                                                     << 1U)))))))),64);
    bufp->fullCData(oldp+344,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op),6);
    bufp->fullCData(oldp+345,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
                                ? (0x3fU & (IData)(
                                                   (vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data 
                                                    >> 0x14U)))
                                : 0U)),6);
    bufp->fullCData(oldp+346,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT___GEN)
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
    bufp->fullCData(oldp+347,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0)
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
    bufp->fullQData(oldp+348,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T),64);
    bufp->fullCData(oldp+350,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type),3);
    bufp->fullQData(oldp+351,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T),64);
    bufp->fullSData(oldp+353,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen)
                                ? (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr)
                                : 0U)),12);
    bufp->fullBit(oldp+354,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen));
    bufp->fullBit(oldp+355,((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT___GEN)));
    bufp->fullBit(oldp+356,(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag));
    bufp->fullIData(oldp+357,(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                ? (vlSelf->Soc__DOT__core__DOT__fdreg_pc 
                                   + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm))
                                : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                    ? (0xfffffffeU 
                                       & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4) 
                                          + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm)))
                                    : 0x80000000U))),32);
    bufp->fullCData(oldp+358,(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd),5);
    bufp->fullIData(oldp+359,(vlSelf->Soc__DOT__core__DOT__decode__DOT___GEN),32);
    bufp->fullCData(oldp+360,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type),2);
    bufp->fullCData(oldp+361,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type),2);
    bufp->fullCData(oldp+362,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type),3);
    bufp->fullCData(oldp+363,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT___GEN)
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
    bufp->fullCData(oldp+364,(((((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0) 
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
    bufp->fullQData(oldp+365,(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm),64);
    bufp->fullCData(oldp+367,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                ? ((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                    ? 0U : (7U & (IData)(vlSelf->__VdfgTmp_h6a80e86b__0)))
                                : 0U)),3);
    bufp->fullIData(oldp+368,((IData)(vlSelf->Soc__DOT__core__DOT__dereg_branch_addr)),32);
    bufp->fullQData(oldp+369,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                : 0ULL)),64);
    bufp->fullQData(oldp+371,((((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6)) 
                                & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))
                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                : 0ULL)),64);
    bufp->fullQData(oldp+373,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata),64);
    bufp->fullBit(oldp+375,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we));
    bufp->fullBit(oldp+376,(((0U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                             & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2) 
                                | ((0x30200073U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data)) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7))))));
    bufp->fullCData(oldp+377,(vlSelf->Soc__DOT__core__DOT__trap__DOT__state),3);
    bufp->fullBit(oldp+378,(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3));
    bufp->fullIData(oldp+379,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC)
                                : ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                    ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC)
                                    : 0U))),32);
    bufp->fullBit(oldp+380,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_flag));
    bufp->fullIData(oldp+381,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc),32);
    bufp->fullIData(oldp+382,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),32);
    bufp->fullIData(oldp+383,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc),32);
    bufp->fullQData(oldp+384,(vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata),64);
    bufp->fullBit(oldp+386,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))));
    bufp->fullBit(oldp+387,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard));
    bufp->fullBit(oldp+388,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard));
    bufp->fullBit(oldp+389,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard));
    bufp->fullBit(oldp+390,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard));
    bufp->fullBit(oldp+391,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard));
    bufp->fullBit(oldp+392,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard));
    bufp->fullBit(oldp+393,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard));
    bufp->fullBit(oldp+394,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard));
    bufp->fullBit(oldp+395,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard));
    bufp->fullBit(oldp+396,(vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag));
    bufp->fullCData(oldp+397,(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count),3);
    bufp->fullQData(oldp+398,((((QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
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
    bufp->fullQData(oldp+400,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                                & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr)))
                                ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr])),64);
    bufp->fullQData(oldp+402,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr]),64);
    bufp->fullQData(oldp+404,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]),64);
    bufp->fullQData(oldp+406,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]),64);
    bufp->fullQData(oldp+408,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+410,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+412,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+414,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+416,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+418,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+420,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+422,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+424,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+426,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+428,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+430,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+432,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+434,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+436,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+438,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+440,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+442,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+444,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+446,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+448,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+450,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+452,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+454,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+456,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+458,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+460,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+462,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+464,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+466,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+468,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+470,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
    bufp->fullIData(oldp+472,((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data)),32);
    bufp->fullQData(oldp+473,(vlSelf->Soc__DOT__core__DOT__trap__DOT__cause),64);
    bufp->fullIData(oldp+475,(vlSelf->Soc__DOT__core__DOT__trap__DOT__pc),32);
    bufp->fullBit(oldp+476,(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc0e633fc__0) 
                             & ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_comp)) 
                                   & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)))))));
    VL_SHIFTR_WWI(512,512,10, __Vtemp_hc4bbf11d__0, vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid, 
                  (0x3ffU & ((IData)(1U) + (0x1feU 
                                            & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                               >> 2U)))));
    bufp->fullBit(oldp+477,(((vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                              [(0x1ffU & ((IData)(1U) 
                                          + (0x1feU 
                                             & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                >> 2U))))] 
                              == (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                  >> 0xbU)) & __Vtemp_hc4bbf11d__0[0U])));
    bufp->fullBit(oldp+478,(((~ (IData)((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset)))) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf083ccdf__0))));
    bufp->fullBit(oldp+479,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf083ccdf__0) 
                             & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset)))));
    bufp->fullBit(oldp+480,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inst_type)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h0ae5a5ca__0))));
    bufp->fullBit(oldp+481,(((~ (IData)((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset)))) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h5f2f9edc__0))));
    bufp->fullBit(oldp+482,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h5f2f9edc__0) 
                             & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset)))));
    bufp->fullBit(oldp+483,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inst_type)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h297c29be__0))));
    bufp->fullIData(oldp+484,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                              [(0x1feU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                          >> 2U))]),21);
    bufp->fullIData(oldp+485,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                              [(0x1ffU & ((IData)(1U) 
                                          + (0x1feU 
                                             & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                >> 2U))))]),21);
    bufp->fullBit(oldp+486,(vlSelf->Soc__DOT__sram__DOT__awready));
    bufp->fullBit(oldp+487,(vlSelf->Soc__DOT__sram__DOT__wready));
    bufp->fullBit(oldp+488,(vlSelf->Soc__DOT__sram__DOT__arready));
    bufp->fullBit(oldp+489,(vlSelf->Soc__DOT__sram__DOT__rvalid));
    bufp->fullQData(oldp+490,(vlSelf->Soc__DOT__sram__DOT__rdata),64);
    bufp->fullCData(oldp+492,(vlSelf->Soc__DOT__sram__DOT__bresp),2);
    bufp->fullCData(oldp+493,(vlSelf->Soc__DOT__sram__DOT__rresp),2);
    bufp->fullBit(oldp+494,(vlSelf->Soc__DOT__sram__DOT__bvalid));
    bufp->fullIData(oldp+495,(vlSelf->Soc__DOT__sram__DOT__awaddr_buffer),32);
    bufp->fullBit(oldp+496,(vlSelf->Soc__DOT__sram__DOT__need_resp));
    bufp->fullIData(oldp+497,(vlSelf->Soc__DOT__sram__DOT__araddr),32);
    bufp->fullBit(oldp+498,(vlSelf->Soc__DOT__sram__DOT__need_read));
    bufp->fullBit(oldp+499,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN));
    bufp->fullIData(oldp+500,(vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr),32);
    bufp->fullBit(oldp+501,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1));
    bufp->fullQData(oldp+502,(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0)
                                ? 0ULL : ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h02c05ceb__0)
                                           ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_data
                                           : vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_data))),64);
    bufp->fullCData(oldp+504,(((0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))
                                ? 0U : (0xffU & (- (IData)(
                                                           (1U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))))))),8);
    bufp->fullBit(oldp+505,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_2));
    bufp->fullIData(oldp+506,(((1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                      | ((~ ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                             & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h82421030__0))) 
                                         | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)))))
                                ? 0U : vlSelf->Soc__DOT__core__DOT__arbitor__DOT___addr_T_2)),32);
    bufp->fullIData(oldp+507,(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc),32);
    bufp->fullBit(oldp+508,(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid));
    bufp->fullQData(oldp+509,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_data),64);
    bufp->fullBit(oldp+511,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_14));
    bufp->fullBit(oldp+512,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16));
    bufp->fullBit(oldp+513,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20));
    bufp->fullBit(oldp+514,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_26));
    bufp->fullBit(oldp+515,(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid));
    bufp->fullQData(oldp+516,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_data),64);
    bufp->fullBit(oldp+518,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3));
    bufp->fullBit(oldp+519,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0));
    bufp->fullSData(oldp+520,((0x1feU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                         >> 2U))),9);
    bufp->fullSData(oldp+521,((0x1ffU & ((IData)(1U) 
                                         + (0x1feU 
                                            & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                               >> 2U))))),9);
    bufp->fullBit(oldp+522,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_14));
    bufp->fullBit(oldp+523,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16));
    bufp->fullBit(oldp+524,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20));
    bufp->fullBit(oldp+525,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_26));
    bufp->fullCData(oldp+526,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state),2);
    bufp->fullBit(oldp+527,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_flush));
    bufp->fullBit(oldp+528,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_stall));
    bufp->fullBit(oldp+529,(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush));
    bufp->fullBit(oldp+530,(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_stall));
    bufp->fullQData(oldp+531,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data),64);
    bufp->fullQData(oldp+533,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data),64);
    bufp->fullQData(oldp+535,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_bits_data),64);
    bufp->fullQData(oldp+537,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data),64);
    bufp->fullBit(oldp+539,(vlSelf->clock));
    bufp->fullBit(oldp+540,(vlSelf->reset));
    bufp->fullBit(oldp+541,(vlSelf->Soc__DOT____Vcellinp__sram__ARESETn));
    bufp->fullIData(oldp+542,((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1) 
                                & ((IData)(vlSelf->Soc__DOT__sram__DOT__wready) 
                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN) 
                                      & (IData)(vlSelf->Soc__DOT__sram__DOT__awready))))
                                ? vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr
                                : vlSelf->Soc__DOT__sram__DOT__awaddr_buffer)),32);
    bufp->fullBit(oldp+543,(vlSelf->Soc__DOT___sram_S_AXI_BVALID));
    bufp->fullBit(oldp+544,(0U));
    bufp->fullBit(oldp+545,(1U));
    bufp->fullQData(oldp+546,(0ULL),64);
    bufp->fullCData(oldp+548,(0U),8);
    bufp->fullCData(oldp+549,(0U),5);
    bufp->fullCData(oldp+550,(0U),3);
}
