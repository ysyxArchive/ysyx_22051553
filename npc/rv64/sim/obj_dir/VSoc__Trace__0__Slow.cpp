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
    tracep->declBit(c+505,"clock", false,-1);
    tracep->declBit(c+506,"reset", false,-1);
    tracep->pushNamePrefix("Soc ");
    tracep->declBit(c+505,"clock", false,-1);
    tracep->declBit(c+506,"reset", false,-1);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+505,"clock", false,-1);
    tracep->declBit(c+506,"reset", false,-1);
    tracep->declBit(c+461,"io_AXI_Interface_aw_ready", false,-1);
    tracep->declBit(c+462,"io_AXI_Interface_w_ready", false,-1);
    tracep->declBit(c+509,"io_AXI_Interface_b_valid", false,-1);
    tracep->declBit(c+463,"io_AXI_Interface_ar_ready", false,-1);
    tracep->declBit(c+464,"io_AXI_Interface_r_valid", false,-1);
    tracep->declQuad(c+465,"io_AXI_Interface_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+474,"io_AXI_Interface_aw_valid", false,-1);
    tracep->declBus(c+475,"io_AXI_Interface_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+476,"io_AXI_Interface_w_valid", false,-1);
    tracep->declQuad(c+477,"io_AXI_Interface_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+479,"io_AXI_Interface_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+480,"io_AXI_Interface_ar_valid", false,-1);
    tracep->declBus(c+481,"io_AXI_Interface_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+507,"io_AXI_Interface_r_ready", false,-1);
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
    tracep->declBit(c+505,"clk", false,-1);
    tracep->declBit(c+506,"rst", false,-1);
    tracep->declBus(c+42,"pc", false,-1, 31,0);
    tracep->declBit(c+510,"pc_req", false,-1);
    tracep->declBus(c+43,"inst", false,-1, 31,0);
    tracep->declBit(c+511,"inst_valid", false,-1);
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
    tracep->declBit(c+505,"clock", false,-1);
    tracep->declBit(c+506,"reset", false,-1);
    tracep->declBit(c+48,"io_cpu_req_valid", false,-1);
    tracep->declBit(c+511,"io_cpu_req_bits_inst_type", false,-1);
    tracep->declBus(c+52,"io_cpu_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+14,"io_cpu_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+53,"io_cpu_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+482,"io_axi_resp_valid", false,-1);
    tracep->declQuad(c+497,"io_axi_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+54,"io_cpu_resp_valid", false,-1);
    tracep->declQuad(c+55,"io_cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+57,"io_axi_req_valid", false,-1);
    tracep->declBit(c+58,"io_axi_req_bits_rw", false,-1);
    tracep->declBus(c+59,"io_axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+483,"io_axi_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+60,"state", false,-1, 2,0);
    tracep->declBus(c+61,"tag", false,-1, 20,0);
    tracep->declBus(c+62,"index", false,-1, 7,0);
    tracep->declBus(c+63,"offset", false,-1, 2,0);
    tracep->declArray(c+64,"valid", false,-1, 511,0);
    tracep->declArray(c+80,"dirty", false,-1, 511,0);
    tracep->declArray(c+96,"replace", false,-1, 511,0);
    tracep->declBit(c+112,"victim", false,-1);
    tracep->declBus(c+113,"addr", false,-1, 31,0);
    tracep->declQuad(c+114,"data", false,-1, 63,0);
    tracep->declBus(c+116,"mask", false,-1, 7,0);
    tracep->declBit(c+117,"inst_type", false,-1);
    tracep->declQuad(c+118,"whitDataArray", false,-1, 63,0);
    tracep->declBit(c+120,"whitNum", false,-1);
    tracep->declBit(c+121,"cpu_resp_valid", false,-1);
    tracep->declQuad(c+55,"cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+57,"axi_req_valid", false,-1);
    tracep->declBit(c+58,"axi_req_bits_rw", false,-1);
    tracep->declBus(c+59,"axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+483,"axi_req_bits_data", false,-1, 63,0);
    tracep->pushNamePrefix("DataArray_ext ");
    tracep->declBus(c+122,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+123,"R0_en", false,-1);
    tracep->declBit(c+505,"R0_clk", false,-1);
    tracep->declBus(c+124,"R1_addr", false,-1, 8,0);
    tracep->declBit(c+125,"R1_en", false,-1);
    tracep->declBit(c+505,"R1_clk", false,-1);
    tracep->declBus(c+122,"R2_addr", false,-1, 8,0);
    tracep->declBit(c+126,"R2_en", false,-1);
    tracep->declBit(c+505,"R2_clk", false,-1);
    tracep->declBus(c+124,"R3_addr", false,-1, 8,0);
    tracep->declBit(c+127,"R3_en", false,-1);
    tracep->declBit(c+505,"R3_clk", false,-1);
    tracep->declBus(c+128,"R4_addr", false,-1, 8,0);
    tracep->declBit(c+129,"R4_en", false,-1);
    tracep->declBit(c+505,"R4_clk", false,-1);
    tracep->declBus(c+130,"R5_addr", false,-1, 8,0);
    tracep->declBit(c+131,"R5_en", false,-1);
    tracep->declBit(c+505,"R5_clk", false,-1);
    tracep->declBus(c+128,"R6_addr", false,-1, 8,0);
    tracep->declBit(c+132,"R6_en", false,-1);
    tracep->declBit(c+505,"R6_clk", false,-1);
    tracep->declBus(c+130,"R7_addr", false,-1, 8,0);
    tracep->declBit(c+133,"R7_en", false,-1);
    tracep->declBit(c+505,"R7_clk", false,-1);
    tracep->declBus(c+130,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+485,"W0_en", false,-1);
    tracep->declBit(c+505,"W0_clk", false,-1);
    tracep->declQuad(c+497,"W0_data", false,-1, 63,0);
    tracep->declBus(c+128,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+486,"W1_en", false,-1);
    tracep->declBit(c+505,"W1_clk", false,-1);
    tracep->declQuad(c+497,"W1_data", false,-1, 63,0);
    tracep->declBus(c+130,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+134,"W2_en", false,-1);
    tracep->declBit(c+505,"W2_clk", false,-1);
    tracep->declQuad(c+135,"W2_data", false,-1, 63,0);
    tracep->declBus(c+128,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+137,"W3_en", false,-1);
    tracep->declBit(c+505,"W3_clk", false,-1);
    tracep->declQuad(c+135,"W3_data", false,-1, 63,0);
    tracep->declBus(c+130,"W4_addr", false,-1, 8,0);
    tracep->declBit(c+487,"W4_en", false,-1);
    tracep->declBit(c+505,"W4_clk", false,-1);
    tracep->declQuad(c+499,"W4_data", false,-1, 63,0);
    tracep->declBus(c+128,"W5_addr", false,-1, 8,0);
    tracep->declBit(c+488,"W5_en", false,-1);
    tracep->declBit(c+505,"W5_clk", false,-1);
    tracep->declQuad(c+499,"W5_data", false,-1, 63,0);
    tracep->declQuad(c+138,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+140,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+142,"R2_data", false,-1, 63,0);
    tracep->declQuad(c+144,"R3_data", false,-1, 63,0);
    tracep->declQuad(c+146,"R4_data", false,-1, 63,0);
    tracep->declQuad(c+148,"R5_data", false,-1, 63,0);
    tracep->declQuad(c+150,"R6_data", false,-1, 63,0);
    tracep->declQuad(c+152,"R7_data", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("TagArray_ext ");
    tracep->declBus(c+122,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+123,"R0_en", false,-1);
    tracep->declBit(c+505,"R0_clk", false,-1);
    tracep->declBus(c+124,"R1_addr", false,-1, 8,0);
    tracep->declBit(c+125,"R1_en", false,-1);
    tracep->declBit(c+505,"R1_clk", false,-1);
    tracep->declBus(c+122,"R2_addr", false,-1, 8,0);
    tracep->declBit(c+126,"R2_en", false,-1);
    tracep->declBit(c+505,"R2_clk", false,-1);
    tracep->declBus(c+124,"R3_addr", false,-1, 8,0);
    tracep->declBit(c+127,"R3_en", false,-1);
    tracep->declBit(c+505,"R3_clk", false,-1);
    tracep->declBus(c+128,"R4_addr", false,-1, 8,0);
    tracep->declBit(c+510,"R4_en", false,-1);
    tracep->declBit(c+505,"R4_clk", false,-1);
    tracep->declBus(c+130,"R5_addr", false,-1, 8,0);
    tracep->declBit(c+510,"R5_en", false,-1);
    tracep->declBit(c+505,"R5_clk", false,-1);
    tracep->declBus(c+130,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+485,"W0_en", false,-1);
    tracep->declBit(c+505,"W0_clk", false,-1);
    tracep->declBus(c+61,"W0_data", false,-1, 20,0);
    tracep->declBus(c+128,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+486,"W1_en", false,-1);
    tracep->declBit(c+505,"W1_clk", false,-1);
    tracep->declBus(c+61,"W1_data", false,-1, 20,0);
    tracep->declBus(c+130,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+487,"W2_en", false,-1);
    tracep->declBit(c+505,"W2_clk", false,-1);
    tracep->declBus(c+61,"W2_data", false,-1, 20,0);
    tracep->declBus(c+128,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+488,"W3_en", false,-1);
    tracep->declBit(c+505,"W3_clk", false,-1);
    tracep->declBus(c+61,"W3_data", false,-1, 20,0);
    tracep->declBus(c+154,"R0_data", false,-1, 20,0);
    tracep->declBus(c+155,"R1_data", false,-1, 20,0);
    tracep->declBus(c+156,"R2_data", false,-1, 20,0);
    tracep->declBus(c+157,"R3_data", false,-1, 20,0);
    tracep->declBus(c+158,"R4_data", false,-1, 20,0);
    tracep->declBus(c+159,"R5_data", false,-1, 20,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Icache ");
    tracep->declBit(c+505,"clock", false,-1);
    tracep->declBit(c+506,"reset", false,-1);
    tracep->declBit(c+510,"io_cpu_req_valid", false,-1);
    tracep->declBit(c+510,"io_cpu_req_bits_inst_type", false,-1);
    tracep->declBus(c+42,"io_cpu_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+512,"io_cpu_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+514,"io_cpu_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+489,"io_axi_resp_valid", false,-1);
    tracep->declQuad(c+501,"io_axi_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+160,"io_cpu_resp_valid", false,-1);
    tracep->declQuad(c+161,"io_cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+163,"io_axi_req_valid", false,-1);
    tracep->declBit(c+164,"io_axi_req_bits_rw", false,-1);
    tracep->declBus(c+165,"io_axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+490,"io_axi_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+166,"state", false,-1, 2,0);
    tracep->declBus(c+167,"tag", false,-1, 20,0);
    tracep->declBus(c+168,"index", false,-1, 7,0);
    tracep->declBus(c+169,"offset", false,-1, 2,0);
    tracep->declArray(c+170,"valid", false,-1, 511,0);
    tracep->declArray(c+186,"dirty", false,-1, 511,0);
    tracep->declArray(c+202,"replace", false,-1, 511,0);
    tracep->declBit(c+218,"victim", false,-1);
    tracep->declBus(c+219,"addr", false,-1, 31,0);
    tracep->declQuad(c+220,"data", false,-1, 63,0);
    tracep->declBus(c+222,"mask", false,-1, 7,0);
    tracep->declBit(c+223,"inst_type", false,-1);
    tracep->declQuad(c+224,"whitDataArray", false,-1, 63,0);
    tracep->declBit(c+226,"whitNum", false,-1);
    tracep->declBit(c+227,"cpu_resp_valid", false,-1);
    tracep->declQuad(c+161,"cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+163,"axi_req_valid", false,-1);
    tracep->declBit(c+164,"axi_req_bits_rw", false,-1);
    tracep->declBus(c+165,"axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+490,"axi_req_bits_data", false,-1, 63,0);
    tracep->pushNamePrefix("DataArray_ext ");
    tracep->declBus(c+228,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+229,"R0_en", false,-1);
    tracep->declBit(c+505,"R0_clk", false,-1);
    tracep->declBus(c+230,"R1_addr", false,-1, 8,0);
    tracep->declBit(c+231,"R1_en", false,-1);
    tracep->declBit(c+505,"R1_clk", false,-1);
    tracep->declBus(c+228,"R2_addr", false,-1, 8,0);
    tracep->declBit(c+232,"R2_en", false,-1);
    tracep->declBit(c+505,"R2_clk", false,-1);
    tracep->declBus(c+230,"R3_addr", false,-1, 8,0);
    tracep->declBit(c+233,"R3_en", false,-1);
    tracep->declBit(c+505,"R3_clk", false,-1);
    tracep->declBus(c+234,"R4_addr", false,-1, 8,0);
    tracep->declBit(c+235,"R4_en", false,-1);
    tracep->declBit(c+505,"R4_clk", false,-1);
    tracep->declBus(c+236,"R5_addr", false,-1, 8,0);
    tracep->declBit(c+237,"R5_en", false,-1);
    tracep->declBit(c+505,"R5_clk", false,-1);
    tracep->declBus(c+234,"R6_addr", false,-1, 8,0);
    tracep->declBit(c+511,"R6_en", false,-1);
    tracep->declBit(c+505,"R6_clk", false,-1);
    tracep->declBus(c+236,"R7_addr", false,-1, 8,0);
    tracep->declBit(c+511,"R7_en", false,-1);
    tracep->declBit(c+505,"R7_clk", false,-1);
    tracep->declBus(c+236,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+492,"W0_en", false,-1);
    tracep->declBit(c+505,"W0_clk", false,-1);
    tracep->declQuad(c+501,"W0_data", false,-1, 63,0);
    tracep->declBus(c+234,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+493,"W1_en", false,-1);
    tracep->declBit(c+505,"W1_clk", false,-1);
    tracep->declQuad(c+501,"W1_data", false,-1, 63,0);
    tracep->declBus(c+236,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+238,"W2_en", false,-1);
    tracep->declBit(c+505,"W2_clk", false,-1);
    tracep->declQuad(c+239,"W2_data", false,-1, 63,0);
    tracep->declBus(c+234,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+241,"W3_en", false,-1);
    tracep->declBit(c+505,"W3_clk", false,-1);
    tracep->declQuad(c+239,"W3_data", false,-1, 63,0);
    tracep->declBus(c+236,"W4_addr", false,-1, 8,0);
    tracep->declBit(c+494,"W4_en", false,-1);
    tracep->declBit(c+505,"W4_clk", false,-1);
    tracep->declQuad(c+503,"W4_data", false,-1, 63,0);
    tracep->declBus(c+234,"W5_addr", false,-1, 8,0);
    tracep->declBit(c+495,"W5_en", false,-1);
    tracep->declBit(c+505,"W5_clk", false,-1);
    tracep->declQuad(c+503,"W5_data", false,-1, 63,0);
    tracep->declQuad(c+242,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+244,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+246,"R2_data", false,-1, 63,0);
    tracep->declQuad(c+248,"R3_data", false,-1, 63,0);
    tracep->declQuad(c+250,"R4_data", false,-1, 63,0);
    tracep->declQuad(c+252,"R5_data", false,-1, 63,0);
    tracep->declQuad(c+254,"R6_data", false,-1, 63,0);
    tracep->declQuad(c+256,"R7_data", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("TagArray_ext ");
    tracep->declBus(c+228,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+229,"R0_en", false,-1);
    tracep->declBit(c+505,"R0_clk", false,-1);
    tracep->declBus(c+230,"R1_addr", false,-1, 8,0);
    tracep->declBit(c+231,"R1_en", false,-1);
    tracep->declBit(c+505,"R1_clk", false,-1);
    tracep->declBus(c+228,"R2_addr", false,-1, 8,0);
    tracep->declBit(c+232,"R2_en", false,-1);
    tracep->declBit(c+505,"R2_clk", false,-1);
    tracep->declBus(c+230,"R3_addr", false,-1, 8,0);
    tracep->declBit(c+233,"R3_en", false,-1);
    tracep->declBit(c+505,"R3_clk", false,-1);
    tracep->declBus(c+234,"R4_addr", false,-1, 8,0);
    tracep->declBit(c+510,"R4_en", false,-1);
    tracep->declBit(c+505,"R4_clk", false,-1);
    tracep->declBus(c+236,"R5_addr", false,-1, 8,0);
    tracep->declBit(c+510,"R5_en", false,-1);
    tracep->declBit(c+505,"R5_clk", false,-1);
    tracep->declBus(c+236,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+492,"W0_en", false,-1);
    tracep->declBit(c+505,"W0_clk", false,-1);
    tracep->declBus(c+167,"W0_data", false,-1, 20,0);
    tracep->declBus(c+234,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+493,"W1_en", false,-1);
    tracep->declBit(c+505,"W1_clk", false,-1);
    tracep->declBus(c+167,"W1_data", false,-1, 20,0);
    tracep->declBus(c+236,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+494,"W2_en", false,-1);
    tracep->declBit(c+505,"W2_clk", false,-1);
    tracep->declBus(c+167,"W2_data", false,-1, 20,0);
    tracep->declBus(c+234,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+495,"W3_en", false,-1);
    tracep->declBit(c+505,"W3_clk", false,-1);
    tracep->declBus(c+167,"W3_data", false,-1, 20,0);
    tracep->declBus(c+258,"R0_data", false,-1, 20,0);
    tracep->declBus(c+259,"R1_data", false,-1, 20,0);
    tracep->declBus(c+260,"R2_data", false,-1, 20,0);
    tracep->declBus(c+261,"R3_data", false,-1, 20,0);
    tracep->declBus(c+262,"R4_data", false,-1, 20,0);
    tracep->declBus(c+263,"R5_data", false,-1, 20,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("arbitor ");
    tracep->declBit(c+505,"clock", false,-1);
    tracep->declBit(c+506,"reset", false,-1);
    tracep->declBit(c+163,"io_master0_req_valid", false,-1);
    tracep->declBit(c+164,"io_master0_req_bits_rw", false,-1);
    tracep->declBus(c+165,"io_master0_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+490,"io_master0_req_bits_data", false,-1, 63,0);
    tracep->declBit(c+57,"io_master1_req_valid", false,-1);
    tracep->declBit(c+58,"io_master1_req_bits_rw", false,-1);
    tracep->declBus(c+59,"io_master1_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+483,"io_master1_req_bits_data", false,-1, 63,0);
    tracep->declBit(c+461,"io_AXI_O_aw_ready", false,-1);
    tracep->declBit(c+462,"io_AXI_O_w_ready", false,-1);
    tracep->declBit(c+509,"io_AXI_O_b_valid", false,-1);
    tracep->declBit(c+463,"io_AXI_O_ar_ready", false,-1);
    tracep->declBit(c+464,"io_AXI_O_r_valid", false,-1);
    tracep->declQuad(c+465,"io_AXI_O_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+489,"io_master0_resp_valid", false,-1);
    tracep->declQuad(c+501,"io_master0_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+482,"io_master1_resp_valid", false,-1);
    tracep->declQuad(c+497,"io_master1_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+474,"io_AXI_O_aw_valid", false,-1);
    tracep->declBus(c+475,"io_AXI_O_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+476,"io_AXI_O_w_valid", false,-1);
    tracep->declQuad(c+477,"io_AXI_O_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+479,"io_AXI_O_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+480,"io_AXI_O_ar_valid", false,-1);
    tracep->declBus(c+481,"io_AXI_O_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+507,"io_AXI_O_r_ready", false,-1);
    tracep->declBus(c+496,"state", false,-1, 1,0);
    tracep->declBit(c+264,"aw_comp", false,-1);
    tracep->declBit(c+265,"w_comp", false,-1);
    tracep->declBit(c+266,"b_comp", false,-1);
    tracep->declBit(c+267,"ar_comp", false,-1);
    tracep->declBit(c+268,"r_comp", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("clint ");
    tracep->declBit(c+505,"clock", false,-1);
    tracep->declBit(c+506,"reset", false,-1);
    tracep->declBit(c+269,"io_clex_valid", false,-1);
    tracep->declBus(c+16,"io_clex_ld_type", false,-1, 2,0);
    tracep->declQuad(c+270,"io_clex_raddr", false,-1, 63,0);
    tracep->declBus(c+13,"io_clex_sd_type", false,-1, 2,0);
    tracep->declQuad(c+270,"io_clex_waddr", false,-1, 63,0);
    tracep->declBus(c+53,"io_clex_wmask", false,-1, 7,0);
    tracep->declQuad(c+14,"io_clex_wdata", false,-1, 63,0);
    tracep->declBit(c+272,"io_clmem_Clrvalue_valid", false,-1);
    tracep->declQuad(c+273,"io_clmem_Clrvalue_bits", false,-1, 63,0);
    tracep->declBit(c+275,"io_timer_int", false,-1);
    tracep->declBus(c+276,"MSIP", false,-1, 31,0);
    tracep->declQuad(c+277,"MTIMECMP", false,-1, 63,0);
    tracep->declQuad(c+279,"MTIME", false,-1, 63,0);
    tracep->declQuad(c+273,"rvalue_buf", false,-1, 63,0);
    tracep->declBit(c+272,"valid_buf", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csrs ");
    tracep->declBit(c+505,"clock", false,-1);
    tracep->declBit(c+506,"reset", false,-1);
    tracep->declBus(c+281,"io_CSRDe_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+40,"io_CSRWb_rd", false,-1, 11,0);
    tracep->declBit(c+39,"io_CSRWb_csr_wen", false,-1);
    tracep->declQuad(c+37,"io_CSRWb_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+282,"io_CSRTr_rd", false,-1, 11,0);
    tracep->declBit(c+283,"io_CSRTr_csr_wen", false,-1);
    tracep->declQuad(c+284,"io_CSRTr_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+275,"io_timer_int", false,-1);
    tracep->declQuad(c+286,"io_CSRDe_csr_rdata", false,-1, 63,0);
    tracep->declQuad(c+288,"io_CSRTr_MTVEC", false,-1, 63,0);
    tracep->declQuad(c+290,"io_CSRTr_MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+292,"io_CSRTr_MEPC", false,-1, 63,0);
    tracep->declQuad(c+294,"io_CSRTr_MIE", false,-1, 63,0);
    tracep->declQuad(c+296,"io_CSRTr_MIP", false,-1, 63,0);
    tracep->declQuad(c+298,"io_CSRTr_MSTATUS", false,-1, 63,0);
    tracep->declQuad(c+288,"MTVEC", false,-1, 63,0);
    tracep->declQuad(c+290,"MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+292,"MEPC", false,-1, 63,0);
    tracep->declQuad(c+294,"MIE", false,-1, 63,0);
    tracep->declQuad(c+296,"MIP", false,-1, 63,0);
    tracep->declQuad(c+298,"MSTATUS", false,-1, 63,0);
    tracep->declQuad(c+300,"MSCRATCH", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("decode ");
    tracep->declBit(c+505,"clock", false,-1);
    tracep->declBit(c+506,"reset", false,-1);
    tracep->declBit(c+160,"io_inst_valid", false,-1);
    tracep->declQuad(c+161,"io_inst_bits_data", false,-1, 63,0);
    tracep->declBus(c+1,"io_fdio_pc", false,-1, 31,0);
    tracep->declQuad(c+302,"io_rfio_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+304,"io_rfio_reg2_rdata", false,-1, 63,0);
    tracep->declBit(c+47,"io_branch", false,-1);
    tracep->declBit(c+306,"io_fwde_fw_sel1", false,-1);
    tracep->declBit(c+307,"io_fwde_fw_sel2", false,-1);
    tracep->declQuad(c+308,"io_fwde_fw_data1", false,-1, 63,0);
    tracep->declQuad(c+310,"io_fwde_fw_data2", false,-1, 63,0);
    tracep->declBit(c+312,"io_fwde_csr_fw_sel", false,-1);
    tracep->declQuad(c+313,"io_fwde_csr_fw_data", false,-1, 63,0);
    tracep->declQuad(c+286,"io_csrs_csr_rdata", false,-1, 63,0);
    tracep->declBus(c+315,"io_rfio_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+316,"io_rfio_reg2_raddr", false,-1, 4,0);
    tracep->declQuad(c+317,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+319,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+321,"io_deio_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+322,"io_deio_branch_type", false,-1);
    tracep->declQuad(c+323,"io_deio_branch_addr", false,-1, 63,0);
    tracep->declBus(c+325,"io_deio_alu_op", false,-1, 5,0);
    tracep->declBus(c+326,"io_deio_shamt", false,-1, 5,0);
    tracep->declBus(c+327,"io_deio_wb_type", false,-1, 1,0);
    tracep->declBus(c+328,"io_deio_sd_type", false,-1, 2,0);
    tracep->declQuad(c+329,"io_deio_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+331,"io_deio_ld_type", false,-1, 2,0);
    tracep->declQuad(c+332,"io_deio_csr_t", false,-1, 63,0);
    tracep->declBus(c+334,"io_deio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+335,"io_deio_csr_wen", false,-1);
    tracep->declBit(c+336,"io_deio_has_inst", false,-1);
    tracep->declBit(c+337,"io_jump_flag", false,-1);
    tracep->declBus(c+338,"io_jump_pc", false,-1, 31,0);
    tracep->declBit(c+44,"io_load_use", false,-1);
    tracep->declBus(c+315,"io_fwde_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+316,"io_fwde_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+281,"io_fwde_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+281,"io_csrs_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+339,"lu_rd", false,-1, 4,0);
    tracep->pushNamePrefix("cu ");
    tracep->declBus(c+340,"io_inst", false,-1, 31,0);
    tracep->declBus(c+341,"io_jump_type", false,-1, 1,0);
    tracep->declBit(c+322,"io_branch_type", false,-1);
    tracep->declBus(c+342,"io_opa_type", false,-1, 1,0);
    tracep->declBus(c+343,"io_opb_type", false,-1, 2,0);
    tracep->declBus(c+344,"io_imm_type", false,-1, 2,0);
    tracep->declBus(c+325,"io_alu_op", false,-1, 5,0);
    tracep->declBus(c+327,"io_wb_type", false,-1, 1,0);
    tracep->declBus(c+328,"io_sd_type", false,-1, 2,0);
    tracep->declBus(c+331,"io_ld_type", false,-1, 2,0);
    tracep->declBus(c+345,"io_csr_type", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("eximm ");
    tracep->declBus(c+340,"io_inst", false,-1, 31,0);
    tracep->declBus(c+344,"io_imm_type", false,-1, 2,0);
    tracep->declQuad(c+346,"io_eximm", false,-1, 63,0);
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
    tracep->declBus(c+348,"io_emio_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+270,"io_emio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+20,"io_emio_csr_wen", false,-1);
    tracep->declBus(c+19,"io_emio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+21,"io_emio_has_inst", false,-1);
    tracep->declBit(c+47,"io_jump_flag", false,-1);
    tracep->declBus(c+349,"io_jump_pc", false,-1, 31,0);
    tracep->declQuad(c+350,"io_raddr", false,-1, 63,0);
    tracep->declQuad(c+352,"io_waddr", false,-1, 63,0);
    tracep->declQuad(c+14,"io_wdata", false,-1, 63,0);
    tracep->declBus(c+53,"io_wmask", false,-1, 7,0);
    tracep->declBus(c+6,"io_fwex_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+354,"io_fwex_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+356,"io_fwex_reg_we", false,-1);
    tracep->declQuad(c+270,"io_fwex_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+20,"io_fwex_csr_wen", false,-1);
    tracep->declBus(c+19,"io_fwex_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+269,"io_clex_valid", false,-1);
    tracep->declBus(c+16,"io_clex_ld_type", false,-1, 2,0);
    tracep->declQuad(c+270,"io_clex_raddr", false,-1, 63,0);
    tracep->declBus(c+13,"io_clex_sd_type", false,-1, 2,0);
    tracep->declQuad(c+270,"io_clex_waddr", false,-1, 63,0);
    tracep->declBus(c+53,"io_clex_wmask", false,-1, 7,0);
    tracep->declQuad(c+14,"io_clex_wdata", false,-1, 63,0);
    tracep->pushNamePrefix("alu ");
    tracep->declQuad(c+2,"io_op_a", false,-1, 63,0);
    tracep->declQuad(c+4,"io_op_b", false,-1, 63,0);
    tracep->declBus(c+10,"io_alu_op", false,-1, 5,0);
    tracep->declBus(c+11,"io_shamt", false,-1, 5,0);
    tracep->declQuad(c+270,"io_result", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fc ");
    tracep->declBit(c+337,"io_fcde_jump_flag", false,-1);
    tracep->declBus(c+338,"io_fcde_jump_pc", false,-1, 31,0);
    tracep->declBit(c+44,"io_fcde_load_use", false,-1);
    tracep->declBit(c+47,"io_fcex_jump_flag", false,-1);
    tracep->declBus(c+349,"io_fcex_jump_pc", false,-1, 31,0);
    tracep->declBit(c+357,"io_fctr_pop_NOP", false,-1);
    tracep->declBus(c+358,"io_fctr_trap_state", false,-1, 2,0);
    tracep->declBit(c+359,"io_fctr_jump_flag", false,-1);
    tracep->declBus(c+360,"io_fctr_jump_pc", false,-1, 31,0);
    tracep->declBit(c+361,"io_fcfe_jump_flag", false,-1);
    tracep->declBus(c+362,"io_fcfe_jump_pc", false,-1, 31,0);
    tracep->declBit(c+363,"io_fcfe_flush", false,-1);
    tracep->declBit(c+364,"io_fcfe_stall", false,-1);
    tracep->declBit(c+365,"io_fcde_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+505,"clock", false,-1);
    tracep->declBit(c+506,"reset", false,-1);
    tracep->declBit(c+361,"io_fcfe_jump_flag", false,-1);
    tracep->declBus(c+362,"io_fcfe_jump_pc", false,-1, 31,0);
    tracep->declBit(c+363,"io_fcfe_flush", false,-1);
    tracep->declBit(c+364,"io_fcfe_stall", false,-1);
    tracep->declBus(c+42,"io_fdio_pc", false,-1, 31,0);
    tracep->declBus(c+42,"io_pc_bits", false,-1, 31,0);
    tracep->declBit(c+366,"started", false,-1);
    tracep->declBus(c+367,"pc", false,-1, 31,0);
    tracep->declBus(c+368,"old_pc", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fw ");
    tracep->declBus(c+315,"io_fwde_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+316,"io_fwde_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+281,"io_fwde_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+6,"io_fwex_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+354,"io_fwex_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+356,"io_fwex_reg_we", false,-1);
    tracep->declQuad(c+270,"io_fwex_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+20,"io_fwex_csr_wen", false,-1);
    tracep->declBus(c+19,"io_fwex_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+24,"io_fwmem_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+369,"io_fwmem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+371,"io_fwmem_reg_we", false,-1);
    tracep->declQuad(c+28,"io_fwmem_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+30,"io_fwmem_csr_wen", false,-1);
    tracep->declBus(c+31,"io_fwmem_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+35,"io_fwwb_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+33,"io_fwwb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+51,"io_fwwb_reg_we", false,-1);
    tracep->declQuad(c+37,"io_fwwb_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+39,"io_fwwb_csr_wen", false,-1);
    tracep->declBus(c+40,"io_fwwb_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+306,"io_fwde_fw_sel1", false,-1);
    tracep->declBit(c+307,"io_fwde_fw_sel2", false,-1);
    tracep->declQuad(c+308,"io_fwde_fw_data1", false,-1, 63,0);
    tracep->declQuad(c+310,"io_fwde_fw_data2", false,-1, 63,0);
    tracep->declBit(c+312,"io_fwde_csr_fw_sel", false,-1);
    tracep->declQuad(c+313,"io_fwde_csr_fw_data", false,-1, 63,0);
    tracep->declBit(c+372,"reg1_ex_hazard", false,-1);
    tracep->declBit(c+373,"reg2_ex_hazard", false,-1);
    tracep->declBit(c+374,"reg1_mem_hazard", false,-1);
    tracep->declBit(c+375,"reg2_mem_hazard", false,-1);
    tracep->declBit(c+376,"reg1_wb_hazard", false,-1);
    tracep->declBit(c+377,"reg2_wb_hazard", false,-1);
    tracep->declBit(c+378,"csr_ex_harzard", false,-1);
    tracep->declBit(c+379,"csr_mem_harzard", false,-1);
    tracep->declBit(c+380,"csr_wb_harzard", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("interact ");
    tracep->declBus(c+43,"inst", false,-1, 31,0);
    tracep->declBit(c+505,"clk", false,-1);
    tracep->declBit(c+506,"rst", false,-1);
    tracep->declBit(c+381,"ebreak_flag", false,-1);
    tracep->declBus(c+382,"over_count", false,-1, 2,0);
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
    tracep->declBit(c+272,"io_clmem_Clrvalue_valid", false,-1);
    tracep->declQuad(c+273,"io_clmem_Clrvalue_bits", false,-1, 63,0);
    tracep->declQuad(c+369,"io_mwio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+24,"io_mwio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+25,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declQuad(c+28,"io_mwio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+30,"io_mwio_csr_wen", false,-1);
    tracep->declBus(c+31,"io_mwio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+32,"io_mwio_has_inst", false,-1);
    tracep->declBus(c+24,"io_fwmem_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+369,"io_fwmem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+371,"io_fwmem_reg_we", false,-1);
    tracep->declQuad(c+28,"io_fwmem_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+30,"io_fwmem_csr_wen", false,-1);
    tracep->declBus(c+31,"io_fwmem_csr_waddr", false,-1, 11,0);
    tracep->declQuad(c+383,"rvalue", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+505,"clock", false,-1);
    tracep->declBus(c+315,"io_RfDe_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+316,"io_RfDe_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+35,"io_RfWb_rd", false,-1, 4,0);
    tracep->declBit(c+51,"io_RfWb_reg_wen", false,-1);
    tracep->declQuad(c+33,"io_RfWb_reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+302,"io_RfDe_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+304,"io_RfDe_reg2_rdata", false,-1, 63,0);
    tracep->pushNamePrefix("regs_ext ");
    tracep->declBus(c+35,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+510,"R0_en", false,-1);
    tracep->declBit(c+505,"R0_clk", false,-1);
    tracep->declBus(c+315,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+510,"R1_en", false,-1);
    tracep->declBit(c+505,"R1_clk", false,-1);
    tracep->declBus(c+316,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+510,"R2_en", false,-1);
    tracep->declBit(c+505,"R2_clk", false,-1);
    tracep->declBus(c+515,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+510,"W0_en", false,-1);
    tracep->declBit(c+505,"W0_clk", false,-1);
    tracep->declQuad(c+512,"W0_data", false,-1, 63,0);
    tracep->declBus(c+35,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+510,"W1_en", false,-1);
    tracep->declBit(c+505,"W1_clk", false,-1);
    tracep->declQuad(c+385,"W1_data", false,-1, 63,0);
    tracep->declQuad(c+387,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+389,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+391,"R2_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+393+i*2,"Memory", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("trap ");
    tracep->declBit(c+505,"clock", false,-1);
    tracep->declBit(c+506,"reset", false,-1);
    tracep->declBit(c+21,"io_ex_hasinst", false,-1);
    tracep->declBit(c+32,"io_mem_hasinst", false,-1);
    tracep->declBit(c+41,"io_wb_hasinst", false,-1);
    tracep->declQuad(c+288,"io_csrtr_MTVEC", false,-1, 63,0);
    tracep->declQuad(c+290,"io_csrtr_MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+292,"io_csrtr_MEPC", false,-1, 63,0);
    tracep->declQuad(c+294,"io_csrtr_MIE", false,-1, 63,0);
    tracep->declQuad(c+296,"io_csrtr_MIP", false,-1, 63,0);
    tracep->declQuad(c+298,"io_csrtr_MSTATUS", false,-1, 63,0);
    tracep->declBus(c+457,"io_inst", false,-1, 31,0);
    tracep->declBus(c+42,"io_pc", false,-1, 31,0);
    tracep->declBus(c+282,"io_csrtr_rd", false,-1, 11,0);
    tracep->declBit(c+283,"io_csrtr_csr_wen", false,-1);
    tracep->declQuad(c+284,"io_csrtr_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+357,"io_fctr_pop_NOP", false,-1);
    tracep->declBus(c+358,"io_fctr_trap_state", false,-1, 2,0);
    tracep->declBit(c+359,"io_fctr_jump_flag", false,-1);
    tracep->declBus(c+360,"io_fctr_jump_pc", false,-1, 31,0);
    tracep->declQuad(c+458,"cause", false,-1, 63,0);
    tracep->declBus(c+460,"pc", false,-1, 31,0);
    tracep->declBus(c+358,"state", false,-1, 2,0);
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
    tracep->declBit(c+505,"ACLK", false,-1);
    tracep->declBit(c+506,"ARESETn", false,-1);
    tracep->declBus(c+475,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+516,"S_AXI_AWPROT", false,-1, 2,0);
    tracep->declBit(c+474,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+461,"S_AXI_AWREADY", false,-1);
    tracep->declQuad(c+477,"S_AXI_WDATA", false,-1, 63,0);
    tracep->declBus(c+479,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+476,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+462,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+467,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+509,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+510,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+481,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+516,"S_AXI_ARPROT", false,-1, 2,0);
    tracep->declBit(c+480,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+463,"S_AXI_ARREADY", false,-1);
    tracep->declQuad(c+465,"S_AXI_RDATA", false,-1, 63,0);
    tracep->declBus(c+468,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+464,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+507,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+461,"awready", false,-1);
    tracep->declBit(c+462,"wready", false,-1);
    tracep->declBus(c+467,"bresp", false,-1, 1,0);
    tracep->declBit(c+469,"bvalid", false,-1);
    tracep->declBit(c+463,"arready", false,-1);
    tracep->declQuad(c+465,"rdata", false,-1, 63,0);
    tracep->declBus(c+468,"rresp", false,-1, 1,0);
    tracep->declBit(c+464,"rvalid", false,-1);
    tracep->declBus(c+470,"awaddr_buffer", false,-1, 31,0);
    tracep->declBus(c+508,"awaddr", false,-1, 31,0);
    tracep->declBit(c+471,"need_resp", false,-1);
    tracep->declBus(c+472,"araddr", false,-1, 31,0);
    tracep->declBit(c+473,"need_read", false,-1);
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
    bufp->fullIData(oldp+42,(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc),32);
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
    bufp->fullCData(oldp+53,(vlSelf->Soc__DOT__core__DOT___excute_io_wmask),8);
    bufp->fullBit(oldp+54,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0) 
                            | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_valid))));
    bufp->fullQData(oldp+55,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_bits_data),64);
    bufp->fullBit(oldp+57,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_valid));
    bufp->fullBit(oldp+58,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw));
    bufp->fullIData(oldp+59,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr),32);
    bufp->fullCData(oldp+60,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state),3);
    bufp->fullIData(oldp+61,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__tag),21);
    bufp->fullCData(oldp+62,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index),8);
    bufp->fullCData(oldp+63,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset),3);
    bufp->fullWData(oldp+64,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid),512);
    bufp->fullWData(oldp+80,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty),512);
    bufp->fullWData(oldp+96,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace),512);
    bufp->fullBit(oldp+112,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim));
    bufp->fullIData(oldp+113,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr),32);
    bufp->fullQData(oldp+114,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data),64);
    bufp->fullCData(oldp+116,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask),8);
    bufp->fullBit(oldp+117,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inst_type));
    bufp->fullQData(oldp+118,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitDataArray),64);
    bufp->fullBit(oldp+120,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum));
    bufp->fullBit(oldp+121,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_valid));
    bufp->fullSData(oldp+122,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__TagArray_ext__R0_addr),9);
    bufp->fullBit(oldp+123,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_7));
    bufp->fullSData(oldp+124,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__TagArray_ext__R1_addr),9);
    bufp->fullBit(oldp+125,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_9));
    bufp->fullBit(oldp+126,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_14));
    bufp->fullBit(oldp+127,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_15));
    bufp->fullSData(oldp+128,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                               << 1U)),9);
    bufp->fullBit(oldp+129,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h390ec092__0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___hit0_T_7))));
    bufp->fullSData(oldp+130,((0x1ffU & ((IData)(1U) 
                                         + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                            << 1U)))),9);
    bufp->fullBit(oldp+131,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___hit0_T_7)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h390ec092__0))));
    bufp->fullBit(oldp+132,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_he21aab26__0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___hit0_T_7))));
    bufp->fullBit(oldp+133,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___hit0_T_7)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_he21aab26__0))));
    bufp->fullBit(oldp+134,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum))));
    bufp->fullQData(oldp+135,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data),64);
    bufp->fullBit(oldp+137,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0))));
    bufp->fullQData(oldp+138,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_0]
                                : 0ULL)),64);
    bufp->fullQData(oldp+140,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_1)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_2]
                                : 0ULL)),64);
    bufp->fullQData(oldp+142,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_3)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_4]
                                : 0ULL)),64);
    bufp->fullQData(oldp+144,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_5)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_6]
                                : 0ULL)),64);
    bufp->fullQData(oldp+146,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_7)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_8]
                                : 0ULL)),64);
    bufp->fullQData(oldp+148,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_9)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_10]
                                : 0ULL)),64);
    bufp->fullQData(oldp+150,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_11)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_12]
                                : 0ULL)),64);
    bufp->fullQData(oldp+152,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_13)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_14]
                                : 0ULL)),64);
    bufp->fullIData(oldp+154,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_7)
                                ? vlSelf->__VdfgTmp_h2fe899d6__0
                                : 0U)),21);
    bufp->fullIData(oldp+155,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_9)
                                ? vlSelf->__VdfgTmp_h5f294843__0
                                : 0U)),21);
    bufp->fullIData(oldp+156,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_14)
                                ? vlSelf->__VdfgTmp_h2fe899d6__0
                                : 0U)),21);
    bufp->fullIData(oldp+157,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_15)
                                ? vlSelf->__VdfgTmp_h5f294843__0
                                : 0U)),21);
    bufp->fullIData(oldp+158,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                              [((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                << 1U)]),21);
    bufp->fullIData(oldp+159,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                              [(0x1ffU & ((IData)(1U) 
                                          + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                             << 1U)))]),21);
    bufp->fullBit(oldp+160,(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_valid));
    bufp->fullQData(oldp+161,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data),64);
    bufp->fullBit(oldp+163,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_valid));
    bufp->fullBit(oldp+164,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw));
    bufp->fullIData(oldp+165,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr),32);
    bufp->fullCData(oldp+166,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state),3);
    bufp->fullIData(oldp+167,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__tag),21);
    bufp->fullCData(oldp+168,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index),8);
    bufp->fullCData(oldp+169,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset),3);
    bufp->fullWData(oldp+170,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid),512);
    bufp->fullWData(oldp+186,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty),512);
    bufp->fullWData(oldp+202,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace),512);
    bufp->fullBit(oldp+218,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim));
    bufp->fullIData(oldp+219,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr),32);
    bufp->fullQData(oldp+220,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data),64);
    bufp->fullCData(oldp+222,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask),8);
    bufp->fullBit(oldp+223,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inst_type));
    bufp->fullQData(oldp+224,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitDataArray),64);
    bufp->fullBit(oldp+226,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum));
    bufp->fullBit(oldp+227,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid));
    bufp->fullSData(oldp+228,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__TagArray_ext__R0_addr),9);
    bufp->fullBit(oldp+229,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_7));
    bufp->fullSData(oldp+230,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__TagArray_ext__R1_addr),9);
    bufp->fullBit(oldp+231,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_9));
    bufp->fullBit(oldp+232,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_14));
    bufp->fullBit(oldp+233,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_15));
    bufp->fullSData(oldp+234,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                               << 1U)),9);
    bufp->fullBit(oldp+235,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h390ec092__0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___hit0_T_7))));
    bufp->fullSData(oldp+236,((0x1ffU & ((IData)(1U) 
                                         + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                            << 1U)))),9);
    bufp->fullBit(oldp+237,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___hit0_T_7)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h390ec092__0))));
    bufp->fullBit(oldp+238,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum))));
    bufp->fullQData(oldp+239,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data),64);
    bufp->fullBit(oldp+241,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0))));
    bufp->fullQData(oldp+242,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_0]
                                : 0ULL)),64);
    bufp->fullQData(oldp+244,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_1)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_2]
                                : 0ULL)),64);
    bufp->fullQData(oldp+246,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_3)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_4]
                                : 0ULL)),64);
    bufp->fullQData(oldp+248,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_5)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_6]
                                : 0ULL)),64);
    bufp->fullQData(oldp+250,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_7)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_8]
                                : 0ULL)),64);
    bufp->fullQData(oldp+252,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_9)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_10]
                                : 0ULL)),64);
    bufp->fullQData(oldp+254,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_11)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_12]
                                : 0ULL)),64);
    bufp->fullQData(oldp+256,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_13)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_14]
                                : 0ULL)),64);
    bufp->fullIData(oldp+258,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_7)
                                ? vlSelf->__VdfgTmp_heb865217__0
                                : 0U)),21);
    bufp->fullIData(oldp+259,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_9)
                                ? vlSelf->__VdfgTmp_hb3a84c04__0
                                : 0U)),21);
    bufp->fullIData(oldp+260,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_14)
                                ? vlSelf->__VdfgTmp_heb865217__0
                                : 0U)),21);
    bufp->fullIData(oldp+261,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_15)
                                ? vlSelf->__VdfgTmp_hb3a84c04__0
                                : 0U)),21);
    bufp->fullIData(oldp+262,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                              [((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                << 1U)]),21);
    bufp->fullIData(oldp+263,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                              [(0x1ffU & ((IData)(1U) 
                                          + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                             << 1U)))]),21);
    bufp->fullBit(oldp+264,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp));
    bufp->fullBit(oldp+265,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp));
    bufp->fullBit(oldp+266,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__b_comp));
    bufp->fullBit(oldp+267,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__ar_comp));
    bufp->fullBit(oldp+268,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_comp));
    bufp->fullBit(oldp+269,(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6));
    bufp->fullQData(oldp+270,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result),64);
    bufp->fullBit(oldp+272,(vlSelf->Soc__DOT__core__DOT__clint__DOT__valid_buf));
    bufp->fullQData(oldp+273,(vlSelf->Soc__DOT__core__DOT__clint__DOT__rvalue_buf),64);
    bufp->fullBit(oldp+275,((vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME 
                             >= vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP)));
    bufp->fullIData(oldp+276,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MSIP),32);
    bufp->fullQData(oldp+277,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP),64);
    bufp->fullQData(oldp+279,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME),64);
    bufp->fullSData(oldp+281,(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr),12);
    __Vtemp_h5ee83ed9__0[0U] = 0x41000000U;
    __Vtemp_h5ee83ed9__0[1U] = 0x3003423U;
    __Vtemp_h5ee83ed9__0[2U] = (0x30000000U | (((0x8000000000000007ULL 
                                                 == vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE)
                                                 ? 0x344U
                                                 : 0U) 
                                               << 8U));
    bufp->fullSData(oldp+282,(((0x5fU >= (0x7fU & ((IData)(0xcU) 
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
    bufp->fullBit(oldp+283,(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen));
    bufp->fullQData(oldp+284,(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata),64);
    bufp->fullQData(oldp+286,(((0x340U == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
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
    bufp->fullQData(oldp+288,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC),64);
    bufp->fullQData(oldp+290,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE),64);
    bufp->fullQData(oldp+292,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC),64);
    bufp->fullQData(oldp+294,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE),64);
    bufp->fullQData(oldp+296,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP),64);
    bufp->fullQData(oldp+298,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS),64);
    bufp->fullQData(oldp+300,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH),64);
    bufp->fullQData(oldp+302,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0)
                                ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]
                                : 0ULL)),64);
    bufp->fullQData(oldp+304,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0)
                                ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]
                                : 0ULL)),64);
    bufp->fullBit(oldp+306,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)))));
    bufp->fullBit(oldp+307,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))));
    bufp->fullQData(oldp+308,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard)
                                ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard)
                                    ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)
                                        ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                        : 0ULL)))),64);
    bufp->fullQData(oldp+310,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                                ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                                    ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                                        ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                        : 0ULL)))),64);
    bufp->fullBit(oldp+312,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)))));
    bufp->fullQData(oldp+313,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard)
                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard)
                                    ? vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)
                                        ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                                        : 0ULL)))),64);
    bufp->fullCData(oldp+315,(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr),5);
    bufp->fullCData(oldp+316,(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr),5);
    bufp->fullQData(oldp+317,((((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT___GEN) 
                                & ((0x17U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                   & ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                      & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4)) 
                                         & ((~ (IData)(vlSelf->__VdfgTmp_h4cc2f181__0)) 
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
    bufp->fullQData(oldp+319,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T
                                : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                    ? 4ULL : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                               ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T
                                               : ((1U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                                   ? vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm
                                                   : 0ULL))))),64);
    bufp->fullCData(oldp+321,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_reg_waddr),5);
    bufp->fullBit(oldp+322,(((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT___GEN) 
                             & ((0x17U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                & ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                   & ((0x6fU != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                      & ((0x67U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                         & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5))))))));
    bufp->fullQData(oldp+323,(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__fdreg_pc)) 
                               + (((- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))) 
                                   << 0xcU) | (QData)((IData)(
                                                              (((IData)(vlSelf->__VdfgTmp_hf5911942__0) 
                                                                << 0xbU) 
                                                               | (((IData)(vlSelf->__VdfgTmp_h2320f349__0) 
                                                                   << 5U) 
                                                                  | ((IData)(vlSelf->__VdfgTmp_h11542e25__0) 
                                                                     << 1U)))))))),64);
    bufp->fullCData(oldp+325,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op),6);
    bufp->fullCData(oldp+326,(((IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_valid)
                                ? (0x3fU & (IData)(
                                                   (vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data 
                                                    >> 0x14U)))
                                : 0U)),6);
    bufp->fullCData(oldp+327,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT___GEN)
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
    bufp->fullCData(oldp+328,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0)
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
    bufp->fullQData(oldp+329,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T),64);
    bufp->fullCData(oldp+331,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type),3);
    bufp->fullQData(oldp+332,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T),64);
    bufp->fullSData(oldp+334,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen)
                                ? (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr)
                                : 0U)),12);
    bufp->fullBit(oldp+335,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen));
    bufp->fullBit(oldp+336,((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT___GEN)));
    bufp->fullBit(oldp+337,(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag));
    bufp->fullIData(oldp+338,(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                ? (vlSelf->Soc__DOT__core__DOT__fdreg_pc 
                                   + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm))
                                : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                    ? (0xfffffffeU 
                                       & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4) 
                                          + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm)))
                                    : 0x80000000U))),32);
    bufp->fullCData(oldp+339,(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd),5);
    bufp->fullIData(oldp+340,(vlSelf->Soc__DOT__core__DOT__decode__DOT___GEN),32);
    bufp->fullCData(oldp+341,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type),2);
    bufp->fullCData(oldp+342,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type),2);
    bufp->fullCData(oldp+343,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type),3);
    bufp->fullCData(oldp+344,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT___GEN)
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
    bufp->fullCData(oldp+345,(((((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0) 
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
    bufp->fullQData(oldp+346,(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm),64);
    bufp->fullCData(oldp+348,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                ? ((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                    ? 0U : (7U & (IData)(vlSelf->__VdfgTmp_h6a80e86b__0)))
                                : 0U)),3);
    bufp->fullIData(oldp+349,((IData)(vlSelf->Soc__DOT__core__DOT__dereg_branch_addr)),32);
    bufp->fullQData(oldp+350,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                : 0ULL)),64);
    bufp->fullQData(oldp+352,((((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6)) 
                                & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))
                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                : 0ULL)),64);
    bufp->fullQData(oldp+354,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata),64);
    bufp->fullBit(oldp+356,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we));
    bufp->fullBit(oldp+357,(((0U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                             & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2) 
                                | ((0x30200073U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data)) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7))))));
    bufp->fullCData(oldp+358,(vlSelf->Soc__DOT__core__DOT__trap__DOT__state),3);
    bufp->fullBit(oldp+359,(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3));
    bufp->fullIData(oldp+360,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC)
                                : ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                    ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC)
                                    : 0U))),32);
    bufp->fullBit(oldp+361,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_flag));
    bufp->fullIData(oldp+362,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc),32);
    bufp->fullBit(oldp+363,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_flush));
    bufp->fullBit(oldp+364,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_stall));
    bufp->fullBit(oldp+365,(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush));
    bufp->fullBit(oldp+366,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started));
    bufp->fullIData(oldp+367,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),32);
    bufp->fullIData(oldp+368,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc),32);
    bufp->fullQData(oldp+369,(vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata),64);
    bufp->fullBit(oldp+371,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))));
    bufp->fullBit(oldp+372,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard));
    bufp->fullBit(oldp+373,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard));
    bufp->fullBit(oldp+374,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard));
    bufp->fullBit(oldp+375,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard));
    bufp->fullBit(oldp+376,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard));
    bufp->fullBit(oldp+377,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard));
    bufp->fullBit(oldp+378,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard));
    bufp->fullBit(oldp+379,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard));
    bufp->fullBit(oldp+380,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard));
    bufp->fullBit(oldp+381,(vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag));
    bufp->fullCData(oldp+382,(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count),3);
    bufp->fullQData(oldp+383,((((QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
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
    bufp->fullQData(oldp+385,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                                & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr)))
                                ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr])),64);
    bufp->fullQData(oldp+387,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr]),64);
    bufp->fullQData(oldp+389,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]),64);
    bufp->fullQData(oldp+391,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]),64);
    bufp->fullQData(oldp+393,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+395,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+397,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+399,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+401,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+403,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+405,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+407,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+409,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+411,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+413,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+415,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+417,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+419,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+421,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+423,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+425,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+427,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+429,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+431,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+433,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+435,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+437,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+439,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+441,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+443,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+445,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+447,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+449,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+451,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+453,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+455,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
    bufp->fullIData(oldp+457,((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data)),32);
    bufp->fullQData(oldp+458,(vlSelf->Soc__DOT__core__DOT__trap__DOT__cause),64);
    bufp->fullIData(oldp+460,(vlSelf->Soc__DOT__core__DOT__trap__DOT__pc),32);
    bufp->fullBit(oldp+461,(vlSelf->Soc__DOT__sram__DOT__awready));
    bufp->fullBit(oldp+462,(vlSelf->Soc__DOT__sram__DOT__wready));
    bufp->fullBit(oldp+463,(vlSelf->Soc__DOT__sram__DOT__arready));
    bufp->fullBit(oldp+464,(vlSelf->Soc__DOT__sram__DOT__rvalid));
    bufp->fullQData(oldp+465,(vlSelf->Soc__DOT__sram__DOT__rdata),64);
    bufp->fullCData(oldp+467,(vlSelf->Soc__DOT__sram__DOT__bresp),2);
    bufp->fullCData(oldp+468,(vlSelf->Soc__DOT__sram__DOT__rresp),2);
    bufp->fullBit(oldp+469,(vlSelf->Soc__DOT__sram__DOT__bvalid));
    bufp->fullIData(oldp+470,(vlSelf->Soc__DOT__sram__DOT__awaddr_buffer),32);
    bufp->fullBit(oldp+471,(vlSelf->Soc__DOT__sram__DOT__need_resp));
    bufp->fullIData(oldp+472,(vlSelf->Soc__DOT__sram__DOT__araddr),32);
    bufp->fullBit(oldp+473,(vlSelf->Soc__DOT__sram__DOT__need_read));
    bufp->fullBit(oldp+474,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN));
    bufp->fullIData(oldp+475,(vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr),32);
    bufp->fullBit(oldp+476,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1));
    bufp->fullQData(oldp+477,(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0)
                                ? 0ULL : ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h02c05ceb__0)
                                           ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_data
                                           : vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_data))),64);
    bufp->fullCData(oldp+479,(((0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))
                                ? 0U : (0xffU & (- (IData)(
                                                           (1U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))))))),8);
    bufp->fullBit(oldp+480,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_2));
    bufp->fullIData(oldp+481,(((1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                      | ((~ ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                             & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h82421030__0))) 
                                         | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)))))
                                ? 0U : vlSelf->Soc__DOT__core__DOT__arbitor__DOT___addr_T_2)),32);
    bufp->fullBit(oldp+482,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_valid));
    bufp->fullQData(oldp+483,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_data),64);
    bufp->fullBit(oldp+485,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_11));
    bufp->fullBit(oldp+486,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_13));
    bufp->fullBit(oldp+487,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_17));
    bufp->fullBit(oldp+488,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_23));
    bufp->fullBit(oldp+489,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_valid));
    bufp->fullQData(oldp+490,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_data),64);
    bufp->fullBit(oldp+492,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_11));
    bufp->fullBit(oldp+493,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_13));
    bufp->fullBit(oldp+494,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_17));
    bufp->fullBit(oldp+495,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_23));
    bufp->fullCData(oldp+496,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state),2);
    bufp->fullQData(oldp+497,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data),64);
    bufp->fullQData(oldp+499,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data),64);
    bufp->fullQData(oldp+501,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_bits_data),64);
    bufp->fullQData(oldp+503,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data),64);
    bufp->fullBit(oldp+505,(vlSelf->clock));
    bufp->fullBit(oldp+506,(vlSelf->reset));
    bufp->fullBit(oldp+507,(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc0e633fc__0) 
                             & ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_comp)) 
                                   & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)))))));
    bufp->fullIData(oldp+508,((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1) 
                                & ((IData)(vlSelf->Soc__DOT__sram__DOT__wready) 
                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN) 
                                      & (IData)(vlSelf->Soc__DOT__sram__DOT__awready))))
                                ? vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr
                                : vlSelf->Soc__DOT__sram__DOT__awaddr_buffer)),32);
    bufp->fullBit(oldp+509,(vlSelf->Soc__DOT___sram_S_AXI_BVALID));
    bufp->fullBit(oldp+510,(1U));
    bufp->fullBit(oldp+511,(0U));
    bufp->fullQData(oldp+512,(0ULL),64);
    bufp->fullCData(oldp+514,(0U),8);
    bufp->fullCData(oldp+515,(0U),5);
    bufp->fullCData(oldp+516,(0U),3);
}
