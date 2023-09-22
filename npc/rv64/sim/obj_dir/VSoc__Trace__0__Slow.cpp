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
    tracep->declBit(c+531,"clock", false,-1);
    tracep->declBit(c+532,"reset", false,-1);
    tracep->pushNamePrefix("Soc ");
    tracep->declBit(c+531,"clock", false,-1);
    tracep->declBit(c+532,"reset", false,-1);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+531,"clock", false,-1);
    tracep->declBit(c+532,"reset", false,-1);
    tracep->declBit(c+464,"io_AXI_Interface_aw_ready", false,-1);
    tracep->declBit(c+465,"io_AXI_Interface_w_ready", false,-1);
    tracep->declBit(c+466,"io_AXI_Interface_b_valid", false,-1);
    tracep->declBit(c+467,"io_AXI_Interface_ar_ready", false,-1);
    tracep->declBit(c+468,"io_AXI_Interface_r_valid", false,-1);
    tracep->declQuad(c+469,"io_AXI_Interface_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+477,"io_AXI_Interface_aw_valid", false,-1);
    tracep->declBus(c+478,"io_AXI_Interface_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+479,"io_AXI_Interface_w_valid", false,-1);
    tracep->declQuad(c+480,"io_AXI_Interface_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+482,"io_AXI_Interface_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+483,"io_AXI_Interface_ar_valid", false,-1);
    tracep->declBus(c+484,"io_AXI_Interface_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+485,"io_AXI_Interface_r_ready", false,-1);
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
    tracep->declQuad(c+486,"dereg_reg2_rdata", false,-1, 63,0);
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
    tracep->pushNamePrefix("DI ");
    tracep->declBit(c+531,"clk", false,-1);
    tracep->declBit(c+532,"rst", false,-1);
    tracep->declBus(c+498,"pc", false,-1, 31,0);
    tracep->declBit(c+40,"pc_req", false,-1);
    tracep->declBus(c+41,"inst", false,-1, 31,0);
    tracep->declBit(c+439,"inst_valid", false,-1);
    tracep->declBit(c+42,"load_use", false,-1);
    tracep->declQuad(c+2,"op_a", false,-1, 63,0);
    tracep->declQuad(c+4,"op_b", false,-1, 63,0);
    tracep->declQuad(c+43,"result", false,-1, 63,0);
    tracep->declBit(c+45,"br_yes", false,-1);
    tracep->declBit(c+46,"mem_access", false,-1);
    tracep->declQuad(c+47,"mem_addr", false,-1, 63,0);
    tracep->declBus(c+33,"rd", false,-1, 4,0);
    tracep->declQuad(c+31,"reg_wdata", false,-1, 63,0);
    tracep->declBit(c+49,"reg_wen", false,-1);
    tracep->declBit(c+37,"csr_wen", false,-1);
    tracep->declQuad(c+35,"csr_wdata", false,-1, 63,0);
    tracep->declBus(c+38,"csr_waddr", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Dcache ");
    tracep->declBit(c+531,"clock", false,-1);
    tracep->declBit(c+532,"reset", false,-1);
    tracep->declBit(c+50,"io_cpu_req_valid", false,-1);
    tracep->declBit(c+537,"io_cpu_req_bits_inst_type", false,-1);
    tracep->declBus(c+51,"io_cpu_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+486,"io_cpu_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+488,"io_cpu_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+499,"io_axi_resp_valid", false,-1);
    tracep->declQuad(c+500,"io_axi_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+52,"io_cpu_resp_valid", false,-1);
    tracep->declQuad(c+53,"io_cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+55,"io_axi_req_valid", false,-1);
    tracep->declBit(c+56,"io_axi_req_bits_rw", false,-1);
    tracep->declBus(c+57,"io_axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+489,"io_axi_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+491,"io_axi_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+50,"io_fccache_req", false,-1);
    tracep->declBus(c+58,"io_fccache_state", false,-1, 2,0);
    tracep->declBus(c+488,"io_fccache_mask", false,-1, 7,0);
    tracep->declBit(c+59,"io_fccache_hit", false,-1);
    tracep->declBit(c+52,"io_fccache_cpu_valid", false,-1);
    tracep->declBit(c+499,"io_fccache_axi_valid", false,-1);
    tracep->declBus(c+58,"state", false,-1, 2,0);
    tracep->declBus(c+60,"tag", false,-1, 20,0);
    tracep->declBus(c+61,"index", false,-1, 7,0);
    tracep->declBus(c+62,"offset", false,-1, 2,0);
    tracep->declArray(c+63,"valid", false,-1, 511,0);
    tracep->declArray(c+79,"dirty", false,-1, 511,0);
    tracep->declArray(c+95,"replace", false,-1, 511,0);
    tracep->declBit(c+111,"hit0", false,-1);
    tracep->declBit(c+112,"hit1", false,-1);
    tracep->declBit(c+113,"inDataOneArray", false,-1);
    tracep->declBit(c+114,"victim", false,-1);
    tracep->declBus(c+115,"addr", false,-1, 31,0);
    tracep->declQuad(c+116,"data", false,-1, 63,0);
    tracep->declBus(c+118,"mask", false,-1, 7,0);
    tracep->declBit(c+119,"inst_type", false,-1);
    tracep->declBit(c+120,"whitNum", false,-1);
    tracep->declBit(c+52,"cpu_resp_valid", false,-1);
    tracep->declQuad(c+121,"cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+55,"axi_req_valid", false,-1);
    tracep->declBit(c+56,"axi_req_bits_rw", false,-1);
    tracep->declBus(c+57,"axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+489,"axi_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+491,"axi_req_bits_mask", false,-1, 7,0);
    tracep->pushNamePrefix("DataArray_ext ");
    tracep->declBus(c+123,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+124,"R0_en", false,-1);
    tracep->declBit(c+531,"R0_clk", false,-1);
    tracep->declBus(c+125,"R1_addr", false,-1, 8,0);
    tracep->declBit(c+126,"R1_en", false,-1);
    tracep->declBit(c+531,"R1_clk", false,-1);
    tracep->declBus(c+127,"R2_addr", false,-1, 8,0);
    tracep->declBit(c+128,"R2_en", false,-1);
    tracep->declBit(c+531,"R2_clk", false,-1);
    tracep->declBus(c+125,"R3_addr", false,-1, 8,0);
    tracep->declBit(c+129,"R3_en", false,-1);
    tracep->declBit(c+531,"R3_clk", false,-1);
    tracep->declBus(c+127,"R4_addr", false,-1, 8,0);
    tracep->declBit(c+130,"R4_en", false,-1);
    tracep->declBit(c+531,"R4_clk", false,-1);
    tracep->declBus(c+131,"R5_addr", false,-1, 8,0);
    tracep->declBit(c+132,"R5_en", false,-1);
    tracep->declBit(c+531,"R5_clk", false,-1);
    tracep->declBus(c+131,"R6_addr", false,-1, 8,0);
    tracep->declBit(c+133,"R6_en", false,-1);
    tracep->declBit(c+531,"R6_clk", false,-1);
    tracep->declBus(c+131,"R7_addr", false,-1, 8,0);
    tracep->declBit(c+134,"R7_en", false,-1);
    tracep->declBit(c+531,"R7_clk", false,-1);
    tracep->declBus(c+135,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+502,"W0_en", false,-1);
    tracep->declBit(c+531,"W0_clk", false,-1);
    tracep->declQuad(c+500,"W0_data", false,-1, 63,0);
    tracep->declBus(c+136,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+503,"W1_en", false,-1);
    tracep->declBit(c+531,"W1_clk", false,-1);
    tracep->declQuad(c+500,"W1_data", false,-1, 63,0);
    tracep->declBus(c+135,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+137,"W2_en", false,-1);
    tracep->declBit(c+531,"W2_clk", false,-1);
    tracep->declQuad(c+138,"W2_data", false,-1, 63,0);
    tracep->declBus(c+136,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+140,"W3_en", false,-1);
    tracep->declBit(c+531,"W3_clk", false,-1);
    tracep->declQuad(c+138,"W3_data", false,-1, 63,0);
    tracep->declBus(c+135,"W4_addr", false,-1, 8,0);
    tracep->declBit(c+504,"W4_en", false,-1);
    tracep->declBit(c+531,"W4_clk", false,-1);
    tracep->declQuad(c+505,"W4_data", false,-1, 63,0);
    tracep->declBus(c+136,"W5_addr", false,-1, 8,0);
    tracep->declBit(c+507,"W5_en", false,-1);
    tracep->declBit(c+531,"W5_clk", false,-1);
    tracep->declQuad(c+505,"W5_data", false,-1, 63,0);
    tracep->declQuad(c+141,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+143,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+145,"R2_data", false,-1, 63,0);
    tracep->declQuad(c+147,"R3_data", false,-1, 63,0);
    tracep->declQuad(c+149,"R4_data", false,-1, 63,0);
    tracep->declQuad(c+151,"R5_data", false,-1, 63,0);
    tracep->declQuad(c+153,"R6_data", false,-1, 63,0);
    tracep->declQuad(c+155,"R7_data", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("TagArray_ext ");
    tracep->declBus(c+125,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+126,"R0_en", false,-1);
    tracep->declBit(c+531,"R0_clk", false,-1);
    tracep->declBus(c+127,"R1_addr", false,-1, 8,0);
    tracep->declBit(c+128,"R1_en", false,-1);
    tracep->declBit(c+531,"R1_clk", false,-1);
    tracep->declBus(c+125,"R2_addr", false,-1, 8,0);
    tracep->declBit(c+129,"R2_en", false,-1);
    tracep->declBit(c+531,"R2_clk", false,-1);
    tracep->declBus(c+127,"R3_addr", false,-1, 8,0);
    tracep->declBit(c+130,"R3_en", false,-1);
    tracep->declBit(c+531,"R3_clk", false,-1);
    tracep->declBus(c+157,"R4_addr", false,-1, 8,0);
    tracep->declBit(c+538,"R4_en", false,-1);
    tracep->declBit(c+531,"R4_clk", false,-1);
    tracep->declBus(c+131,"R5_addr", false,-1, 8,0);
    tracep->declBit(c+538,"R5_en", false,-1);
    tracep->declBit(c+531,"R5_clk", false,-1);
    tracep->declBus(c+135,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+502,"W0_en", false,-1);
    tracep->declBit(c+531,"W0_clk", false,-1);
    tracep->declBus(c+60,"W0_data", false,-1, 20,0);
    tracep->declBus(c+136,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+503,"W1_en", false,-1);
    tracep->declBit(c+531,"W1_clk", false,-1);
    tracep->declBus(c+60,"W1_data", false,-1, 20,0);
    tracep->declBus(c+135,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+504,"W2_en", false,-1);
    tracep->declBit(c+531,"W2_clk", false,-1);
    tracep->declBus(c+60,"W2_data", false,-1, 20,0);
    tracep->declBus(c+136,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+507,"W3_en", false,-1);
    tracep->declBit(c+531,"W3_clk", false,-1);
    tracep->declBus(c+60,"W3_data", false,-1, 20,0);
    tracep->declBus(c+158,"R0_data", false,-1, 20,0);
    tracep->declBus(c+159,"R1_data", false,-1, 20,0);
    tracep->declBus(c+160,"R2_data", false,-1, 20,0);
    tracep->declBus(c+161,"R3_data", false,-1, 20,0);
    tracep->declBus(c+162,"R4_data", false,-1, 20,0);
    tracep->declBus(c+163,"R5_data", false,-1, 20,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Icache ");
    tracep->declBit(c+531,"clock", false,-1);
    tracep->declBit(c+532,"reset", false,-1);
    tracep->declBit(c+40,"io_cpu_req_valid", false,-1);
    tracep->declBit(c+538,"io_cpu_req_bits_inst_type", false,-1);
    tracep->declBus(c+498,"io_cpu_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+539,"io_cpu_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+541,"io_cpu_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+508,"io_axi_resp_valid", false,-1);
    tracep->declQuad(c+509,"io_axi_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+164,"io_cpu_resp_valid", false,-1);
    tracep->declQuad(c+165,"io_cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+167,"io_axi_req_valid", false,-1);
    tracep->declBit(c+168,"io_axi_req_bits_rw", false,-1);
    tracep->declBus(c+169,"io_axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+492,"io_axi_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+494,"io_axi_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+40,"io_fccache_req", false,-1);
    tracep->declBus(c+170,"io_fccache_state", false,-1, 2,0);
    tracep->declBus(c+541,"io_fccache_mask", false,-1, 7,0);
    tracep->declBit(c+511,"io_fccache_hit", false,-1);
    tracep->declBit(c+164,"io_fccache_cpu_valid", false,-1);
    tracep->declBit(c+508,"io_fccache_axi_valid", false,-1);
    tracep->declBus(c+170,"state", false,-1, 2,0);
    tracep->declBus(c+171,"tag", false,-1, 20,0);
    tracep->declBus(c+172,"index", false,-1, 7,0);
    tracep->declBus(c+173,"offset", false,-1, 2,0);
    tracep->declArray(c+174,"valid", false,-1, 511,0);
    tracep->declArray(c+190,"dirty", false,-1, 511,0);
    tracep->declArray(c+206,"replace", false,-1, 511,0);
    tracep->declBit(c+512,"hit0", false,-1);
    tracep->declBit(c+440,"hit1", false,-1);
    tracep->declBit(c+222,"inDataOneArray", false,-1);
    tracep->declBit(c+223,"victim", false,-1);
    tracep->declBus(c+224,"addr", false,-1, 31,0);
    tracep->declQuad(c+225,"data", false,-1, 63,0);
    tracep->declBus(c+227,"mask", false,-1, 7,0);
    tracep->declBit(c+228,"inst_type", false,-1);
    tracep->declBit(c+229,"whitNum", false,-1);
    tracep->declBit(c+164,"cpu_resp_valid", false,-1);
    tracep->declQuad(c+230,"cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+167,"axi_req_valid", false,-1);
    tracep->declBit(c+168,"axi_req_bits_rw", false,-1);
    tracep->declBus(c+169,"axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+492,"axi_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+494,"axi_req_bits_mask", false,-1, 7,0);
    tracep->pushNamePrefix("DataArray_ext ");
    tracep->declBus(c+441,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+442,"R0_en", false,-1);
    tracep->declBit(c+531,"R0_clk", false,-1);
    tracep->declBus(c+232,"R1_addr", false,-1, 8,0);
    tracep->declBit(c+233,"R1_en", false,-1);
    tracep->declBit(c+531,"R1_clk", false,-1);
    tracep->declBus(c+234,"R2_addr", false,-1, 8,0);
    tracep->declBit(c+235,"R2_en", false,-1);
    tracep->declBit(c+531,"R2_clk", false,-1);
    tracep->declBus(c+232,"R3_addr", false,-1, 8,0);
    tracep->declBit(c+236,"R3_en", false,-1);
    tracep->declBit(c+531,"R3_clk", false,-1);
    tracep->declBus(c+234,"R4_addr", false,-1, 8,0);
    tracep->declBit(c+237,"R4_en", false,-1);
    tracep->declBit(c+531,"R4_clk", false,-1);
    tracep->declBus(c+513,"R5_addr", false,-1, 8,0);
    tracep->declBit(c+443,"R5_en", false,-1);
    tracep->declBit(c+531,"R5_clk", false,-1);
    tracep->declBus(c+513,"R6_addr", false,-1, 8,0);
    tracep->declBit(c+444,"R6_en", false,-1);
    tracep->declBit(c+531,"R6_clk", false,-1);
    tracep->declBus(c+513,"R7_addr", false,-1, 8,0);
    tracep->declBit(c+445,"R7_en", false,-1);
    tracep->declBit(c+531,"R7_clk", false,-1);
    tracep->declBus(c+238,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+514,"W0_en", false,-1);
    tracep->declBit(c+531,"W0_clk", false,-1);
    tracep->declQuad(c+509,"W0_data", false,-1, 63,0);
    tracep->declBus(c+239,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+515,"W1_en", false,-1);
    tracep->declBit(c+531,"W1_clk", false,-1);
    tracep->declQuad(c+509,"W1_data", false,-1, 63,0);
    tracep->declBus(c+238,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+240,"W2_en", false,-1);
    tracep->declBit(c+531,"W2_clk", false,-1);
    tracep->declQuad(c+241,"W2_data", false,-1, 63,0);
    tracep->declBus(c+239,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+243,"W3_en", false,-1);
    tracep->declBit(c+531,"W3_clk", false,-1);
    tracep->declQuad(c+241,"W3_data", false,-1, 63,0);
    tracep->declBus(c+238,"W4_addr", false,-1, 8,0);
    tracep->declBit(c+516,"W4_en", false,-1);
    tracep->declBit(c+531,"W4_clk", false,-1);
    tracep->declQuad(c+517,"W4_data", false,-1, 63,0);
    tracep->declBus(c+239,"W5_addr", false,-1, 8,0);
    tracep->declBit(c+519,"W5_en", false,-1);
    tracep->declBit(c+531,"W5_clk", false,-1);
    tracep->declQuad(c+517,"W5_data", false,-1, 63,0);
    tracep->declQuad(c+244,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+246,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+248,"R2_data", false,-1, 63,0);
    tracep->declQuad(c+250,"R3_data", false,-1, 63,0);
    tracep->declQuad(c+252,"R4_data", false,-1, 63,0);
    tracep->declQuad(c+254,"R5_data", false,-1, 63,0);
    tracep->declQuad(c+256,"R6_data", false,-1, 63,0);
    tracep->declQuad(c+258,"R7_data", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("TagArray_ext ");
    tracep->declBus(c+232,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+233,"R0_en", false,-1);
    tracep->declBit(c+531,"R0_clk", false,-1);
    tracep->declBus(c+234,"R1_addr", false,-1, 8,0);
    tracep->declBit(c+235,"R1_en", false,-1);
    tracep->declBit(c+531,"R1_clk", false,-1);
    tracep->declBus(c+232,"R2_addr", false,-1, 8,0);
    tracep->declBit(c+236,"R2_en", false,-1);
    tracep->declBit(c+531,"R2_clk", false,-1);
    tracep->declBus(c+234,"R3_addr", false,-1, 8,0);
    tracep->declBit(c+237,"R3_en", false,-1);
    tracep->declBit(c+531,"R3_clk", false,-1);
    tracep->declBus(c+520,"R4_addr", false,-1, 8,0);
    tracep->declBit(c+538,"R4_en", false,-1);
    tracep->declBit(c+531,"R4_clk", false,-1);
    tracep->declBus(c+513,"R5_addr", false,-1, 8,0);
    tracep->declBit(c+538,"R5_en", false,-1);
    tracep->declBit(c+531,"R5_clk", false,-1);
    tracep->declBus(c+238,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+514,"W0_en", false,-1);
    tracep->declBit(c+531,"W0_clk", false,-1);
    tracep->declBus(c+171,"W0_data", false,-1, 20,0);
    tracep->declBus(c+239,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+515,"W1_en", false,-1);
    tracep->declBit(c+531,"W1_clk", false,-1);
    tracep->declBus(c+171,"W1_data", false,-1, 20,0);
    tracep->declBus(c+238,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+516,"W2_en", false,-1);
    tracep->declBit(c+531,"W2_clk", false,-1);
    tracep->declBus(c+171,"W2_data", false,-1, 20,0);
    tracep->declBus(c+239,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+519,"W3_en", false,-1);
    tracep->declBit(c+531,"W3_clk", false,-1);
    tracep->declBus(c+171,"W3_data", false,-1, 20,0);
    tracep->declBus(c+260,"R0_data", false,-1, 20,0);
    tracep->declBus(c+261,"R1_data", false,-1, 20,0);
    tracep->declBus(c+262,"R2_data", false,-1, 20,0);
    tracep->declBus(c+263,"R3_data", false,-1, 20,0);
    tracep->declBus(c+446,"R4_data", false,-1, 20,0);
    tracep->declBus(c+447,"R5_data", false,-1, 20,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("arbitor ");
    tracep->declBit(c+531,"clock", false,-1);
    tracep->declBit(c+532,"reset", false,-1);
    tracep->declBit(c+264,"io_master0_req_valid", false,-1);
    tracep->declBit(c+265,"io_master0_req_bits_rw", false,-1);
    tracep->declBus(c+51,"io_master0_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+486,"io_master0_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+488,"io_master0_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+55,"io_master1_req_valid", false,-1);
    tracep->declBit(c+56,"io_master1_req_bits_rw", false,-1);
    tracep->declBus(c+57,"io_master1_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+489,"io_master1_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+491,"io_master1_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+167,"io_master2_req_valid", false,-1);
    tracep->declBit(c+168,"io_master2_req_bits_rw", false,-1);
    tracep->declBus(c+169,"io_master2_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+492,"io_master2_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+494,"io_master2_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+464,"io_AXI_O_aw_ready", false,-1);
    tracep->declBit(c+465,"io_AXI_O_w_ready", false,-1);
    tracep->declBit(c+466,"io_AXI_O_b_valid", false,-1);
    tracep->declBit(c+467,"io_AXI_O_ar_ready", false,-1);
    tracep->declBit(c+468,"io_AXI_O_r_valid", false,-1);
    tracep->declQuad(c+469,"io_AXI_O_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+521,"io_master0_resp_valid", false,-1);
    tracep->declQuad(c+533,"io_master0_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+499,"io_master1_resp_valid", false,-1);
    tracep->declQuad(c+500,"io_master1_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+508,"io_master2_resp_valid", false,-1);
    tracep->declQuad(c+509,"io_master2_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+477,"io_AXI_O_aw_valid", false,-1);
    tracep->declBus(c+478,"io_AXI_O_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+479,"io_AXI_O_w_valid", false,-1);
    tracep->declQuad(c+480,"io_AXI_O_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+482,"io_AXI_O_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+483,"io_AXI_O_ar_valid", false,-1);
    tracep->declBus(c+484,"io_AXI_O_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+485,"io_AXI_O_r_ready", false,-1);
    tracep->declBus(c+495,"master_choose", false,-1, 3,0);
    tracep->declBus(c+496,"choose_buffer", false,-1, 3,0);
    tracep->declBus(c+497,"state", false,-1, 1,0);
    tracep->declBit(c+266,"aw_comp", false,-1);
    tracep->declBit(c+267,"w_comp", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("clint ");
    tracep->declBit(c+531,"clock", false,-1);
    tracep->declBit(c+532,"reset", false,-1);
    tracep->declBit(c+268,"io_clex_valid", false,-1);
    tracep->declBus(c+14,"io_clex_ld_type", false,-1, 2,0);
    tracep->declQuad(c+269,"io_clex_raddr", false,-1, 63,0);
    tracep->declBus(c+13,"io_clex_sd_type", false,-1, 2,0);
    tracep->declQuad(c+269,"io_clex_waddr", false,-1, 63,0);
    tracep->declBus(c+488,"io_clex_wmask", false,-1, 7,0);
    tracep->declQuad(c+486,"io_clex_wdata", false,-1, 63,0);
    tracep->declBit(c+271,"io_clmem_Clrvalue_valid", false,-1);
    tracep->declQuad(c+272,"io_clmem_Clrvalue_bits", false,-1, 63,0);
    tracep->declBit(c+274,"io_timer_int", false,-1);
    tracep->declBus(c+275,"MSIP", false,-1, 31,0);
    tracep->declQuad(c+276,"MTIMECMP", false,-1, 63,0);
    tracep->declQuad(c+278,"MTIME", false,-1, 63,0);
    tracep->declQuad(c+272,"rvalue_buf", false,-1, 63,0);
    tracep->declBit(c+271,"valid_buf", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csrs ");
    tracep->declBit(c+531,"clock", false,-1);
    tracep->declBit(c+532,"reset", false,-1);
    tracep->declBus(c+280,"io_CSRDe_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+38,"io_CSRWb_rd", false,-1, 11,0);
    tracep->declBit(c+37,"io_CSRWb_csr_wen", false,-1);
    tracep->declQuad(c+35,"io_CSRWb_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+281,"io_CSRTr_rd", false,-1, 11,0);
    tracep->declBit(c+282,"io_CSRTr_csr_wen", false,-1);
    tracep->declQuad(c+283,"io_CSRTr_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+274,"io_timer_int", false,-1);
    tracep->declQuad(c+285,"io_CSRDe_csr_rdata", false,-1, 63,0);
    tracep->declQuad(c+287,"io_CSRTr_MTVEC", false,-1, 63,0);
    tracep->declQuad(c+289,"io_CSRTr_MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+291,"io_CSRTr_MEPC", false,-1, 63,0);
    tracep->declQuad(c+293,"io_CSRTr_MIE", false,-1, 63,0);
    tracep->declQuad(c+295,"io_CSRTr_MIP", false,-1, 63,0);
    tracep->declQuad(c+297,"io_CSRTr_MSTATUS", false,-1, 63,0);
    tracep->declQuad(c+287,"MTVEC", false,-1, 63,0);
    tracep->declQuad(c+289,"MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+291,"MEPC", false,-1, 63,0);
    tracep->declQuad(c+293,"MIE", false,-1, 63,0);
    tracep->declQuad(c+295,"MIP", false,-1, 63,0);
    tracep->declQuad(c+297,"MSTATUS", false,-1, 63,0);
    tracep->declQuad(c+299,"MSCRATCH", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("decode ");
    tracep->declBit(c+531,"clock", false,-1);
    tracep->declBit(c+532,"reset", false,-1);
    tracep->declBit(c+164,"io_inst_valid", false,-1);
    tracep->declQuad(c+165,"io_inst_bits_data", false,-1, 63,0);
    tracep->declBus(c+1,"io_fdio_pc", false,-1, 31,0);
    tracep->declQuad(c+301,"io_rfio_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+303,"io_rfio_reg2_rdata", false,-1, 63,0);
    tracep->declBit(c+45,"io_branch", false,-1);
    tracep->declBit(c+522,"io_stall", false,-1);
    tracep->declBit(c+305,"io_fwde_fw_sel1", false,-1);
    tracep->declBit(c+306,"io_fwde_fw_sel2", false,-1);
    tracep->declQuad(c+448,"io_fwde_fw_data1", false,-1, 63,0);
    tracep->declQuad(c+450,"io_fwde_fw_data2", false,-1, 63,0);
    tracep->declBit(c+307,"io_fwde_csr_fw_sel", false,-1);
    tracep->declQuad(c+308,"io_fwde_csr_fw_data", false,-1, 63,0);
    tracep->declQuad(c+285,"io_csrs_csr_rdata", false,-1, 63,0);
    tracep->declBus(c+310,"io_rfio_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+311,"io_rfio_reg2_raddr", false,-1, 4,0);
    tracep->declQuad(c+452,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+454,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+312,"io_deio_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+313,"io_deio_branch_type", false,-1);
    tracep->declQuad(c+314,"io_deio_branch_addr", false,-1, 63,0);
    tracep->declBus(c+316,"io_deio_alu_op", false,-1, 5,0);
    tracep->declBus(c+317,"io_deio_shamt", false,-1, 5,0);
    tracep->declBus(c+318,"io_deio_wb_type", false,-1, 1,0);
    tracep->declBus(c+319,"io_deio_sd_type", false,-1, 2,0);
    tracep->declQuad(c+523,"io_deio_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+320,"io_deio_ld_type", false,-1, 2,0);
    tracep->declQuad(c+321,"io_deio_csr_t", false,-1, 63,0);
    tracep->declBus(c+323,"io_deio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+324,"io_deio_csr_wen", false,-1);
    tracep->declBit(c+325,"io_deio_has_inst", false,-1);
    tracep->declBit(c+326,"io_jump_flag", false,-1);
    tracep->declBus(c+456,"io_jump_pc", false,-1, 31,0);
    tracep->declBit(c+42,"io_load_use", false,-1);
    tracep->declBus(c+310,"io_fwde_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+311,"io_fwde_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+280,"io_fwde_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+280,"io_csrs_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+327,"inst", false,-1, 31,0);
    tracep->declBus(c+328,"lu_rd", false,-1, 4,0);
    tracep->pushNamePrefix("cu ");
    tracep->declBus(c+327,"io_inst", false,-1, 31,0);
    tracep->declBus(c+329,"io_jump_type", false,-1, 1,0);
    tracep->declBit(c+313,"io_branch_type", false,-1);
    tracep->declBus(c+330,"io_opa_type", false,-1, 1,0);
    tracep->declBus(c+331,"io_opb_type", false,-1, 2,0);
    tracep->declBus(c+332,"io_imm_type", false,-1, 2,0);
    tracep->declBus(c+316,"io_alu_op", false,-1, 5,0);
    tracep->declBus(c+318,"io_wb_type", false,-1, 1,0);
    tracep->declBus(c+319,"io_sd_type", false,-1, 2,0);
    tracep->declBus(c+320,"io_ld_type", false,-1, 2,0);
    tracep->declBus(c+333,"io_csr_type", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("eximm ");
    tracep->declBus(c+327,"io_inst", false,-1, 31,0);
    tracep->declBus(c+332,"io_imm_type", false,-1, 2,0);
    tracep->declQuad(c+334,"io_eximm", false,-1, 63,0);
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
    tracep->declQuad(c+486,"io_deio_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+14,"io_deio_ld_type", false,-1, 2,0);
    tracep->declQuad(c+15,"io_deio_csr_t", false,-1, 63,0);
    tracep->declBus(c+17,"io_deio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+18,"io_deio_csr_wen", false,-1);
    tracep->declBit(c+19,"io_deio_has_inst", false,-1);
    tracep->declQuad(c+43,"io_emio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+6,"io_emio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+12,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+14,"io_emio_ld_type", false,-1, 2,0);
    tracep->declBus(c+336,"io_emio_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+269,"io_emio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+18,"io_emio_csr_wen", false,-1);
    tracep->declBus(c+17,"io_emio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+19,"io_emio_has_inst", false,-1);
    tracep->declBit(c+45,"io_jump_flag", false,-1);
    tracep->declBus(c+337,"io_jump_pc", false,-1, 31,0);
    tracep->declQuad(c+338,"io_raddr", false,-1, 63,0);
    tracep->declQuad(c+340,"io_waddr", false,-1, 63,0);
    tracep->declQuad(c+486,"io_wdata", false,-1, 63,0);
    tracep->declBus(c+488,"io_wmask", false,-1, 7,0);
    tracep->declBus(c+6,"io_fwex_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+342,"io_fwex_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+344,"io_fwex_reg_we", false,-1);
    tracep->declQuad(c+269,"io_fwex_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+18,"io_fwex_csr_wen", false,-1);
    tracep->declBus(c+17,"io_fwex_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+268,"io_clex_valid", false,-1);
    tracep->declBus(c+14,"io_clex_ld_type", false,-1, 2,0);
    tracep->declQuad(c+269,"io_clex_raddr", false,-1, 63,0);
    tracep->declBus(c+13,"io_clex_sd_type", false,-1, 2,0);
    tracep->declQuad(c+269,"io_clex_waddr", false,-1, 63,0);
    tracep->declBus(c+488,"io_clex_wmask", false,-1, 7,0);
    tracep->declQuad(c+486,"io_clex_wdata", false,-1, 63,0);
    tracep->pushNamePrefix("alu ");
    tracep->declQuad(c+2,"io_op_a", false,-1, 63,0);
    tracep->declQuad(c+4,"io_op_b", false,-1, 63,0);
    tracep->declBus(c+10,"io_alu_op", false,-1, 5,0);
    tracep->declBus(c+11,"io_shamt", false,-1, 5,0);
    tracep->declQuad(c+269,"io_result", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fc ");
    tracep->declBit(c+326,"io_fcde_jump_flag", false,-1);
    tracep->declBus(c+456,"io_fcde_jump_pc", false,-1, 31,0);
    tracep->declBit(c+42,"io_fcde_load_use", false,-1);
    tracep->declBit(c+45,"io_fcex_jump_flag", false,-1);
    tracep->declBus(c+337,"io_fcex_jump_pc", false,-1, 31,0);
    tracep->declBit(c+345,"io_fctr_pop_NOP", false,-1);
    tracep->declBus(c+346,"io_fctr_trap_state", false,-1, 2,0);
    tracep->declBit(c+347,"io_fctr_jump_flag", false,-1);
    tracep->declBus(c+348,"io_fctr_jump_pc", false,-1, 31,0);
    tracep->declBit(c+40,"io_fcIcache_req", false,-1);
    tracep->declBus(c+170,"io_fcIcache_state", false,-1, 2,0);
    tracep->declBus(c+541,"io_fcIcache_mask", false,-1, 7,0);
    tracep->declBit(c+164,"io_fcIcache_cpu_valid", false,-1);
    tracep->declBit(c+508,"io_fcIcache_axi_valid", false,-1);
    tracep->declBit(c+50,"io_fcDcache_req", false,-1);
    tracep->declBus(c+58,"io_fcDcache_state", false,-1, 2,0);
    tracep->declBus(c+488,"io_fcDcache_mask", false,-1, 7,0);
    tracep->declBit(c+59,"io_fcDcache_hit", false,-1);
    tracep->declBit(c+52,"io_fcDcache_cpu_valid", false,-1);
    tracep->declBit(c+499,"io_fcDcache_axi_valid", false,-1);
    tracep->declBit(c+264,"io_fcio_req", false,-1);
    tracep->declBit(c+521,"io_fcio_valid", false,-1);
    tracep->declBit(c+349,"io_fcfe_jump_flag", false,-1);
    tracep->declBus(c+525,"io_fcfe_jump_pc", false,-1, 31,0);
    tracep->declBit(c+457,"io_fcfe_flush", false,-1);
    tracep->declBit(c+526,"io_fcfe_stall", false,-1);
    tracep->declBit(c+527,"io_fcde_flush", false,-1);
    tracep->declBit(c+522,"io_fcde_stall", false,-1);
    tracep->declBit(c+522,"io_fcex_stall", false,-1);
    tracep->declBit(c+522,"io_fcmem_stall", false,-1);
    tracep->declBit(c+458,"Icache_stall", false,-1);
    tracep->declBit(c+459,"Dcache_stall", false,-1);
    tracep->declBit(c+528,"IO_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+531,"clock", false,-1);
    tracep->declBit(c+532,"reset", false,-1);
    tracep->declBit(c+349,"io_fcfe_jump_flag", false,-1);
    tracep->declBus(c+525,"io_fcfe_jump_pc", false,-1, 31,0);
    tracep->declBit(c+457,"io_fcfe_flush", false,-1);
    tracep->declBit(c+526,"io_fcfe_stall", false,-1);
    tracep->declBus(c+498,"io_fdio_pc", false,-1, 31,0);
    tracep->declBit(c+40,"io_pc_valid", false,-1);
    tracep->declBus(c+498,"io_pc_bits", false,-1, 31,0);
    tracep->declBit(c+40,"started", false,-1);
    tracep->declBus(c+350,"pc", false,-1, 31,0);
    tracep->declBus(c+351,"old_pc", false,-1, 31,0);
    tracep->declBus(c+460,"next_pc", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fw ");
    tracep->declBus(c+310,"io_fwde_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+311,"io_fwde_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+280,"io_fwde_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+6,"io_fwex_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+342,"io_fwex_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+344,"io_fwex_reg_we", false,-1);
    tracep->declQuad(c+269,"io_fwex_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+18,"io_fwex_csr_wen", false,-1);
    tracep->declBus(c+17,"io_fwex_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+22,"io_fwmem_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+529,"io_fwmem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+352,"io_fwmem_reg_we", false,-1);
    tracep->declQuad(c+26,"io_fwmem_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+28,"io_fwmem_csr_wen", false,-1);
    tracep->declBus(c+29,"io_fwmem_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+33,"io_fwwb_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+31,"io_fwwb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+49,"io_fwwb_reg_we", false,-1);
    tracep->declQuad(c+35,"io_fwwb_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+37,"io_fwwb_csr_wen", false,-1);
    tracep->declBus(c+38,"io_fwwb_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+305,"io_fwde_fw_sel1", false,-1);
    tracep->declBit(c+306,"io_fwde_fw_sel2", false,-1);
    tracep->declQuad(c+448,"io_fwde_fw_data1", false,-1, 63,0);
    tracep->declQuad(c+450,"io_fwde_fw_data2", false,-1, 63,0);
    tracep->declBit(c+307,"io_fwde_csr_fw_sel", false,-1);
    tracep->declQuad(c+308,"io_fwde_csr_fw_data", false,-1, 63,0);
    tracep->declBit(c+353,"reg1_ex_hazard", false,-1);
    tracep->declBit(c+354,"reg2_ex_hazard", false,-1);
    tracep->declBit(c+355,"reg1_mem_hazard", false,-1);
    tracep->declBit(c+356,"reg2_mem_hazard", false,-1);
    tracep->declBit(c+357,"reg1_wb_hazard", false,-1);
    tracep->declBit(c+358,"reg2_wb_hazard", false,-1);
    tracep->declBit(c+359,"csr_ex_harzard", false,-1);
    tracep->declBit(c+360,"csr_mem_harzard", false,-1);
    tracep->declBit(c+361,"csr_wb_harzard", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("interact ");
    tracep->declBus(c+461,"inst", false,-1, 31,0);
    tracep->declBit(c+531,"clk", false,-1);
    tracep->declBit(c+532,"rst", false,-1);
    tracep->declBit(c+362,"ebreak_flag", false,-1);
    tracep->declBus(c+363,"over_count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
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
    tracep->declQuad(c+53,"io_rdata_bits_data", false,-1, 63,0);
    tracep->declBit(c+521,"io_rdata_io_valid", false,-1);
    tracep->declQuad(c+533,"io_rdata_io_bits_data", false,-1, 63,0);
    tracep->declBit(c+271,"io_clmem_Clrvalue_valid", false,-1);
    tracep->declQuad(c+272,"io_clmem_Clrvalue_bits", false,-1, 63,0);
    tracep->declQuad(c+529,"io_mwio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+22,"io_mwio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+23,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declQuad(c+26,"io_mwio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+28,"io_mwio_csr_wen", false,-1);
    tracep->declBus(c+29,"io_mwio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+30,"io_mwio_has_inst", false,-1);
    tracep->declBus(c+22,"io_fwmem_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+529,"io_fwmem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+352,"io_fwmem_reg_we", false,-1);
    tracep->declQuad(c+26,"io_fwmem_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+28,"io_fwmem_csr_wen", false,-1);
    tracep->declBus(c+29,"io_fwmem_csr_waddr", false,-1, 11,0);
    tracep->declQuad(c+462,"rvalue", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+531,"clock", false,-1);
    tracep->declBus(c+310,"io_RfDe_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+311,"io_RfDe_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+33,"io_RfWb_rd", false,-1, 4,0);
    tracep->declBit(c+49,"io_RfWb_reg_wen", false,-1);
    tracep->declQuad(c+31,"io_RfWb_reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+301,"io_RfDe_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+303,"io_RfDe_reg2_rdata", false,-1, 63,0);
    tracep->pushNamePrefix("regs_ext ");
    tracep->declBus(c+33,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+538,"R0_en", false,-1);
    tracep->declBit(c+531,"R0_clk", false,-1);
    tracep->declBus(c+310,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+538,"R1_en", false,-1);
    tracep->declBit(c+531,"R1_clk", false,-1);
    tracep->declBus(c+311,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+538,"R2_en", false,-1);
    tracep->declBit(c+531,"R2_clk", false,-1);
    tracep->declBus(c+542,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+538,"W0_en", false,-1);
    tracep->declBit(c+531,"W0_clk", false,-1);
    tracep->declQuad(c+539,"W0_data", false,-1, 63,0);
    tracep->declBus(c+33,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+538,"W1_en", false,-1);
    tracep->declBit(c+531,"W1_clk", false,-1);
    tracep->declQuad(c+364,"W1_data", false,-1, 63,0);
    tracep->declQuad(c+366,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+368,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+370,"R2_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+372+i*2,"Memory", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("trap ");
    tracep->declBit(c+531,"clock", false,-1);
    tracep->declBit(c+532,"reset", false,-1);
    tracep->declBit(c+19,"io_ex_hasinst", false,-1);
    tracep->declBit(c+30,"io_mem_hasinst", false,-1);
    tracep->declBit(c+39,"io_wb_hasinst", false,-1);
    tracep->declQuad(c+287,"io_csrtr_MTVEC", false,-1, 63,0);
    tracep->declQuad(c+289,"io_csrtr_MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+291,"io_csrtr_MEPC", false,-1, 63,0);
    tracep->declQuad(c+293,"io_csrtr_MIE", false,-1, 63,0);
    tracep->declQuad(c+295,"io_csrtr_MIP", false,-1, 63,0);
    tracep->declQuad(c+297,"io_csrtr_MSTATUS", false,-1, 63,0);
    tracep->declBus(c+41,"io_inst", false,-1, 31,0);
    tracep->declBus(c+498,"io_pc", false,-1, 31,0);
    tracep->declBus(c+281,"io_csrtr_rd", false,-1, 11,0);
    tracep->declBit(c+282,"io_csrtr_csr_wen", false,-1);
    tracep->declQuad(c+283,"io_csrtr_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+345,"io_fctr_pop_NOP", false,-1);
    tracep->declBus(c+346,"io_fctr_trap_state", false,-1, 2,0);
    tracep->declBit(c+347,"io_fctr_jump_flag", false,-1);
    tracep->declBus(c+348,"io_fctr_jump_pc", false,-1, 31,0);
    tracep->declQuad(c+436,"cause", false,-1, 63,0);
    tracep->declBus(c+438,"pc", false,-1, 31,0);
    tracep->declBus(c+346,"state", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb ");
    tracep->declQuad(c+31,"io_mwio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+33,"io_mwio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+34,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declQuad(c+35,"io_mwio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+37,"io_mwio_csr_wen", false,-1);
    tracep->declBus(c+38,"io_mwio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+39,"io_mwio_has_inst", false,-1);
    tracep->declBus(c+33,"io_rfio_rd", false,-1, 4,0);
    tracep->declBit(c+49,"io_rfio_reg_wen", false,-1);
    tracep->declQuad(c+31,"io_rfio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+33,"io_fwwb_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+31,"io_fwwb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+49,"io_fwwb_reg_we", false,-1);
    tracep->declQuad(c+35,"io_fwwb_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+37,"io_fwwb_csr_wen", false,-1);
    tracep->declBus(c+38,"io_fwwb_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+38,"io_csrs_rd", false,-1, 11,0);
    tracep->declBit(c+37,"io_csrs_csr_wen", false,-1);
    tracep->declQuad(c+35,"io_csrs_csr_wdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+531,"ACLK", false,-1);
    tracep->declBit(c+535,"ARESETn", false,-1);
    tracep->declBus(c+478,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+543,"S_AXI_AWPROT", false,-1, 2,0);
    tracep->declBit(c+477,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+464,"S_AXI_AWREADY", false,-1);
    tracep->declQuad(c+480,"S_AXI_WDATA", false,-1, 63,0);
    tracep->declBus(c+482,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+479,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+465,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+471,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+466,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+538,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+484,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+543,"S_AXI_ARPROT", false,-1, 2,0);
    tracep->declBit(c+483,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+467,"S_AXI_ARREADY", false,-1);
    tracep->declQuad(c+469,"S_AXI_RDATA", false,-1, 63,0);
    tracep->declBus(c+472,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+468,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+485,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+464,"awready", false,-1);
    tracep->declBit(c+465,"wready", false,-1);
    tracep->declBus(c+471,"bresp", false,-1, 1,0);
    tracep->declBit(c+466,"bvalid", false,-1);
    tracep->declBit(c+467,"arready", false,-1);
    tracep->declQuad(c+469,"rdata", false,-1, 63,0);
    tracep->declBus(c+472,"rresp", false,-1, 1,0);
    tracep->declBit(c+468,"rvalid", false,-1);
    tracep->declBus(c+473,"awaddr_buffer", false,-1, 31,0);
    tracep->declBus(c+536,"awaddr", false,-1, 31,0);
    tracep->declBit(c+474,"need_resp", false,-1);
    tracep->declBus(c+475,"araddr", false,-1, 31,0);
    tracep->declBit(c+476,"need_read", false,-1);
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
    bufp->fullBit(oldp+40,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started));
    bufp->fullIData(oldp+41,((IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)),32);
    bufp->fullBit(oldp+42,(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16));
    bufp->fullQData(oldp+43,(((IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen)
                               ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                               : vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)),64);
    bufp->fullBit(oldp+45,(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag));
    bufp->fullBit(oldp+46,(vlSelf->Soc__DOT__core__DOT____Vcellinp__DI__mem_access));
    bufp->fullQData(oldp+47,(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T),64);
    bufp->fullBit(oldp+49,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))));
    bufp->fullBit(oldp+50,(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid));
    bufp->fullIData(oldp+51,((IData)(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T)),32);
    bufp->fullBit(oldp+52,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_valid));
    bufp->fullQData(oldp+53,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray)
                               ? ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inst_type)
                                   ? (QData)((IData)(
                                                     ((0U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                        ? (IData)(vlSelf->__VdfgTmp_h02e5796b__0)
                                                        : 0U)
                                                       : 
                                                      ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                        ? (IData)(
                                                                  (vlSelf->__VdfgTmp_h02e5796b__0 
                                                                   >> 0x20U))
                                                        : 0U))))
                                   : ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                       ? vlSelf->__VdfgTmp_h02e5796b__0
                                       : 0ULL)) : vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_bits_data)),64);
    bufp->fullBit(oldp+55,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_valid));
    bufp->fullBit(oldp+56,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw));
    bufp->fullIData(oldp+57,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr),32);
    bufp->fullCData(oldp+58,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state),3);
    bufp->fullBit(oldp+59,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3));
    bufp->fullIData(oldp+60,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__tag),21);
    bufp->fullCData(oldp+61,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index),8);
    bufp->fullCData(oldp+62,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset),3);
    bufp->fullWData(oldp+63,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid),512);
    bufp->fullWData(oldp+79,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty),512);
    bufp->fullWData(oldp+95,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace),512);
    bufp->fullBit(oldp+111,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0));
    VL_SHIFTR_WWI(512,512,10, __Vtemp_h773c399d__0, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid, 
                  (0x3ffU & ((IData)(1U) + (0x1feU 
                                            & ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                        >> 3U)) 
                                               << 1U)))));
    bufp->fullBit(oldp+112,(((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
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
    bufp->fullBit(oldp+113,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray));
    bufp->fullBit(oldp+114,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim));
    bufp->fullIData(oldp+115,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr),32);
    bufp->fullQData(oldp+116,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data),64);
    bufp->fullCData(oldp+118,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask),8);
    bufp->fullBit(oldp+119,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inst_type));
    bufp->fullBit(oldp+120,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum));
    bufp->fullQData(oldp+121,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_bits_data),64);
    bufp->fullSData(oldp+123,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h07501b90__0)
                                ? ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h02ae5b32__0)
                                    ? ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)
                                        ? (0x1feU & 
                                           ((IData)(
                                                    (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                     >> 3U)) 
                                            << 1U))
                                        : 0U) : (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3) 
                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0))
                                                  ? 
                                                 (0x1feU 
                                                  & ((IData)(
                                                             (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                              >> 3U)) 
                                                     << 1U))
                                                  : 0U))
                                : 0U)),9);
    bufp->fullBit(oldp+124,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h07501b90__0) 
                             & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h02ae5b32__0) 
                                 | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0)) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)))));
    bufp->fullSData(oldp+125,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__TagArray_ext__R0_addr),9);
    bufp->fullBit(oldp+126,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_9));
    bufp->fullSData(oldp+127,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__TagArray_ext__R1_addr),9);
    bufp->fullBit(oldp+128,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_11));
    bufp->fullBit(oldp+129,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_17));
    bufp->fullBit(oldp+130,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_18));
    bufp->fullSData(oldp+131,((0x1ffU & ((IData)(1U) 
                                         + (0x1feU 
                                            & ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                        >> 3U)) 
                                               << 1U))))),9);
    bufp->fullBit(oldp+132,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h300e9d2f__0) 
                             & (0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset)))));
    bufp->fullBit(oldp+133,(((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h300e9d2f__0))));
    bufp->fullBit(oldp+134,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inst_type)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h46ce278a__0))));
    bufp->fullSData(oldp+135,((0x1ffU & ((IData)(1U) 
                                         + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                            << 1U)))),9);
    bufp->fullSData(oldp+136,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                               << 1U)),9);
    bufp->fullBit(oldp+137,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum))));
    bufp->fullQData(oldp+138,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data),64);
    bufp->fullBit(oldp+140,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0))));
    bufp->fullQData(oldp+141,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                ? vlSelf->__VdfgTmp_h02e5796b__0
                                : 0ULL)),64);
    bufp->fullQData(oldp+143,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_1)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_2]
                                : 0ULL)),64);
    bufp->fullQData(oldp+145,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_3)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_4]
                                : 0ULL)),64);
    bufp->fullQData(oldp+147,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_5)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_6]
                                : 0ULL)),64);
    bufp->fullQData(oldp+149,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_7)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_8]
                                : 0ULL)),64);
    bufp->fullQData(oldp+151,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_9)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_10]
                                : 0ULL)),64);
    bufp->fullQData(oldp+153,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_11)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_12]
                                : 0ULL)),64);
    bufp->fullQData(oldp+155,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_13)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_14]
                                : 0ULL)),64);
    bufp->fullSData(oldp+157,((0x1feU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                  >> 3U)) 
                                         << 1U))),9);
    bufp->fullIData(oldp+158,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_9)
                                ? vlSelf->__VdfgTmp_h2fe899d6__0
                                : 0U)),21);
    bufp->fullIData(oldp+159,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_11)
                                ? vlSelf->__VdfgTmp_h5f294843__0
                                : 0U)),21);
    bufp->fullIData(oldp+160,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_17)
                                ? vlSelf->__VdfgTmp_h2fe899d6__0
                                : 0U)),21);
    bufp->fullIData(oldp+161,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_18)
                                ? vlSelf->__VdfgTmp_h5f294843__0
                                : 0U)),21);
    bufp->fullIData(oldp+162,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                              [(0x1feU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                   >> 3U)) 
                                          << 1U))]),21);
    bufp->fullIData(oldp+163,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                              [(0x1ffU & ((IData)(1U) 
                                          + (0x1feU 
                                             & ((IData)(
                                                        (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                         >> 3U)) 
                                                << 1U))))]),21);
    bufp->fullBit(oldp+164,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid));
    bufp->fullQData(oldp+165,(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data),64);
    bufp->fullBit(oldp+167,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_valid));
    bufp->fullBit(oldp+168,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw));
    bufp->fullIData(oldp+169,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr),32);
    bufp->fullCData(oldp+170,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state),3);
    bufp->fullIData(oldp+171,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__tag),21);
    bufp->fullCData(oldp+172,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index),8);
    bufp->fullCData(oldp+173,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset),3);
    bufp->fullWData(oldp+174,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid),512);
    bufp->fullWData(oldp+190,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty),512);
    bufp->fullWData(oldp+206,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace),512);
    bufp->fullBit(oldp+222,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray));
    bufp->fullBit(oldp+223,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim));
    bufp->fullIData(oldp+224,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr),32);
    bufp->fullQData(oldp+225,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data),64);
    bufp->fullCData(oldp+227,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask),8);
    bufp->fullBit(oldp+228,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inst_type));
    bufp->fullBit(oldp+229,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum));
    bufp->fullQData(oldp+230,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data),64);
    bufp->fullSData(oldp+232,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__TagArray_ext__R0_addr),9);
    bufp->fullBit(oldp+233,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_9));
    bufp->fullSData(oldp+234,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__TagArray_ext__R1_addr),9);
    bufp->fullBit(oldp+235,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_11));
    bufp->fullBit(oldp+236,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_17));
    bufp->fullBit(oldp+237,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_18));
    bufp->fullSData(oldp+238,((0x1ffU & ((IData)(1U) 
                                         + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                            << 1U)))),9);
    bufp->fullSData(oldp+239,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                               << 1U)),9);
    bufp->fullBit(oldp+240,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum))));
    bufp->fullQData(oldp+241,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data),64);
    bufp->fullBit(oldp+243,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0))));
    bufp->fullQData(oldp+244,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                ? vlSelf->__VdfgTmp_hc520a55b__0
                                : 0ULL)),64);
    bufp->fullQData(oldp+246,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_1)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_2]
                                : 0ULL)),64);
    bufp->fullQData(oldp+248,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_3)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_4]
                                : 0ULL)),64);
    bufp->fullQData(oldp+250,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_5)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_6]
                                : 0ULL)),64);
    bufp->fullQData(oldp+252,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_7)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_8]
                                : 0ULL)),64);
    bufp->fullQData(oldp+254,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_9)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_10]
                                : 0ULL)),64);
    bufp->fullQData(oldp+256,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_11)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_12]
                                : 0ULL)),64);
    bufp->fullQData(oldp+258,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_13)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_14]
                                : 0ULL)),64);
    bufp->fullIData(oldp+260,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_9)
                                ? vlSelf->__VdfgTmp_heb865217__0
                                : 0U)),21);
    bufp->fullIData(oldp+261,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_11)
                                ? vlSelf->__VdfgTmp_hb3a84c04__0
                                : 0U)),21);
    bufp->fullIData(oldp+262,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_17)
                                ? vlSelf->__VdfgTmp_heb865217__0
                                : 0U)),21);
    bufp->fullIData(oldp+263,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_18)
                                ? vlSelf->__VdfgTmp_hb3a84c04__0
                                : 0U)),21);
    bufp->fullBit(oldp+264,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_req_valid_T_5));
    bufp->fullBit(oldp+265,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type))));
    bufp->fullBit(oldp+266,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp));
    bufp->fullBit(oldp+267,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp));
    bufp->fullBit(oldp+268,(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6));
    bufp->fullQData(oldp+269,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result),64);
    bufp->fullBit(oldp+271,(vlSelf->Soc__DOT__core__DOT__clint__DOT__valid_buf));
    bufp->fullQData(oldp+272,(vlSelf->Soc__DOT__core__DOT__clint__DOT__rvalue_buf),64);
    bufp->fullBit(oldp+274,((vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME 
                             >= vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP)));
    bufp->fullIData(oldp+275,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MSIP),32);
    bufp->fullQData(oldp+276,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP),64);
    bufp->fullQData(oldp+278,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME),64);
    bufp->fullSData(oldp+280,(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr),12);
    __Vtemp_h5ee83ed9__0[0U] = 0x41000000U;
    __Vtemp_h5ee83ed9__0[1U] = 0x3003423U;
    __Vtemp_h5ee83ed9__0[2U] = (0x30000000U | (((0x8000000000000007ULL 
                                                 == vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE)
                                                 ? 0x344U
                                                 : 0U) 
                                               << 8U));
    bufp->fullSData(oldp+281,(((0x5fU >= (0x7fU & ((IData)(0xcU) 
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
    bufp->fullBit(oldp+282,(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen));
    bufp->fullQData(oldp+283,(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata),64);
    bufp->fullQData(oldp+285,(((0x340U == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
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
    bufp->fullQData(oldp+287,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC),64);
    bufp->fullQData(oldp+289,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE),64);
    bufp->fullQData(oldp+291,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC),64);
    bufp->fullQData(oldp+293,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE),64);
    bufp->fullQData(oldp+295,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP),64);
    bufp->fullQData(oldp+297,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS),64);
    bufp->fullQData(oldp+299,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH),64);
    bufp->fullQData(oldp+301,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0)
                                ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]
                                : 0ULL)),64);
    bufp->fullQData(oldp+303,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0)
                                ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]
                                : 0ULL)),64);
    bufp->fullBit(oldp+305,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)))));
    bufp->fullBit(oldp+306,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))));
    bufp->fullBit(oldp+307,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)))));
    bufp->fullQData(oldp+308,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard)
                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard)
                                    ? vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)
                                        ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                                        : 0ULL)))),64);
    bufp->fullCData(oldp+310,(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr),5);
    bufp->fullCData(oldp+311,(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr),5);
    bufp->fullCData(oldp+312,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_reg_waddr),5);
    bufp->fullBit(oldp+313,(((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                             & ((0x17U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                & ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                   & ((0x6fU != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                      & ((0x67U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                         & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5))))))));
    bufp->fullQData(oldp+314,(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__fdreg_pc)) 
                               + (((- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))) 
                                   << 0xcU) | (QData)((IData)(
                                                              (((IData)(vlSelf->__VdfgTmp_h315738f9__0) 
                                                                << 0xbU) 
                                                               | (((IData)(vlSelf->__VdfgTmp_h722d7b58__0) 
                                                                   << 5U) 
                                                                  | ((IData)(vlSelf->__VdfgTmp_h6dbd61c0__0) 
                                                                     << 1U)))))))),64);
    bufp->fullCData(oldp+316,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op),6);
    bufp->fullCData(oldp+317,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
                                ? (0x3fU & (IData)(
                                                   (vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                                    >> 0x14U)))
                                : 0U)),6);
    bufp->fullCData(oldp+318,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
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
    bufp->fullCData(oldp+319,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0)
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
    bufp->fullCData(oldp+320,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type),3);
    bufp->fullQData(oldp+321,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T),64);
    bufp->fullSData(oldp+323,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen)
                                ? (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr)
                                : 0U)),12);
    bufp->fullBit(oldp+324,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen));
    bufp->fullBit(oldp+325,((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)));
    bufp->fullBit(oldp+326,(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag));
    bufp->fullIData(oldp+327,(vlSelf->Soc__DOT__core__DOT__decode__DOT__inst),32);
    bufp->fullCData(oldp+328,(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd),5);
    bufp->fullCData(oldp+329,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type),2);
    bufp->fullCData(oldp+330,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type),2);
    bufp->fullCData(oldp+331,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type),3);
    bufp->fullCData(oldp+332,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
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
    bufp->fullCData(oldp+333,(((((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0) 
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
    bufp->fullQData(oldp+334,(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm),64);
    bufp->fullCData(oldp+336,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                ? ((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                    ? 0U : (7U & (IData)(vlSelf->__VdfgTmp_h6a80e86b__0)))
                                : 0U)),3);
    bufp->fullIData(oldp+337,((IData)(vlSelf->Soc__DOT__core__DOT__dereg_branch_addr)),32);
    bufp->fullQData(oldp+338,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                : 0ULL)),64);
    bufp->fullQData(oldp+340,((((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6)) 
                                & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))
                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                : 0ULL)),64);
    bufp->fullQData(oldp+342,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata),64);
    bufp->fullBit(oldp+344,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we));
    bufp->fullBit(oldp+345,(((0U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                             & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2) 
                                | ((0x30200073U == (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7))))));
    bufp->fullCData(oldp+346,(vlSelf->Soc__DOT__core__DOT__trap__DOT__state),3);
    bufp->fullBit(oldp+347,(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3));
    bufp->fullIData(oldp+348,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC)
                                : ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                    ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC)
                                    : 0U))),32);
    bufp->fullBit(oldp+349,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)))));
    bufp->fullIData(oldp+350,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),32);
    bufp->fullIData(oldp+351,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc),32);
    bufp->fullBit(oldp+352,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))));
    bufp->fullBit(oldp+353,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard));
    bufp->fullBit(oldp+354,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard));
    bufp->fullBit(oldp+355,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard));
    bufp->fullBit(oldp+356,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard));
    bufp->fullBit(oldp+357,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard));
    bufp->fullBit(oldp+358,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard));
    bufp->fullBit(oldp+359,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard));
    bufp->fullBit(oldp+360,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard));
    bufp->fullBit(oldp+361,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard));
    bufp->fullBit(oldp+362,(vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag));
    bufp->fullCData(oldp+363,(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count),3);
    bufp->fullQData(oldp+364,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                                & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr)))
                                ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr])),64);
    bufp->fullQData(oldp+366,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr]),64);
    bufp->fullQData(oldp+368,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]),64);
    bufp->fullQData(oldp+370,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]),64);
    bufp->fullQData(oldp+372,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+374,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+376,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+378,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+380,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+382,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+384,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+386,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+388,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+390,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+392,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+394,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+396,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+398,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+400,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+402,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+404,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+406,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+408,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+410,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+412,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+414,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+416,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+418,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+420,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+422,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+424,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+426,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+428,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+430,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+432,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+434,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
    bufp->fullQData(oldp+436,(vlSelf->Soc__DOT__core__DOT__trap__DOT__cause),64);
    bufp->fullIData(oldp+438,(vlSelf->Soc__DOT__core__DOT__trap__DOT__pc),32);
    bufp->fullBit(oldp+439,(((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid))));
    VL_SHIFTR_WWI(512,512,10, __Vtemp_hc4bbf11d__0, vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid, 
                  (0x3ffU & ((IData)(1U) + (0x1feU 
                                            & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                               >> 2U)))));
    bufp->fullBit(oldp+440,(((vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                              [(0x1ffU & ((IData)(1U) 
                                          + (0x1feU 
                                             & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                >> 2U))))] 
                              == (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                  >> 0xbU)) & __Vtemp_hc4bbf11d__0[0U])));
    bufp->fullSData(oldp+441,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h07501b90__0)
                                ? (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3) 
                                    & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0))
                                    ? (0x1feU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                 >> 2U))
                                    : 0U) : 0U)),9);
    bufp->fullBit(oldp+442,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h07501b90__0) 
                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3)))));
    bufp->fullBit(oldp+443,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h300e9d2f__0) 
                             & (0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset)))));
    bufp->fullBit(oldp+444,(((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h300e9d2f__0))));
    bufp->fullBit(oldp+445,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inst_type)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h46ce278a__0))));
    bufp->fullIData(oldp+446,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                              [(0x1feU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                          >> 2U))]),21);
    bufp->fullIData(oldp+447,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                              [(0x1ffU & ((IData)(1U) 
                                          + (0x1feU 
                                             & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                >> 2U))))]),21);
    bufp->fullQData(oldp+448,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard)
                                ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard)
                                    ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)
                                        ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                        : 0ULL)))),64);
    bufp->fullQData(oldp+450,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                                ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                                    ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                                        ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                        : 0ULL)))),64);
    bufp->fullQData(oldp+452,((((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
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
    bufp->fullQData(oldp+454,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T
                                : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                    ? 4ULL : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                               ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T
                                               : ((1U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                                   ? vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm
                                                   : 0ULL))))),64);
    bufp->fullIData(oldp+456,(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                ? (vlSelf->Soc__DOT__core__DOT__fdreg_pc 
                                   + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm))
                                : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                    ? (0xfffffffeU 
                                       & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4) 
                                          + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm)))
                                    : 0x80000000U))),32);
    bufp->fullBit(oldp+457,(((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h836ed1e8__0) 
                             & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
                                & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                                   | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_21_0)) 
                                      & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                                         | ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                                            | (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag)))))))));
    bufp->fullBit(oldp+458,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)) 
                             & ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_19)) 
                                   & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                      | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)) 
                                         & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h07501b90__0))))))));
    bufp->fullBit(oldp+459,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_valid)) 
                             & ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_19)) 
                                   & ((~ ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                          & (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid))) 
                                      & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                         | ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h07501b90__0) 
                                            & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h02ae5b32__0) 
                                               | (~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)))))))))));
    bufp->fullIData(oldp+460,(((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2)
                                ? ((IData)(4U) + vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc)
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                                    ? ((IData)(4U) 
                                       + vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)
                                    : vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc))),32);
    bufp->fullIData(oldp+461,((((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid))
                                ? (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)
                                : 0U)),32);
    bufp->fullQData(oldp+462,((((QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
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
    bufp->fullBit(oldp+464,(vlSelf->Soc__DOT__sram__DOT__awready));
    bufp->fullBit(oldp+465,(vlSelf->Soc__DOT__sram__DOT__wready));
    bufp->fullBit(oldp+466,(vlSelf->Soc__DOT__sram__DOT__bvalid));
    bufp->fullBit(oldp+467,(vlSelf->Soc__DOT__sram__DOT__arready));
    bufp->fullBit(oldp+468,(vlSelf->Soc__DOT__sram__DOT__rvalid));
    bufp->fullQData(oldp+469,(vlSelf->Soc__DOT__sram__DOT__rdata),64);
    bufp->fullCData(oldp+471,(vlSelf->Soc__DOT__sram__DOT__bresp),2);
    bufp->fullCData(oldp+472,(vlSelf->Soc__DOT__sram__DOT__rresp),2);
    bufp->fullIData(oldp+473,(vlSelf->Soc__DOT__sram__DOT__awaddr_buffer),32);
    bufp->fullBit(oldp+474,(vlSelf->Soc__DOT__sram__DOT__need_resp));
    bufp->fullIData(oldp+475,(vlSelf->Soc__DOT__sram__DOT__araddr),32);
    bufp->fullBit(oldp+476,(vlSelf->Soc__DOT__sram__DOT__need_read));
    bufp->fullBit(oldp+477,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN));
    bufp->fullIData(oldp+478,(vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr),32);
    bufp->fullBit(oldp+479,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1));
    bufp->fullQData(oldp+480,(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0)
                                ? 0ULL : ((1U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                           ? vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata
                                           : ((2U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                               ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_data
                                               : ((4U 
                                                   & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                                   ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_data
                                                   : 0ULL))))),64);
    bufp->fullCData(oldp+482,(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0)
                                ? 0U : ((1U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                         ? (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask)
                                         : ((2U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                             ? (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask)
                                             : ((4U 
                                                 & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                                 ? (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask)
                                                 : 0U))))),8);
    bufp->fullBit(oldp+483,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4));
    bufp->fullIData(oldp+484,(((1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                      | ((~ ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                >> 3U))) 
                                         | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)))))
                                ? 0U : vlSelf->Soc__DOT__core__DOT__arbitor__DOT___addr_T_6)),32);
    bufp->fullBit(oldp+485,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_5));
    bufp->fullQData(oldp+486,(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata),64);
    bufp->fullCData(oldp+488,(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask),8);
    bufp->fullQData(oldp+489,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_data),64);
    bufp->fullCData(oldp+491,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask),8);
    bufp->fullQData(oldp+492,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_data),64);
    bufp->fullCData(oldp+494,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask),8);
    bufp->fullCData(oldp+495,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose),4);
    bufp->fullCData(oldp+496,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer),4);
    bufp->fullCData(oldp+497,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state),2);
    bufp->fullIData(oldp+498,(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc),32);
    bufp->fullBit(oldp+499,(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid));
    bufp->fullQData(oldp+500,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data),64);
    bufp->fullBit(oldp+502,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_14));
    bufp->fullBit(oldp+503,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16));
    bufp->fullBit(oldp+504,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20));
    bufp->fullQData(oldp+505,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data),64);
    bufp->fullBit(oldp+507,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_26));
    bufp->fullBit(oldp+508,(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid));
    bufp->fullQData(oldp+509,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data),64);
    bufp->fullBit(oldp+511,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3));
    bufp->fullBit(oldp+512,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0));
    bufp->fullSData(oldp+513,((0x1ffU & ((IData)(1U) 
                                         + (0x1feU 
                                            & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                               >> 2U))))),9);
    bufp->fullBit(oldp+514,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_14));
    bufp->fullBit(oldp+515,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16));
    bufp->fullBit(oldp+516,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20));
    bufp->fullQData(oldp+517,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data),64);
    bufp->fullBit(oldp+519,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_26));
    bufp->fullSData(oldp+520,((0x1feU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                         >> 2U))),9);
    bufp->fullBit(oldp+521,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_valid));
    bufp->fullBit(oldp+522,(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_stall));
    bufp->fullQData(oldp+523,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T),64);
    bufp->fullIData(oldp+525,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc),32);
    bufp->fullBit(oldp+526,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_stall));
    bufp->fullBit(oldp+527,(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush));
    bufp->fullBit(oldp+528,(vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall));
    bufp->fullQData(oldp+529,(vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata),64);
    bufp->fullBit(oldp+531,(vlSelf->clock));
    bufp->fullBit(oldp+532,(vlSelf->reset));
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
    bufp->fullQData(oldp+533,((((QData)((IData)(__Vtemp_h554321c1__0[
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
    bufp->fullBit(oldp+535,(vlSelf->Soc__DOT____Vcellinp__sram__ARESETn));
    bufp->fullIData(oldp+536,((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1) 
                                & ((IData)(vlSelf->Soc__DOT__sram__DOT__wready) 
                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN) 
                                      & (IData)(vlSelf->Soc__DOT__sram__DOT__awready))))
                                ? vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr
                                : vlSelf->Soc__DOT__sram__DOT__awaddr_buffer)),32);
    bufp->fullBit(oldp+537,(0U));
    bufp->fullBit(oldp+538,(1U));
    bufp->fullQData(oldp+539,(0ULL),64);
    bufp->fullCData(oldp+541,(0U),8);
    bufp->fullCData(oldp+542,(0U),5);
    bufp->fullCData(oldp+543,(0U),3);
}
