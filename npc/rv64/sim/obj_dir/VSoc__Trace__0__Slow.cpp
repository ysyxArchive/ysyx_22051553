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
    tracep->declBit(c+513,"clock", false,-1);
    tracep->declBit(c+514,"reset", false,-1);
    tracep->pushNamePrefix("Soc ");
    tracep->declBit(c+513,"clock", false,-1);
    tracep->declBit(c+514,"reset", false,-1);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+513,"clock", false,-1);
    tracep->declBit(c+514,"reset", false,-1);
    tracep->declBit(c+469,"io_AXI_Interface_aw_ready", false,-1);
    tracep->declBit(c+470,"io_AXI_Interface_w_ready", false,-1);
    tracep->declBit(c+517,"io_AXI_Interface_b_valid", false,-1);
    tracep->declBit(c+471,"io_AXI_Interface_ar_ready", false,-1);
    tracep->declBit(c+472,"io_AXI_Interface_r_valid", false,-1);
    tracep->declQuad(c+473,"io_AXI_Interface_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+482,"io_AXI_Interface_aw_valid", false,-1);
    tracep->declBus(c+483,"io_AXI_Interface_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+484,"io_AXI_Interface_w_valid", false,-1);
    tracep->declQuad(c+485,"io_AXI_Interface_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+487,"io_AXI_Interface_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+488,"io_AXI_Interface_ar_valid", false,-1);
    tracep->declBus(c+489,"io_AXI_Interface_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+515,"io_AXI_Interface_r_ready", false,-1);
    tracep->declQuad(c+1,"fdreg_pc", false,-1, 63,0);
    tracep->declQuad(c+3,"dereg_op_a", false,-1, 63,0);
    tracep->declQuad(c+5,"dereg_op_b", false,-1, 63,0);
    tracep->declBus(c+7,"dereg_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+8,"dereg_branch_type", false,-1);
    tracep->declQuad(c+9,"dereg_branch_addr", false,-1, 63,0);
    tracep->declBus(c+11,"dereg_alu_op", false,-1, 5,0);
    tracep->declBus(c+12,"dereg_shamt", false,-1, 5,0);
    tracep->declBus(c+13,"dereg_wb_type", false,-1, 1,0);
    tracep->declBus(c+14,"dereg_sd_type", false,-1, 2,0);
    tracep->declQuad(c+15,"dereg_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+17,"dereg_ld_type", false,-1, 2,0);
    tracep->declQuad(c+18,"dereg_csr_t", false,-1, 63,0);
    tracep->declBus(c+20,"dereg_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+21,"dereg_csr_wen", false,-1);
    tracep->declBit(c+22,"dereg_has_inst", false,-1);
    tracep->declQuad(c+23,"emreg_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+25,"emreg_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+26,"emreg_wb_type", false,-1, 1,0);
    tracep->declBus(c+27,"emreg_ld_type", false,-1, 2,0);
    tracep->declBus(c+28,"emreg_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+29,"emreg_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+31,"emreg_csr_wen", false,-1);
    tracep->declBus(c+32,"emreg_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+33,"emreg_has_inst", false,-1);
    tracep->declQuad(c+34,"mwreg_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+36,"mwreg_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+37,"mwreg_wb_type", false,-1, 1,0);
    tracep->declQuad(c+38,"mwreg_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+40,"mwreg_csr_wen", false,-1);
    tracep->declBus(c+41,"mwreg_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+42,"mwreg_has_inst", false,-1);
    tracep->pushNamePrefix("DI ");
    tracep->declBit(c+513,"clk", false,-1);
    tracep->declBit(c+514,"rst", false,-1);
    tracep->declQuad(c+43,"pc", false,-1, 63,0);
    tracep->declBit(c+518,"pc_req", false,-1);
    tracep->declBus(c+45,"inst", false,-1, 31,0);
    tracep->declBit(c+519,"inst_valid", false,-1);
    tracep->declBit(c+46,"load_use", false,-1);
    tracep->declQuad(c+3,"op_a", false,-1, 63,0);
    tracep->declQuad(c+5,"op_b", false,-1, 63,0);
    tracep->declQuad(c+47,"result", false,-1, 63,0);
    tracep->declBit(c+49,"br_yes", false,-1);
    tracep->declBit(c+50,"mem_access", false,-1);
    tracep->declQuad(c+51,"mem_addr", false,-1, 63,0);
    tracep->declBus(c+36,"rd", false,-1, 4,0);
    tracep->declQuad(c+34,"reg_wdata", false,-1, 63,0);
    tracep->declBit(c+53,"reg_wen", false,-1);
    tracep->declBit(c+40,"csr_wen", false,-1);
    tracep->declQuad(c+38,"csr_wdata", false,-1, 63,0);
    tracep->declBus(c+41,"csr_waddr", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Dcache ");
    tracep->declBit(c+513,"clock", false,-1);
    tracep->declBit(c+514,"reset", false,-1);
    tracep->declBit(c+50,"io_cpu_req_valid", false,-1);
    tracep->declBit(c+519,"io_cpu_req_bits_inst_type", false,-1);
    tracep->declBus(c+54,"io_cpu_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+15,"io_cpu_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+55,"io_cpu_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+490,"io_axi_resp_valid", false,-1);
    tracep->declQuad(c+505,"io_axi_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+56,"io_cpu_resp_valid", false,-1);
    tracep->declQuad(c+57,"io_cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+59,"io_axi_req_valid", false,-1);
    tracep->declBit(c+60,"io_axi_req_bits_rw", false,-1);
    tracep->declBus(c+61,"io_axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+491,"io_axi_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+62,"state", false,-1, 2,0);
    tracep->declBus(c+63,"tag", false,-1, 20,0);
    tracep->declBus(c+64,"index", false,-1, 7,0);
    tracep->declBus(c+65,"offset", false,-1, 2,0);
    tracep->declArray(c+66,"valid", false,-1, 511,0);
    tracep->declArray(c+82,"dirty", false,-1, 511,0);
    tracep->declArray(c+98,"replace", false,-1, 511,0);
    tracep->declBit(c+114,"victim", false,-1);
    tracep->declBus(c+115,"addr", false,-1, 31,0);
    tracep->declQuad(c+116,"data", false,-1, 63,0);
    tracep->declBus(c+118,"mask", false,-1, 7,0);
    tracep->declBit(c+119,"inst_type", false,-1);
    tracep->declQuad(c+120,"whitDataArray", false,-1, 63,0);
    tracep->declBit(c+122,"whitNum", false,-1);
    tracep->declBit(c+123,"cpu_resp_valid", false,-1);
    tracep->declQuad(c+57,"cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+59,"axi_req_valid", false,-1);
    tracep->declBit(c+60,"axi_req_bits_rw", false,-1);
    tracep->declBus(c+61,"axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+491,"axi_req_bits_data", false,-1, 63,0);
    tracep->pushNamePrefix("DataArray_ext ");
    tracep->declBus(c+124,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+125,"R0_en", false,-1);
    tracep->declBit(c+513,"R0_clk", false,-1);
    tracep->declBus(c+126,"R1_addr", false,-1, 8,0);
    tracep->declBit(c+127,"R1_en", false,-1);
    tracep->declBit(c+513,"R1_clk", false,-1);
    tracep->declBus(c+124,"R2_addr", false,-1, 8,0);
    tracep->declBit(c+128,"R2_en", false,-1);
    tracep->declBit(c+513,"R2_clk", false,-1);
    tracep->declBus(c+126,"R3_addr", false,-1, 8,0);
    tracep->declBit(c+129,"R3_en", false,-1);
    tracep->declBit(c+513,"R3_clk", false,-1);
    tracep->declBus(c+130,"R4_addr", false,-1, 8,0);
    tracep->declBit(c+131,"R4_en", false,-1);
    tracep->declBit(c+513,"R4_clk", false,-1);
    tracep->declBus(c+132,"R5_addr", false,-1, 8,0);
    tracep->declBit(c+133,"R5_en", false,-1);
    tracep->declBit(c+513,"R5_clk", false,-1);
    tracep->declBus(c+130,"R6_addr", false,-1, 8,0);
    tracep->declBit(c+134,"R6_en", false,-1);
    tracep->declBit(c+513,"R6_clk", false,-1);
    tracep->declBus(c+132,"R7_addr", false,-1, 8,0);
    tracep->declBit(c+135,"R7_en", false,-1);
    tracep->declBit(c+513,"R7_clk", false,-1);
    tracep->declBus(c+132,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+493,"W0_en", false,-1);
    tracep->declBit(c+513,"W0_clk", false,-1);
    tracep->declQuad(c+505,"W0_data", false,-1, 63,0);
    tracep->declBus(c+130,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+494,"W1_en", false,-1);
    tracep->declBit(c+513,"W1_clk", false,-1);
    tracep->declQuad(c+505,"W1_data", false,-1, 63,0);
    tracep->declBus(c+132,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+136,"W2_en", false,-1);
    tracep->declBit(c+513,"W2_clk", false,-1);
    tracep->declQuad(c+137,"W2_data", false,-1, 63,0);
    tracep->declBus(c+130,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+139,"W3_en", false,-1);
    tracep->declBit(c+513,"W3_clk", false,-1);
    tracep->declQuad(c+137,"W3_data", false,-1, 63,0);
    tracep->declBus(c+132,"W4_addr", false,-1, 8,0);
    tracep->declBit(c+495,"W4_en", false,-1);
    tracep->declBit(c+513,"W4_clk", false,-1);
    tracep->declQuad(c+507,"W4_data", false,-1, 63,0);
    tracep->declBus(c+130,"W5_addr", false,-1, 8,0);
    tracep->declBit(c+496,"W5_en", false,-1);
    tracep->declBit(c+513,"W5_clk", false,-1);
    tracep->declQuad(c+507,"W5_data", false,-1, 63,0);
    tracep->declQuad(c+140,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+142,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+144,"R2_data", false,-1, 63,0);
    tracep->declQuad(c+146,"R3_data", false,-1, 63,0);
    tracep->declQuad(c+148,"R4_data", false,-1, 63,0);
    tracep->declQuad(c+150,"R5_data", false,-1, 63,0);
    tracep->declQuad(c+152,"R6_data", false,-1, 63,0);
    tracep->declQuad(c+154,"R7_data", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("TagArray_ext ");
    tracep->declBus(c+124,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+125,"R0_en", false,-1);
    tracep->declBit(c+513,"R0_clk", false,-1);
    tracep->declBus(c+126,"R1_addr", false,-1, 8,0);
    tracep->declBit(c+127,"R1_en", false,-1);
    tracep->declBit(c+513,"R1_clk", false,-1);
    tracep->declBus(c+124,"R2_addr", false,-1, 8,0);
    tracep->declBit(c+128,"R2_en", false,-1);
    tracep->declBit(c+513,"R2_clk", false,-1);
    tracep->declBus(c+126,"R3_addr", false,-1, 8,0);
    tracep->declBit(c+129,"R3_en", false,-1);
    tracep->declBit(c+513,"R3_clk", false,-1);
    tracep->declBus(c+130,"R4_addr", false,-1, 8,0);
    tracep->declBit(c+518,"R4_en", false,-1);
    tracep->declBit(c+513,"R4_clk", false,-1);
    tracep->declBus(c+132,"R5_addr", false,-1, 8,0);
    tracep->declBit(c+518,"R5_en", false,-1);
    tracep->declBit(c+513,"R5_clk", false,-1);
    tracep->declBus(c+132,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+493,"W0_en", false,-1);
    tracep->declBit(c+513,"W0_clk", false,-1);
    tracep->declBus(c+63,"W0_data", false,-1, 20,0);
    tracep->declBus(c+130,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+494,"W1_en", false,-1);
    tracep->declBit(c+513,"W1_clk", false,-1);
    tracep->declBus(c+63,"W1_data", false,-1, 20,0);
    tracep->declBus(c+132,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+495,"W2_en", false,-1);
    tracep->declBit(c+513,"W2_clk", false,-1);
    tracep->declBus(c+63,"W2_data", false,-1, 20,0);
    tracep->declBus(c+130,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+496,"W3_en", false,-1);
    tracep->declBit(c+513,"W3_clk", false,-1);
    tracep->declBus(c+63,"W3_data", false,-1, 20,0);
    tracep->declBus(c+156,"R0_data", false,-1, 20,0);
    tracep->declBus(c+157,"R1_data", false,-1, 20,0);
    tracep->declBus(c+158,"R2_data", false,-1, 20,0);
    tracep->declBus(c+159,"R3_data", false,-1, 20,0);
    tracep->declBus(c+160,"R4_data", false,-1, 20,0);
    tracep->declBus(c+161,"R5_data", false,-1, 20,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Icache ");
    tracep->declBit(c+513,"clock", false,-1);
    tracep->declBit(c+514,"reset", false,-1);
    tracep->declBit(c+518,"io_cpu_req_valid", false,-1);
    tracep->declBit(c+518,"io_cpu_req_bits_inst_type", false,-1);
    tracep->declBus(c+162,"io_cpu_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+520,"io_cpu_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+522,"io_cpu_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+497,"io_axi_resp_valid", false,-1);
    tracep->declQuad(c+509,"io_axi_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+163,"io_cpu_resp_valid", false,-1);
    tracep->declQuad(c+164,"io_cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+166,"io_axi_req_valid", false,-1);
    tracep->declBit(c+167,"io_axi_req_bits_rw", false,-1);
    tracep->declBus(c+168,"io_axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+498,"io_axi_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+169,"state", false,-1, 2,0);
    tracep->declBus(c+170,"tag", false,-1, 20,0);
    tracep->declBus(c+171,"index", false,-1, 7,0);
    tracep->declBus(c+172,"offset", false,-1, 2,0);
    tracep->declArray(c+173,"valid", false,-1, 511,0);
    tracep->declArray(c+189,"dirty", false,-1, 511,0);
    tracep->declArray(c+205,"replace", false,-1, 511,0);
    tracep->declBit(c+221,"victim", false,-1);
    tracep->declBus(c+222,"addr", false,-1, 31,0);
    tracep->declQuad(c+223,"data", false,-1, 63,0);
    tracep->declBus(c+225,"mask", false,-1, 7,0);
    tracep->declBit(c+226,"inst_type", false,-1);
    tracep->declQuad(c+227,"whitDataArray", false,-1, 63,0);
    tracep->declBit(c+229,"whitNum", false,-1);
    tracep->declBit(c+230,"cpu_resp_valid", false,-1);
    tracep->declQuad(c+164,"cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+166,"axi_req_valid", false,-1);
    tracep->declBit(c+167,"axi_req_bits_rw", false,-1);
    tracep->declBus(c+168,"axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+498,"axi_req_bits_data", false,-1, 63,0);
    tracep->pushNamePrefix("DataArray_ext ");
    tracep->declBus(c+231,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+232,"R0_en", false,-1);
    tracep->declBit(c+513,"R0_clk", false,-1);
    tracep->declBus(c+233,"R1_addr", false,-1, 8,0);
    tracep->declBit(c+234,"R1_en", false,-1);
    tracep->declBit(c+513,"R1_clk", false,-1);
    tracep->declBus(c+231,"R2_addr", false,-1, 8,0);
    tracep->declBit(c+235,"R2_en", false,-1);
    tracep->declBit(c+513,"R2_clk", false,-1);
    tracep->declBus(c+233,"R3_addr", false,-1, 8,0);
    tracep->declBit(c+236,"R3_en", false,-1);
    tracep->declBit(c+513,"R3_clk", false,-1);
    tracep->declBus(c+237,"R4_addr", false,-1, 8,0);
    tracep->declBit(c+238,"R4_en", false,-1);
    tracep->declBit(c+513,"R4_clk", false,-1);
    tracep->declBus(c+239,"R5_addr", false,-1, 8,0);
    tracep->declBit(c+240,"R5_en", false,-1);
    tracep->declBit(c+513,"R5_clk", false,-1);
    tracep->declBus(c+237,"R6_addr", false,-1, 8,0);
    tracep->declBit(c+519,"R6_en", false,-1);
    tracep->declBit(c+513,"R6_clk", false,-1);
    tracep->declBus(c+239,"R7_addr", false,-1, 8,0);
    tracep->declBit(c+519,"R7_en", false,-1);
    tracep->declBit(c+513,"R7_clk", false,-1);
    tracep->declBus(c+239,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+500,"W0_en", false,-1);
    tracep->declBit(c+513,"W0_clk", false,-1);
    tracep->declQuad(c+509,"W0_data", false,-1, 63,0);
    tracep->declBus(c+237,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+501,"W1_en", false,-1);
    tracep->declBit(c+513,"W1_clk", false,-1);
    tracep->declQuad(c+509,"W1_data", false,-1, 63,0);
    tracep->declBus(c+239,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+241,"W2_en", false,-1);
    tracep->declBit(c+513,"W2_clk", false,-1);
    tracep->declQuad(c+242,"W2_data", false,-1, 63,0);
    tracep->declBus(c+237,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+244,"W3_en", false,-1);
    tracep->declBit(c+513,"W3_clk", false,-1);
    tracep->declQuad(c+242,"W3_data", false,-1, 63,0);
    tracep->declBus(c+239,"W4_addr", false,-1, 8,0);
    tracep->declBit(c+502,"W4_en", false,-1);
    tracep->declBit(c+513,"W4_clk", false,-1);
    tracep->declQuad(c+511,"W4_data", false,-1, 63,0);
    tracep->declBus(c+237,"W5_addr", false,-1, 8,0);
    tracep->declBit(c+503,"W5_en", false,-1);
    tracep->declBit(c+513,"W5_clk", false,-1);
    tracep->declQuad(c+511,"W5_data", false,-1, 63,0);
    tracep->declQuad(c+245,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+247,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+249,"R2_data", false,-1, 63,0);
    tracep->declQuad(c+251,"R3_data", false,-1, 63,0);
    tracep->declQuad(c+253,"R4_data", false,-1, 63,0);
    tracep->declQuad(c+255,"R5_data", false,-1, 63,0);
    tracep->declQuad(c+257,"R6_data", false,-1, 63,0);
    tracep->declQuad(c+259,"R7_data", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("TagArray_ext ");
    tracep->declBus(c+231,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+232,"R0_en", false,-1);
    tracep->declBit(c+513,"R0_clk", false,-1);
    tracep->declBus(c+233,"R1_addr", false,-1, 8,0);
    tracep->declBit(c+234,"R1_en", false,-1);
    tracep->declBit(c+513,"R1_clk", false,-1);
    tracep->declBus(c+231,"R2_addr", false,-1, 8,0);
    tracep->declBit(c+235,"R2_en", false,-1);
    tracep->declBit(c+513,"R2_clk", false,-1);
    tracep->declBus(c+233,"R3_addr", false,-1, 8,0);
    tracep->declBit(c+236,"R3_en", false,-1);
    tracep->declBit(c+513,"R3_clk", false,-1);
    tracep->declBus(c+237,"R4_addr", false,-1, 8,0);
    tracep->declBit(c+518,"R4_en", false,-1);
    tracep->declBit(c+513,"R4_clk", false,-1);
    tracep->declBus(c+239,"R5_addr", false,-1, 8,0);
    tracep->declBit(c+518,"R5_en", false,-1);
    tracep->declBit(c+513,"R5_clk", false,-1);
    tracep->declBus(c+239,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+500,"W0_en", false,-1);
    tracep->declBit(c+513,"W0_clk", false,-1);
    tracep->declBus(c+170,"W0_data", false,-1, 20,0);
    tracep->declBus(c+237,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+501,"W1_en", false,-1);
    tracep->declBit(c+513,"W1_clk", false,-1);
    tracep->declBus(c+170,"W1_data", false,-1, 20,0);
    tracep->declBus(c+239,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+502,"W2_en", false,-1);
    tracep->declBit(c+513,"W2_clk", false,-1);
    tracep->declBus(c+170,"W2_data", false,-1, 20,0);
    tracep->declBus(c+237,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+503,"W3_en", false,-1);
    tracep->declBit(c+513,"W3_clk", false,-1);
    tracep->declBus(c+170,"W3_data", false,-1, 20,0);
    tracep->declBus(c+261,"R0_data", false,-1, 20,0);
    tracep->declBus(c+262,"R1_data", false,-1, 20,0);
    tracep->declBus(c+263,"R2_data", false,-1, 20,0);
    tracep->declBus(c+264,"R3_data", false,-1, 20,0);
    tracep->declBus(c+265,"R4_data", false,-1, 20,0);
    tracep->declBus(c+266,"R5_data", false,-1, 20,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("arbitor ");
    tracep->declBit(c+513,"clock", false,-1);
    tracep->declBit(c+514,"reset", false,-1);
    tracep->declBit(c+166,"io_master0_req_valid", false,-1);
    tracep->declBit(c+167,"io_master0_req_bits_rw", false,-1);
    tracep->declBus(c+168,"io_master0_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+498,"io_master0_req_bits_data", false,-1, 63,0);
    tracep->declBit(c+59,"io_master1_req_valid", false,-1);
    tracep->declBit(c+60,"io_master1_req_bits_rw", false,-1);
    tracep->declBus(c+61,"io_master1_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+491,"io_master1_req_bits_data", false,-1, 63,0);
    tracep->declBit(c+469,"io_AXI_O_aw_ready", false,-1);
    tracep->declBit(c+470,"io_AXI_O_w_ready", false,-1);
    tracep->declBit(c+517,"io_AXI_O_b_valid", false,-1);
    tracep->declBit(c+471,"io_AXI_O_ar_ready", false,-1);
    tracep->declBit(c+472,"io_AXI_O_r_valid", false,-1);
    tracep->declQuad(c+473,"io_AXI_O_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+497,"io_master0_resp_valid", false,-1);
    tracep->declQuad(c+509,"io_master0_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+490,"io_master1_resp_valid", false,-1);
    tracep->declQuad(c+505,"io_master1_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+482,"io_AXI_O_aw_valid", false,-1);
    tracep->declBus(c+483,"io_AXI_O_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+484,"io_AXI_O_w_valid", false,-1);
    tracep->declQuad(c+485,"io_AXI_O_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+487,"io_AXI_O_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+488,"io_AXI_O_ar_valid", false,-1);
    tracep->declBus(c+489,"io_AXI_O_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+515,"io_AXI_O_r_ready", false,-1);
    tracep->declBus(c+504,"state", false,-1, 1,0);
    tracep->declBit(c+267,"aw_comp", false,-1);
    tracep->declBit(c+268,"w_comp", false,-1);
    tracep->declBit(c+269,"b_comp", false,-1);
    tracep->declBit(c+270,"ar_comp", false,-1);
    tracep->declBit(c+271,"r_comp", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("clint ");
    tracep->declBit(c+513,"clock", false,-1);
    tracep->declBit(c+514,"reset", false,-1);
    tracep->declBit(c+272,"io_clex_valid", false,-1);
    tracep->declBus(c+17,"io_clex_ld_type", false,-1, 2,0);
    tracep->declQuad(c+273,"io_clex_raddr", false,-1, 63,0);
    tracep->declBus(c+14,"io_clex_sd_type", false,-1, 2,0);
    tracep->declQuad(c+273,"io_clex_waddr", false,-1, 63,0);
    tracep->declBus(c+55,"io_clex_wmask", false,-1, 7,0);
    tracep->declQuad(c+15,"io_clex_wdata", false,-1, 63,0);
    tracep->declBit(c+275,"io_clmem_Clrvalue_valid", false,-1);
    tracep->declQuad(c+276,"io_clmem_Clrvalue_bits", false,-1, 63,0);
    tracep->declBit(c+278,"io_timer_int", false,-1);
    tracep->declBus(c+279,"MSIP", false,-1, 31,0);
    tracep->declQuad(c+280,"MTIMECMP", false,-1, 63,0);
    tracep->declQuad(c+282,"MTIME", false,-1, 63,0);
    tracep->declQuad(c+276,"rvalue_buf", false,-1, 63,0);
    tracep->declBit(c+275,"valid_buf", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csrs ");
    tracep->declBit(c+513,"clock", false,-1);
    tracep->declBit(c+514,"reset", false,-1);
    tracep->declBus(c+284,"io_CSRDe_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+41,"io_CSRWb_rd", false,-1, 11,0);
    tracep->declBit(c+40,"io_CSRWb_csr_wen", false,-1);
    tracep->declQuad(c+38,"io_CSRWb_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+285,"io_CSRTr_rd", false,-1, 11,0);
    tracep->declBit(c+286,"io_CSRTr_csr_wen", false,-1);
    tracep->declQuad(c+287,"io_CSRTr_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+278,"io_timer_int", false,-1);
    tracep->declQuad(c+289,"io_CSRDe_csr_rdata", false,-1, 63,0);
    tracep->declQuad(c+291,"io_CSRTr_MTVEC", false,-1, 63,0);
    tracep->declQuad(c+293,"io_CSRTr_MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+295,"io_CSRTr_MEPC", false,-1, 63,0);
    tracep->declQuad(c+297,"io_CSRTr_MIE", false,-1, 63,0);
    tracep->declQuad(c+299,"io_CSRTr_MIP", false,-1, 63,0);
    tracep->declQuad(c+301,"io_CSRTr_MSTATUS", false,-1, 63,0);
    tracep->declQuad(c+291,"MTVEC", false,-1, 63,0);
    tracep->declQuad(c+293,"MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+295,"MEPC", false,-1, 63,0);
    tracep->declQuad(c+297,"MIE", false,-1, 63,0);
    tracep->declQuad(c+299,"MIP", false,-1, 63,0);
    tracep->declQuad(c+301,"MSTATUS", false,-1, 63,0);
    tracep->declQuad(c+303,"MSCRATCH", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("decode ");
    tracep->declBit(c+513,"clock", false,-1);
    tracep->declBit(c+514,"reset", false,-1);
    tracep->declBit(c+163,"io_inst_valid", false,-1);
    tracep->declQuad(c+164,"io_inst_bits_data", false,-1, 63,0);
    tracep->declQuad(c+1,"io_fdio_pc", false,-1, 63,0);
    tracep->declQuad(c+305,"io_rfio_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+307,"io_rfio_reg2_rdata", false,-1, 63,0);
    tracep->declBit(c+49,"io_branch", false,-1);
    tracep->declBit(c+309,"io_fwde_fw_sel1", false,-1);
    tracep->declBit(c+310,"io_fwde_fw_sel2", false,-1);
    tracep->declQuad(c+311,"io_fwde_fw_data1", false,-1, 63,0);
    tracep->declQuad(c+313,"io_fwde_fw_data2", false,-1, 63,0);
    tracep->declBit(c+315,"io_fwde_csr_fw_sel", false,-1);
    tracep->declQuad(c+316,"io_fwde_csr_fw_data", false,-1, 63,0);
    tracep->declQuad(c+289,"io_csrs_csr_rdata", false,-1, 63,0);
    tracep->declBus(c+318,"io_rfio_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+319,"io_rfio_reg2_raddr", false,-1, 4,0);
    tracep->declQuad(c+320,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+322,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+324,"io_deio_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+325,"io_deio_branch_type", false,-1);
    tracep->declQuad(c+326,"io_deio_branch_addr", false,-1, 63,0);
    tracep->declBus(c+328,"io_deio_alu_op", false,-1, 5,0);
    tracep->declBus(c+329,"io_deio_shamt", false,-1, 5,0);
    tracep->declBus(c+330,"io_deio_wb_type", false,-1, 1,0);
    tracep->declBus(c+331,"io_deio_sd_type", false,-1, 2,0);
    tracep->declQuad(c+332,"io_deio_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+334,"io_deio_ld_type", false,-1, 2,0);
    tracep->declQuad(c+335,"io_deio_csr_t", false,-1, 63,0);
    tracep->declBus(c+337,"io_deio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+338,"io_deio_csr_wen", false,-1);
    tracep->declBit(c+339,"io_deio_has_inst", false,-1);
    tracep->declBit(c+340,"io_jump_flag", false,-1);
    tracep->declQuad(c+341,"io_jump_pc", false,-1, 63,0);
    tracep->declBit(c+46,"io_load_use", false,-1);
    tracep->declBus(c+318,"io_fwde_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+319,"io_fwde_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+284,"io_fwde_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+284,"io_csrs_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+343,"lu_rd", false,-1, 4,0);
    tracep->pushNamePrefix("cu ");
    tracep->declBus(c+344,"io_inst", false,-1, 31,0);
    tracep->declBus(c+345,"io_jump_type", false,-1, 1,0);
    tracep->declBit(c+325,"io_branch_type", false,-1);
    tracep->declBus(c+346,"io_opa_type", false,-1, 1,0);
    tracep->declBus(c+347,"io_opb_type", false,-1, 2,0);
    tracep->declBus(c+348,"io_imm_type", false,-1, 2,0);
    tracep->declBus(c+328,"io_alu_op", false,-1, 5,0);
    tracep->declBus(c+330,"io_wb_type", false,-1, 1,0);
    tracep->declBus(c+331,"io_sd_type", false,-1, 2,0);
    tracep->declBus(c+334,"io_ld_type", false,-1, 2,0);
    tracep->declBus(c+349,"io_csr_type", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("eximm ");
    tracep->declBus(c+344,"io_inst", false,-1, 31,0);
    tracep->declBus(c+348,"io_imm_type", false,-1, 2,0);
    tracep->declQuad(c+350,"io_eximm", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("excute ");
    tracep->declQuad(c+3,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+5,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+7,"io_deio_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+8,"io_deio_branch_type", false,-1);
    tracep->declQuad(c+9,"io_deio_branch_addr", false,-1, 63,0);
    tracep->declBus(c+11,"io_deio_alu_op", false,-1, 5,0);
    tracep->declBus(c+12,"io_deio_shamt", false,-1, 5,0);
    tracep->declBus(c+13,"io_deio_wb_type", false,-1, 1,0);
    tracep->declBus(c+14,"io_deio_sd_type", false,-1, 2,0);
    tracep->declQuad(c+15,"io_deio_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+17,"io_deio_ld_type", false,-1, 2,0);
    tracep->declQuad(c+18,"io_deio_csr_t", false,-1, 63,0);
    tracep->declBus(c+20,"io_deio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+21,"io_deio_csr_wen", false,-1);
    tracep->declBit(c+22,"io_deio_has_inst", false,-1);
    tracep->declQuad(c+47,"io_emio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+7,"io_emio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+13,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+17,"io_emio_ld_type", false,-1, 2,0);
    tracep->declBus(c+352,"io_emio_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+273,"io_emio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+21,"io_emio_csr_wen", false,-1);
    tracep->declBus(c+20,"io_emio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+22,"io_emio_has_inst", false,-1);
    tracep->declBit(c+49,"io_jump_flag", false,-1);
    tracep->declQuad(c+9,"io_jump_pc", false,-1, 63,0);
    tracep->declQuad(c+353,"io_raddr", false,-1, 63,0);
    tracep->declQuad(c+355,"io_waddr", false,-1, 63,0);
    tracep->declQuad(c+15,"io_wdata", false,-1, 63,0);
    tracep->declBus(c+55,"io_wmask", false,-1, 7,0);
    tracep->declBus(c+7,"io_fwex_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+357,"io_fwex_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+359,"io_fwex_reg_we", false,-1);
    tracep->declQuad(c+273,"io_fwex_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+21,"io_fwex_csr_wen", false,-1);
    tracep->declBus(c+20,"io_fwex_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+272,"io_clex_valid", false,-1);
    tracep->declBus(c+17,"io_clex_ld_type", false,-1, 2,0);
    tracep->declQuad(c+273,"io_clex_raddr", false,-1, 63,0);
    tracep->declBus(c+14,"io_clex_sd_type", false,-1, 2,0);
    tracep->declQuad(c+273,"io_clex_waddr", false,-1, 63,0);
    tracep->declBus(c+55,"io_clex_wmask", false,-1, 7,0);
    tracep->declQuad(c+15,"io_clex_wdata", false,-1, 63,0);
    tracep->pushNamePrefix("alu ");
    tracep->declQuad(c+3,"io_op_a", false,-1, 63,0);
    tracep->declQuad(c+5,"io_op_b", false,-1, 63,0);
    tracep->declBus(c+11,"io_alu_op", false,-1, 5,0);
    tracep->declBus(c+12,"io_shamt", false,-1, 5,0);
    tracep->declQuad(c+273,"io_result", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fc ");
    tracep->declBit(c+340,"io_fcde_jump_flag", false,-1);
    tracep->declQuad(c+341,"io_fcde_jump_pc", false,-1, 63,0);
    tracep->declBit(c+46,"io_fcde_load_use", false,-1);
    tracep->declBit(c+49,"io_fcex_jump_flag", false,-1);
    tracep->declQuad(c+9,"io_fcex_jump_pc", false,-1, 63,0);
    tracep->declBit(c+360,"io_fctr_pop_NOP", false,-1);
    tracep->declBus(c+361,"io_fctr_trap_state", false,-1, 2,0);
    tracep->declBit(c+362,"io_fctr_jump_flag", false,-1);
    tracep->declQuad(c+363,"io_fctr_jump_pc", false,-1, 63,0);
    tracep->declBit(c+365,"io_fcfe_jump_flag", false,-1);
    tracep->declQuad(c+366,"io_fcfe_jump_pc", false,-1, 63,0);
    tracep->declBit(c+368,"io_fcfe_flush", false,-1);
    tracep->declBit(c+369,"io_fcfe_stall", false,-1);
    tracep->declBit(c+370,"io_fcde_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+513,"clock", false,-1);
    tracep->declBit(c+514,"reset", false,-1);
    tracep->declBit(c+365,"io_fcfe_jump_flag", false,-1);
    tracep->declQuad(c+366,"io_fcfe_jump_pc", false,-1, 63,0);
    tracep->declBit(c+368,"io_fcfe_flush", false,-1);
    tracep->declBit(c+369,"io_fcfe_stall", false,-1);
    tracep->declQuad(c+43,"io_fdio_pc", false,-1, 63,0);
    tracep->declQuad(c+43,"io_pc_bits", false,-1, 63,0);
    tracep->declBit(c+371,"started", false,-1);
    tracep->declQuad(c+372,"pc", false,-1, 63,0);
    tracep->declQuad(c+374,"old_pc", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fw ");
    tracep->declBus(c+318,"io_fwde_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+319,"io_fwde_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+284,"io_fwde_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+7,"io_fwex_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+357,"io_fwex_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+359,"io_fwex_reg_we", false,-1);
    tracep->declQuad(c+273,"io_fwex_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+21,"io_fwex_csr_wen", false,-1);
    tracep->declBus(c+20,"io_fwex_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+25,"io_fwmem_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+376,"io_fwmem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+378,"io_fwmem_reg_we", false,-1);
    tracep->declQuad(c+29,"io_fwmem_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+31,"io_fwmem_csr_wen", false,-1);
    tracep->declBus(c+32,"io_fwmem_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+36,"io_fwwb_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+34,"io_fwwb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+53,"io_fwwb_reg_we", false,-1);
    tracep->declQuad(c+38,"io_fwwb_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+40,"io_fwwb_csr_wen", false,-1);
    tracep->declBus(c+41,"io_fwwb_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+309,"io_fwde_fw_sel1", false,-1);
    tracep->declBit(c+310,"io_fwde_fw_sel2", false,-1);
    tracep->declQuad(c+311,"io_fwde_fw_data1", false,-1, 63,0);
    tracep->declQuad(c+313,"io_fwde_fw_data2", false,-1, 63,0);
    tracep->declBit(c+315,"io_fwde_csr_fw_sel", false,-1);
    tracep->declQuad(c+316,"io_fwde_csr_fw_data", false,-1, 63,0);
    tracep->declBit(c+379,"reg1_ex_hazard", false,-1);
    tracep->declBit(c+380,"reg2_ex_hazard", false,-1);
    tracep->declBit(c+381,"reg1_mem_hazard", false,-1);
    tracep->declBit(c+382,"reg2_mem_hazard", false,-1);
    tracep->declBit(c+383,"reg1_wb_hazard", false,-1);
    tracep->declBit(c+384,"reg2_wb_hazard", false,-1);
    tracep->declBit(c+385,"csr_ex_harzard", false,-1);
    tracep->declBit(c+386,"csr_mem_harzard", false,-1);
    tracep->declBit(c+387,"csr_wb_harzard", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("interact ");
    tracep->declBus(c+45,"inst", false,-1, 31,0);
    tracep->declBit(c+513,"clk", false,-1);
    tracep->declBit(c+514,"rst", false,-1);
    tracep->declBit(c+388,"ebreak_flag", false,-1);
    tracep->declBus(c+389,"over_count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declQuad(c+23,"io_emio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+25,"io_emio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+26,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+27,"io_emio_ld_type", false,-1, 2,0);
    tracep->declBus(c+28,"io_emio_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+29,"io_emio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+31,"io_emio_csr_wen", false,-1);
    tracep->declBus(c+32,"io_emio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+33,"io_emio_has_inst", false,-1);
    tracep->declBit(c+56,"io_rdata_valid", false,-1);
    tracep->declQuad(c+57,"io_rdata_bits_data", false,-1, 63,0);
    tracep->declBit(c+275,"io_clmem_Clrvalue_valid", false,-1);
    tracep->declQuad(c+276,"io_clmem_Clrvalue_bits", false,-1, 63,0);
    tracep->declQuad(c+376,"io_mwio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+25,"io_mwio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+26,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declQuad(c+29,"io_mwio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+31,"io_mwio_csr_wen", false,-1);
    tracep->declBus(c+32,"io_mwio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+33,"io_mwio_has_inst", false,-1);
    tracep->declBus(c+25,"io_fwmem_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+376,"io_fwmem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+378,"io_fwmem_reg_we", false,-1);
    tracep->declQuad(c+29,"io_fwmem_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+31,"io_fwmem_csr_wen", false,-1);
    tracep->declBus(c+32,"io_fwmem_csr_waddr", false,-1, 11,0);
    tracep->declQuad(c+390,"rvalue", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+513,"clock", false,-1);
    tracep->declBus(c+318,"io_RfDe_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+319,"io_RfDe_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+36,"io_RfWb_rd", false,-1, 4,0);
    tracep->declBit(c+53,"io_RfWb_reg_wen", false,-1);
    tracep->declQuad(c+34,"io_RfWb_reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+305,"io_RfDe_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+307,"io_RfDe_reg2_rdata", false,-1, 63,0);
    tracep->pushNamePrefix("regs_ext ");
    tracep->declBus(c+36,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+518,"R0_en", false,-1);
    tracep->declBit(c+513,"R0_clk", false,-1);
    tracep->declBus(c+318,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+518,"R1_en", false,-1);
    tracep->declBit(c+513,"R1_clk", false,-1);
    tracep->declBus(c+319,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+518,"R2_en", false,-1);
    tracep->declBit(c+513,"R2_clk", false,-1);
    tracep->declBus(c+523,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+518,"W0_en", false,-1);
    tracep->declBit(c+513,"W0_clk", false,-1);
    tracep->declQuad(c+520,"W0_data", false,-1, 63,0);
    tracep->declBus(c+36,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+518,"W1_en", false,-1);
    tracep->declBit(c+513,"W1_clk", false,-1);
    tracep->declQuad(c+392,"W1_data", false,-1, 63,0);
    tracep->declQuad(c+394,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+396,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+398,"R2_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+400+i*2,"Memory", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("trap ");
    tracep->declBit(c+513,"clock", false,-1);
    tracep->declBit(c+514,"reset", false,-1);
    tracep->declBit(c+22,"io_ex_hasinst", false,-1);
    tracep->declBit(c+33,"io_mem_hasinst", false,-1);
    tracep->declBit(c+42,"io_wb_hasinst", false,-1);
    tracep->declQuad(c+291,"io_csrtr_MTVEC", false,-1, 63,0);
    tracep->declQuad(c+293,"io_csrtr_MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+295,"io_csrtr_MEPC", false,-1, 63,0);
    tracep->declQuad(c+297,"io_csrtr_MIE", false,-1, 63,0);
    tracep->declQuad(c+299,"io_csrtr_MIP", false,-1, 63,0);
    tracep->declQuad(c+301,"io_csrtr_MSTATUS", false,-1, 63,0);
    tracep->declBus(c+464,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+43,"io_pc", false,-1, 63,0);
    tracep->declBus(c+285,"io_csrtr_rd", false,-1, 11,0);
    tracep->declBit(c+286,"io_csrtr_csr_wen", false,-1);
    tracep->declQuad(c+287,"io_csrtr_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+360,"io_fctr_pop_NOP", false,-1);
    tracep->declBus(c+361,"io_fctr_trap_state", false,-1, 2,0);
    tracep->declBit(c+362,"io_fctr_jump_flag", false,-1);
    tracep->declQuad(c+363,"io_fctr_jump_pc", false,-1, 63,0);
    tracep->declQuad(c+465,"cause", false,-1, 63,0);
    tracep->declQuad(c+467,"pc", false,-1, 63,0);
    tracep->declBus(c+361,"state", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb ");
    tracep->declQuad(c+34,"io_mwio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+36,"io_mwio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+37,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declQuad(c+38,"io_mwio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+40,"io_mwio_csr_wen", false,-1);
    tracep->declBus(c+41,"io_mwio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+42,"io_mwio_has_inst", false,-1);
    tracep->declBus(c+36,"io_rfio_rd", false,-1, 4,0);
    tracep->declBit(c+53,"io_rfio_reg_wen", false,-1);
    tracep->declQuad(c+34,"io_rfio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+36,"io_fwwb_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+34,"io_fwwb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+53,"io_fwwb_reg_we", false,-1);
    tracep->declQuad(c+38,"io_fwwb_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+40,"io_fwwb_csr_wen", false,-1);
    tracep->declBus(c+41,"io_fwwb_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+41,"io_csrs_rd", false,-1, 11,0);
    tracep->declBit(c+40,"io_csrs_csr_wen", false,-1);
    tracep->declQuad(c+38,"io_csrs_csr_wdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+513,"ACLK", false,-1);
    tracep->declBit(c+514,"ARESETn", false,-1);
    tracep->declBus(c+483,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+524,"S_AXI_AWPROT", false,-1, 2,0);
    tracep->declBit(c+482,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+469,"S_AXI_AWREADY", false,-1);
    tracep->declQuad(c+485,"S_AXI_WDATA", false,-1, 63,0);
    tracep->declBus(c+487,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+484,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+470,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+475,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+517,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+518,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+489,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+524,"S_AXI_ARPROT", false,-1, 2,0);
    tracep->declBit(c+488,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+471,"S_AXI_ARREADY", false,-1);
    tracep->declQuad(c+473,"S_AXI_RDATA", false,-1, 63,0);
    tracep->declBus(c+476,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+472,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+515,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+469,"awready", false,-1);
    tracep->declBit(c+470,"wready", false,-1);
    tracep->declBus(c+475,"bresp", false,-1, 1,0);
    tracep->declBit(c+477,"bvalid", false,-1);
    tracep->declBit(c+471,"arready", false,-1);
    tracep->declQuad(c+473,"rdata", false,-1, 63,0);
    tracep->declBus(c+476,"rresp", false,-1, 1,0);
    tracep->declBit(c+472,"rvalid", false,-1);
    tracep->declBus(c+478,"awaddr_buffer", false,-1, 31,0);
    tracep->declBus(c+516,"awaddr", false,-1, 31,0);
    tracep->declBit(c+479,"need_resp", false,-1);
    tracep->declBus(c+480,"araddr", false,-1, 31,0);
    tracep->declBit(c+481,"need_read", false,-1);
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
    VlWide<8>/*255:0*/ __Vtemp_hc41d1282__0;
    // Body
    bufp->fullQData(oldp+1,(vlSelf->Soc__DOT__core__DOT__fdreg_pc),64);
    bufp->fullQData(oldp+3,(vlSelf->Soc__DOT__core__DOT__dereg_op_a),64);
    bufp->fullQData(oldp+5,(vlSelf->Soc__DOT__core__DOT__dereg_op_b),64);
    bufp->fullCData(oldp+7,(vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr),5);
    bufp->fullBit(oldp+8,(vlSelf->Soc__DOT__core__DOT__dereg_branch_type));
    bufp->fullQData(oldp+9,(vlSelf->Soc__DOT__core__DOT__dereg_branch_addr),64);
    bufp->fullCData(oldp+11,(vlSelf->Soc__DOT__core__DOT__dereg_alu_op),6);
    bufp->fullCData(oldp+12,(vlSelf->Soc__DOT__core__DOT__dereg_shamt),6);
    bufp->fullCData(oldp+13,(vlSelf->Soc__DOT__core__DOT__dereg_wb_type),2);
    bufp->fullCData(oldp+14,(vlSelf->Soc__DOT__core__DOT__dereg_sd_type),3);
    bufp->fullQData(oldp+15,(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata),64);
    bufp->fullCData(oldp+17,(vlSelf->Soc__DOT__core__DOT__dereg_ld_type),3);
    bufp->fullQData(oldp+18,(vlSelf->Soc__DOT__core__DOT__dereg_csr_t),64);
    bufp->fullSData(oldp+20,(vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr),12);
    bufp->fullBit(oldp+21,(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen));
    bufp->fullBit(oldp+22,(vlSelf->Soc__DOT__core__DOT__dereg_has_inst));
    bufp->fullQData(oldp+23,(vlSelf->Soc__DOT__core__DOT__emreg_reg_wdata),64);
    bufp->fullCData(oldp+25,(vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr),5);
    bufp->fullCData(oldp+26,(vlSelf->Soc__DOT__core__DOT__emreg_wb_type),2);
    bufp->fullCData(oldp+27,(vlSelf->Soc__DOT__core__DOT__emreg_ld_type),3);
    bufp->fullCData(oldp+28,(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit),3);
    bufp->fullQData(oldp+29,(vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata),64);
    bufp->fullBit(oldp+31,(vlSelf->Soc__DOT__core__DOT__emreg_csr_wen));
    bufp->fullSData(oldp+32,(vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr),12);
    bufp->fullBit(oldp+33,(vlSelf->Soc__DOT__core__DOT__emreg_has_inst));
    bufp->fullQData(oldp+34,(vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata),64);
    bufp->fullCData(oldp+36,(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr),5);
    bufp->fullCData(oldp+37,(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type),2);
    bufp->fullQData(oldp+38,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata),64);
    bufp->fullBit(oldp+40,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen));
    bufp->fullSData(oldp+41,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr),12);
    bufp->fullBit(oldp+42,(vlSelf->Soc__DOT__core__DOT__mwreg_has_inst));
    bufp->fullQData(oldp+43,(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc),64);
    bufp->fullIData(oldp+45,(((1U & (IData)((vlSelf->Soc__DOT__core__DOT__fdreg_pc 
                                             >> 2U)))
                               ? (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_bits_data 
                                          >> 0x20U))
                               : (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_bits_data))),32);
    bufp->fullBit(oldp+46,(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16));
    bufp->fullQData(oldp+47,(((IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen)
                               ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                               : vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)),64);
    bufp->fullBit(oldp+49,(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag));
    bufp->fullBit(oldp+50,(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid));
    bufp->fullQData(oldp+51,(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T),64);
    bufp->fullBit(oldp+53,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))));
    bufp->fullIData(oldp+54,((IData)(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T)),32);
    bufp->fullCData(oldp+55,(vlSelf->Soc__DOT__core__DOT___excute_io_wmask),8);
    bufp->fullBit(oldp+56,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0) 
                            | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_valid))));
    bufp->fullQData(oldp+57,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_bits_data),64);
    bufp->fullBit(oldp+59,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_valid));
    bufp->fullBit(oldp+60,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw));
    bufp->fullIData(oldp+61,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr),32);
    bufp->fullCData(oldp+62,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state),3);
    bufp->fullIData(oldp+63,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__tag),21);
    bufp->fullCData(oldp+64,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index),8);
    bufp->fullCData(oldp+65,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset),3);
    bufp->fullWData(oldp+66,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid),512);
    bufp->fullWData(oldp+82,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty),512);
    bufp->fullWData(oldp+98,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace),512);
    bufp->fullBit(oldp+114,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim));
    bufp->fullIData(oldp+115,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr),32);
    bufp->fullQData(oldp+116,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data),64);
    bufp->fullCData(oldp+118,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask),8);
    bufp->fullBit(oldp+119,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inst_type));
    bufp->fullQData(oldp+120,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitDataArray),64);
    bufp->fullBit(oldp+122,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum));
    bufp->fullBit(oldp+123,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_valid));
    bufp->fullSData(oldp+124,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__TagArray_ext__R0_addr),9);
    bufp->fullBit(oldp+125,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_7));
    bufp->fullSData(oldp+126,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__TagArray_ext__R1_addr),9);
    bufp->fullBit(oldp+127,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_9));
    bufp->fullBit(oldp+128,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_14));
    bufp->fullBit(oldp+129,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_15));
    bufp->fullSData(oldp+130,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                               << 1U)),9);
    bufp->fullBit(oldp+131,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h390ec092__0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___hit0_T_7))));
    bufp->fullSData(oldp+132,((0x1ffU & ((IData)(1U) 
                                         + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                            << 1U)))),9);
    bufp->fullBit(oldp+133,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___hit0_T_7)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h390ec092__0))));
    bufp->fullBit(oldp+134,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_he21aab26__0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___hit0_T_7))));
    bufp->fullBit(oldp+135,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___hit0_T_7)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_he21aab26__0))));
    bufp->fullBit(oldp+136,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum))));
    bufp->fullQData(oldp+137,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data),64);
    bufp->fullBit(oldp+139,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0))));
    bufp->fullQData(oldp+140,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_0]
                                : 0ULL)),64);
    bufp->fullQData(oldp+142,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_1)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_2]
                                : 0ULL)),64);
    bufp->fullQData(oldp+144,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_3)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_4]
                                : 0ULL)),64);
    bufp->fullQData(oldp+146,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_5)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_6]
                                : 0ULL)),64);
    bufp->fullQData(oldp+148,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_7)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_8]
                                : 0ULL)),64);
    bufp->fullQData(oldp+150,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_9)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_10]
                                : 0ULL)),64);
    bufp->fullQData(oldp+152,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_11)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_12]
                                : 0ULL)),64);
    bufp->fullQData(oldp+154,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_13)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_14]
                                : 0ULL)),64);
    bufp->fullIData(oldp+156,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_7)
                                ? vlSelf->__VdfgTmp_h2fe899d6__0
                                : 0U)),21);
    bufp->fullIData(oldp+157,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_9)
                                ? vlSelf->__VdfgTmp_h5f294843__0
                                : 0U)),21);
    bufp->fullIData(oldp+158,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_14)
                                ? vlSelf->__VdfgTmp_h2fe899d6__0
                                : 0U)),21);
    bufp->fullIData(oldp+159,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_15)
                                ? vlSelf->__VdfgTmp_h5f294843__0
                                : 0U)),21);
    bufp->fullIData(oldp+160,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                              [((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                << 1U)]),21);
    bufp->fullIData(oldp+161,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                              [(0x1ffU & ((IData)(1U) 
                                          + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                             << 1U)))]),21);
    bufp->fullIData(oldp+162,((IData)(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc)),32);
    bufp->fullBit(oldp+163,(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_valid));
    bufp->fullQData(oldp+164,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data),64);
    bufp->fullBit(oldp+166,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_valid));
    bufp->fullBit(oldp+167,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw));
    bufp->fullIData(oldp+168,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr),32);
    bufp->fullCData(oldp+169,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state),3);
    bufp->fullIData(oldp+170,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__tag),21);
    bufp->fullCData(oldp+171,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index),8);
    bufp->fullCData(oldp+172,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset),3);
    bufp->fullWData(oldp+173,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid),512);
    bufp->fullWData(oldp+189,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty),512);
    bufp->fullWData(oldp+205,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace),512);
    bufp->fullBit(oldp+221,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim));
    bufp->fullIData(oldp+222,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr),32);
    bufp->fullQData(oldp+223,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data),64);
    bufp->fullCData(oldp+225,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask),8);
    bufp->fullBit(oldp+226,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inst_type));
    bufp->fullQData(oldp+227,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitDataArray),64);
    bufp->fullBit(oldp+229,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum));
    bufp->fullBit(oldp+230,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid));
    bufp->fullSData(oldp+231,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__TagArray_ext__R0_addr),9);
    bufp->fullBit(oldp+232,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_7));
    bufp->fullSData(oldp+233,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__TagArray_ext__R1_addr),9);
    bufp->fullBit(oldp+234,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_9));
    bufp->fullBit(oldp+235,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_14));
    bufp->fullBit(oldp+236,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_15));
    bufp->fullSData(oldp+237,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                               << 1U)),9);
    bufp->fullBit(oldp+238,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h390ec092__0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___hit0_T_7))));
    bufp->fullSData(oldp+239,((0x1ffU & ((IData)(1U) 
                                         + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                            << 1U)))),9);
    bufp->fullBit(oldp+240,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___hit0_T_7)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h390ec092__0))));
    bufp->fullBit(oldp+241,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum))));
    bufp->fullQData(oldp+242,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data),64);
    bufp->fullBit(oldp+244,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0))));
    bufp->fullQData(oldp+245,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_0]
                                : 0ULL)),64);
    bufp->fullQData(oldp+247,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_1)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_2]
                                : 0ULL)),64);
    bufp->fullQData(oldp+249,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_3)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_4]
                                : 0ULL)),64);
    bufp->fullQData(oldp+251,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_5)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_6]
                                : 0ULL)),64);
    bufp->fullQData(oldp+253,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_7)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_8]
                                : 0ULL)),64);
    bufp->fullQData(oldp+255,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_9)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_10]
                                : 0ULL)),64);
    bufp->fullQData(oldp+257,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_11)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_12]
                                : 0ULL)),64);
    bufp->fullQData(oldp+259,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_13)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_14]
                                : 0ULL)),64);
    bufp->fullIData(oldp+261,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_7)
                                ? vlSelf->__VdfgTmp_heb865217__0
                                : 0U)),21);
    bufp->fullIData(oldp+262,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_9)
                                ? vlSelf->__VdfgTmp_hb3a84c04__0
                                : 0U)),21);
    bufp->fullIData(oldp+263,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_14)
                                ? vlSelf->__VdfgTmp_heb865217__0
                                : 0U)),21);
    bufp->fullIData(oldp+264,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_15)
                                ? vlSelf->__VdfgTmp_hb3a84c04__0
                                : 0U)),21);
    bufp->fullIData(oldp+265,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                              [((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                << 1U)]),21);
    bufp->fullIData(oldp+266,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                              [(0x1ffU & ((IData)(1U) 
                                          + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                             << 1U)))]),21);
    bufp->fullBit(oldp+267,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp));
    bufp->fullBit(oldp+268,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp));
    bufp->fullBit(oldp+269,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__b_comp));
    bufp->fullBit(oldp+270,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__ar_comp));
    bufp->fullBit(oldp+271,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_comp));
    bufp->fullBit(oldp+272,(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6));
    bufp->fullQData(oldp+273,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result),64);
    bufp->fullBit(oldp+275,(vlSelf->Soc__DOT__core__DOT__clint__DOT__valid_buf));
    bufp->fullQData(oldp+276,(vlSelf->Soc__DOT__core__DOT__clint__DOT__rvalue_buf),64);
    bufp->fullBit(oldp+278,((vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME 
                             >= vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP)));
    bufp->fullIData(oldp+279,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MSIP),32);
    bufp->fullQData(oldp+280,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP),64);
    bufp->fullQData(oldp+282,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME),64);
    bufp->fullSData(oldp+284,(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr),12);
    __Vtemp_h5ee83ed9__0[0U] = 0x41000000U;
    __Vtemp_h5ee83ed9__0[1U] = 0x3003423U;
    __Vtemp_h5ee83ed9__0[2U] = (0x30000000U | (((0x8000000000000007ULL 
                                                 == vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE)
                                                 ? 0x344U
                                                 : 0U) 
                                               << 8U));
    bufp->fullSData(oldp+285,(((0x5fU >= (0x7fU & ((IData)(0xcU) 
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
    bufp->fullBit(oldp+286,(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen));
    bufp->fullQData(oldp+287,(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata),64);
    bufp->fullQData(oldp+289,(((0x340U == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
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
    bufp->fullQData(oldp+291,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC),64);
    bufp->fullQData(oldp+293,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE),64);
    bufp->fullQData(oldp+295,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC),64);
    bufp->fullQData(oldp+297,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE),64);
    bufp->fullQData(oldp+299,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP),64);
    bufp->fullQData(oldp+301,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS),64);
    bufp->fullQData(oldp+303,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH),64);
    bufp->fullQData(oldp+305,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0)
                                ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]
                                : 0ULL)),64);
    bufp->fullQData(oldp+307,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0)
                                ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]
                                : 0ULL)),64);
    bufp->fullBit(oldp+309,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)))));
    bufp->fullBit(oldp+310,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))));
    bufp->fullQData(oldp+311,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard)
                                ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard)
                                    ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)
                                        ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                        : 0ULL)))),64);
    bufp->fullQData(oldp+313,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                                ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                                    ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                                        ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                        : 0ULL)))),64);
    bufp->fullBit(oldp+315,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)))));
    bufp->fullQData(oldp+316,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard)
                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard)
                                    ? vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)
                                        ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                                        : 0ULL)))),64);
    bufp->fullCData(oldp+318,(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr),5);
    bufp->fullCData(oldp+319,(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr),5);
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
    bufp->fullQData(oldp+320,((((QData)((IData)(__Vtemp_hc41d1282__0[
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
                               | (((0U == (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type) 
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
    bufp->fullQData(oldp+322,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T
                                : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                    ? 4ULL : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                               ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T
                                               : ((1U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                                   ? vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm
                                                   : 0ULL))))),64);
    bufp->fullCData(oldp+324,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_reg_waddr),5);
    bufp->fullBit(oldp+325,(((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT___GEN) 
                             & ((0x17U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                & ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                   & ((0x6fU != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                      & ((0x67U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                         & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5))))))));
    bufp->fullQData(oldp+326,((vlSelf->Soc__DOT__core__DOT__fdreg_pc 
                               + (((- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))) 
                                   << 0xcU) | (QData)((IData)(
                                                              (((IData)(vlSelf->__VdfgTmp_hf5911942__0) 
                                                                << 0xbU) 
                                                               | (((IData)(vlSelf->__VdfgTmp_h2320f349__0) 
                                                                   << 5U) 
                                                                  | ((IData)(vlSelf->__VdfgTmp_h11542e25__0) 
                                                                     << 1U)))))))),64);
    bufp->fullCData(oldp+328,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op),6);
    bufp->fullCData(oldp+329,(((IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_valid)
                                ? (0x3fU & (IData)(
                                                   (vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data 
                                                    >> 0x14U)))
                                : 0U)),6);
    bufp->fullCData(oldp+330,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT___GEN)
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
    bufp->fullCData(oldp+331,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0)
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
    bufp->fullQData(oldp+332,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T),64);
    bufp->fullCData(oldp+334,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type),3);
    bufp->fullQData(oldp+335,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T),64);
    bufp->fullSData(oldp+337,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen)
                                ? (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr)
                                : 0U)),12);
    bufp->fullBit(oldp+338,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen));
    bufp->fullBit(oldp+339,((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT___GEN)));
    bufp->fullBit(oldp+340,(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag));
    bufp->fullQData(oldp+341,(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                ? (vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
                                   + vlSelf->Soc__DOT__core__DOT__fdreg_pc)
                                : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                    ? (0xfffffffffffffffeULL 
                                       & (vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4 
                                          + vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm))
                                    : 0x80000000ULL))),64);
    bufp->fullCData(oldp+343,(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd),5);
    bufp->fullIData(oldp+344,(vlSelf->Soc__DOT__core__DOT__decode__DOT___GEN),32);
    bufp->fullCData(oldp+345,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type),2);
    bufp->fullCData(oldp+346,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type),2);
    bufp->fullCData(oldp+347,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type),3);
    bufp->fullCData(oldp+348,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT___GEN)
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
    bufp->fullCData(oldp+349,(((((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0) 
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
    bufp->fullQData(oldp+350,(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm),64);
    bufp->fullCData(oldp+352,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                ? ((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                    ? 0U : (7U & (IData)(vlSelf->__VdfgTmp_h6a80e86b__0)))
                                : 0U)),3);
    bufp->fullQData(oldp+353,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                : 0ULL)),64);
    bufp->fullQData(oldp+355,((((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6)) 
                                & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))
                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                : 0ULL)),64);
    bufp->fullQData(oldp+357,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata),64);
    bufp->fullBit(oldp+359,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we));
    bufp->fullBit(oldp+360,(((0U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                             & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2) 
                                | ((0x30200073U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data)) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7))))));
    bufp->fullCData(oldp+361,(vlSelf->Soc__DOT__core__DOT__trap__DOT__state),3);
    bufp->fullBit(oldp+362,(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3));
    bufp->fullQData(oldp+363,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC
                                : ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                    ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC
                                    : 0ULL))),64);
    bufp->fullBit(oldp+365,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_flag));
    bufp->fullQData(oldp+366,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc),64);
    bufp->fullBit(oldp+368,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_flush));
    bufp->fullBit(oldp+369,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_stall));
    bufp->fullBit(oldp+370,(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush));
    bufp->fullBit(oldp+371,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started));
    bufp->fullQData(oldp+372,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),64);
    bufp->fullQData(oldp+374,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc),64);
    bufp->fullQData(oldp+376,(vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata),64);
    bufp->fullBit(oldp+378,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))));
    bufp->fullBit(oldp+379,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard));
    bufp->fullBit(oldp+380,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard));
    bufp->fullBit(oldp+381,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard));
    bufp->fullBit(oldp+382,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard));
    bufp->fullBit(oldp+383,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard));
    bufp->fullBit(oldp+384,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard));
    bufp->fullBit(oldp+385,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard));
    bufp->fullBit(oldp+386,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard));
    bufp->fullBit(oldp+387,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard));
    bufp->fullBit(oldp+388,(vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag));
    bufp->fullCData(oldp+389,(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count),3);
    bufp->fullQData(oldp+390,((((QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
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
    bufp->fullQData(oldp+392,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                                & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr)))
                                ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr])),64);
    bufp->fullQData(oldp+394,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr]),64);
    bufp->fullQData(oldp+396,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]),64);
    bufp->fullQData(oldp+398,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]),64);
    bufp->fullQData(oldp+400,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+402,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+404,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+406,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+408,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+410,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+412,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+414,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+416,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+418,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+420,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+422,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+424,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+426,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+428,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+430,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+432,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+434,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+436,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+438,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+440,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+442,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+444,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+446,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+448,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+450,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+452,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+454,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+456,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+458,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+460,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+462,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
    bufp->fullIData(oldp+464,((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data)),32);
    bufp->fullQData(oldp+465,(vlSelf->Soc__DOT__core__DOT__trap__DOT__cause),64);
    bufp->fullQData(oldp+467,(vlSelf->Soc__DOT__core__DOT__trap__DOT__pc),64);
    bufp->fullBit(oldp+469,(vlSelf->Soc__DOT__sram__DOT__awready));
    bufp->fullBit(oldp+470,(vlSelf->Soc__DOT__sram__DOT__wready));
    bufp->fullBit(oldp+471,(vlSelf->Soc__DOT__sram__DOT__arready));
    bufp->fullBit(oldp+472,(vlSelf->Soc__DOT__sram__DOT__rvalid));
    bufp->fullQData(oldp+473,(vlSelf->Soc__DOT__sram__DOT__rdata),64);
    bufp->fullCData(oldp+475,(vlSelf->Soc__DOT__sram__DOT__bresp),2);
    bufp->fullCData(oldp+476,(vlSelf->Soc__DOT__sram__DOT__rresp),2);
    bufp->fullBit(oldp+477,(vlSelf->Soc__DOT__sram__DOT__bvalid));
    bufp->fullIData(oldp+478,(vlSelf->Soc__DOT__sram__DOT__awaddr_buffer),32);
    bufp->fullBit(oldp+479,(vlSelf->Soc__DOT__sram__DOT__need_resp));
    bufp->fullIData(oldp+480,(vlSelf->Soc__DOT__sram__DOT__araddr),32);
    bufp->fullBit(oldp+481,(vlSelf->Soc__DOT__sram__DOT__need_read));
    bufp->fullBit(oldp+482,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN));
    bufp->fullIData(oldp+483,(vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr),32);
    bufp->fullBit(oldp+484,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1));
    bufp->fullQData(oldp+485,(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0)
                                ? 0ULL : ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h02c05ceb__0)
                                           ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_data
                                           : vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_data))),64);
    bufp->fullCData(oldp+487,(((0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))
                                ? 0U : (0xffU & (- (IData)(
                                                           (1U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))))))),8);
    bufp->fullBit(oldp+488,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_2));
    bufp->fullIData(oldp+489,(((1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                      | ((~ ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                             & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h82421030__0))) 
                                         | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)))))
                                ? 0U : vlSelf->Soc__DOT__core__DOT__arbitor__DOT___addr_T_2)),32);
    bufp->fullBit(oldp+490,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_valid));
    bufp->fullQData(oldp+491,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_data),64);
    bufp->fullBit(oldp+493,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_11));
    bufp->fullBit(oldp+494,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_13));
    bufp->fullBit(oldp+495,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_17));
    bufp->fullBit(oldp+496,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_23));
    bufp->fullBit(oldp+497,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_valid));
    bufp->fullQData(oldp+498,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_data),64);
    bufp->fullBit(oldp+500,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_11));
    bufp->fullBit(oldp+501,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_13));
    bufp->fullBit(oldp+502,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_17));
    bufp->fullBit(oldp+503,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_23));
    bufp->fullCData(oldp+504,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state),2);
    bufp->fullQData(oldp+505,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data),64);
    bufp->fullQData(oldp+507,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data),64);
    bufp->fullQData(oldp+509,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_bits_data),64);
    bufp->fullQData(oldp+511,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data),64);
    bufp->fullBit(oldp+513,(vlSelf->clock));
    bufp->fullBit(oldp+514,(vlSelf->reset));
    bufp->fullBit(oldp+515,(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc0e633fc__0) 
                             & ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_comp)) 
                                   & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)))))));
    bufp->fullIData(oldp+516,((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1) 
                                & ((IData)(vlSelf->Soc__DOT__sram__DOT__wready) 
                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN) 
                                      & (IData)(vlSelf->Soc__DOT__sram__DOT__awready))))
                                ? vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr
                                : vlSelf->Soc__DOT__sram__DOT__awaddr_buffer)),32);
    bufp->fullBit(oldp+517,(vlSelf->Soc__DOT___sram_S_AXI_BVALID));
    bufp->fullBit(oldp+518,(1U));
    bufp->fullBit(oldp+519,(0U));
    bufp->fullQData(oldp+520,(0ULL),64);
    bufp->fullCData(oldp+522,(0U),8);
    bufp->fullCData(oldp+523,(0U),5);
    bufp->fullCData(oldp+524,(0U),3);
}
