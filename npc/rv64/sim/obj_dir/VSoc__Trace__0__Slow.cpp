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
    tracep->declBit(c+582,"clock", false,-1);
    tracep->declBit(c+583,"reset", false,-1);
    tracep->pushNamePrefix("Soc ");
    tracep->declBit(c+582,"clock", false,-1);
    tracep->declBit(c+583,"reset", false,-1);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+582,"clock", false,-1);
    tracep->declBit(c+583,"reset", false,-1);
    tracep->declBit(c+444,"io_AXI_Interface_aw_ready", false,-1);
    tracep->declBit(c+445,"io_AXI_Interface_w_ready", false,-1);
    tracep->declBit(c+446,"io_AXI_Interface_b_valid", false,-1);
    tracep->declBit(c+447,"io_AXI_Interface_ar_ready", false,-1);
    tracep->declBit(c+448,"io_AXI_Interface_r_valid", false,-1);
    tracep->declQuad(c+449,"io_AXI_Interface_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+457,"io_AXI_Interface_aw_valid", false,-1);
    tracep->declBus(c+458,"io_AXI_Interface_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+459,"io_AXI_Interface_w_valid", false,-1);
    tracep->declQuad(c+460,"io_AXI_Interface_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+462,"io_AXI_Interface_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+463,"io_AXI_Interface_ar_valid", false,-1);
    tracep->declBus(c+464,"io_AXI_Interface_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+465,"io_AXI_Interface_r_ready", false,-1);
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
    tracep->declQuad(c+466,"dereg_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+468,"dereg_ld_type", false,-1, 2,0);
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
    tracep->declBit(c+582,"clk", false,-1);
    tracep->declBit(c+583,"rst", false,-1);
    tracep->declBus(c+552,"pc", false,-1, 31,0);
    tracep->declBit(c+39,"pc_req", false,-1);
    tracep->declBus(c+469,"inst", false,-1, 31,0);
    tracep->declBit(c+434,"inst_valid", false,-1);
    tracep->declBit(c+470,"load_use", false,-1);
    tracep->declQuad(c+2,"op_a", false,-1, 63,0);
    tracep->declQuad(c+4,"op_b", false,-1, 63,0);
    tracep->declQuad(c+40,"result", false,-1, 63,0);
    tracep->declBit(c+42,"br_yes", false,-1);
    tracep->declBit(c+394,"mem_access", false,-1);
    tracep->declQuad(c+471,"mem_addr", false,-1, 63,0);
    tracep->declBus(c+32,"rd", false,-1, 4,0);
    tracep->declQuad(c+30,"reg_wdata", false,-1, 63,0);
    tracep->declBit(c+435,"reg_wen", false,-1);
    tracep->declBit(c+553,"csr_wen", false,-1);
    tracep->declQuad(c+34,"csr_wdata", false,-1, 63,0);
    tracep->declBus(c+37,"csr_waddr", false,-1, 11,0);
    tracep->declBit(c+554,"sdb_stall", false,-1);
    tracep->declBus(c+43,"trap_state", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Dcache ");
    tracep->declBit(c+582,"clock", false,-1);
    tracep->declBit(c+583,"reset", false,-1);
    tracep->declBit(c+473,"io_cpu_req_valid", false,-1);
    tracep->declBit(c+595,"io_cpu_req_bits_inst_type", false,-1);
    tracep->declBus(c+474,"io_cpu_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+466,"io_cpu_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+475,"io_cpu_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+555,"io_axi_resp_valid", false,-1);
    tracep->declQuad(c+556,"io_axi_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+44,"io_cpu_resp_valid", false,-1);
    tracep->declQuad(c+476,"io_cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+45,"io_axi_req_valid", false,-1);
    tracep->declBit(c+46,"io_axi_req_bits_rw", false,-1);
    tracep->declBus(c+47,"io_axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+478,"io_axi_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+480,"io_axi_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+473,"io_fccache_req", false,-1);
    tracep->declBus(c+48,"io_fccache_state", false,-1, 2,0);
    tracep->declBus(c+475,"io_fccache_mask", false,-1, 7,0);
    tracep->declBit(c+481,"io_fccache_hit", false,-1);
    tracep->declBit(c+44,"io_fccache_cpu_valid", false,-1);
    tracep->declBit(c+555,"io_fccache_axi_valid", false,-1);
    tracep->declBus(c+48,"state", false,-1, 2,0);
    tracep->declBus(c+49,"tag", false,-1, 20,0);
    tracep->declBus(c+50,"index", false,-1, 7,0);
    tracep->declBus(c+51,"offset", false,-1, 2,0);
    tracep->declArray(c+52,"valid", false,-1, 511,0);
    tracep->declArray(c+68,"dirty", false,-1, 511,0);
    tracep->declArray(c+84,"replace", false,-1, 511,0);
    tracep->declBit(c+482,"hit0", false,-1);
    tracep->declBit(c+395,"hit1", false,-1);
    tracep->declQuad(c+483,"DataOneArray", false,-1, 63,0);
    tracep->declBit(c+396,"DataOneArrayRen", false,-1);
    tracep->declBus(c+397,"DataOneArrayAddr", false,-1, 31,0);
    tracep->declBit(c+485,"inDataOneArray", false,-1);
    tracep->declBit(c+100,"victim", false,-1);
    tracep->declBus(c+101,"addr", false,-1, 31,0);
    tracep->declQuad(c+102,"data", false,-1, 63,0);
    tracep->declBus(c+104,"mask", false,-1, 7,0);
    tracep->declBit(c+105,"inst_type", false,-1);
    tracep->declBit(c+106,"whitNum", false,-1);
    tracep->declBit(c+44,"cpu_resp_valid", false,-1);
    tracep->declQuad(c+107,"cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+45,"axi_req_valid", false,-1);
    tracep->declBit(c+46,"axi_req_bits_rw", false,-1);
    tracep->declBus(c+47,"axi_req_bits_addr", false,-1, 31,0);
    tracep->declBus(c+480,"axi_req_bits_mask", false,-1, 7,0);
    tracep->pushNamePrefix("DataArray_ext ");
    tracep->declBus(c+398,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+396,"R0_en", false,-1);
    tracep->declBit(c+582,"R0_clk", false,-1);
    tracep->declBus(c+109,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+558,"W0_en", false,-1);
    tracep->declBit(c+582,"W0_clk", false,-1);
    tracep->declQuad(c+556,"W0_data", false,-1, 63,0);
    tracep->declBus(c+110,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+559,"W1_en", false,-1);
    tracep->declBit(c+582,"W1_clk", false,-1);
    tracep->declQuad(c+556,"W1_data", false,-1, 63,0);
    tracep->declBus(c+109,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+111,"W2_en", false,-1);
    tracep->declBit(c+582,"W2_clk", false,-1);
    tracep->declQuad(c+112,"W2_data", false,-1, 63,0);
    tracep->declBus(c+110,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+114,"W3_en", false,-1);
    tracep->declBit(c+582,"W3_clk", false,-1);
    tracep->declQuad(c+112,"W3_data", false,-1, 63,0);
    tracep->declBus(c+109,"W4_addr", false,-1, 8,0);
    tracep->declBit(c+560,"W4_en", false,-1);
    tracep->declBit(c+582,"W4_clk", false,-1);
    tracep->declQuad(c+561,"W4_data", false,-1, 63,0);
    tracep->declBus(c+110,"W5_addr", false,-1, 8,0);
    tracep->declBit(c+563,"W5_en", false,-1);
    tracep->declBit(c+582,"W5_clk", false,-1);
    tracep->declQuad(c+561,"W5_data", false,-1, 63,0);
    tracep->declQuad(c+483,"R0_data", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("TagArray_ext ");
    tracep->declBus(c+115,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+116,"R0_en", false,-1);
    tracep->declBit(c+582,"R0_clk", false,-1);
    tracep->declBus(c+117,"R1_addr", false,-1, 8,0);
    tracep->declBit(c+118,"R1_en", false,-1);
    tracep->declBit(c+582,"R1_clk", false,-1);
    tracep->declBus(c+115,"R2_addr", false,-1, 8,0);
    tracep->declBit(c+119,"R2_en", false,-1);
    tracep->declBit(c+582,"R2_clk", false,-1);
    tracep->declBus(c+117,"R3_addr", false,-1, 8,0);
    tracep->declBit(c+120,"R3_en", false,-1);
    tracep->declBit(c+582,"R3_clk", false,-1);
    tracep->declBus(c+486,"R4_addr", false,-1, 8,0);
    tracep->declBit(c+596,"R4_en", false,-1);
    tracep->declBit(c+582,"R4_clk", false,-1);
    tracep->declBus(c+487,"R5_addr", false,-1, 8,0);
    tracep->declBit(c+596,"R5_en", false,-1);
    tracep->declBit(c+582,"R5_clk", false,-1);
    tracep->declBus(c+109,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+558,"W0_en", false,-1);
    tracep->declBit(c+582,"W0_clk", false,-1);
    tracep->declBus(c+49,"W0_data", false,-1, 20,0);
    tracep->declBus(c+110,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+559,"W1_en", false,-1);
    tracep->declBit(c+582,"W1_clk", false,-1);
    tracep->declBus(c+49,"W1_data", false,-1, 20,0);
    tracep->declBus(c+109,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+560,"W2_en", false,-1);
    tracep->declBit(c+582,"W2_clk", false,-1);
    tracep->declBus(c+49,"W2_data", false,-1, 20,0);
    tracep->declBus(c+110,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+563,"W3_en", false,-1);
    tracep->declBit(c+582,"W3_clk", false,-1);
    tracep->declBus(c+49,"W3_data", false,-1, 20,0);
    tracep->declBus(c+121,"R0_data", false,-1, 20,0);
    tracep->declBus(c+122,"R1_data", false,-1, 20,0);
    tracep->declBus(c+123,"R2_data", false,-1, 20,0);
    tracep->declBus(c+124,"R3_data", false,-1, 20,0);
    tracep->declBus(c+399,"R4_data", false,-1, 20,0);
    tracep->declBus(c+400,"R5_data", false,-1, 20,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Icache ");
    tracep->declBit(c+582,"clock", false,-1);
    tracep->declBit(c+583,"reset", false,-1);
    tracep->declBit(c+39,"io_cpu_req_valid", false,-1);
    tracep->declBit(c+596,"io_cpu_req_bits_inst_type", false,-1);
    tracep->declBus(c+552,"io_cpu_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+597,"io_cpu_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+599,"io_cpu_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+564,"io_axi_resp_valid", false,-1);
    tracep->declQuad(c+565,"io_axi_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+125,"io_cpu_resp_valid", false,-1);
    tracep->declQuad(c+488,"io_cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+126,"io_axi_req_valid", false,-1);
    tracep->declBit(c+127,"io_axi_req_bits_rw", false,-1);
    tracep->declBus(c+128,"io_axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+490,"io_axi_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+492,"io_axi_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+39,"io_fccache_req", false,-1);
    tracep->declBus(c+129,"io_fccache_state", false,-1, 2,0);
    tracep->declBus(c+599,"io_fccache_mask", false,-1, 7,0);
    tracep->declBit(c+567,"io_fccache_hit", false,-1);
    tracep->declBit(c+125,"io_fccache_cpu_valid", false,-1);
    tracep->declBit(c+564,"io_fccache_axi_valid", false,-1);
    tracep->declBus(c+129,"state", false,-1, 2,0);
    tracep->declBus(c+130,"tag", false,-1, 20,0);
    tracep->declBus(c+131,"index", false,-1, 7,0);
    tracep->declBus(c+132,"offset", false,-1, 2,0);
    tracep->declArray(c+133,"valid", false,-1, 511,0);
    tracep->declArray(c+149,"dirty", false,-1, 511,0);
    tracep->declArray(c+165,"replace", false,-1, 511,0);
    tracep->declBit(c+568,"hit0", false,-1);
    tracep->declBit(c+436,"hit1", false,-1);
    tracep->declQuad(c+493,"DataOneArray", false,-1, 63,0);
    tracep->declBit(c+437,"DataOneArrayRen", false,-1);
    tracep->declBus(c+438,"DataOneArrayAddr", false,-1, 31,0);
    tracep->declBit(c+495,"inDataOneArray", false,-1);
    tracep->declBit(c+181,"victim", false,-1);
    tracep->declBus(c+182,"addr", false,-1, 31,0);
    tracep->declQuad(c+183,"data", false,-1, 63,0);
    tracep->declBus(c+185,"mask", false,-1, 7,0);
    tracep->declBit(c+186,"inst_type", false,-1);
    tracep->declBit(c+187,"whitNum", false,-1);
    tracep->declBit(c+125,"cpu_resp_valid", false,-1);
    tracep->declQuad(c+188,"cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+126,"axi_req_valid", false,-1);
    tracep->declBit(c+127,"axi_req_bits_rw", false,-1);
    tracep->declBus(c+128,"axi_req_bits_addr", false,-1, 31,0);
    tracep->declBus(c+492,"axi_req_bits_mask", false,-1, 7,0);
    tracep->pushNamePrefix("DataArray_ext ");
    tracep->declBus(c+439,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+437,"R0_en", false,-1);
    tracep->declBit(c+582,"R0_clk", false,-1);
    tracep->declBus(c+190,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+569,"W0_en", false,-1);
    tracep->declBit(c+582,"W0_clk", false,-1);
    tracep->declQuad(c+565,"W0_data", false,-1, 63,0);
    tracep->declBus(c+191,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+570,"W1_en", false,-1);
    tracep->declBit(c+582,"W1_clk", false,-1);
    tracep->declQuad(c+565,"W1_data", false,-1, 63,0);
    tracep->declBus(c+190,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+192,"W2_en", false,-1);
    tracep->declBit(c+582,"W2_clk", false,-1);
    tracep->declQuad(c+193,"W2_data", false,-1, 63,0);
    tracep->declBus(c+191,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+195,"W3_en", false,-1);
    tracep->declBit(c+582,"W3_clk", false,-1);
    tracep->declQuad(c+193,"W3_data", false,-1, 63,0);
    tracep->declBus(c+190,"W4_addr", false,-1, 8,0);
    tracep->declBit(c+571,"W4_en", false,-1);
    tracep->declBit(c+582,"W4_clk", false,-1);
    tracep->declQuad(c+572,"W4_data", false,-1, 63,0);
    tracep->declBus(c+191,"W5_addr", false,-1, 8,0);
    tracep->declBit(c+574,"W5_en", false,-1);
    tracep->declBit(c+582,"W5_clk", false,-1);
    tracep->declQuad(c+572,"W5_data", false,-1, 63,0);
    tracep->declQuad(c+493,"R0_data", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("TagArray_ext ");
    tracep->declBus(c+196,"R0_addr", false,-1, 8,0);
    tracep->declBit(c+197,"R0_en", false,-1);
    tracep->declBit(c+582,"R0_clk", false,-1);
    tracep->declBus(c+198,"R1_addr", false,-1, 8,0);
    tracep->declBit(c+199,"R1_en", false,-1);
    tracep->declBit(c+582,"R1_clk", false,-1);
    tracep->declBus(c+196,"R2_addr", false,-1, 8,0);
    tracep->declBit(c+200,"R2_en", false,-1);
    tracep->declBit(c+582,"R2_clk", false,-1);
    tracep->declBus(c+198,"R3_addr", false,-1, 8,0);
    tracep->declBit(c+201,"R3_en", false,-1);
    tracep->declBit(c+582,"R3_clk", false,-1);
    tracep->declBus(c+575,"R4_addr", false,-1, 8,0);
    tracep->declBit(c+596,"R4_en", false,-1);
    tracep->declBit(c+582,"R4_clk", false,-1);
    tracep->declBus(c+576,"R5_addr", false,-1, 8,0);
    tracep->declBit(c+596,"R5_en", false,-1);
    tracep->declBit(c+582,"R5_clk", false,-1);
    tracep->declBus(c+190,"W0_addr", false,-1, 8,0);
    tracep->declBit(c+569,"W0_en", false,-1);
    tracep->declBit(c+582,"W0_clk", false,-1);
    tracep->declBus(c+130,"W0_data", false,-1, 20,0);
    tracep->declBus(c+191,"W1_addr", false,-1, 8,0);
    tracep->declBit(c+570,"W1_en", false,-1);
    tracep->declBit(c+582,"W1_clk", false,-1);
    tracep->declBus(c+130,"W1_data", false,-1, 20,0);
    tracep->declBus(c+190,"W2_addr", false,-1, 8,0);
    tracep->declBit(c+571,"W2_en", false,-1);
    tracep->declBit(c+582,"W2_clk", false,-1);
    tracep->declBus(c+130,"W2_data", false,-1, 20,0);
    tracep->declBus(c+191,"W3_addr", false,-1, 8,0);
    tracep->declBit(c+574,"W3_en", false,-1);
    tracep->declBit(c+582,"W3_clk", false,-1);
    tracep->declBus(c+130,"W3_data", false,-1, 20,0);
    tracep->declBus(c+202,"R0_data", false,-1, 20,0);
    tracep->declBus(c+203,"R1_data", false,-1, 20,0);
    tracep->declBus(c+204,"R2_data", false,-1, 20,0);
    tracep->declBus(c+205,"R3_data", false,-1, 20,0);
    tracep->declBus(c+440,"R4_data", false,-1, 20,0);
    tracep->declBus(c+441,"R5_data", false,-1, 20,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("arbitor ");
    tracep->declBit(c+582,"clock", false,-1);
    tracep->declBit(c+583,"reset", false,-1);
    tracep->declBit(c+584,"io_master0_req_valid", false,-1);
    tracep->declBit(c+496,"io_master0_req_bits_rw", false,-1);
    tracep->declBus(c+497,"io_master0_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+498,"io_master0_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+500,"io_master0_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+45,"io_master1_req_valid", false,-1);
    tracep->declBit(c+46,"io_master1_req_bits_rw", false,-1);
    tracep->declBus(c+47,"io_master1_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+478,"io_master1_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+480,"io_master1_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+126,"io_master2_req_valid", false,-1);
    tracep->declBit(c+127,"io_master2_req_bits_rw", false,-1);
    tracep->declBus(c+128,"io_master2_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+490,"io_master2_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+492,"io_master2_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+444,"io_AXI_O_aw_ready", false,-1);
    tracep->declBit(c+445,"io_AXI_O_w_ready", false,-1);
    tracep->declBit(c+446,"io_AXI_O_b_valid", false,-1);
    tracep->declBit(c+447,"io_AXI_O_ar_ready", false,-1);
    tracep->declBit(c+448,"io_AXI_O_r_valid", false,-1);
    tracep->declQuad(c+449,"io_AXI_O_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+577,"io_master0_resp_valid", false,-1);
    tracep->declQuad(c+585,"io_master0_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+555,"io_master1_resp_valid", false,-1);
    tracep->declQuad(c+556,"io_master1_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+564,"io_master2_resp_valid", false,-1);
    tracep->declQuad(c+565,"io_master2_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+457,"io_AXI_O_aw_valid", false,-1);
    tracep->declBus(c+458,"io_AXI_O_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+459,"io_AXI_O_w_valid", false,-1);
    tracep->declQuad(c+460,"io_AXI_O_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+462,"io_AXI_O_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+463,"io_AXI_O_ar_valid", false,-1);
    tracep->declBus(c+464,"io_AXI_O_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+465,"io_AXI_O_r_ready", false,-1);
    tracep->declBus(c+578,"master_choose", false,-1, 3,0);
    tracep->declBus(c+501,"choose_buffer", false,-1, 3,0);
    tracep->declBus(c+502,"state", false,-1, 1,0);
    tracep->declBit(c+206,"aw_comp", false,-1);
    tracep->declBit(c+207,"w_comp", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("clint ");
    tracep->declBit(c+582,"clock", false,-1);
    tracep->declBit(c+583,"reset", false,-1);
    tracep->declBit(c+503,"io_clex_valid", false,-1);
    tracep->declBus(c+468,"io_clex_ld_type", false,-1, 2,0);
    tracep->declQuad(c+208,"io_clex_raddr", false,-1, 63,0);
    tracep->declBus(c+13,"io_clex_sd_type", false,-1, 2,0);
    tracep->declQuad(c+208,"io_clex_waddr", false,-1, 63,0);
    tracep->declBus(c+475,"io_clex_wmask", false,-1, 7,0);
    tracep->declQuad(c+466,"io_clex_wdata", false,-1, 63,0);
    tracep->declBit(c+210,"io_clmem_Clrvalue_valid", false,-1);
    tracep->declQuad(c+211,"io_clmem_Clrvalue_bits", false,-1, 63,0);
    tracep->declBit(c+213,"io_timer_int", false,-1);
    tracep->declBus(c+214,"MSIP", false,-1, 31,0);
    tracep->declQuad(c+215,"MTIMECMP", false,-1, 63,0);
    tracep->declQuad(c+217,"MTIME", false,-1, 63,0);
    tracep->declQuad(c+211,"rvalue_buf", false,-1, 63,0);
    tracep->declBit(c+210,"valid_buf", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csrs ");
    tracep->declBit(c+582,"clock", false,-1);
    tracep->declBit(c+583,"reset", false,-1);
    tracep->declBus(c+504,"io_CSRDe_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+37,"io_CSRWb_rd", false,-1, 11,0);
    tracep->declBit(c+553,"io_CSRWb_csr_wen", false,-1);
    tracep->declQuad(c+34,"io_CSRWb_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+219,"io_CSRTr_rd", false,-1, 11,0);
    tracep->declBit(c+220,"io_CSRTr_csr_wen", false,-1);
    tracep->declQuad(c+221,"io_CSRTr_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+213,"io_timer_int", false,-1);
    tracep->declQuad(c+401,"io_CSRDe_csr_rdata", false,-1, 63,0);
    tracep->declQuad(c+223,"io_CSRTr_MTVEC", false,-1, 63,0);
    tracep->declQuad(c+225,"io_CSRTr_MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+227,"io_CSRTr_MEPC", false,-1, 63,0);
    tracep->declQuad(c+229,"io_CSRTr_MIE", false,-1, 63,0);
    tracep->declQuad(c+231,"io_CSRTr_MIP", false,-1, 63,0);
    tracep->declQuad(c+233,"io_CSRTr_MSTATUS", false,-1, 63,0);
    tracep->declQuad(c+223,"MTVEC", false,-1, 63,0);
    tracep->declQuad(c+225,"MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+227,"MEPC", false,-1, 63,0);
    tracep->declQuad(c+229,"MIE", false,-1, 63,0);
    tracep->declQuad(c+231,"MIP", false,-1, 63,0);
    tracep->declQuad(c+233,"MSTATUS", false,-1, 63,0);
    tracep->declQuad(c+235,"MSCRATCH", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("decode ");
    tracep->declBit(c+582,"clock", false,-1);
    tracep->declBit(c+583,"reset", false,-1);
    tracep->declBit(c+125,"io_inst_valid", false,-1);
    tracep->declQuad(c+488,"io_inst_bits_data", false,-1, 63,0);
    tracep->declBus(c+1,"io_fdio_pc", false,-1, 31,0);
    tracep->declQuad(c+403,"io_rfio_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+405,"io_rfio_reg2_rdata", false,-1, 63,0);
    tracep->declBit(c+42,"io_branch", false,-1);
    tracep->declBit(c+579,"io_stall", false,-1);
    tracep->declBit(c+580,"io_flush", false,-1);
    tracep->declBit(c+505,"io_fwde_fw_sel1", false,-1);
    tracep->declBit(c+506,"io_fwde_fw_sel2", false,-1);
    tracep->declQuad(c+407,"io_fwde_fw_data1", false,-1, 63,0);
    tracep->declQuad(c+409,"io_fwde_fw_data2", false,-1, 63,0);
    tracep->declBit(c+507,"io_fwde_csr_fw_sel", false,-1);
    tracep->declQuad(c+411,"io_fwde_csr_fw_data", false,-1, 63,0);
    tracep->declQuad(c+401,"io_csrs_csr_rdata", false,-1, 63,0);
    tracep->declBus(c+508,"io_rfio_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+509,"io_rfio_reg2_raddr", false,-1, 4,0);
    tracep->declQuad(c+413,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+510,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+512,"io_deio_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+513,"io_deio_branch_type", false,-1);
    tracep->declQuad(c+415,"io_deio_branch_addr", false,-1, 63,0);
    tracep->declBus(c+514,"io_deio_alu_op", false,-1, 5,0);
    tracep->declBus(c+417,"io_deio_shamt", false,-1, 5,0);
    tracep->declBus(c+515,"io_deio_wb_type", false,-1, 1,0);
    tracep->declBus(c+516,"io_deio_sd_type", false,-1, 2,0);
    tracep->declQuad(c+517,"io_deio_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+519,"io_deio_ld_type", false,-1, 2,0);
    tracep->declQuad(c+520,"io_deio_csr_t", false,-1, 63,0);
    tracep->declBus(c+522,"io_deio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+523,"io_deio_csr_wen", false,-1);
    tracep->declBit(c+587,"io_deio_has_inst", false,-1);
    tracep->declBit(c+524,"io_jump_flag", false,-1);
    tracep->declBus(c+418,"io_jump_pc", false,-1, 31,0);
    tracep->declBit(c+470,"io_load_use", false,-1);
    tracep->declBus(c+508,"io_fwde_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+509,"io_fwde_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+504,"io_fwde_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+504,"io_csrs_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+525,"inst", false,-1, 31,0);
    tracep->declBus(c+237,"lu_rd", false,-1, 4,0);
    tracep->pushNamePrefix("cu ");
    tracep->declBus(c+525,"io_inst", false,-1, 31,0);
    tracep->declBus(c+526,"io_jump_type", false,-1, 1,0);
    tracep->declBit(c+513,"io_branch_type", false,-1);
    tracep->declBus(c+527,"io_opa_type", false,-1, 1,0);
    tracep->declBus(c+528,"io_opb_type", false,-1, 2,0);
    tracep->declBus(c+529,"io_imm_type", false,-1, 2,0);
    tracep->declBus(c+514,"io_alu_op", false,-1, 5,0);
    tracep->declBus(c+515,"io_wb_type", false,-1, 1,0);
    tracep->declBus(c+516,"io_sd_type", false,-1, 2,0);
    tracep->declBus(c+519,"io_ld_type", false,-1, 2,0);
    tracep->declBus(c+530,"io_csr_type", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("eximm ");
    tracep->declBus(c+525,"io_inst", false,-1, 31,0);
    tracep->declBus(c+529,"io_imm_type", false,-1, 2,0);
    tracep->declQuad(c+531,"io_eximm", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("excute ");
    tracep->declBit(c+582,"clock", false,-1);
    tracep->declBit(c+583,"reset", false,-1);
    tracep->declQuad(c+2,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+4,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+6,"io_deio_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+7,"io_deio_branch_type", false,-1);
    tracep->declQuad(c+8,"io_deio_branch_addr", false,-1, 63,0);
    tracep->declBus(c+10,"io_deio_alu_op", false,-1, 5,0);
    tracep->declBus(c+11,"io_deio_shamt", false,-1, 5,0);
    tracep->declBus(c+12,"io_deio_wb_type", false,-1, 1,0);
    tracep->declBus(c+13,"io_deio_sd_type", false,-1, 2,0);
    tracep->declQuad(c+466,"io_deio_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+468,"io_deio_ld_type", false,-1, 2,0);
    tracep->declQuad(c+14,"io_deio_csr_t", false,-1, 63,0);
    tracep->declBus(c+16,"io_deio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+17,"io_deio_csr_wen", false,-1);
    tracep->declBit(c+18,"io_deio_has_inst", false,-1);
    tracep->declBit(c+579,"io_fcex_stall", false,-1);
    tracep->declQuad(c+40,"io_emio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+6,"io_emio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+12,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+468,"io_emio_ld_type", false,-1, 2,0);
    tracep->declBus(c+419,"io_emio_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+208,"io_emio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+17,"io_emio_csr_wen", false,-1);
    tracep->declBus(c+16,"io_emio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+18,"io_emio_has_inst", false,-1);
    tracep->declBit(c+42,"io_fcex_jump_flag", false,-1);
    tracep->declBus(c+238,"io_fcex_jump_pc", false,-1, 31,0);
    tracep->declBit(c+239,"io_fcex_mul_div", false,-1);
    tracep->declBit(c+240,"io_fcex_mul_div_valid", false,-1);
    tracep->declQuad(c+420,"io_raddr", false,-1, 63,0);
    tracep->declQuad(c+422,"io_waddr", false,-1, 63,0);
    tracep->declQuad(c+466,"io_wdata", false,-1, 63,0);
    tracep->declBus(c+475,"io_wmask", false,-1, 7,0);
    tracep->declBit(c+503,"io_cl_type", false,-1);
    tracep->declBus(c+6,"io_fwex_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+241,"io_fwex_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+243,"io_fwex_reg_we", false,-1);
    tracep->declQuad(c+208,"io_fwex_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+17,"io_fwex_csr_wen", false,-1);
    tracep->declBus(c+16,"io_fwex_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+503,"io_clex_valid", false,-1);
    tracep->declBus(c+468,"io_clex_ld_type", false,-1, 2,0);
    tracep->declQuad(c+208,"io_clex_raddr", false,-1, 63,0);
    tracep->declBus(c+13,"io_clex_sd_type", false,-1, 2,0);
    tracep->declQuad(c+208,"io_clex_waddr", false,-1, 63,0);
    tracep->declBus(c+475,"io_clex_wmask", false,-1, 7,0);
    tracep->declQuad(c+466,"io_clex_wdata", false,-1, 63,0);
    tracep->declBit(c+244,"aluvalid_buffer", false,-1);
    tracep->declQuad(c+245,"alu_buffer", false,-1, 63,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+582,"clock", false,-1);
    tracep->declBit(c+583,"reset", false,-1);
    tracep->declQuad(c+2,"io_op_a", false,-1, 63,0);
    tracep->declQuad(c+4,"io_op_b", false,-1, 63,0);
    tracep->declBus(c+10,"io_alu_op", false,-1, 5,0);
    tracep->declBus(c+11,"io_shamt", false,-1, 5,0);
    tracep->declQuad(c+208,"io_result", false,-1, 63,0);
    tracep->declBit(c+240,"io_mul_div_outvalid", false,-1);
    tracep->pushNamePrefix("BM ");
    tracep->declBit(c+582,"clock", false,-1);
    tracep->declBit(c+583,"reset", false,-1);
    tracep->declBit(c+247,"io_mul_valid", false,-1);
    tracep->declBit(c+248,"io_mulw", false,-1);
    tracep->declBus(c+249,"io_mul_signed", false,-1, 1,0);
    tracep->declQuad(c+250,"io_multiplicand", false,-1, 63,0);
    tracep->declQuad(c+252,"io_multiplier", false,-1, 63,0);
    tracep->declBit(c+254,"io_out_valid", false,-1);
    tracep->declQuad(c+255,"io_result_hi", false,-1, 63,0);
    tracep->declQuad(c+257,"io_result_lo", false,-1, 63,0);
    tracep->declBit(c+254,"out_valid", false,-1);
    tracep->declQuad(c+255,"result_hi", false,-1, 63,0);
    tracep->declQuad(c+257,"result_lo", false,-1, 63,0);
    tracep->declArray(c+259,"multiplierReg", false,-1, 66,0);
    tracep->declArray(c+262,"multiplicandReg", false,-1, 131,0);
    tracep->declArray(c+267,"resultReg", false,-1, 131,0);
    tracep->declBit(c+272,"state", false,-1);
    tracep->declBus(c+273,"shiftCounter", false,-1, 5,0);
    tracep->declBus(c+274,"total", false,-1, 5,0);
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
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("DIV ");
    tracep->declBit(c+582,"clock", false,-1);
    tracep->declBit(c+583,"reset", false,-1);
    tracep->declBit(c+275,"io_div_valid", false,-1);
    tracep->declBit(c+276,"io_divw", false,-1);
    tracep->declBit(c+277,"io_div_signed", false,-1);
    tracep->declQuad(c+278,"io_dividend", false,-1, 63,0);
    tracep->declQuad(c+280,"io_divisor", false,-1, 63,0);
    tracep->declBit(c+282,"io_out_valid", false,-1);
    tracep->declQuad(c+283,"io_quotient", false,-1, 63,0);
    tracep->declBit(c+282,"out_valid", false,-1);
    tracep->declQuad(c+283,"quotient", false,-1, 63,0);
    tracep->declArray(c+285,"partial_remainder", false,-1, 127,0);
    tracep->declArray(c+289,"sub65", false,-1, 64,0);
    tracep->declQuad(c+292,"sub33", false,-1, 32,0);
    tracep->declBit(c+294,"sign_quo", false,-1);
    tracep->declBit(c+295,"sign_rem", false,-1);
    tracep->declBus(c+296,"state", false,-1, 1,0);
    tracep->declBus(c+297,"shiftCounter", false,-1, 6,0);
    tracep->declQuad(c+298,"temp_34", false,-1, 33,0);
    tracep->declArray(c+300,"temp_66", false,-1, 65,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fc ");
    tracep->declBit(c+524,"io_fcde_jump_flag", false,-1);
    tracep->declBus(c+418,"io_fcde_jump_pc", false,-1, 31,0);
    tracep->declBit(c+470,"io_fcde_load_use", false,-1);
    tracep->declBit(c+42,"io_fcex_jump_flag", false,-1);
    tracep->declBus(c+238,"io_fcex_jump_pc", false,-1, 31,0);
    tracep->declBit(c+239,"io_fcex_mul_div", false,-1);
    tracep->declBit(c+240,"io_fcex_mul_div_valid", false,-1);
    tracep->declBit(c+424,"io_fctr_pop_NOP", false,-1);
    tracep->declBus(c+43,"io_fctr_trap_state", false,-1, 2,0);
    tracep->declBit(c+303,"io_fctr_jump_flag", false,-1);
    tracep->declBus(c+304,"io_fctr_jump_pc", false,-1, 31,0);
    tracep->declBit(c+39,"io_fcIcache_req", false,-1);
    tracep->declBus(c+129,"io_fcIcache_state", false,-1, 2,0);
    tracep->declBus(c+599,"io_fcIcache_mask", false,-1, 7,0);
    tracep->declBit(c+125,"io_fcIcache_cpu_valid", false,-1);
    tracep->declBit(c+564,"io_fcIcache_axi_valid", false,-1);
    tracep->declBit(c+473,"io_fcDcache_req", false,-1);
    tracep->declBus(c+48,"io_fcDcache_state", false,-1, 2,0);
    tracep->declBus(c+475,"io_fcDcache_mask", false,-1, 7,0);
    tracep->declBit(c+481,"io_fcDcache_hit", false,-1);
    tracep->declBit(c+555,"io_fcDcache_axi_valid", false,-1);
    tracep->declBit(c+533,"io_fcio_req", false,-1);
    tracep->declBus(c+534,"io_fcio_state", false,-1, 1,0);
    tracep->declBit(c+425,"io_fcfe_jump_flag", false,-1);
    tracep->declBus(c+535,"io_fcfe_jump_pc", false,-1, 31,0);
    tracep->declBit(c+588,"io_fcfe_flush", false,-1);
    tracep->declBit(c+581,"io_fcfe_stall", false,-1);
    tracep->declBit(c+580,"io_fcde_flush", false,-1);
    tracep->declBit(c+579,"io_fcde_stall", false,-1);
    tracep->declBit(c+579,"io_fcex_stall", false,-1);
    tracep->declBit(c+579,"io_fcmem_stall", false,-1);
    tracep->declBit(c+579,"io_fcwb_stall", false,-1);
    tracep->declBit(c+579,"io_fcio_stall", false,-1);
    tracep->declBit(c+554,"io_sdb_stall", false,-1);
    tracep->declBit(c+589,"Icache_stall", false,-1);
    tracep->declBit(c+590,"Dcache_stall", false,-1);
    tracep->declBit(c+536,"IO_stall", false,-1);
    tracep->declBit(c+305,"MULDIV_stall", false,-1);
    tracep->declBit(c+581,"SFBundle_0", false,-1);
    tracep->declBit(c+579,"SFBundle_1", false,-1);
    tracep->declBit(c+579,"SFBundle_2", false,-1);
    tracep->declBit(c+579,"SFBundle_4", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+582,"clock", false,-1);
    tracep->declBit(c+583,"reset", false,-1);
    tracep->declBit(c+425,"io_fcfe_jump_flag", false,-1);
    tracep->declBus(c+535,"io_fcfe_jump_pc", false,-1, 31,0);
    tracep->declBit(c+588,"io_fcfe_flush", false,-1);
    tracep->declBit(c+581,"io_fcfe_stall", false,-1);
    tracep->declBus(c+552,"io_fdio_pc", false,-1, 31,0);
    tracep->declBit(c+39,"io_pc_valid", false,-1);
    tracep->declBus(c+552,"io_pc_bits", false,-1, 31,0);
    tracep->declBit(c+39,"started", false,-1);
    tracep->declBus(c+306,"pc", false,-1, 31,0);
    tracep->declBus(c+307,"old_pc", false,-1, 31,0);
    tracep->declBus(c+591,"next_pc", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fw ");
    tracep->declBus(c+508,"io_fwde_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+509,"io_fwde_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+504,"io_fwde_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+6,"io_fwex_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+241,"io_fwex_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+243,"io_fwex_reg_we", false,-1);
    tracep->declQuad(c+208,"io_fwex_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+17,"io_fwex_csr_wen", false,-1);
    tracep->declBus(c+16,"io_fwex_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+21,"io_fwmem_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+537,"io_fwmem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+308,"io_fwmem_reg_we", false,-1);
    tracep->declQuad(c+25,"io_fwmem_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+27,"io_fwmem_csr_wen", false,-1);
    tracep->declBus(c+28,"io_fwmem_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+32,"io_fwwb_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+30,"io_fwwb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+309,"io_fwwb_reg_we", false,-1);
    tracep->declQuad(c+34,"io_fwwb_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+36,"io_fwwb_csr_wen", false,-1);
    tracep->declBus(c+37,"io_fwwb_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+505,"io_fwde_fw_sel1", false,-1);
    tracep->declBit(c+506,"io_fwde_fw_sel2", false,-1);
    tracep->declQuad(c+407,"io_fwde_fw_data1", false,-1, 63,0);
    tracep->declQuad(c+409,"io_fwde_fw_data2", false,-1, 63,0);
    tracep->declBit(c+507,"io_fwde_csr_fw_sel", false,-1);
    tracep->declQuad(c+411,"io_fwde_csr_fw_data", false,-1, 63,0);
    tracep->declBit(c+539,"reg1_ex_hazard", false,-1);
    tracep->declBit(c+540,"reg2_ex_hazard", false,-1);
    tracep->declBit(c+541,"reg1_mem_hazard", false,-1);
    tracep->declBit(c+542,"reg2_mem_hazard", false,-1);
    tracep->declBit(c+543,"reg1_wb_hazard", false,-1);
    tracep->declBit(c+544,"reg2_wb_hazard", false,-1);
    tracep->declBit(c+545,"csr_ex_harzard", false,-1);
    tracep->declBit(c+546,"csr_mem_harzard", false,-1);
    tracep->declBit(c+547,"csr_wb_harzard", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("interact ");
    tracep->declBus(c+592,"inst", false,-1, 31,0);
    tracep->declBit(c+582,"clk", false,-1);
    tracep->declBit(c+583,"rst", false,-1);
    tracep->declBit(c+310,"ebreak_flag", false,-1);
    tracep->declBus(c+311,"over_count", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ioformem ");
    tracep->declBit(c+582,"clock", false,-1);
    tracep->declBit(c+583,"reset", false,-1);
    tracep->declBit(c+577,"io_axi_resp_valid", false,-1);
    tracep->declQuad(c+585,"io_axi_resp_bits_data", false,-1, 63,0);
    tracep->declBus(c+426,"io_excute_waddr", false,-1, 31,0);
    tracep->declBus(c+427,"io_excute_raddr", false,-1, 31,0);
    tracep->declQuad(c+466,"io_excute_wdata", false,-1, 63,0);
    tracep->declBus(c+475,"io_excute_wmask", false,-1, 7,0);
    tracep->declBit(c+548,"io_excute_load", false,-1);
    tracep->declBit(c+312,"io_excute_store", false,-1);
    tracep->declBit(c+579,"io_fc_stall", false,-1);
    tracep->declBit(c+584,"io_axi_req_valid", false,-1);
    tracep->declBit(c+496,"io_axi_req_bits_rw", false,-1);
    tracep->declBus(c+497,"io_axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+498,"io_axi_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+500,"io_axi_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+313,"io_mem_data_valid", false,-1);
    tracep->declQuad(c+314,"io_mem_data_bits", false,-1, 63,0);
    tracep->declBit(c+533,"io_fc_req", false,-1);
    tracep->declBus(c+534,"io_fc_state", false,-1, 1,0);
    tracep->declBus(c+534,"state", false,-1, 1,0);
    tracep->declBit(c+549,"axi_req_valid", false,-1);
    tracep->declBit(c+496,"axi_req_bits_rw", false,-1);
    tracep->declBus(c+497,"axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+498,"axi_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+500,"axi_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+313,"mem_data_valid", false,-1);
    tracep->declQuad(c+314,"mem_data_bits", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+582,"clock", false,-1);
    tracep->declBit(c+583,"reset", false,-1);
    tracep->declQuad(c+19,"io_emio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+21,"io_emio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+22,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+23,"io_emio_ld_type", false,-1, 2,0);
    tracep->declBus(c+24,"io_emio_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+25,"io_emio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+27,"io_emio_csr_wen", false,-1);
    tracep->declBus(c+28,"io_emio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+29,"io_emio_has_inst", false,-1);
    tracep->declBit(c+44,"io_rdata_valid", false,-1);
    tracep->declQuad(c+476,"io_rdata_bits_data", false,-1, 63,0);
    tracep->declBit(c+313,"io_rdata_io_data_valid", false,-1);
    tracep->declQuad(c+314,"io_rdata_io_data_bits", false,-1, 63,0);
    tracep->declBit(c+210,"io_clmem_Clrvalue_valid", false,-1);
    tracep->declQuad(c+211,"io_clmem_Clrvalue_bits", false,-1, 63,0);
    tracep->declBit(c+579,"io_stall", false,-1);
    tracep->declQuad(c+537,"io_mwio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+21,"io_mwio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+22,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declQuad(c+25,"io_mwio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+27,"io_mwio_csr_wen", false,-1);
    tracep->declBus(c+28,"io_mwio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+29,"io_mwio_has_inst", false,-1);
    tracep->declBus(c+21,"io_fwmem_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+537,"io_fwmem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+308,"io_fwmem_reg_we", false,-1);
    tracep->declQuad(c+25,"io_fwmem_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+27,"io_fwmem_csr_wen", false,-1);
    tracep->declBus(c+28,"io_fwmem_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+316,"clmemvalid_buffer", false,-1);
    tracep->declBit(c+317,"rdatavalid_buffer", false,-1);
    tracep->declBit(c+318,"rdataiovalid_buffer", false,-1);
    tracep->declQuad(c+319,"clmem_buffer", false,-1, 63,0);
    tracep->declQuad(c+321,"rdata_buffer", false,-1, 63,0);
    tracep->declQuad(c+323,"rdataio_buffer", false,-1, 63,0);
    tracep->declQuad(c+550,"get_value", false,-1, 63,0);
    tracep->declQuad(c+428,"rvalue", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+582,"clock", false,-1);
    tracep->declBus(c+508,"io_RfDe_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+509,"io_RfDe_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+32,"io_RfWb_rd", false,-1, 4,0);
    tracep->declBit(c+435,"io_RfWb_reg_wen", false,-1);
    tracep->declQuad(c+30,"io_RfWb_reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+403,"io_RfDe_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+405,"io_RfDe_reg2_rdata", false,-1, 63,0);
    tracep->pushNamePrefix("regs_ext ");
    tracep->declBus(c+32,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+596,"R0_en", false,-1);
    tracep->declBit(c+582,"R0_clk", false,-1);
    tracep->declBus(c+508,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+596,"R1_en", false,-1);
    tracep->declBit(c+582,"R1_clk", false,-1);
    tracep->declBus(c+509,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+596,"R2_en", false,-1);
    tracep->declBit(c+582,"R2_clk", false,-1);
    tracep->declBus(c+600,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+596,"W0_en", false,-1);
    tracep->declBit(c+582,"W0_clk", false,-1);
    tracep->declQuad(c+597,"W0_data", false,-1, 63,0);
    tracep->declBus(c+32,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+596,"W1_en", false,-1);
    tracep->declBit(c+582,"W1_clk", false,-1);
    tracep->declQuad(c+442,"W1_data", false,-1, 63,0);
    tracep->declQuad(c+325,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+430,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+432,"R2_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+327+i*2,"Memory", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("trap ");
    tracep->declBit(c+582,"clock", false,-1);
    tracep->declBit(c+583,"reset", false,-1);
    tracep->declBit(c+18,"io_ex_hasinst", false,-1);
    tracep->declBit(c+29,"io_mem_hasinst", false,-1);
    tracep->declBit(c+38,"io_wb_hasinst", false,-1);
    tracep->declQuad(c+223,"io_csrtr_MTVEC", false,-1, 63,0);
    tracep->declQuad(c+225,"io_csrtr_MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+227,"io_csrtr_MEPC", false,-1, 63,0);
    tracep->declQuad(c+229,"io_csrtr_MIE", false,-1, 63,0);
    tracep->declQuad(c+231,"io_csrtr_MIP", false,-1, 63,0);
    tracep->declQuad(c+233,"io_csrtr_MSTATUS", false,-1, 63,0);
    tracep->declBus(c+469,"io_inst", false,-1, 31,0);
    tracep->declBus(c+552,"io_pc", false,-1, 31,0);
    tracep->declBus(c+219,"io_csrtr_rd", false,-1, 11,0);
    tracep->declBit(c+220,"io_csrtr_csr_wen", false,-1);
    tracep->declQuad(c+221,"io_csrtr_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+424,"io_fctr_pop_NOP", false,-1);
    tracep->declBus(c+43,"io_fctr_trap_state", false,-1, 2,0);
    tracep->declBit(c+303,"io_fctr_jump_flag", false,-1);
    tracep->declBus(c+304,"io_fctr_jump_pc", false,-1, 31,0);
    tracep->declQuad(c+391,"cause", false,-1, 63,0);
    tracep->declBus(c+393,"pc", false,-1, 31,0);
    tracep->declBus(c+43,"state", false,-1, 2,0);
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
    tracep->declBit(c+579,"io_stall", false,-1);
    tracep->declBus(c+32,"io_rfio_rd", false,-1, 4,0);
    tracep->declBit(c+435,"io_rfio_reg_wen", false,-1);
    tracep->declQuad(c+30,"io_rfio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+32,"io_fwwb_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+30,"io_fwwb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+309,"io_fwwb_reg_we", false,-1);
    tracep->declQuad(c+34,"io_fwwb_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+36,"io_fwwb_csr_wen", false,-1);
    tracep->declBus(c+37,"io_fwwb_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+37,"io_csrs_rd", false,-1, 11,0);
    tracep->declBit(c+553,"io_csrs_csr_wen", false,-1);
    tracep->declQuad(c+34,"io_csrs_csr_wdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+582,"ACLK", false,-1);
    tracep->declBit(c+593,"ARESETn", false,-1);
    tracep->declBus(c+458,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+601,"S_AXI_AWPROT", false,-1, 2,0);
    tracep->declBit(c+457,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+444,"S_AXI_AWREADY", false,-1);
    tracep->declQuad(c+460,"S_AXI_WDATA", false,-1, 63,0);
    tracep->declBus(c+462,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+459,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+445,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+451,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+446,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+596,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+464,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+601,"S_AXI_ARPROT", false,-1, 2,0);
    tracep->declBit(c+463,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+447,"S_AXI_ARREADY", false,-1);
    tracep->declQuad(c+449,"S_AXI_RDATA", false,-1, 63,0);
    tracep->declBus(c+452,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+448,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+465,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+444,"awready", false,-1);
    tracep->declBit(c+445,"wready", false,-1);
    tracep->declBus(c+451,"bresp", false,-1, 1,0);
    tracep->declBit(c+446,"bvalid", false,-1);
    tracep->declBit(c+447,"arready", false,-1);
    tracep->declQuad(c+449,"rdata", false,-1, 63,0);
    tracep->declBus(c+452,"rresp", false,-1, 1,0);
    tracep->declBit(c+448,"rvalid", false,-1);
    tracep->declBus(c+453,"awaddr_buffer", false,-1, 31,0);
    tracep->declBus(c+594,"awaddr", false,-1, 31,0);
    tracep->declBit(c+454,"need_resp", false,-1);
    tracep->declBus(c+455,"araddr", false,-1, 31,0);
    tracep->declBit(c+456,"need_read", false,-1);
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
                               : vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_h7d5adbc1__0)),64);
    bufp->fullBit(oldp+42,(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag));
    bufp->fullCData(oldp+43,(vlSelf->Soc__DOT__core__DOT__trap__DOT__state),3);
    bufp->fullBit(oldp+44,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_valid));
    bufp->fullBit(oldp+45,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_valid));
    bufp->fullBit(oldp+46,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw));
    bufp->fullIData(oldp+47,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr),32);
    bufp->fullCData(oldp+48,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state),3);
    bufp->fullIData(oldp+49,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__tag),21);
    bufp->fullCData(oldp+50,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index),8);
    bufp->fullCData(oldp+51,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset),3);
    bufp->fullWData(oldp+52,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid),512);
    bufp->fullWData(oldp+68,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty),512);
    bufp->fullWData(oldp+84,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace),512);
    bufp->fullBit(oldp+100,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim));
    bufp->fullIData(oldp+101,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr),32);
    bufp->fullQData(oldp+102,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data),64);
    bufp->fullCData(oldp+104,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask),8);
    bufp->fullBit(oldp+105,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inst_type));
    bufp->fullBit(oldp+106,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum));
    bufp->fullQData(oldp+107,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_bits_data),64);
    bufp->fullSData(oldp+109,((0x1ffU & ((IData)(1U) 
                                         + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                            << 1U)))),9);
    bufp->fullSData(oldp+110,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                               << 1U)),9);
    bufp->fullBit(oldp+111,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum))));
    bufp->fullQData(oldp+112,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data),64);
    bufp->fullBit(oldp+114,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0))));
    bufp->fullSData(oldp+115,((0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                          << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN)))),9);
    bufp->fullBit(oldp+116,(((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                             & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]))));
    bufp->fullSData(oldp+117,((0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                          << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim)))),9);
    bufp->fullBit(oldp+118,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8854f984__0) 
                             & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))));
    bufp->fullBit(oldp+119,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8ecd23a9__0) 
                             & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]))));
    bufp->fullBit(oldp+120,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca93995__0) 
                             & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))));
    bufp->fullIData(oldp+121,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                   & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]))
                                ? vlSelf->__VdfgTmp_h2fe899d6__0
                                : 0U)),21);
    bufp->fullIData(oldp+122,((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8854f984__0) 
                                & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))
                                ? vlSelf->__VdfgTmp_h5f294843__0
                                : 0U)),21);
    bufp->fullIData(oldp+123,((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8ecd23a9__0) 
                                & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                   & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]))
                                ? vlSelf->__VdfgTmp_h2fe899d6__0
                                : 0U)),21);
    bufp->fullIData(oldp+124,((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca93995__0) 
                                & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))
                                ? vlSelf->__VdfgTmp_h5f294843__0
                                : 0U)),21);
    bufp->fullBit(oldp+125,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid));
    bufp->fullBit(oldp+126,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_valid));
    bufp->fullBit(oldp+127,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw));
    bufp->fullIData(oldp+128,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr),32);
    bufp->fullCData(oldp+129,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state),3);
    bufp->fullIData(oldp+130,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__tag),21);
    bufp->fullCData(oldp+131,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index),8);
    bufp->fullCData(oldp+132,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset),3);
    bufp->fullWData(oldp+133,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid),512);
    bufp->fullWData(oldp+149,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty),512);
    bufp->fullWData(oldp+165,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace),512);
    bufp->fullBit(oldp+181,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim));
    bufp->fullIData(oldp+182,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr),32);
    bufp->fullQData(oldp+183,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data),64);
    bufp->fullCData(oldp+185,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask),8);
    bufp->fullBit(oldp+186,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inst_type));
    bufp->fullBit(oldp+187,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum));
    bufp->fullQData(oldp+188,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data),64);
    bufp->fullSData(oldp+190,((0x1ffU & ((IData)(1U) 
                                         + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                            << 1U)))),9);
    bufp->fullSData(oldp+191,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                               << 1U)),9);
    bufp->fullBit(oldp+192,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum))));
    bufp->fullQData(oldp+193,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data),64);
    bufp->fullBit(oldp+195,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0))));
    bufp->fullSData(oldp+196,((0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                          << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN)))),9);
    bufp->fullBit(oldp+197,(((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                             & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]))));
    bufp->fullSData(oldp+198,((0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                          << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim)))),9);
    bufp->fullBit(oldp+199,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8854f984__0) 
                             & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))));
    bufp->fullBit(oldp+200,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8ecd23a9__0) 
                             & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]))));
    bufp->fullBit(oldp+201,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca93995__0) 
                             & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))));
    bufp->fullIData(oldp+202,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                   & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]))
                                ? vlSelf->__VdfgTmp_heb865217__0
                                : 0U)),21);
    bufp->fullIData(oldp+203,((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8854f984__0) 
                                & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))
                                ? vlSelf->__VdfgTmp_hb3a84c04__0
                                : 0U)),21);
    bufp->fullIData(oldp+204,((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8ecd23a9__0) 
                                & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                   & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]))
                                ? vlSelf->__VdfgTmp_heb865217__0
                                : 0U)),21);
    bufp->fullIData(oldp+205,((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca93995__0) 
                                & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))
                                ? vlSelf->__VdfgTmp_hb3a84c04__0
                                : 0U)),21);
    bufp->fullBit(oldp+206,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp));
    bufp->fullBit(oldp+207,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp));
    bufp->fullQData(oldp+208,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result),64);
    bufp->fullBit(oldp+210,(vlSelf->Soc__DOT__core__DOT__clint__DOT__valid_buf));
    bufp->fullQData(oldp+211,(vlSelf->Soc__DOT__core__DOT__clint__DOT__rvalue_buf),64);
    bufp->fullBit(oldp+213,((vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME 
                             >= vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP)));
    bufp->fullIData(oldp+214,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MSIP),32);
    bufp->fullQData(oldp+215,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP),64);
    bufp->fullQData(oldp+217,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME),64);
    __Vtemp_h5ee83ed9__0[0U] = 0x41000000U;
    __Vtemp_h5ee83ed9__0[1U] = 0x3003423U;
    __Vtemp_h5ee83ed9__0[2U] = (0x30000000U | (((0x8000000000000007ULL 
                                                 == vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE)
                                                 ? 0x344U
                                                 : 0U) 
                                               << 8U));
    bufp->fullSData(oldp+219,(((0x5fU >= (0x7fU & ((IData)(0xcU) 
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
    bufp->fullBit(oldp+220,(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen));
    bufp->fullQData(oldp+221,(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata),64);
    bufp->fullQData(oldp+223,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC),64);
    bufp->fullQData(oldp+225,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE),64);
    bufp->fullQData(oldp+227,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC),64);
    bufp->fullQData(oldp+229,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE),64);
    bufp->fullQData(oldp+231,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP),64);
    bufp->fullQData(oldp+233,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS),64);
    bufp->fullQData(oldp+235,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH),64);
    bufp->fullCData(oldp+237,(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd),5);
    bufp->fullIData(oldp+238,((IData)(vlSelf->Soc__DOT__core__DOT__dereg_branch_addr)),32);
    bufp->fullBit(oldp+239,(vlSelf->Soc__DOT__core__DOT__excute__DOT___mul_div_type_T_16));
    bufp->fullBit(oldp+240,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_mul_div_outvalid));
    bufp->fullQData(oldp+241,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata),64);
    bufp->fullBit(oldp+243,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we));
    bufp->fullBit(oldp+244,(vlSelf->Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer));
    bufp->fullQData(oldp+245,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu_buffer),64);
    bufp->fullBit(oldp+247,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8));
    bufp->fullBit(oldp+248,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8) 
                             & (0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)))));
    bufp->fullCData(oldp+249,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8)
                                ? (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_h60d3cac5__0) 
                                    | (0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)))
                                    ? 3U : ((0x14U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
                                            << 1U))
                                : 0U)),2);
    bufp->fullQData(oldp+250,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand),64);
    bufp->fullQData(oldp+252,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier),64);
    bufp->fullBit(oldp+254,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid));
    bufp->fullQData(oldp+255,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_hi),64);
    bufp->fullQData(oldp+257,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_lo),64);
    bufp->fullWData(oldp+259,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg),67);
    bufp->fullWData(oldp+262,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg),132);
    bufp->fullWData(oldp+267,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg),132);
    bufp->fullBit(oldp+272,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state));
    bufp->fullCData(oldp+273,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter),6);
    bufp->fullCData(oldp+274,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total),6);
    bufp->fullBit(oldp+275,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_15));
    bufp->fullBit(oldp+276,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divw));
    bufp->fullBit(oldp+277,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_div_signed));
    bufp->fullQData(oldp+278,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend),64);
    bufp->fullQData(oldp+280,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor),64);
    bufp->fullBit(oldp+282,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid));
    bufp->fullQData(oldp+283,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient),64);
    bufp->fullWData(oldp+285,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder),128);
    bufp->fullWData(oldp+289,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65),65);
    bufp->fullQData(oldp+292,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub33),33);
    bufp->fullBit(oldp+294,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo));
    bufp->fullBit(oldp+295,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem));
    bufp->fullCData(oldp+296,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state),2);
    bufp->fullCData(oldp+297,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter),7);
    bufp->fullQData(oldp+298,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34),34);
    bufp->fullWData(oldp+300,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66),66);
    bufp->fullBit(oldp+303,(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3));
    bufp->fullIData(oldp+304,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC)
                                : ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                    ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC)
                                    : 0U))),32);
    bufp->fullBit(oldp+305,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_mul_div_outvalid)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___mul_div_type_T_16))));
    bufp->fullIData(oldp+306,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),32);
    bufp->fullIData(oldp+307,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc),32);
    bufp->fullBit(oldp+308,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))));
    bufp->fullBit(oldp+309,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))));
    bufp->fullBit(oldp+310,(vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag));
    bufp->fullCData(oldp+311,(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count),6);
    bufp->fullBit(oldp+312,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))));
    bufp->fullBit(oldp+313,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid));
    bufp->fullQData(oldp+314,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_bits),64);
    bufp->fullBit(oldp+316,(vlSelf->Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer));
    bufp->fullBit(oldp+317,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer));
    bufp->fullBit(oldp+318,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer));
    bufp->fullQData(oldp+319,(vlSelf->Soc__DOT__core__DOT__mem__DOT__clmem_buffer),64);
    bufp->fullQData(oldp+321,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdata_buffer),64);
    bufp->fullQData(oldp+323,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataio_buffer),64);
    bufp->fullQData(oldp+325,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr]),64);
    bufp->fullQData(oldp+327,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+329,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+331,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+333,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+335,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+337,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+339,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+341,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+343,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+345,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+347,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+349,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+351,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+353,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+355,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+357,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+359,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+361,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+363,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+365,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+367,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+369,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+371,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+373,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+375,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+377,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+379,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+381,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+383,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+385,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+387,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+389,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
    bufp->fullQData(oldp+391,(vlSelf->Soc__DOT__core__DOT__trap__DOT__cause),64);
    bufp->fullIData(oldp+393,(vlSelf->Soc__DOT__core__DOT__trap__DOT__pc),32);
    bufp->fullBit(oldp+394,((0U != ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type) 
                                    | (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))));
    VL_SHIFTR_WWI(512,512,10, __Vtemp_h773c399d__0, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid, 
                  (0x3ffU & ((IData)(1U) + (0x1feU 
                                            & ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                        >> 3U)) 
                                               << 1U)))));
    bufp->fullBit(oldp+395,(((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
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
    bufp->fullBit(oldp+396,((1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))
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
    bufp->fullIData(oldp+397,((((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
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
    bufp->fullSData(oldp+398,((0x1ffU & (((0U == (0x1fU 
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
    bufp->fullIData(oldp+399,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                              [(0x1feU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                   >> 3U)) 
                                          << 1U))]),21);
    bufp->fullIData(oldp+400,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                              [(0x1ffU & ((IData)(1U) 
                                          + (0x1feU 
                                             & ((IData)(
                                                        (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                         >> 3U)) 
                                                << 1U))))]),21);
    bufp->fullQData(oldp+401,(((0x340U == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
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
    bufp->fullQData(oldp+403,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0)
                                ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]
                                : 0ULL)),64);
    bufp->fullQData(oldp+405,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0)
                                ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]
                                : 0ULL)),64);
    bufp->fullQData(oldp+407,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard)
                                ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard)
                                    ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)
                                        ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                        : 0ULL)))),64);
    bufp->fullQData(oldp+409,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                                ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                                    ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                                        ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                        : 0ULL)))),64);
    bufp->fullQData(oldp+411,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard)
                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard)
                                    ? vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)
                                        ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                                        : 0ULL)))),64);
    bufp->fullQData(oldp+413,((((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
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
    bufp->fullQData(oldp+415,(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__fdreg_pc)) 
                               + (((- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))) 
                                   << 0xcU) | (QData)((IData)(
                                                              (((IData)(vlSelf->__VdfgTmp_h315738f9__0) 
                                                                << 0xbU) 
                                                               | (((IData)(vlSelf->__VdfgTmp_h722d7b58__0) 
                                                                   << 5U) 
                                                                  | ((IData)(vlSelf->__VdfgTmp_h6dbd61c0__0) 
                                                                     << 1U)))))))),64);
    bufp->fullCData(oldp+417,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
                                ? (0x3fU & (IData)(
                                                   (vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                                    >> 0x14U)))
                                : 0U)),6);
    bufp->fullIData(oldp+418,(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                ? (vlSelf->Soc__DOT__core__DOT__fdreg_pc 
                                   + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm))
                                : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                    ? (0xfffffffeU 
                                       & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4) 
                                          + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm)))
                                    : 0x80000000U))),32);
    bufp->fullCData(oldp+419,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                ? (7U & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result))
                                : 0U)),3);
    bufp->fullQData(oldp+420,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                : 0ULL)),64);
    bufp->fullQData(oldp+422,(((IData)(vlSelf->__VdfgTmp_h9d5684c6__0)
                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                : 0ULL)),64);
    bufp->fullBit(oldp+424,(((0U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                             & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2) 
                                | ((0x30200073U == (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7))))));
    bufp->fullBit(oldp+425,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)))));
    bufp->fullIData(oldp+426,(((IData)(vlSelf->__VdfgTmp_h9d5684c6__0)
                                ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)
                                : 0U)),32);
    bufp->fullIData(oldp+427,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)
                                : 0U)),32);
    bufp->fullQData(oldp+428,((((QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
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
    bufp->fullQData(oldp+430,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]),64);
    bufp->fullQData(oldp+432,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]),64);
    bufp->fullBit(oldp+434,(((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid))));
    bufp->fullBit(oldp+435,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
                             & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)))));
    VL_SHIFTR_WWI(512,512,10, __Vtemp_hc4bbf11d__0, vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid, 
                  (0x3ffU & ((IData)(1U) + (0x1feU 
                                            & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                               >> 2U)))));
    bufp->fullBit(oldp+436,(((vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                              [(0x1ffU & ((IData)(1U) 
                                          + (0x1feU 
                                             & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                >> 2U))))] 
                              == (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                  >> 0xbU)) & __Vtemp_hc4bbf11d__0[0U])));
    bufp->fullBit(oldp+437,((1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))
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
    bufp->fullIData(oldp+438,((((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
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
    bufp->fullSData(oldp+439,((0x1ffU & (((0U == (0x1fU 
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
    bufp->fullIData(oldp+440,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                              [(0x1feU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                          >> 2U))]),21);
    bufp->fullIData(oldp+441,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                              [(0x1ffU & ((IData)(1U) 
                                          + (0x1feU 
                                             & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                >> 2U))))]),21);
    bufp->fullQData(oldp+442,(((((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
                                 & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))) 
                                & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr)))
                                ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr])),64);
    bufp->fullBit(oldp+444,(vlSelf->Soc__DOT__sram__DOT__awready));
    bufp->fullBit(oldp+445,(vlSelf->Soc__DOT__sram__DOT__wready));
    bufp->fullBit(oldp+446,(vlSelf->Soc__DOT__sram__DOT__bvalid));
    bufp->fullBit(oldp+447,(vlSelf->Soc__DOT__sram__DOT__arready));
    bufp->fullBit(oldp+448,(vlSelf->Soc__DOT__sram__DOT__rvalid));
    bufp->fullQData(oldp+449,(vlSelf->Soc__DOT__sram__DOT__rdata),64);
    bufp->fullCData(oldp+451,(vlSelf->Soc__DOT__sram__DOT__bresp),2);
    bufp->fullCData(oldp+452,(vlSelf->Soc__DOT__sram__DOT__rresp),2);
    bufp->fullIData(oldp+453,(vlSelf->Soc__DOT__sram__DOT__awaddr_buffer),32);
    bufp->fullBit(oldp+454,(vlSelf->Soc__DOT__sram__DOT__need_resp));
    bufp->fullIData(oldp+455,(vlSelf->Soc__DOT__sram__DOT__araddr),32);
    bufp->fullBit(oldp+456,(vlSelf->Soc__DOT__sram__DOT__need_read));
    bufp->fullBit(oldp+457,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN));
    bufp->fullIData(oldp+458,(vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr),32);
    bufp->fullBit(oldp+459,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1));
    bufp->fullQData(oldp+460,(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0)
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
    bufp->fullCData(oldp+462,(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0)
                                ? 0U : ((1U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                         ? (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_mask)
                                         : ((2U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                             ? (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask)
                                             : ((4U 
                                                 & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                                 ? (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask)
                                                 : 0U))))),8);
    bufp->fullBit(oldp+463,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4));
    bufp->fullIData(oldp+464,(((1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                      | ((~ ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                >> 3U))) 
                                         | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)))))
                                ? 0U : vlSelf->Soc__DOT__core__DOT__arbitor__DOT___addr_T_6)),32);
    bufp->fullBit(oldp+465,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_5));
    bufp->fullQData(oldp+466,(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata),64);
    bufp->fullCData(oldp+468,(vlSelf->Soc__DOT__core__DOT__dereg_ld_type),3);
    bufp->fullIData(oldp+469,((IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)),32);
    bufp->fullBit(oldp+470,(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16));
    bufp->fullQData(oldp+471,(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T),64);
    bufp->fullBit(oldp+473,(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid));
    bufp->fullIData(oldp+474,((IData)(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T)),32);
    bufp->fullCData(oldp+475,(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask),8);
    bufp->fullQData(oldp+476,(vlSelf->Soc__DOT__core__DOT___Dcache_io_cpu_resp_bits_data),64);
    bufp->fullQData(oldp+478,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray)
                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray
                                : 0ULL)),64);
    bufp->fullCData(oldp+480,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask),8);
    bufp->fullBit(oldp+481,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3));
    bufp->fullBit(oldp+482,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0));
    bufp->fullQData(oldp+483,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray),64);
    bufp->fullBit(oldp+485,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray));
    bufp->fullSData(oldp+486,((0x1feU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                  >> 3U)) 
                                         << 1U))),9);
    bufp->fullSData(oldp+487,((0x1ffU & ((IData)(1U) 
                                         + (0x1feU 
                                            & ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                        >> 3U)) 
                                               << 1U))))),9);
    bufp->fullQData(oldp+488,(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data),64);
    bufp->fullQData(oldp+490,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray)
                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray
                                : 0ULL)),64);
    bufp->fullCData(oldp+492,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask),8);
    bufp->fullQData(oldp+493,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray),64);
    bufp->fullBit(oldp+495,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray));
    bufp->fullBit(oldp+496,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_rw));
    bufp->fullIData(oldp+497,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_addr),32);
    bufp->fullQData(oldp+498,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_data),64);
    bufp->fullCData(oldp+500,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_mask),8);
    bufp->fullCData(oldp+501,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer),4);
    bufp->fullCData(oldp+502,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state),2);
    bufp->fullBit(oldp+503,(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6));
    bufp->fullSData(oldp+504,(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr),12);
    bufp->fullBit(oldp+505,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)))));
    bufp->fullBit(oldp+506,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))));
    bufp->fullBit(oldp+507,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)))));
    bufp->fullCData(oldp+508,(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr),5);
    bufp->fullCData(oldp+509,(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr),5);
    bufp->fullQData(oldp+510,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T
                                : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                    ? 4ULL : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                               ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T
                                               : ((1U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                                   ? vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm
                                                   : 0ULL))))),64);
    bufp->fullCData(oldp+512,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_reg_waddr),5);
    bufp->fullBit(oldp+513,(((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                             & ((0x17U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                & ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                   & ((0x6fU != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                      & ((0x67U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                         & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5))))))));
    bufp->fullCData(oldp+514,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op),6);
    bufp->fullCData(oldp+515,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
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
    bufp->fullCData(oldp+516,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0)
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
    bufp->fullQData(oldp+517,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T),64);
    bufp->fullCData(oldp+519,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type),3);
    bufp->fullQData(oldp+520,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T),64);
    bufp->fullSData(oldp+522,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen)
                                ? (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr)
                                : 0U)),12);
    bufp->fullBit(oldp+523,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen));
    bufp->fullBit(oldp+524,(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag));
    bufp->fullIData(oldp+525,(vlSelf->Soc__DOT__core__DOT__decode__DOT__inst),32);
    bufp->fullCData(oldp+526,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type),2);
    bufp->fullCData(oldp+527,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type),2);
    bufp->fullCData(oldp+528,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type),3);
    bufp->fullCData(oldp+529,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
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
    bufp->fullCData(oldp+530,(((((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0) 
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
    bufp->fullQData(oldp+531,(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm),64);
    bufp->fullBit(oldp+533,(((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_1) 
                             & (0x9fffffffU < vlSelf->Soc__DOT__core__DOT__ioformem__DOT___axi_req_bits_addr_T))));
    bufp->fullCData(oldp+534,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state),2);
    bufp->fullIData(oldp+535,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc),32);
    bufp->fullBit(oldp+536,(vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall));
    bufp->fullQData(oldp+537,(vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata),64);
    bufp->fullBit(oldp+539,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard));
    bufp->fullBit(oldp+540,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard));
    bufp->fullBit(oldp+541,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard));
    bufp->fullBit(oldp+542,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard));
    bufp->fullBit(oldp+543,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard));
    bufp->fullBit(oldp+544,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard));
    bufp->fullBit(oldp+545,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard));
    bufp->fullBit(oldp+546,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard));
    bufp->fullBit(oldp+547,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard));
    bufp->fullBit(oldp+548,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type))));
    bufp->fullBit(oldp+549,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_valid));
    bufp->fullQData(oldp+550,(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value),64);
    bufp->fullIData(oldp+552,(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc),32);
    bufp->fullBit(oldp+553,(vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen));
    bufp->fullBit(oldp+554,(((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1))));
    bufp->fullBit(oldp+555,(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid));
    bufp->fullQData(oldp+556,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data),64);
    bufp->fullBit(oldp+558,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_13));
    bufp->fullBit(oldp+559,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_15));
    bufp->fullBit(oldp+560,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20));
    bufp->fullQData(oldp+561,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data),64);
    bufp->fullBit(oldp+563,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_27));
    bufp->fullBit(oldp+564,(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid));
    bufp->fullQData(oldp+565,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data),64);
    bufp->fullBit(oldp+567,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3));
    bufp->fullBit(oldp+568,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0));
    bufp->fullBit(oldp+569,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_13));
    bufp->fullBit(oldp+570,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_15));
    bufp->fullBit(oldp+571,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20));
    bufp->fullQData(oldp+572,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data),64);
    bufp->fullBit(oldp+574,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_27));
    bufp->fullSData(oldp+575,((0x1feU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                         >> 2U))),9);
    bufp->fullSData(oldp+576,((0x1ffU & ((IData)(1U) 
                                         + (0x1feU 
                                            & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                               >> 2U))))),9);
    bufp->fullBit(oldp+577,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_valid));
    bufp->fullCData(oldp+578,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose),4);
    bufp->fullBit(oldp+579,(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1));
    bufp->fullBit(oldp+580,(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush));
    bufp->fullBit(oldp+581,(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0));
    bufp->fullBit(oldp+582,(vlSelf->clock));
    bufp->fullBit(oldp+583,(vlSelf->reset));
    bufp->fullBit(oldp+584,((((~ ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
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
    bufp->fullQData(oldp+585,((((QData)((IData)(__Vtemp_h554321c1__0[
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
    bufp->fullBit(oldp+587,((1U & (~ ((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                                      | (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush))))));
    bufp->fullBit(oldp+588,(((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hd527f3ac__0) 
                             & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
                                & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                                   | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14)) 
                                      & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                                         | ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                                            | (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag)))))))));
    bufp->fullBit(oldp+589,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)) 
                             & ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_19)) 
                                   & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                      | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)) 
                                         & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                            & (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)))))))));
    bufp->fullBit(oldp+590,(((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                             & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_19)) 
                                & ((~ ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                       & (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid))) 
                                   & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                      | (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                          & (IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)) 
                                         & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h02ae5b32__0) 
                                            | (~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3))))))))));
    bufp->fullIData(oldp+591,(((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2)
                                ? ((IData)(4U) + vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc)
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                                    ? ((IData)(4U) 
                                       + vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)
                                    : vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc))),32);
    bufp->fullIData(oldp+592,((((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid))
                                ? (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)
                                : 0U)),32);
    bufp->fullBit(oldp+593,(vlSelf->Soc__DOT____Vcellinp__sram__ARESETn));
    bufp->fullIData(oldp+594,((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1) 
                                & ((IData)(vlSelf->Soc__DOT__sram__DOT__wready) 
                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN) 
                                      & (IData)(vlSelf->Soc__DOT__sram__DOT__awready))))
                                ? vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr
                                : vlSelf->Soc__DOT__sram__DOT__awaddr_buffer)),32);
    bufp->fullBit(oldp+595,(0U));
    bufp->fullBit(oldp+596,(1U));
    bufp->fullQData(oldp+597,(0ULL),64);
    bufp->fullCData(oldp+599,(0U),8);
    bufp->fullCData(oldp+600,(0U),5);
    bufp->fullCData(oldp+601,(0U),3);
}
