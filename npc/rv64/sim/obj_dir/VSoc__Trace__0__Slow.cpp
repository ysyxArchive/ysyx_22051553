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
    tracep->declBit(c+524,"clock", false,-1);
    tracep->declBit(c+525,"reset", false,-1);
    tracep->pushNamePrefix("Soc ");
    tracep->declBit(c+524,"clock", false,-1);
    tracep->declBit(c+525,"reset", false,-1);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+524,"clock", false,-1);
    tracep->declBit(c+525,"reset", false,-1);
    tracep->declBit(c+458,"io_AXI_Interface_aw_ready", false,-1);
    tracep->declBit(c+459,"io_AXI_Interface_w_ready", false,-1);
    tracep->declBit(c+460,"io_AXI_Interface_b_valid", false,-1);
    tracep->declBit(c+461,"io_AXI_Interface_ar_ready", false,-1);
    tracep->declBit(c+462,"io_AXI_Interface_r_valid", false,-1);
    tracep->declQuad(c+463,"io_AXI_Interface_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+471,"io_AXI_Interface_aw_valid", false,-1);
    tracep->declBus(c+472,"io_AXI_Interface_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+473,"io_AXI_Interface_w_valid", false,-1);
    tracep->declQuad(c+474,"io_AXI_Interface_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+476,"io_AXI_Interface_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+477,"io_AXI_Interface_ar_valid", false,-1);
    tracep->declBus(c+478,"io_AXI_Interface_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+479,"io_AXI_Interface_r_ready", false,-1);
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
    tracep->declQuad(c+480,"dereg_reg2_rdata", false,-1, 63,0);
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
    tracep->declBit(c+524,"clk", false,-1);
    tracep->declBit(c+525,"rst", false,-1);
    tracep->declBus(c+491,"pc", false,-1, 31,0);
    tracep->declBit(c+40,"pc_req", false,-1);
    tracep->declBus(c+41,"inst", false,-1, 31,0);
    tracep->declBit(c+433,"inst_valid", false,-1);
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
    tracep->declBit(c+524,"clock", false,-1);
    tracep->declBit(c+525,"reset", false,-1);
    tracep->declBit(c+530,"io_cpu_req_valid", false,-1);
    tracep->declBit(c+530,"io_cpu_req_bits_inst_type", false,-1);
    tracep->declBus(c+50,"io_cpu_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+480,"io_cpu_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+482,"io_cpu_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+492,"io_axi_resp_valid", false,-1);
    tracep->declQuad(c+493,"io_axi_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+51,"io_cpu_resp_valid", false,-1);
    tracep->declQuad(c+52,"io_cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+54,"io_axi_req_valid", false,-1);
    tracep->declBit(c+55,"io_axi_req_bits_rw", false,-1);
    tracep->declBus(c+56,"io_axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+483,"io_axi_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+485,"io_axi_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+530,"io_fccache_req", false,-1);
    tracep->declBus(c+57,"io_fccache_state", false,-1, 2,0);
    tracep->declBus(c+482,"io_fccache_mask", false,-1, 7,0);
    tracep->declBit(c+58,"io_fccache_hit", false,-1);
    tracep->declBit(c+51,"io_fccache_cpu_valid", false,-1);
    tracep->declBit(c+492,"io_fccache_axi_valid", false,-1);
    tracep->declBus(c+57,"state", false,-1, 2,0);
    tracep->declBus(c+59,"tag", false,-1, 20,0);
    tracep->declBus(c+60,"index", false,-1, 7,0);
    tracep->declBus(c+61,"offset", false,-1, 2,0);
    tracep->declArray(c+62,"valid", false,-1, 511,0);
    tracep->declArray(c+78,"dirty", false,-1, 511,0);
    tracep->declArray(c+94,"replace", false,-1, 511,0);
    tracep->declBit(c+110,"hit0", false,-1);
    tracep->declBit(c+111,"hit1", false,-1);
    tracep->declBit(c+112,"inDataOneArray", false,-1);
    tracep->declBit(c+113,"victim", false,-1);
    tracep->declBus(c+114,"addr", false,-1, 31,0);
    tracep->declQuad(c+115,"data", false,-1, 63,0);
    tracep->declBus(c+117,"mask", false,-1, 7,0);
    tracep->declBit(c+118,"inst_type", false,-1);
    tracep->declBit(c+119,"whitNum", false,-1);
    tracep->declBit(c+51,"cpu_resp_valid", false,-1);
    tracep->declQuad(c+120,"cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+54,"axi_req_valid", false,-1);
    tracep->declBit(c+55,"axi_req_bits_rw", false,-1);
    tracep->declBus(c+56,"axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+483,"axi_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+485,"axi_req_bits_mask", false,-1, 7,0);
    tracep->pushNamePrefix("DataArray_ext ");
    tracep->declBus(c+531,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+530,"R0_en", false,-1);
    tracep->declBit(c+524,"R0_clk", false,-1);
    tracep->declBus(c+122,"R1_addr", false,-1, 8,0);
    tracep->declBit(c+123,"R1_en", false,-1);
    tracep->declBit(c+524,"R1_clk", false,-1);
    tracep->declBus(c+124,"R2_addr", false,-1, 8,0);
    tracep->declBit(c+125,"R2_en", false,-1);
    tracep->declBit(c+524,"R2_clk", false,-1);
    tracep->declBus(c+122,"R3_addr", false,-1, 8,0);
    tracep->declBit(c+126,"R3_en", false,-1);
    tracep->declBit(c+524,"R3_clk", false,-1);
    tracep->declBus(c+124,"R4_addr", false,-1, 8,0);
    tracep->declBit(c+127,"R4_en", false,-1);
    tracep->declBit(c+524,"R4_clk", false,-1);
    tracep->declBus(c+128,"R5_addr", false,-1, 8,0);
    tracep->declBit(c+530,"R5_en", false,-1);
    tracep->declBit(c+524,"R5_clk", false,-1);
    tracep->declBus(c+128,"R6_addr", false,-1, 8,0);
    tracep->declBit(c+530,"R6_en", false,-1);
    tracep->declBit(c+524,"R6_clk", false,-1);
    tracep->declBus(c+128,"R7_addr", false,-1, 8,0);
    tracep->declBit(c+530,"R7_en", false,-1);
    tracep->declBit(c+524,"R7_clk", false,-1);
    tracep->declBus(c+129,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+495,"W0_en", false,-1);
    tracep->declBit(c+524,"W0_clk", false,-1);
    tracep->declQuad(c+493,"W0_data", false,-1, 63,0);
    tracep->declBus(c+130,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+496,"W1_en", false,-1);
    tracep->declBit(c+524,"W1_clk", false,-1);
    tracep->declQuad(c+493,"W1_data", false,-1, 63,0);
    tracep->declBus(c+129,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+131,"W2_en", false,-1);
    tracep->declBit(c+524,"W2_clk", false,-1);
    tracep->declQuad(c+132,"W2_data", false,-1, 63,0);
    tracep->declBus(c+130,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+134,"W3_en", false,-1);
    tracep->declBit(c+524,"W3_clk", false,-1);
    tracep->declQuad(c+132,"W3_data", false,-1, 63,0);
    tracep->declBus(c+129,"W4_addr", false,-1, 8,0);
    tracep->declBit(c+497,"W4_en", false,-1);
    tracep->declBit(c+524,"W4_clk", false,-1);
    tracep->declQuad(c+498,"W4_data", false,-1, 63,0);
    tracep->declBus(c+130,"W5_addr", false,-1, 8,0);
    tracep->declBit(c+500,"W5_en", false,-1);
    tracep->declBit(c+524,"W5_clk", false,-1);
    tracep->declQuad(c+498,"W5_data", false,-1, 63,0);
    tracep->declQuad(c+135,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+137,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+139,"R2_data", false,-1, 63,0);
    tracep->declQuad(c+141,"R3_data", false,-1, 63,0);
    tracep->declQuad(c+143,"R4_data", false,-1, 63,0);
    tracep->declQuad(c+145,"R5_data", false,-1, 63,0);
    tracep->declQuad(c+147,"R6_data", false,-1, 63,0);
    tracep->declQuad(c+149,"R7_data", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("TagArray_ext ");
    tracep->declBus(c+122,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+123,"R0_en", false,-1);
    tracep->declBit(c+524,"R0_clk", false,-1);
    tracep->declBus(c+124,"R1_addr", false,-1, 8,0);
    tracep->declBit(c+125,"R1_en", false,-1);
    tracep->declBit(c+524,"R1_clk", false,-1);
    tracep->declBus(c+122,"R2_addr", false,-1, 8,0);
    tracep->declBit(c+126,"R2_en", false,-1);
    tracep->declBit(c+524,"R2_clk", false,-1);
    tracep->declBus(c+124,"R3_addr", false,-1, 8,0);
    tracep->declBit(c+127,"R3_en", false,-1);
    tracep->declBit(c+524,"R3_clk", false,-1);
    tracep->declBus(c+151,"R4_addr", false,-1, 8,0);
    tracep->declBit(c+532,"R4_en", false,-1);
    tracep->declBit(c+524,"R4_clk", false,-1);
    tracep->declBus(c+128,"R5_addr", false,-1, 8,0);
    tracep->declBit(c+532,"R5_en", false,-1);
    tracep->declBit(c+524,"R5_clk", false,-1);
    tracep->declBus(c+129,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+495,"W0_en", false,-1);
    tracep->declBit(c+524,"W0_clk", false,-1);
    tracep->declBus(c+59,"W0_data", false,-1, 20,0);
    tracep->declBus(c+130,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+496,"W1_en", false,-1);
    tracep->declBit(c+524,"W1_clk", false,-1);
    tracep->declBus(c+59,"W1_data", false,-1, 20,0);
    tracep->declBus(c+129,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+497,"W2_en", false,-1);
    tracep->declBit(c+524,"W2_clk", false,-1);
    tracep->declBus(c+59,"W2_data", false,-1, 20,0);
    tracep->declBus(c+130,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+500,"W3_en", false,-1);
    tracep->declBit(c+524,"W3_clk", false,-1);
    tracep->declBus(c+59,"W3_data", false,-1, 20,0);
    tracep->declBus(c+152,"R0_data", false,-1, 20,0);
    tracep->declBus(c+153,"R1_data", false,-1, 20,0);
    tracep->declBus(c+154,"R2_data", false,-1, 20,0);
    tracep->declBus(c+155,"R3_data", false,-1, 20,0);
    tracep->declBus(c+156,"R4_data", false,-1, 20,0);
    tracep->declBus(c+157,"R5_data", false,-1, 20,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Icache ");
    tracep->declBit(c+524,"clock", false,-1);
    tracep->declBit(c+525,"reset", false,-1);
    tracep->declBit(c+40,"io_cpu_req_valid", false,-1);
    tracep->declBit(c+532,"io_cpu_req_bits_inst_type", false,-1);
    tracep->declBus(c+491,"io_cpu_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+533,"io_cpu_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+535,"io_cpu_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+501,"io_axi_resp_valid", false,-1);
    tracep->declQuad(c+502,"io_axi_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+158,"io_cpu_resp_valid", false,-1);
    tracep->declQuad(c+159,"io_cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+161,"io_axi_req_valid", false,-1);
    tracep->declBit(c+162,"io_axi_req_bits_rw", false,-1);
    tracep->declBus(c+163,"io_axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+486,"io_axi_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+488,"io_axi_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+40,"io_fccache_req", false,-1);
    tracep->declBus(c+164,"io_fccache_state", false,-1, 2,0);
    tracep->declBus(c+535,"io_fccache_mask", false,-1, 7,0);
    tracep->declBit(c+504,"io_fccache_hit", false,-1);
    tracep->declBit(c+158,"io_fccache_cpu_valid", false,-1);
    tracep->declBit(c+501,"io_fccache_axi_valid", false,-1);
    tracep->declBus(c+164,"state", false,-1, 2,0);
    tracep->declBus(c+165,"tag", false,-1, 20,0);
    tracep->declBus(c+166,"index", false,-1, 7,0);
    tracep->declBus(c+167,"offset", false,-1, 2,0);
    tracep->declArray(c+168,"valid", false,-1, 511,0);
    tracep->declArray(c+184,"dirty", false,-1, 511,0);
    tracep->declArray(c+200,"replace", false,-1, 511,0);
    tracep->declBit(c+505,"hit0", false,-1);
    tracep->declBit(c+434,"hit1", false,-1);
    tracep->declBit(c+216,"inDataOneArray", false,-1);
    tracep->declBit(c+217,"victim", false,-1);
    tracep->declBus(c+218,"addr", false,-1, 31,0);
    tracep->declQuad(c+219,"data", false,-1, 63,0);
    tracep->declBus(c+221,"mask", false,-1, 7,0);
    tracep->declBit(c+222,"inst_type", false,-1);
    tracep->declBit(c+223,"whitNum", false,-1);
    tracep->declBit(c+158,"cpu_resp_valid", false,-1);
    tracep->declQuad(c+224,"cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+161,"axi_req_valid", false,-1);
    tracep->declBit(c+162,"axi_req_bits_rw", false,-1);
    tracep->declBus(c+163,"axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+486,"axi_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+488,"axi_req_bits_mask", false,-1, 7,0);
    tracep->pushNamePrefix("DataArray_ext ");
    tracep->declBus(c+435,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+436,"R0_en", false,-1);
    tracep->declBit(c+524,"R0_clk", false,-1);
    tracep->declBus(c+226,"R1_addr", false,-1, 8,0);
    tracep->declBit(c+227,"R1_en", false,-1);
    tracep->declBit(c+524,"R1_clk", false,-1);
    tracep->declBus(c+228,"R2_addr", false,-1, 8,0);
    tracep->declBit(c+229,"R2_en", false,-1);
    tracep->declBit(c+524,"R2_clk", false,-1);
    tracep->declBus(c+226,"R3_addr", false,-1, 8,0);
    tracep->declBit(c+230,"R3_en", false,-1);
    tracep->declBit(c+524,"R3_clk", false,-1);
    tracep->declBus(c+228,"R4_addr", false,-1, 8,0);
    tracep->declBit(c+231,"R4_en", false,-1);
    tracep->declBit(c+524,"R4_clk", false,-1);
    tracep->declBus(c+506,"R5_addr", false,-1, 8,0);
    tracep->declBit(c+437,"R5_en", false,-1);
    tracep->declBit(c+524,"R5_clk", false,-1);
    tracep->declBus(c+506,"R6_addr", false,-1, 8,0);
    tracep->declBit(c+438,"R6_en", false,-1);
    tracep->declBit(c+524,"R6_clk", false,-1);
    tracep->declBus(c+506,"R7_addr", false,-1, 8,0);
    tracep->declBit(c+439,"R7_en", false,-1);
    tracep->declBit(c+524,"R7_clk", false,-1);
    tracep->declBus(c+232,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+507,"W0_en", false,-1);
    tracep->declBit(c+524,"W0_clk", false,-1);
    tracep->declQuad(c+502,"W0_data", false,-1, 63,0);
    tracep->declBus(c+233,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+508,"W1_en", false,-1);
    tracep->declBit(c+524,"W1_clk", false,-1);
    tracep->declQuad(c+502,"W1_data", false,-1, 63,0);
    tracep->declBus(c+232,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+234,"W2_en", false,-1);
    tracep->declBit(c+524,"W2_clk", false,-1);
    tracep->declQuad(c+235,"W2_data", false,-1, 63,0);
    tracep->declBus(c+233,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+237,"W3_en", false,-1);
    tracep->declBit(c+524,"W3_clk", false,-1);
    tracep->declQuad(c+235,"W3_data", false,-1, 63,0);
    tracep->declBus(c+232,"W4_addr", false,-1, 8,0);
    tracep->declBit(c+509,"W4_en", false,-1);
    tracep->declBit(c+524,"W4_clk", false,-1);
    tracep->declQuad(c+510,"W4_data", false,-1, 63,0);
    tracep->declBus(c+233,"W5_addr", false,-1, 8,0);
    tracep->declBit(c+512,"W5_en", false,-1);
    tracep->declBit(c+524,"W5_clk", false,-1);
    tracep->declQuad(c+510,"W5_data", false,-1, 63,0);
    tracep->declQuad(c+238,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+240,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+242,"R2_data", false,-1, 63,0);
    tracep->declQuad(c+244,"R3_data", false,-1, 63,0);
    tracep->declQuad(c+246,"R4_data", false,-1, 63,0);
    tracep->declQuad(c+248,"R5_data", false,-1, 63,0);
    tracep->declQuad(c+250,"R6_data", false,-1, 63,0);
    tracep->declQuad(c+252,"R7_data", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("TagArray_ext ");
    tracep->declBus(c+226,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+227,"R0_en", false,-1);
    tracep->declBit(c+524,"R0_clk", false,-1);
    tracep->declBus(c+228,"R1_addr", false,-1, 8,0);
    tracep->declBit(c+229,"R1_en", false,-1);
    tracep->declBit(c+524,"R1_clk", false,-1);
    tracep->declBus(c+226,"R2_addr", false,-1, 8,0);
    tracep->declBit(c+230,"R2_en", false,-1);
    tracep->declBit(c+524,"R2_clk", false,-1);
    tracep->declBus(c+228,"R3_addr", false,-1, 8,0);
    tracep->declBit(c+231,"R3_en", false,-1);
    tracep->declBit(c+524,"R3_clk", false,-1);
    tracep->declBus(c+513,"R4_addr", false,-1, 8,0);
    tracep->declBit(c+532,"R4_en", false,-1);
    tracep->declBit(c+524,"R4_clk", false,-1);
    tracep->declBus(c+506,"R5_addr", false,-1, 8,0);
    tracep->declBit(c+532,"R5_en", false,-1);
    tracep->declBit(c+524,"R5_clk", false,-1);
    tracep->declBus(c+232,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+507,"W0_en", false,-1);
    tracep->declBit(c+524,"W0_clk", false,-1);
    tracep->declBus(c+165,"W0_data", false,-1, 20,0);
    tracep->declBus(c+233,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+508,"W1_en", false,-1);
    tracep->declBit(c+524,"W1_clk", false,-1);
    tracep->declBus(c+165,"W1_data", false,-1, 20,0);
    tracep->declBus(c+232,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+509,"W2_en", false,-1);
    tracep->declBit(c+524,"W2_clk", false,-1);
    tracep->declBus(c+165,"W2_data", false,-1, 20,0);
    tracep->declBus(c+233,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+512,"W3_en", false,-1);
    tracep->declBit(c+524,"W3_clk", false,-1);
    tracep->declBus(c+165,"W3_data", false,-1, 20,0);
    tracep->declBus(c+254,"R0_data", false,-1, 20,0);
    tracep->declBus(c+255,"R1_data", false,-1, 20,0);
    tracep->declBus(c+256,"R2_data", false,-1, 20,0);
    tracep->declBus(c+257,"R3_data", false,-1, 20,0);
    tracep->declBus(c+440,"R4_data", false,-1, 20,0);
    tracep->declBus(c+441,"R5_data", false,-1, 20,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("arbitor ");
    tracep->declBit(c+524,"clock", false,-1);
    tracep->declBit(c+525,"reset", false,-1);
    tracep->declBit(c+489,"io_master0_req_valid", false,-1);
    tracep->declBit(c+258,"io_master0_req_bits_rw", false,-1);
    tracep->declBus(c+50,"io_master0_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+480,"io_master0_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+482,"io_master0_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+54,"io_master1_req_valid", false,-1);
    tracep->declBit(c+55,"io_master1_req_bits_rw", false,-1);
    tracep->declBus(c+56,"io_master1_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+483,"io_master1_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+485,"io_master1_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+161,"io_master2_req_valid", false,-1);
    tracep->declBit(c+162,"io_master2_req_bits_rw", false,-1);
    tracep->declBus(c+163,"io_master2_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+486,"io_master2_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+488,"io_master2_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+458,"io_AXI_O_aw_ready", false,-1);
    tracep->declBit(c+459,"io_AXI_O_w_ready", false,-1);
    tracep->declBit(c+460,"io_AXI_O_b_valid", false,-1);
    tracep->declBit(c+461,"io_AXI_O_ar_ready", false,-1);
    tracep->declBit(c+462,"io_AXI_O_r_valid", false,-1);
    tracep->declQuad(c+463,"io_AXI_O_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+514,"io_master0_resp_valid", false,-1);
    tracep->declQuad(c+526,"io_master0_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+492,"io_master1_resp_valid", false,-1);
    tracep->declQuad(c+493,"io_master1_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+501,"io_master2_resp_valid", false,-1);
    tracep->declQuad(c+502,"io_master2_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+471,"io_AXI_O_aw_valid", false,-1);
    tracep->declBus(c+472,"io_AXI_O_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+473,"io_AXI_O_w_valid", false,-1);
    tracep->declQuad(c+474,"io_AXI_O_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+476,"io_AXI_O_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+477,"io_AXI_O_ar_valid", false,-1);
    tracep->declBus(c+478,"io_AXI_O_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+479,"io_AXI_O_r_ready", false,-1);
    tracep->declBus(c+259,"choose_buffer", false,-1, 3,0);
    tracep->declBus(c+490,"state", false,-1, 1,0);
    tracep->declBit(c+260,"aw_comp", false,-1);
    tracep->declBit(c+261,"w_comp", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("clint ");
    tracep->declBit(c+524,"clock", false,-1);
    tracep->declBit(c+525,"reset", false,-1);
    tracep->declBit(c+262,"io_clex_valid", false,-1);
    tracep->declBus(c+14,"io_clex_ld_type", false,-1, 2,0);
    tracep->declQuad(c+263,"io_clex_raddr", false,-1, 63,0);
    tracep->declBus(c+13,"io_clex_sd_type", false,-1, 2,0);
    tracep->declQuad(c+263,"io_clex_waddr", false,-1, 63,0);
    tracep->declBus(c+482,"io_clex_wmask", false,-1, 7,0);
    tracep->declQuad(c+480,"io_clex_wdata", false,-1, 63,0);
    tracep->declBit(c+265,"io_clmem_Clrvalue_valid", false,-1);
    tracep->declQuad(c+266,"io_clmem_Clrvalue_bits", false,-1, 63,0);
    tracep->declBit(c+268,"io_timer_int", false,-1);
    tracep->declBus(c+269,"MSIP", false,-1, 31,0);
    tracep->declQuad(c+270,"MTIMECMP", false,-1, 63,0);
    tracep->declQuad(c+272,"MTIME", false,-1, 63,0);
    tracep->declQuad(c+266,"rvalue_buf", false,-1, 63,0);
    tracep->declBit(c+265,"valid_buf", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csrs ");
    tracep->declBit(c+524,"clock", false,-1);
    tracep->declBit(c+525,"reset", false,-1);
    tracep->declBus(c+274,"io_CSRDe_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+38,"io_CSRWb_rd", false,-1, 11,0);
    tracep->declBit(c+37,"io_CSRWb_csr_wen", false,-1);
    tracep->declQuad(c+35,"io_CSRWb_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+275,"io_CSRTr_rd", false,-1, 11,0);
    tracep->declBit(c+276,"io_CSRTr_csr_wen", false,-1);
    tracep->declQuad(c+277,"io_CSRTr_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+268,"io_timer_int", false,-1);
    tracep->declQuad(c+279,"io_CSRDe_csr_rdata", false,-1, 63,0);
    tracep->declQuad(c+281,"io_CSRTr_MTVEC", false,-1, 63,0);
    tracep->declQuad(c+283,"io_CSRTr_MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+285,"io_CSRTr_MEPC", false,-1, 63,0);
    tracep->declQuad(c+287,"io_CSRTr_MIE", false,-1, 63,0);
    tracep->declQuad(c+289,"io_CSRTr_MIP", false,-1, 63,0);
    tracep->declQuad(c+291,"io_CSRTr_MSTATUS", false,-1, 63,0);
    tracep->declQuad(c+281,"MTVEC", false,-1, 63,0);
    tracep->declQuad(c+283,"MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+285,"MEPC", false,-1, 63,0);
    tracep->declQuad(c+287,"MIE", false,-1, 63,0);
    tracep->declQuad(c+289,"MIP", false,-1, 63,0);
    tracep->declQuad(c+291,"MSTATUS", false,-1, 63,0);
    tracep->declQuad(c+293,"MSCRATCH", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("decode ");
    tracep->declBit(c+524,"clock", false,-1);
    tracep->declBit(c+525,"reset", false,-1);
    tracep->declBit(c+158,"io_inst_valid", false,-1);
    tracep->declQuad(c+159,"io_inst_bits_data", false,-1, 63,0);
    tracep->declBus(c+1,"io_fdio_pc", false,-1, 31,0);
    tracep->declQuad(c+295,"io_rfio_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+297,"io_rfio_reg2_rdata", false,-1, 63,0);
    tracep->declBit(c+45,"io_branch", false,-1);
    tracep->declBit(c+515,"io_stall", false,-1);
    tracep->declBit(c+299,"io_fwde_fw_sel1", false,-1);
    tracep->declBit(c+300,"io_fwde_fw_sel2", false,-1);
    tracep->declQuad(c+442,"io_fwde_fw_data1", false,-1, 63,0);
    tracep->declQuad(c+444,"io_fwde_fw_data2", false,-1, 63,0);
    tracep->declBit(c+301,"io_fwde_csr_fw_sel", false,-1);
    tracep->declQuad(c+302,"io_fwde_csr_fw_data", false,-1, 63,0);
    tracep->declQuad(c+279,"io_csrs_csr_rdata", false,-1, 63,0);
    tracep->declBus(c+304,"io_rfio_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+305,"io_rfio_reg2_raddr", false,-1, 4,0);
    tracep->declQuad(c+446,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+448,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+306,"io_deio_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+307,"io_deio_branch_type", false,-1);
    tracep->declQuad(c+308,"io_deio_branch_addr", false,-1, 63,0);
    tracep->declBus(c+310,"io_deio_alu_op", false,-1, 5,0);
    tracep->declBus(c+311,"io_deio_shamt", false,-1, 5,0);
    tracep->declBus(c+312,"io_deio_wb_type", false,-1, 1,0);
    tracep->declBus(c+313,"io_deio_sd_type", false,-1, 2,0);
    tracep->declQuad(c+516,"io_deio_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+314,"io_deio_ld_type", false,-1, 2,0);
    tracep->declQuad(c+315,"io_deio_csr_t", false,-1, 63,0);
    tracep->declBus(c+317,"io_deio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+318,"io_deio_csr_wen", false,-1);
    tracep->declBit(c+319,"io_deio_has_inst", false,-1);
    tracep->declBit(c+320,"io_jump_flag", false,-1);
    tracep->declBus(c+450,"io_jump_pc", false,-1, 31,0);
    tracep->declBit(c+42,"io_load_use", false,-1);
    tracep->declBus(c+304,"io_fwde_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+305,"io_fwde_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+274,"io_fwde_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+274,"io_csrs_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+321,"inst", false,-1, 31,0);
    tracep->declBus(c+322,"lu_rd", false,-1, 4,0);
    tracep->pushNamePrefix("cu ");
    tracep->declBus(c+321,"io_inst", false,-1, 31,0);
    tracep->declBus(c+323,"io_jump_type", false,-1, 1,0);
    tracep->declBit(c+307,"io_branch_type", false,-1);
    tracep->declBus(c+324,"io_opa_type", false,-1, 1,0);
    tracep->declBus(c+325,"io_opb_type", false,-1, 2,0);
    tracep->declBus(c+326,"io_imm_type", false,-1, 2,0);
    tracep->declBus(c+310,"io_alu_op", false,-1, 5,0);
    tracep->declBus(c+312,"io_wb_type", false,-1, 1,0);
    tracep->declBus(c+313,"io_sd_type", false,-1, 2,0);
    tracep->declBus(c+314,"io_ld_type", false,-1, 2,0);
    tracep->declBus(c+327,"io_csr_type", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("eximm ");
    tracep->declBus(c+321,"io_inst", false,-1, 31,0);
    tracep->declBus(c+326,"io_imm_type", false,-1, 2,0);
    tracep->declQuad(c+328,"io_eximm", false,-1, 63,0);
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
    tracep->declQuad(c+480,"io_deio_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+14,"io_deio_ld_type", false,-1, 2,0);
    tracep->declQuad(c+15,"io_deio_csr_t", false,-1, 63,0);
    tracep->declBus(c+17,"io_deio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+18,"io_deio_csr_wen", false,-1);
    tracep->declBit(c+19,"io_deio_has_inst", false,-1);
    tracep->declQuad(c+43,"io_emio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+6,"io_emio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+12,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+14,"io_emio_ld_type", false,-1, 2,0);
    tracep->declBus(c+330,"io_emio_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+263,"io_emio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+18,"io_emio_csr_wen", false,-1);
    tracep->declBus(c+17,"io_emio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+19,"io_emio_has_inst", false,-1);
    tracep->declBit(c+45,"io_jump_flag", false,-1);
    tracep->declBus(c+331,"io_jump_pc", false,-1, 31,0);
    tracep->declQuad(c+332,"io_raddr", false,-1, 63,0);
    tracep->declQuad(c+334,"io_waddr", false,-1, 63,0);
    tracep->declQuad(c+480,"io_wdata", false,-1, 63,0);
    tracep->declBus(c+482,"io_wmask", false,-1, 7,0);
    tracep->declBus(c+6,"io_fwex_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+336,"io_fwex_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+338,"io_fwex_reg_we", false,-1);
    tracep->declQuad(c+263,"io_fwex_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+18,"io_fwex_csr_wen", false,-1);
    tracep->declBus(c+17,"io_fwex_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+262,"io_clex_valid", false,-1);
    tracep->declBus(c+14,"io_clex_ld_type", false,-1, 2,0);
    tracep->declQuad(c+263,"io_clex_raddr", false,-1, 63,0);
    tracep->declBus(c+13,"io_clex_sd_type", false,-1, 2,0);
    tracep->declQuad(c+263,"io_clex_waddr", false,-1, 63,0);
    tracep->declBus(c+482,"io_clex_wmask", false,-1, 7,0);
    tracep->declQuad(c+480,"io_clex_wdata", false,-1, 63,0);
    tracep->pushNamePrefix("alu ");
    tracep->declQuad(c+2,"io_op_a", false,-1, 63,0);
    tracep->declQuad(c+4,"io_op_b", false,-1, 63,0);
    tracep->declBus(c+10,"io_alu_op", false,-1, 5,0);
    tracep->declBus(c+11,"io_shamt", false,-1, 5,0);
    tracep->declQuad(c+263,"io_result", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fc ");
    tracep->declBit(c+320,"io_fcde_jump_flag", false,-1);
    tracep->declBus(c+450,"io_fcde_jump_pc", false,-1, 31,0);
    tracep->declBit(c+42,"io_fcde_load_use", false,-1);
    tracep->declBit(c+45,"io_fcex_jump_flag", false,-1);
    tracep->declBus(c+331,"io_fcex_jump_pc", false,-1, 31,0);
    tracep->declBit(c+339,"io_fctr_pop_NOP", false,-1);
    tracep->declBus(c+340,"io_fctr_trap_state", false,-1, 2,0);
    tracep->declBit(c+341,"io_fctr_jump_flag", false,-1);
    tracep->declBus(c+342,"io_fctr_jump_pc", false,-1, 31,0);
    tracep->declBit(c+40,"io_fcIcache_req", false,-1);
    tracep->declBus(c+164,"io_fcIcache_state", false,-1, 2,0);
    tracep->declBus(c+535,"io_fcIcache_mask", false,-1, 7,0);
    tracep->declBit(c+158,"io_fcIcache_cpu_valid", false,-1);
    tracep->declBit(c+501,"io_fcIcache_axi_valid", false,-1);
    tracep->declBit(c+530,"io_fcDcache_req", false,-1);
    tracep->declBus(c+57,"io_fcDcache_state", false,-1, 2,0);
    tracep->declBus(c+482,"io_fcDcache_mask", false,-1, 7,0);
    tracep->declBit(c+58,"io_fcDcache_hit", false,-1);
    tracep->declBit(c+51,"io_fcDcache_cpu_valid", false,-1);
    tracep->declBit(c+492,"io_fcDcache_axi_valid", false,-1);
    tracep->declBit(c+489,"io_fcio_req", false,-1);
    tracep->declBit(c+514,"io_fcio_valid", false,-1);
    tracep->declBit(c+343,"io_fcfe_jump_flag", false,-1);
    tracep->declBus(c+518,"io_fcfe_jump_pc", false,-1, 31,0);
    tracep->declBit(c+451,"io_fcfe_flush", false,-1);
    tracep->declBit(c+519,"io_fcfe_stall", false,-1);
    tracep->declBit(c+520,"io_fcde_flush", false,-1);
    tracep->declBit(c+515,"io_fcde_stall", false,-1);
    tracep->declBit(c+515,"io_fcex_stall", false,-1);
    tracep->declBit(c+515,"io_fcmem_stall", false,-1);
    tracep->declBit(c+452,"Icache_stall", false,-1);
    tracep->declBit(c+453,"Dcache_stall", false,-1);
    tracep->declBit(c+521,"IO_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+524,"clock", false,-1);
    tracep->declBit(c+525,"reset", false,-1);
    tracep->declBit(c+343,"io_fcfe_jump_flag", false,-1);
    tracep->declBus(c+518,"io_fcfe_jump_pc", false,-1, 31,0);
    tracep->declBit(c+451,"io_fcfe_flush", false,-1);
    tracep->declBit(c+519,"io_fcfe_stall", false,-1);
    tracep->declBus(c+491,"io_fdio_pc", false,-1, 31,0);
    tracep->declBit(c+40,"io_pc_valid", false,-1);
    tracep->declBus(c+491,"io_pc_bits", false,-1, 31,0);
    tracep->declBit(c+40,"started", false,-1);
    tracep->declBus(c+344,"pc", false,-1, 31,0);
    tracep->declBus(c+345,"old_pc", false,-1, 31,0);
    tracep->declBus(c+454,"next_pc", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fw ");
    tracep->declBus(c+304,"io_fwde_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+305,"io_fwde_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+274,"io_fwde_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+6,"io_fwex_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+336,"io_fwex_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+338,"io_fwex_reg_we", false,-1);
    tracep->declQuad(c+263,"io_fwex_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+18,"io_fwex_csr_wen", false,-1);
    tracep->declBus(c+17,"io_fwex_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+22,"io_fwmem_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+522,"io_fwmem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+346,"io_fwmem_reg_we", false,-1);
    tracep->declQuad(c+26,"io_fwmem_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+28,"io_fwmem_csr_wen", false,-1);
    tracep->declBus(c+29,"io_fwmem_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+33,"io_fwwb_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+31,"io_fwwb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+49,"io_fwwb_reg_we", false,-1);
    tracep->declQuad(c+35,"io_fwwb_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+37,"io_fwwb_csr_wen", false,-1);
    tracep->declBus(c+38,"io_fwwb_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+299,"io_fwde_fw_sel1", false,-1);
    tracep->declBit(c+300,"io_fwde_fw_sel2", false,-1);
    tracep->declQuad(c+442,"io_fwde_fw_data1", false,-1, 63,0);
    tracep->declQuad(c+444,"io_fwde_fw_data2", false,-1, 63,0);
    tracep->declBit(c+301,"io_fwde_csr_fw_sel", false,-1);
    tracep->declQuad(c+302,"io_fwde_csr_fw_data", false,-1, 63,0);
    tracep->declBit(c+347,"reg1_ex_hazard", false,-1);
    tracep->declBit(c+348,"reg2_ex_hazard", false,-1);
    tracep->declBit(c+349,"reg1_mem_hazard", false,-1);
    tracep->declBit(c+350,"reg2_mem_hazard", false,-1);
    tracep->declBit(c+351,"reg1_wb_hazard", false,-1);
    tracep->declBit(c+352,"reg2_wb_hazard", false,-1);
    tracep->declBit(c+353,"csr_ex_harzard", false,-1);
    tracep->declBit(c+354,"csr_mem_harzard", false,-1);
    tracep->declBit(c+355,"csr_wb_harzard", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("interact ");
    tracep->declBus(c+455,"inst", false,-1, 31,0);
    tracep->declBit(c+524,"clk", false,-1);
    tracep->declBit(c+525,"rst", false,-1);
    tracep->declBit(c+356,"ebreak_flag", false,-1);
    tracep->declBus(c+357,"over_count", false,-1, 2,0);
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
    tracep->declBit(c+51,"io_rdata_valid", false,-1);
    tracep->declQuad(c+52,"io_rdata_bits_data", false,-1, 63,0);
    tracep->declBit(c+514,"io_rdata_io_valid", false,-1);
    tracep->declQuad(c+526,"io_rdata_io_bits_data", false,-1, 63,0);
    tracep->declBit(c+265,"io_clmem_Clrvalue_valid", false,-1);
    tracep->declQuad(c+266,"io_clmem_Clrvalue_bits", false,-1, 63,0);
    tracep->declQuad(c+522,"io_mwio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+22,"io_mwio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+23,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declQuad(c+26,"io_mwio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+28,"io_mwio_csr_wen", false,-1);
    tracep->declBus(c+29,"io_mwio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+30,"io_mwio_has_inst", false,-1);
    tracep->declBus(c+22,"io_fwmem_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+522,"io_fwmem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+346,"io_fwmem_reg_we", false,-1);
    tracep->declQuad(c+26,"io_fwmem_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+28,"io_fwmem_csr_wen", false,-1);
    tracep->declBus(c+29,"io_fwmem_csr_waddr", false,-1, 11,0);
    tracep->declQuad(c+456,"rvalue", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+524,"clock", false,-1);
    tracep->declBus(c+304,"io_RfDe_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+305,"io_RfDe_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+33,"io_RfWb_rd", false,-1, 4,0);
    tracep->declBit(c+49,"io_RfWb_reg_wen", false,-1);
    tracep->declQuad(c+31,"io_RfWb_reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+295,"io_RfDe_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+297,"io_RfDe_reg2_rdata", false,-1, 63,0);
    tracep->pushNamePrefix("regs_ext ");
    tracep->declBus(c+33,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+532,"R0_en", false,-1);
    tracep->declBit(c+524,"R0_clk", false,-1);
    tracep->declBus(c+304,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+532,"R1_en", false,-1);
    tracep->declBit(c+524,"R1_clk", false,-1);
    tracep->declBus(c+305,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+532,"R2_en", false,-1);
    tracep->declBit(c+524,"R2_clk", false,-1);
    tracep->declBus(c+536,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+532,"W0_en", false,-1);
    tracep->declBit(c+524,"W0_clk", false,-1);
    tracep->declQuad(c+533,"W0_data", false,-1, 63,0);
    tracep->declBus(c+33,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+532,"W1_en", false,-1);
    tracep->declBit(c+524,"W1_clk", false,-1);
    tracep->declQuad(c+358,"W1_data", false,-1, 63,0);
    tracep->declQuad(c+360,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+362,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+364,"R2_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+366+i*2,"Memory", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("trap ");
    tracep->declBit(c+524,"clock", false,-1);
    tracep->declBit(c+525,"reset", false,-1);
    tracep->declBit(c+19,"io_ex_hasinst", false,-1);
    tracep->declBit(c+30,"io_mem_hasinst", false,-1);
    tracep->declBit(c+39,"io_wb_hasinst", false,-1);
    tracep->declQuad(c+281,"io_csrtr_MTVEC", false,-1, 63,0);
    tracep->declQuad(c+283,"io_csrtr_MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+285,"io_csrtr_MEPC", false,-1, 63,0);
    tracep->declQuad(c+287,"io_csrtr_MIE", false,-1, 63,0);
    tracep->declQuad(c+289,"io_csrtr_MIP", false,-1, 63,0);
    tracep->declQuad(c+291,"io_csrtr_MSTATUS", false,-1, 63,0);
    tracep->declBus(c+41,"io_inst", false,-1, 31,0);
    tracep->declBus(c+491,"io_pc", false,-1, 31,0);
    tracep->declBus(c+275,"io_csrtr_rd", false,-1, 11,0);
    tracep->declBit(c+276,"io_csrtr_csr_wen", false,-1);
    tracep->declQuad(c+277,"io_csrtr_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+339,"io_fctr_pop_NOP", false,-1);
    tracep->declBus(c+340,"io_fctr_trap_state", false,-1, 2,0);
    tracep->declBit(c+341,"io_fctr_jump_flag", false,-1);
    tracep->declBus(c+342,"io_fctr_jump_pc", false,-1, 31,0);
    tracep->declQuad(c+430,"cause", false,-1, 63,0);
    tracep->declBus(c+432,"pc", false,-1, 31,0);
    tracep->declBus(c+340,"state", false,-1, 2,0);
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
    tracep->declBit(c+524,"ACLK", false,-1);
    tracep->declBit(c+528,"ARESETn", false,-1);
    tracep->declBus(c+472,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+537,"S_AXI_AWPROT", false,-1, 2,0);
    tracep->declBit(c+471,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+458,"S_AXI_AWREADY", false,-1);
    tracep->declQuad(c+474,"S_AXI_WDATA", false,-1, 63,0);
    tracep->declBus(c+476,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+473,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+459,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+465,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+460,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+532,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+478,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+537,"S_AXI_ARPROT", false,-1, 2,0);
    tracep->declBit(c+477,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+461,"S_AXI_ARREADY", false,-1);
    tracep->declQuad(c+463,"S_AXI_RDATA", false,-1, 63,0);
    tracep->declBus(c+466,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+462,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+479,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+458,"awready", false,-1);
    tracep->declBit(c+459,"wready", false,-1);
    tracep->declBus(c+465,"bresp", false,-1, 1,0);
    tracep->declBit(c+460,"bvalid", false,-1);
    tracep->declBit(c+461,"arready", false,-1);
    tracep->declQuad(c+463,"rdata", false,-1, 63,0);
    tracep->declBus(c+466,"rresp", false,-1, 1,0);
    tracep->declBit(c+462,"rvalid", false,-1);
    tracep->declBus(c+467,"awaddr_buffer", false,-1, 31,0);
    tracep->declBus(c+529,"awaddr", false,-1, 31,0);
    tracep->declBit(c+468,"need_resp", false,-1);
    tracep->declBus(c+469,"araddr", false,-1, 31,0);
    tracep->declBit(c+470,"need_read", false,-1);
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
    VlWide<16>/*511:0*/ __Vtemp_ha26fe365__0;
    VlWide<16>/*511:0*/ __Vtemp_h773c399d__0;
    VlWide<16>/*511:0*/ __Vtemp_ha26fe365__1;
    VlWide<16>/*511:0*/ __Vtemp_h773c399d__1;
    VlWide<3>/*95:0*/ __Vtemp_h5ee83ed9__0;
    VlWide<16>/*511:0*/ __Vtemp_hc4bbf11d__0;
    VlWide<16>/*511:0*/ __Vtemp_ha26fe365__2;
    VlWide<16>/*511:0*/ __Vtemp_h773c399d__2;
    VlWide<8>/*255:0*/ __Vtemp_h13cb1596__0;
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
    bufp->fullBit(oldp+46,((0U != ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))));
    bufp->fullQData(oldp+47,(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T),64);
    bufp->fullBit(oldp+49,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))));
    bufp->fullIData(oldp+50,((IData)(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T)),32);
    bufp->fullBit(oldp+51,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_valid));
    bufp->fullQData(oldp+52,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray)
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
    bufp->fullBit(oldp+54,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_valid));
    bufp->fullBit(oldp+55,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw));
    bufp->fullIData(oldp+56,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr),32);
    bufp->fullCData(oldp+57,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state),3);
    VL_SHIFTR_WWI(512,512,9, __Vtemp_ha26fe365__0, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid, 
                  (0x1feU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                      >> 3U)) << 1U)));
    VL_SHIFTR_WWI(512,512,10, __Vtemp_h773c399d__0, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid, 
                  (0x3ffU & ((IData)(1U) + (0x1feU 
                                            & ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                        >> 3U)) 
                                               << 1U)))));
    bufp->fullBit(oldp+58,((((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                              [(0x1feU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                   >> 3U)) 
                                          << 1U))] 
                              == (0x1fffffU & (IData)(
                                                      (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                       >> 0xbU)))) 
                             & __Vtemp_ha26fe365__0[0U]) 
                            | ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                                [(0x1ffU & ((IData)(1U) 
                                            + (0x1feU 
                                               & ((IData)(
                                                          (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                           >> 3U)) 
                                                  << 1U))))] 
                                == (0x1fffffU & (IData)(
                                                        (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                         >> 0xbU)))) 
                               & __Vtemp_h773c399d__0[0U]))));
    bufp->fullIData(oldp+59,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__tag),21);
    bufp->fullCData(oldp+60,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index),8);
    bufp->fullCData(oldp+61,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset),3);
    bufp->fullWData(oldp+62,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid),512);
    bufp->fullWData(oldp+78,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty),512);
    bufp->fullWData(oldp+94,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace),512);
    VL_SHIFTR_WWI(512,512,9, __Vtemp_ha26fe365__1, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid, 
                  (0x1feU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                      >> 3U)) << 1U)));
    bufp->fullBit(oldp+110,(((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                              [(0x1feU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                   >> 3U)) 
                                          << 1U))] 
                              == (0x1fffffU & (IData)(
                                                      (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                       >> 0xbU)))) 
                             & __Vtemp_ha26fe365__1[0U])));
    VL_SHIFTR_WWI(512,512,10, __Vtemp_h773c399d__1, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid, 
                  (0x3ffU & ((IData)(1U) + (0x1feU 
                                            & ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                        >> 3U)) 
                                               << 1U)))));
    bufp->fullBit(oldp+111,(((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                              [(0x1ffU & ((IData)(1U) 
                                          + (0x1feU 
                                             & ((IData)(
                                                        (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                         >> 3U)) 
                                                << 1U))))] 
                              == (0x1fffffU & (IData)(
                                                      (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                       >> 0xbU)))) 
                             & __Vtemp_h773c399d__1[0U])));
    bufp->fullBit(oldp+112,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray));
    bufp->fullBit(oldp+113,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim));
    bufp->fullIData(oldp+114,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr),32);
    bufp->fullQData(oldp+115,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data),64);
    bufp->fullCData(oldp+117,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask),8);
    bufp->fullBit(oldp+118,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inst_type));
    bufp->fullBit(oldp+119,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum));
    bufp->fullQData(oldp+120,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_bits_data),64);
    bufp->fullSData(oldp+122,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__TagArray_ext__R0_addr),9);
    bufp->fullBit(oldp+123,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_9));
    bufp->fullSData(oldp+124,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__TagArray_ext__R1_addr),9);
    bufp->fullBit(oldp+125,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_11));
    bufp->fullBit(oldp+126,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_17));
    bufp->fullBit(oldp+127,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_18));
    bufp->fullSData(oldp+128,((0x1ffU & ((IData)(1U) 
                                         + (0x1feU 
                                            & ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                        >> 3U)) 
                                               << 1U))))),9);
    bufp->fullSData(oldp+129,((0x1ffU & ((IData)(1U) 
                                         + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                            << 1U)))),9);
    bufp->fullSData(oldp+130,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                               << 1U)),9);
    bufp->fullBit(oldp+131,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum))));
    bufp->fullQData(oldp+132,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data),64);
    bufp->fullBit(oldp+134,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0))));
    bufp->fullQData(oldp+135,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                ? vlSelf->__VdfgTmp_h02e5796b__0
                                : 0ULL)),64);
    bufp->fullQData(oldp+137,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_1)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_2]
                                : 0ULL)),64);
    bufp->fullQData(oldp+139,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_3)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_4]
                                : 0ULL)),64);
    bufp->fullQData(oldp+141,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_5)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_6]
                                : 0ULL)),64);
    bufp->fullQData(oldp+143,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_7)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_8]
                                : 0ULL)),64);
    bufp->fullQData(oldp+145,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_9)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_10]
                                : 0ULL)),64);
    bufp->fullQData(oldp+147,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_11)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_12]
                                : 0ULL)),64);
    bufp->fullQData(oldp+149,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_13)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_14]
                                : 0ULL)),64);
    bufp->fullSData(oldp+151,((0x1feU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                  >> 3U)) 
                                         << 1U))),9);
    bufp->fullIData(oldp+152,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_9)
                                ? vlSelf->__VdfgTmp_h2fe899d6__0
                                : 0U)),21);
    bufp->fullIData(oldp+153,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_11)
                                ? vlSelf->__VdfgTmp_h5f294843__0
                                : 0U)),21);
    bufp->fullIData(oldp+154,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_17)
                                ? vlSelf->__VdfgTmp_h2fe899d6__0
                                : 0U)),21);
    bufp->fullIData(oldp+155,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_18)
                                ? vlSelf->__VdfgTmp_h5f294843__0
                                : 0U)),21);
    bufp->fullIData(oldp+156,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                              [(0x1feU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                   >> 3U)) 
                                          << 1U))]),21);
    bufp->fullIData(oldp+157,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                              [(0x1ffU & ((IData)(1U) 
                                          + (0x1feU 
                                             & ((IData)(
                                                        (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                         >> 3U)) 
                                                << 1U))))]),21);
    bufp->fullBit(oldp+158,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid));
    bufp->fullQData(oldp+159,(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data),64);
    bufp->fullBit(oldp+161,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_valid));
    bufp->fullBit(oldp+162,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw));
    bufp->fullIData(oldp+163,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr),32);
    bufp->fullCData(oldp+164,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state),3);
    bufp->fullIData(oldp+165,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__tag),21);
    bufp->fullCData(oldp+166,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index),8);
    bufp->fullCData(oldp+167,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset),3);
    bufp->fullWData(oldp+168,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid),512);
    bufp->fullWData(oldp+184,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty),512);
    bufp->fullWData(oldp+200,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace),512);
    bufp->fullBit(oldp+216,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray));
    bufp->fullBit(oldp+217,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim));
    bufp->fullIData(oldp+218,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr),32);
    bufp->fullQData(oldp+219,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data),64);
    bufp->fullCData(oldp+221,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask),8);
    bufp->fullBit(oldp+222,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inst_type));
    bufp->fullBit(oldp+223,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum));
    bufp->fullQData(oldp+224,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data),64);
    bufp->fullSData(oldp+226,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__TagArray_ext__R0_addr),9);
    bufp->fullBit(oldp+227,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_9));
    bufp->fullSData(oldp+228,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__TagArray_ext__R1_addr),9);
    bufp->fullBit(oldp+229,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_11));
    bufp->fullBit(oldp+230,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_17));
    bufp->fullBit(oldp+231,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_18));
    bufp->fullSData(oldp+232,((0x1ffU & ((IData)(1U) 
                                         + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                            << 1U)))),9);
    bufp->fullSData(oldp+233,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                               << 1U)),9);
    bufp->fullBit(oldp+234,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum))));
    bufp->fullQData(oldp+235,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data),64);
    bufp->fullBit(oldp+237,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0))));
    bufp->fullQData(oldp+238,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                ? vlSelf->__VdfgTmp_hc520a55b__0
                                : 0ULL)),64);
    bufp->fullQData(oldp+240,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_1)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_2]
                                : 0ULL)),64);
    bufp->fullQData(oldp+242,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_3)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_4]
                                : 0ULL)),64);
    bufp->fullQData(oldp+244,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_5)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_6]
                                : 0ULL)),64);
    bufp->fullQData(oldp+246,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_7)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_8]
                                : 0ULL)),64);
    bufp->fullQData(oldp+248,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_9)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_10]
                                : 0ULL)),64);
    bufp->fullQData(oldp+250,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_11)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_12]
                                : 0ULL)),64);
    bufp->fullQData(oldp+252,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_13)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_14]
                                : 0ULL)),64);
    bufp->fullIData(oldp+254,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_9)
                                ? vlSelf->__VdfgTmp_heb865217__0
                                : 0U)),21);
    bufp->fullIData(oldp+255,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_11)
                                ? vlSelf->__VdfgTmp_hb3a84c04__0
                                : 0U)),21);
    bufp->fullIData(oldp+256,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_17)
                                ? vlSelf->__VdfgTmp_heb865217__0
                                : 0U)),21);
    bufp->fullIData(oldp+257,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_18)
                                ? vlSelf->__VdfgTmp_hb3a84c04__0
                                : 0U)),21);
    bufp->fullBit(oldp+258,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type))));
    bufp->fullCData(oldp+259,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer),4);
    bufp->fullBit(oldp+260,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp));
    bufp->fullBit(oldp+261,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp));
    bufp->fullBit(oldp+262,(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6));
    bufp->fullQData(oldp+263,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result),64);
    bufp->fullBit(oldp+265,(vlSelf->Soc__DOT__core__DOT__clint__DOT__valid_buf));
    bufp->fullQData(oldp+266,(vlSelf->Soc__DOT__core__DOT__clint__DOT__rvalue_buf),64);
    bufp->fullBit(oldp+268,((vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME 
                             >= vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP)));
    bufp->fullIData(oldp+269,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MSIP),32);
    bufp->fullQData(oldp+270,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP),64);
    bufp->fullQData(oldp+272,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME),64);
    bufp->fullSData(oldp+274,(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr),12);
    __Vtemp_h5ee83ed9__0[0U] = 0x41000000U;
    __Vtemp_h5ee83ed9__0[1U] = 0x3003423U;
    __Vtemp_h5ee83ed9__0[2U] = (0x30000000U | (((0x8000000000000007ULL 
                                                 == vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE)
                                                 ? 0x344U
                                                 : 0U) 
                                               << 8U));
    bufp->fullSData(oldp+275,(((0x5fU >= (0x7fU & ((IData)(0xcU) 
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
    bufp->fullBit(oldp+276,(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen));
    bufp->fullQData(oldp+277,(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata),64);
    bufp->fullQData(oldp+279,(((0x340U == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
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
    bufp->fullQData(oldp+281,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC),64);
    bufp->fullQData(oldp+283,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE),64);
    bufp->fullQData(oldp+285,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC),64);
    bufp->fullQData(oldp+287,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE),64);
    bufp->fullQData(oldp+289,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP),64);
    bufp->fullQData(oldp+291,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS),64);
    bufp->fullQData(oldp+293,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH),64);
    bufp->fullQData(oldp+295,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0)
                                ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]
                                : 0ULL)),64);
    bufp->fullQData(oldp+297,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0)
                                ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]
                                : 0ULL)),64);
    bufp->fullBit(oldp+299,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)))));
    bufp->fullBit(oldp+300,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))));
    bufp->fullBit(oldp+301,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)))));
    bufp->fullQData(oldp+302,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard)
                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard)
                                    ? vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)
                                        ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                                        : 0ULL)))),64);
    bufp->fullCData(oldp+304,(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr),5);
    bufp->fullCData(oldp+305,(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr),5);
    bufp->fullCData(oldp+306,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_reg_waddr),5);
    bufp->fullBit(oldp+307,(((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                             & ((0x17U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                & ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                   & ((0x6fU != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                      & ((0x67U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                         & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5))))))));
    bufp->fullQData(oldp+308,(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__fdreg_pc)) 
                               + (((- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))) 
                                   << 0xcU) | (QData)((IData)(
                                                              (((IData)(vlSelf->__VdfgTmp_h315738f9__0) 
                                                                << 0xbU) 
                                                               | (((IData)(vlSelf->__VdfgTmp_h722d7b58__0) 
                                                                   << 5U) 
                                                                  | ((IData)(vlSelf->__VdfgTmp_h6dbd61c0__0) 
                                                                     << 1U)))))))),64);
    bufp->fullCData(oldp+310,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op),6);
    bufp->fullCData(oldp+311,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
                                ? (0x3fU & (IData)(
                                                   (vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                                    >> 0x14U)))
                                : 0U)),6);
    bufp->fullCData(oldp+312,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
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
    bufp->fullCData(oldp+313,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0)
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
    bufp->fullCData(oldp+314,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type),3);
    bufp->fullQData(oldp+315,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T),64);
    bufp->fullSData(oldp+317,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen)
                                ? (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr)
                                : 0U)),12);
    bufp->fullBit(oldp+318,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen));
    bufp->fullBit(oldp+319,((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)));
    bufp->fullBit(oldp+320,(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag));
    bufp->fullIData(oldp+321,(vlSelf->Soc__DOT__core__DOT__decode__DOT__inst),32);
    bufp->fullCData(oldp+322,(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd),5);
    bufp->fullCData(oldp+323,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type),2);
    bufp->fullCData(oldp+324,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type),2);
    bufp->fullCData(oldp+325,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type),3);
    bufp->fullCData(oldp+326,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
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
    bufp->fullCData(oldp+327,(((((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0) 
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
    bufp->fullQData(oldp+328,(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm),64);
    bufp->fullCData(oldp+330,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                ? ((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                    ? 0U : (7U & (IData)(vlSelf->__VdfgTmp_h6a80e86b__0)))
                                : 0U)),3);
    bufp->fullIData(oldp+331,((IData)(vlSelf->Soc__DOT__core__DOT__dereg_branch_addr)),32);
    bufp->fullQData(oldp+332,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                : 0ULL)),64);
    bufp->fullQData(oldp+334,((((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6)) 
                                & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))
                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                : 0ULL)),64);
    bufp->fullQData(oldp+336,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata),64);
    bufp->fullBit(oldp+338,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we));
    bufp->fullBit(oldp+339,(((0U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                             & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2) 
                                | ((0x30200073U == (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7))))));
    bufp->fullCData(oldp+340,(vlSelf->Soc__DOT__core__DOT__trap__DOT__state),3);
    bufp->fullBit(oldp+341,(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3));
    bufp->fullIData(oldp+342,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC)
                                : ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                    ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC)
                                    : 0U))),32);
    bufp->fullBit(oldp+343,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)))));
    bufp->fullIData(oldp+344,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),32);
    bufp->fullIData(oldp+345,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc),32);
    bufp->fullBit(oldp+346,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))));
    bufp->fullBit(oldp+347,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard));
    bufp->fullBit(oldp+348,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard));
    bufp->fullBit(oldp+349,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard));
    bufp->fullBit(oldp+350,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard));
    bufp->fullBit(oldp+351,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard));
    bufp->fullBit(oldp+352,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard));
    bufp->fullBit(oldp+353,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard));
    bufp->fullBit(oldp+354,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard));
    bufp->fullBit(oldp+355,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard));
    bufp->fullBit(oldp+356,(vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag));
    bufp->fullCData(oldp+357,(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count),3);
    bufp->fullQData(oldp+358,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                                & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr)))
                                ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr])),64);
    bufp->fullQData(oldp+360,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr]),64);
    bufp->fullQData(oldp+362,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]),64);
    bufp->fullQData(oldp+364,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]),64);
    bufp->fullQData(oldp+366,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+368,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+370,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+372,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+374,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+376,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+378,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+380,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+382,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+384,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+386,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+388,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+390,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+392,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+394,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+396,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+398,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+400,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+402,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+404,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+406,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+408,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+410,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+412,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+414,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+416,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+418,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+420,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+422,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+424,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+426,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+428,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
    bufp->fullQData(oldp+430,(vlSelf->Soc__DOT__core__DOT__trap__DOT__cause),64);
    bufp->fullIData(oldp+432,(vlSelf->Soc__DOT__core__DOT__trap__DOT__pc),32);
    bufp->fullBit(oldp+433,(((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid))));
    VL_SHIFTR_WWI(512,512,10, __Vtemp_hc4bbf11d__0, vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid, 
                  (0x3ffU & ((IData)(1U) + (0x1feU 
                                            & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                               >> 2U)))));
    bufp->fullBit(oldp+434,(((vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                              [(0x1ffU & ((IData)(1U) 
                                          + (0x1feU 
                                             & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                >> 2U))))] 
                              == (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                  >> 0xbU)) & __Vtemp_hc4bbf11d__0[0U])));
    bufp->fullSData(oldp+435,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h07501b90__0)
                                ? (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3) 
                                    & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0))
                                    ? (0x1feU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                 >> 2U))
                                    : 0U) : 0U)),9);
    bufp->fullBit(oldp+436,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h07501b90__0) 
                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3)))));
    bufp->fullBit(oldp+437,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h300e9d2f__0) 
                             & (0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset)))));
    bufp->fullBit(oldp+438,(((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h300e9d2f__0))));
    bufp->fullBit(oldp+439,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inst_type)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h46ce278a__0))));
    bufp->fullIData(oldp+440,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                              [(0x1feU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                          >> 2U))]),21);
    bufp->fullIData(oldp+441,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                              [(0x1ffU & ((IData)(1U) 
                                          + (0x1feU 
                                             & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                >> 2U))))]),21);
    bufp->fullQData(oldp+442,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard)
                                ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard)
                                    ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)
                                        ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                        : 0ULL)))),64);
    bufp->fullQData(oldp+444,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                                ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                                    ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                                        ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                        : 0ULL)))),64);
    bufp->fullQData(oldp+446,((((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
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
    bufp->fullQData(oldp+448,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T
                                : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                    ? 4ULL : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                               ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T
                                               : ((1U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                                   ? vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm
                                                   : 0ULL))))),64);
    bufp->fullIData(oldp+450,(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                ? (vlSelf->Soc__DOT__core__DOT__fdreg_pc 
                                   + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm))
                                : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                    ? (0xfffffffeU 
                                       & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4) 
                                          + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm)))
                                    : 0x80000000U))),32);
    bufp->fullBit(oldp+451,(((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h836ed1e8__0) 
                             & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
                                & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                                   | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_21_0)) 
                                      & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                                         | ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                                            | (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag)))))))));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_ha26fe365__2, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid, 
                  (0x1feU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                      >> 3U)) << 1U)));
    VL_SHIFTR_WWI(512,512,10, __Vtemp_h773c399d__2, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid, 
                  (0x3ffU & ((IData)(1U) + (0x1feU 
                                            & ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                        >> 3U)) 
                                               << 1U)))));
    bufp->fullBit(oldp+452,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)) 
                             & ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_19)) 
                                   & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                      | ((~ (((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                                               [(0x1feU 
                                                 & ((IData)(
                                                            (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                             >> 3U)) 
                                                    << 1U))] 
                                               == (0x1fffffU 
                                                   & (IData)(
                                                             (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                              >> 0xbU)))) 
                                              & __Vtemp_ha26fe365__2[0U]) 
                                             | ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                                                 [(0x1ffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0x1feU 
                                                       & ((IData)(
                                                                  (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                                   >> 3U)) 
                                                          << 1U))))] 
                                                 == 
                                                 (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                             >> 0xbU)))) 
                                                & __Vtemp_h773c399d__2[0U]))) 
                                         & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h07501b90__0))))))));
    bufp->fullBit(oldp+453,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_valid)) 
                             & ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_19)) 
                                   & ((~ ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                          & (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid))) 
                                      & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))))))));
    bufp->fullIData(oldp+454,(((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2)
                                ? ((IData)(4U) + vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc)
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                                    ? ((IData)(4U) 
                                       + vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)
                                    : vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc))),32);
    bufp->fullIData(oldp+455,((((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid))
                                ? (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)
                                : 0U)),32);
    bufp->fullQData(oldp+456,((((QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
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
    bufp->fullBit(oldp+458,(vlSelf->Soc__DOT__sram__DOT__awready));
    bufp->fullBit(oldp+459,(vlSelf->Soc__DOT__sram__DOT__wready));
    bufp->fullBit(oldp+460,(vlSelf->Soc__DOT__sram__DOT__bvalid));
    bufp->fullBit(oldp+461,(vlSelf->Soc__DOT__sram__DOT__arready));
    bufp->fullBit(oldp+462,(vlSelf->Soc__DOT__sram__DOT__rvalid));
    bufp->fullQData(oldp+463,(vlSelf->Soc__DOT__sram__DOT__rdata),64);
    bufp->fullCData(oldp+465,(vlSelf->Soc__DOT__sram__DOT__bresp),2);
    bufp->fullCData(oldp+466,(vlSelf->Soc__DOT__sram__DOT__rresp),2);
    bufp->fullIData(oldp+467,(vlSelf->Soc__DOT__sram__DOT__awaddr_buffer),32);
    bufp->fullBit(oldp+468,(vlSelf->Soc__DOT__sram__DOT__need_resp));
    bufp->fullIData(oldp+469,(vlSelf->Soc__DOT__sram__DOT__araddr),32);
    bufp->fullBit(oldp+470,(vlSelf->Soc__DOT__sram__DOT__need_read));
    bufp->fullBit(oldp+471,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN));
    bufp->fullIData(oldp+472,(vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr),32);
    bufp->fullBit(oldp+473,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1));
    bufp->fullQData(oldp+474,(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0)
                                ? 0ULL : ((IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_req_valid_T_5)
                                           ? vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata
                                           : ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h02c05ceb__0)
                                               ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_data
                                               : ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h8b66eaf6__0)
                                                   ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_data
                                                   : 0ULL))))),64);
    bufp->fullCData(oldp+476,(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0)
                                ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_req_valid_T_5)
                                         ? (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask)
                                         : ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h02c05ceb__0)
                                             ? (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask)
                                             : ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h8b66eaf6__0)
                                                 ? (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask)
                                                 : 0U))))),8);
    bufp->fullBit(oldp+477,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_2));
    bufp->fullIData(oldp+478,(((1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                      | ((~ ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                             & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h8b4a72cf__0))) 
                                         | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)))))
                                ? 0U : vlSelf->Soc__DOT__core__DOT__arbitor__DOT___addr_T_6)),32);
    bufp->fullBit(oldp+479,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_3));
    bufp->fullQData(oldp+480,(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata),64);
    bufp->fullCData(oldp+482,(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask),8);
    bufp->fullQData(oldp+483,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_data),64);
    bufp->fullCData(oldp+485,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask),8);
    bufp->fullQData(oldp+486,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_data),64);
    bufp->fullCData(oldp+488,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask),8);
    bufp->fullBit(oldp+489,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_req_valid_T_5));
    bufp->fullCData(oldp+490,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state),2);
    bufp->fullIData(oldp+491,(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc),32);
    bufp->fullBit(oldp+492,(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid));
    bufp->fullQData(oldp+493,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data),64);
    bufp->fullBit(oldp+495,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_14));
    bufp->fullBit(oldp+496,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16));
    bufp->fullBit(oldp+497,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20));
    bufp->fullQData(oldp+498,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data),64);
    bufp->fullBit(oldp+500,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_26));
    bufp->fullBit(oldp+501,(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid));
    bufp->fullQData(oldp+502,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data),64);
    bufp->fullBit(oldp+504,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3));
    bufp->fullBit(oldp+505,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0));
    bufp->fullSData(oldp+506,((0x1ffU & ((IData)(1U) 
                                         + (0x1feU 
                                            & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                               >> 2U))))),9);
    bufp->fullBit(oldp+507,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_14));
    bufp->fullBit(oldp+508,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16));
    bufp->fullBit(oldp+509,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20));
    bufp->fullQData(oldp+510,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data),64);
    bufp->fullBit(oldp+512,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_26));
    bufp->fullSData(oldp+513,((0x1feU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                         >> 2U))),9);
    bufp->fullBit(oldp+514,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_valid));
    bufp->fullBit(oldp+515,(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_stall));
    bufp->fullQData(oldp+516,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T),64);
    bufp->fullIData(oldp+518,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc),32);
    bufp->fullBit(oldp+519,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_stall));
    bufp->fullBit(oldp+520,(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush));
    bufp->fullBit(oldp+521,(vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall));
    bufp->fullQData(oldp+522,(vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata),64);
    bufp->fullBit(oldp+524,(vlSelf->clock));
    bufp->fullBit(oldp+525,(vlSelf->reset));
    __Vtemp_h13cb1596__0[0U] = 0U;
    __Vtemp_h13cb1596__0[1U] = 0U;
    __Vtemp_h13cb1596__0[2U] = 0U;
    __Vtemp_h13cb1596__0[3U] = 0U;
    __Vtemp_h13cb1596__0[4U] = 0U;
    __Vtemp_h13cb1596__0[5U] = 0U;
    __Vtemp_h13cb1596__0[6U] = (IData)(((1U & ((~ (
                                                   (3U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4) 
                                                      & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer)))) 
                                               | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hfea5ad76__0)))
                                         ? 0ULL : vlSelf->Soc__DOT__sram__DOT__rdata));
    __Vtemp_h13cb1596__0[7U] = (IData)((((1U & ((~ 
                                                 ((3U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4) 
                                                     & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer)))) 
                                                | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hfea5ad76__0)))
                                          ? 0ULL : vlSelf->Soc__DOT__sram__DOT__rdata) 
                                        >> 0x20U));
    bufp->fullQData(oldp+526,((((QData)((IData)(__Vtemp_h13cb1596__0[
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
                                                              __Vtemp_h13cb1596__0[
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
                                                     __Vtemp_h13cb1596__0[
                                                     (6U 
                                                      & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                         << 1U))])) 
                                     >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 6U)))))),64);
    bufp->fullBit(oldp+528,(vlSelf->Soc__DOT____Vcellinp__sram__ARESETn));
    bufp->fullIData(oldp+529,((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1) 
                                & ((IData)(vlSelf->Soc__DOT__sram__DOT__wready) 
                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN) 
                                      & (IData)(vlSelf->Soc__DOT__sram__DOT__awready))))
                                ? vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr
                                : vlSelf->Soc__DOT__sram__DOT__awaddr_buffer)),32);
    bufp->fullBit(oldp+530,(0U));
    bufp->fullSData(oldp+531,(0U),9);
    bufp->fullBit(oldp+532,(1U));
    bufp->fullQData(oldp+533,(0ULL),64);
    bufp->fullCData(oldp+535,(0U),8);
    bufp->fullCData(oldp+536,(0U),5);
    bufp->fullCData(oldp+537,(0U),3);
}
