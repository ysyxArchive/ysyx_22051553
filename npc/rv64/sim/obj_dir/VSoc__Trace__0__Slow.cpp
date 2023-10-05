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
    tracep->declBit(c+3009,"clock", false,-1);
    tracep->declBit(c+3010,"reset", false,-1);
    tracep->pushNamePrefix("Soc ");
    tracep->declBit(c+3009,"clock", false,-1);
    tracep->declBit(c+3010,"reset", false,-1);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+3009,"clock", false,-1);
    tracep->declBit(c+3010,"reset", false,-1);
    tracep->declBit(c+3014,"io_AXI_Interface_aw_ready", false,-1);
    tracep->declBit(c+3014,"io_AXI_Interface_w_ready", false,-1);
    tracep->declBit(c+1,"io_AXI_Interface_b_valid", false,-1);
    tracep->declBit(c+3014,"io_AXI_Interface_ar_ready", false,-1);
    tracep->declBit(c+2850,"io_AXI_Interface_r_valid", false,-1);
    tracep->declQuad(c+2851,"io_AXI_Interface_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+2853,"io_AXI_Interface_r_bits_last", false,-1);
    tracep->declBit(c+5,"io_AXI_Interface_aw_valid", false,-1);
    tracep->declBus(c+6,"io_AXI_Interface_aw_bits_addr", false,-1, 31,0);
    tracep->declBus(c+7,"io_AXI_Interface_aw_bits_len", false,-1, 7,0);
    tracep->declBit(c+8,"io_AXI_Interface_w_valid", false,-1);
    tracep->declQuad(c+9,"io_AXI_Interface_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+11,"io_AXI_Interface_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+12,"io_AXI_Interface_w_bits_last", false,-1);
    tracep->declBit(c+3011,"io_AXI_Interface_ar_valid", false,-1);
    tracep->declBus(c+3012,"io_AXI_Interface_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+13,"io_AXI_Interface_ar_bits_len", false,-1, 7,0);
    tracep->declBus(c+14,"fdreg_pc", false,-1, 31,0);
    tracep->declQuad(c+15,"dereg_op_a", false,-1, 63,0);
    tracep->declQuad(c+17,"dereg_op_b", false,-1, 63,0);
    tracep->declBus(c+19,"dereg_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+20,"dereg_branch_type", false,-1);
    tracep->declQuad(c+21,"dereg_branch_addr", false,-1, 63,0);
    tracep->declBus(c+23,"dereg_alu_op", false,-1, 5,0);
    tracep->declBus(c+24,"dereg_shamt", false,-1, 5,0);
    tracep->declBus(c+25,"dereg_wb_type", false,-1, 1,0);
    tracep->declBus(c+26,"dereg_sd_type", false,-1, 2,0);
    tracep->declQuad(c+27,"dereg_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+29,"dereg_ld_type", false,-1, 2,0);
    tracep->declQuad(c+30,"dereg_csr_t", false,-1, 63,0);
    tracep->declBus(c+32,"dereg_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+33,"dereg_csr_wen", false,-1);
    tracep->declBit(c+34,"dereg_has_inst", false,-1);
    tracep->declQuad(c+35,"emreg_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+37,"emreg_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+38,"emreg_wb_type", false,-1, 1,0);
    tracep->declBus(c+39,"emreg_ld_type", false,-1, 2,0);
    tracep->declBus(c+40,"emreg_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+41,"emreg_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+43,"emreg_csr_wen", false,-1);
    tracep->declBus(c+44,"emreg_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+45,"emreg_has_inst", false,-1);
    tracep->declQuad(c+46,"mwreg_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+48,"mwreg_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+49,"mwreg_wb_type", false,-1, 1,0);
    tracep->declQuad(c+50,"mwreg_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+52,"mwreg_csr_wen", false,-1);
    tracep->declBus(c+53,"mwreg_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+54,"mwreg_has_inst", false,-1);
    tracep->pushNamePrefix("DI ");
    tracep->declBit(c+3009,"clk", false,-1);
    tracep->declBit(c+3010,"rst", false,-1);
    tracep->declBus(c+2858,"pc", false,-1, 31,0);
    tracep->declBit(c+55,"pc_req", false,-1);
    tracep->declBus(c+56,"inst", false,-1, 31,0);
    tracep->declBit(c+2801,"inst_valid", false,-1);
    tracep->declBit(c+57,"load_use", false,-1);
    tracep->declQuad(c+15,"op_a", false,-1, 63,0);
    tracep->declQuad(c+17,"op_b", false,-1, 63,0);
    tracep->declQuad(c+58,"result", false,-1, 63,0);
    tracep->declBit(c+60,"br_yes", false,-1);
    tracep->declBit(c+61,"mem_access", false,-1);
    tracep->declQuad(c+62,"mem_addr", false,-1, 63,0);
    tracep->declBus(c+48,"rd", false,-1, 4,0);
    tracep->declQuad(c+46,"reg_wdata", false,-1, 63,0);
    tracep->declBit(c+2802,"reg_wen", false,-1);
    tracep->declBit(c+2859,"csr_wen", false,-1);
    tracep->declQuad(c+50,"csr_wdata", false,-1, 63,0);
    tracep->declBus(c+53,"csr_waddr", false,-1, 11,0);
    tracep->declBit(c+2860,"sdb_stall", false,-1);
    tracep->declBus(c+64,"trap_state", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Dcache ");
    tracep->declBit(c+3009,"clock", false,-1);
    tracep->declBit(c+3010,"reset", false,-1);
    tracep->declBit(c+65,"io_cpu_req_valid", false,-1);
    tracep->declBit(c+3015,"io_cpu_req_bits_inst_type", false,-1);
    tracep->declBus(c+66,"io_cpu_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+27,"io_cpu_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+67,"io_cpu_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+2861,"io_axi_resp_valid", false,-1);
    tracep->declArray(c+2862,"io_axi_resp_bits_data", false,-1, 1023,0);
    tracep->declBit(c+68,"io_cpu_resp_valid", false,-1);
    tracep->declQuad(c+69,"io_cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+71,"io_axi_req_valid", false,-1);
    tracep->declBit(c+72,"io_axi_req_bits_rw", false,-1);
    tracep->declBus(c+73,"io_axi_req_bits_addr", false,-1, 31,0);
    tracep->declArray(c+74,"io_axi_req_bits_data", false,-1, 1023,0);
    tracep->declBus(c+106,"io_axi_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+65,"io_fccache_req", false,-1);
    tracep->declBus(c+107,"io_fccache_state", false,-1, 2,0);
    tracep->declBus(c+67,"io_fccache_mask", false,-1, 7,0);
    tracep->declBit(c+108,"io_fccache_hit", false,-1);
    tracep->declBit(c+68,"io_fccache_cpu_valid", false,-1);
    tracep->declBit(c+2861,"io_fccache_axi_valid", false,-1);
    tracep->declBus(c+107,"state", false,-1, 2,0);
    tracep->declBus(c+109,"tag", false,-1, 20,0);
    tracep->declBus(c+110,"index", false,-1, 3,0);
    tracep->declBus(c+111,"offset", false,-1, 6,0);
    tracep->declBus(c+112,"valid", false,-1, 31,0);
    tracep->declBus(c+113,"dirty", false,-1, 31,0);
    tracep->declBus(c+114,"replace", false,-1, 31,0);
    tracep->declBit(c+115,"hit0", false,-1);
    tracep->declBit(c+116,"hit1", false,-1);
    tracep->declArray(c+117,"DataOneArray", false,-1, 1023,0);
    tracep->declBit(c+149,"DataOneArrayRen", false,-1);
    tracep->declBus(c+150,"DataOneArrayAddr", false,-1, 31,0);
    tracep->declBit(c+151,"inDataOneArray", false,-1);
    tracep->declBit(c+152,"victim", false,-1);
    tracep->declBus(c+153,"addr", false,-1, 31,0);
    tracep->declQuad(c+154,"data", false,-1, 63,0);
    tracep->declBus(c+156,"mask", false,-1, 7,0);
    tracep->declBit(c+157,"inst_type", false,-1);
    tracep->declBit(c+158,"whitNum", false,-1);
    tracep->declBit(c+68,"cpu_resp_valid", false,-1);
    tracep->declQuad(c+159,"cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+71,"axi_req_valid", false,-1);
    tracep->declBit(c+72,"axi_req_bits_rw", false,-1);
    tracep->declBus(c+73,"axi_req_bits_addr", false,-1, 31,0);
    tracep->declBus(c+106,"axi_req_bits_mask", false,-1, 7,0);
    tracep->pushNamePrefix("DataArray_ext ");
    tracep->declBus(c+161,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+149,"R0_en", false,-1);
    tracep->declBit(c+3009,"R0_clk", false,-1);
    tracep->declBus(c+162,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+2894,"W0_en", false,-1);
    tracep->declBit(c+3009,"W0_clk", false,-1);
    tracep->declArray(c+2862,"W0_data", false,-1, 1023,0);
    tracep->declBus(c+163,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+2895,"W1_en", false,-1);
    tracep->declBit(c+3009,"W1_clk", false,-1);
    tracep->declArray(c+2862,"W1_data", false,-1, 1023,0);
    tracep->declBus(c+162,"W2_addr", false,-1, 4,0);
    tracep->declBit(c+164,"W2_en", false,-1);
    tracep->declBit(c+3009,"W2_clk", false,-1);
    tracep->declArray(c+165,"W2_data", false,-1, 1023,0);
    tracep->declBus(c+163,"W3_addr", false,-1, 4,0);
    tracep->declBit(c+197,"W3_en", false,-1);
    tracep->declBit(c+3009,"W3_clk", false,-1);
    tracep->declArray(c+165,"W3_data", false,-1, 1023,0);
    tracep->declBus(c+162,"W4_addr", false,-1, 4,0);
    tracep->declBit(c+2896,"W4_en", false,-1);
    tracep->declBit(c+3009,"W4_clk", false,-1);
    tracep->declArray(c+2897,"W4_data", false,-1, 1023,0);
    tracep->declBus(c+163,"W5_addr", false,-1, 4,0);
    tracep->declBit(c+2929,"W5_en", false,-1);
    tracep->declBit(c+3009,"W5_clk", false,-1);
    tracep->declArray(c+2897,"W5_data", false,-1, 1023,0);
    tracep->declArray(c+117,"R0_data", false,-1, 1023,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+198+i*32,"Memory", true,(i+0), 1023,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("TagArray_ext ");
    tracep->declBus(c+1222,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+1223,"R0_en", false,-1);
    tracep->declBit(c+3009,"R0_clk", false,-1);
    tracep->declBus(c+1224,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+1225,"R1_en", false,-1);
    tracep->declBit(c+3009,"R1_clk", false,-1);
    tracep->declBus(c+1222,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+1226,"R2_en", false,-1);
    tracep->declBit(c+3009,"R2_clk", false,-1);
    tracep->declBus(c+1224,"R3_addr", false,-1, 4,0);
    tracep->declBit(c+1227,"R3_en", false,-1);
    tracep->declBit(c+3009,"R3_clk", false,-1);
    tracep->declBus(c+1228,"R4_addr", false,-1, 4,0);
    tracep->declBit(c+3014,"R4_en", false,-1);
    tracep->declBit(c+3009,"R4_clk", false,-1);
    tracep->declBus(c+1229,"R5_addr", false,-1, 4,0);
    tracep->declBit(c+3014,"R5_en", false,-1);
    tracep->declBit(c+3009,"R5_clk", false,-1);
    tracep->declBus(c+162,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+2894,"W0_en", false,-1);
    tracep->declBit(c+3009,"W0_clk", false,-1);
    tracep->declBus(c+109,"W0_data", false,-1, 20,0);
    tracep->declBus(c+163,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+2895,"W1_en", false,-1);
    tracep->declBit(c+3009,"W1_clk", false,-1);
    tracep->declBus(c+109,"W1_data", false,-1, 20,0);
    tracep->declBus(c+162,"W2_addr", false,-1, 4,0);
    tracep->declBit(c+2896,"W2_en", false,-1);
    tracep->declBit(c+3009,"W2_clk", false,-1);
    tracep->declBus(c+109,"W2_data", false,-1, 20,0);
    tracep->declBus(c+163,"W3_addr", false,-1, 4,0);
    tracep->declBit(c+2929,"W3_en", false,-1);
    tracep->declBit(c+3009,"W3_clk", false,-1);
    tracep->declBus(c+109,"W3_data", false,-1, 20,0);
    tracep->declBus(c+1230,"R0_data", false,-1, 20,0);
    tracep->declBus(c+1231,"R1_data", false,-1, 20,0);
    tracep->declBus(c+1232,"R2_data", false,-1, 20,0);
    tracep->declBus(c+1233,"R3_data", false,-1, 20,0);
    tracep->declBus(c+1234,"R4_data", false,-1, 20,0);
    tracep->declBus(c+1235,"R5_data", false,-1, 20,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1236+i*1,"Memory", true,(i+0), 20,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Icache ");
    tracep->declBit(c+3009,"clock", false,-1);
    tracep->declBit(c+3010,"reset", false,-1);
    tracep->declBit(c+55,"io_cpu_req_valid", false,-1);
    tracep->declBit(c+3014,"io_cpu_req_bits_inst_type", false,-1);
    tracep->declBus(c+2858,"io_cpu_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+3016,"io_cpu_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+3018,"io_cpu_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+2930,"io_axi_resp_valid", false,-1);
    tracep->declArray(c+2931,"io_axi_resp_bits_data", false,-1, 1023,0);
    tracep->declBit(c+1268,"io_cpu_resp_valid", false,-1);
    tracep->declQuad(c+1269,"io_cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+1271,"io_axi_req_valid", false,-1);
    tracep->declBit(c+1272,"io_axi_req_bits_rw", false,-1);
    tracep->declBus(c+1273,"io_axi_req_bits_addr", false,-1, 31,0);
    tracep->declArray(c+1274,"io_axi_req_bits_data", false,-1, 1023,0);
    tracep->declBus(c+1306,"io_axi_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+55,"io_fccache_req", false,-1);
    tracep->declBus(c+1307,"io_fccache_state", false,-1, 2,0);
    tracep->declBus(c+3018,"io_fccache_mask", false,-1, 7,0);
    tracep->declBit(c+2963,"io_fccache_hit", false,-1);
    tracep->declBit(c+1268,"io_fccache_cpu_valid", false,-1);
    tracep->declBit(c+2930,"io_fccache_axi_valid", false,-1);
    tracep->declBus(c+1307,"state", false,-1, 2,0);
    tracep->declBus(c+1308,"tag", false,-1, 20,0);
    tracep->declBus(c+1309,"index", false,-1, 3,0);
    tracep->declBus(c+1310,"offset", false,-1, 6,0);
    tracep->declBus(c+1311,"valid", false,-1, 31,0);
    tracep->declBus(c+1312,"dirty", false,-1, 31,0);
    tracep->declBus(c+1313,"replace", false,-1, 31,0);
    tracep->declBit(c+2964,"hit0", false,-1);
    tracep->declBit(c+2803,"hit1", false,-1);
    tracep->declArray(c+1314,"DataOneArray", false,-1, 1023,0);
    tracep->declBit(c+2804,"DataOneArrayRen", false,-1);
    tracep->declBus(c+2805,"DataOneArrayAddr", false,-1, 31,0);
    tracep->declBit(c+1346,"inDataOneArray", false,-1);
    tracep->declBit(c+1347,"victim", false,-1);
    tracep->declBus(c+1348,"addr", false,-1, 31,0);
    tracep->declQuad(c+1349,"data", false,-1, 63,0);
    tracep->declBus(c+1351,"mask", false,-1, 7,0);
    tracep->declBit(c+1352,"inst_type", false,-1);
    tracep->declBit(c+1353,"whitNum", false,-1);
    tracep->declBit(c+1268,"cpu_resp_valid", false,-1);
    tracep->declQuad(c+1354,"cpu_resp_bits_data", false,-1, 63,0);
    tracep->declBit(c+1271,"axi_req_valid", false,-1);
    tracep->declBit(c+1272,"axi_req_bits_rw", false,-1);
    tracep->declBus(c+1273,"axi_req_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1306,"axi_req_bits_mask", false,-1, 7,0);
    tracep->pushNamePrefix("DataArray_ext ");
    tracep->declBus(c+2806,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+2804,"R0_en", false,-1);
    tracep->declBit(c+3009,"R0_clk", false,-1);
    tracep->declBus(c+1356,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+2965,"W0_en", false,-1);
    tracep->declBit(c+3009,"W0_clk", false,-1);
    tracep->declArray(c+2931,"W0_data", false,-1, 1023,0);
    tracep->declBus(c+1357,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+2966,"W1_en", false,-1);
    tracep->declBit(c+3009,"W1_clk", false,-1);
    tracep->declArray(c+2931,"W1_data", false,-1, 1023,0);
    tracep->declBus(c+1356,"W2_addr", false,-1, 4,0);
    tracep->declBit(c+1358,"W2_en", false,-1);
    tracep->declBit(c+3009,"W2_clk", false,-1);
    tracep->declArray(c+1359,"W2_data", false,-1, 1023,0);
    tracep->declBus(c+1357,"W3_addr", false,-1, 4,0);
    tracep->declBit(c+1391,"W3_en", false,-1);
    tracep->declBit(c+3009,"W3_clk", false,-1);
    tracep->declArray(c+1359,"W3_data", false,-1, 1023,0);
    tracep->declBus(c+1356,"W4_addr", false,-1, 4,0);
    tracep->declBit(c+2967,"W4_en", false,-1);
    tracep->declBit(c+3009,"W4_clk", false,-1);
    tracep->declArray(c+2968,"W4_data", false,-1, 1023,0);
    tracep->declBus(c+1357,"W5_addr", false,-1, 4,0);
    tracep->declBit(c+3000,"W5_en", false,-1);
    tracep->declBit(c+3009,"W5_clk", false,-1);
    tracep->declArray(c+2968,"W5_data", false,-1, 1023,0);
    tracep->declArray(c+1314,"R0_data", false,-1, 1023,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+1392+i*32,"Memory", true,(i+0), 1023,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("TagArray_ext ");
    tracep->declBus(c+2416,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+2417,"R0_en", false,-1);
    tracep->declBit(c+3009,"R0_clk", false,-1);
    tracep->declBus(c+2418,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+2419,"R1_en", false,-1);
    tracep->declBit(c+3009,"R1_clk", false,-1);
    tracep->declBus(c+2416,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+2420,"R2_en", false,-1);
    tracep->declBit(c+3009,"R2_clk", false,-1);
    tracep->declBus(c+2418,"R3_addr", false,-1, 4,0);
    tracep->declBit(c+2421,"R3_en", false,-1);
    tracep->declBit(c+3009,"R3_clk", false,-1);
    tracep->declBus(c+3001,"R4_addr", false,-1, 4,0);
    tracep->declBit(c+3014,"R4_en", false,-1);
    tracep->declBit(c+3009,"R4_clk", false,-1);
    tracep->declBus(c+3002,"R5_addr", false,-1, 4,0);
    tracep->declBit(c+3014,"R5_en", false,-1);
    tracep->declBit(c+3009,"R5_clk", false,-1);
    tracep->declBus(c+1356,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+2965,"W0_en", false,-1);
    tracep->declBit(c+3009,"W0_clk", false,-1);
    tracep->declBus(c+1308,"W0_data", false,-1, 20,0);
    tracep->declBus(c+1357,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+2966,"W1_en", false,-1);
    tracep->declBit(c+3009,"W1_clk", false,-1);
    tracep->declBus(c+1308,"W1_data", false,-1, 20,0);
    tracep->declBus(c+1356,"W2_addr", false,-1, 4,0);
    tracep->declBit(c+2967,"W2_en", false,-1);
    tracep->declBit(c+3009,"W2_clk", false,-1);
    tracep->declBus(c+1308,"W2_data", false,-1, 20,0);
    tracep->declBus(c+1357,"W3_addr", false,-1, 4,0);
    tracep->declBit(c+3000,"W3_en", false,-1);
    tracep->declBit(c+3009,"W3_clk", false,-1);
    tracep->declBus(c+1308,"W3_data", false,-1, 20,0);
    tracep->declBus(c+2422,"R0_data", false,-1, 20,0);
    tracep->declBus(c+2423,"R1_data", false,-1, 20,0);
    tracep->declBus(c+2424,"R2_data", false,-1, 20,0);
    tracep->declBus(c+2425,"R3_data", false,-1, 20,0);
    tracep->declBus(c+2807,"R4_data", false,-1, 20,0);
    tracep->declBus(c+2808,"R5_data", false,-1, 20,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2426+i*1,"Memory", true,(i+0), 20,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("arbitor ");
    tracep->declBit(c+3009,"clock", false,-1);
    tracep->declBit(c+3010,"reset", false,-1);
    tracep->declBit(c+2809,"io_master0_req_valid", false,-1);
    tracep->declBit(c+2458,"io_master0_req_bits_rw", false,-1);
    tracep->declBus(c+2459,"io_master0_req_bits_addr", false,-1, 31,0);
    tracep->declArray(c+2460,"io_master0_req_bits_data", false,-1, 1023,0);
    tracep->declBus(c+2492,"io_master0_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+71,"io_master1_req_valid", false,-1);
    tracep->declBit(c+72,"io_master1_req_bits_rw", false,-1);
    tracep->declBus(c+73,"io_master1_req_bits_addr", false,-1, 31,0);
    tracep->declArray(c+74,"io_master1_req_bits_data", false,-1, 1023,0);
    tracep->declBus(c+106,"io_master1_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+1271,"io_master2_req_valid", false,-1);
    tracep->declBit(c+1272,"io_master2_req_bits_rw", false,-1);
    tracep->declBus(c+1273,"io_master2_req_bits_addr", false,-1, 31,0);
    tracep->declArray(c+1274,"io_master2_req_bits_data", false,-1, 1023,0);
    tracep->declBus(c+1306,"io_master2_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+3014,"io_AXI_O_aw_ready", false,-1);
    tracep->declBit(c+3014,"io_AXI_O_w_ready", false,-1);
    tracep->declBit(c+1,"io_AXI_O_b_valid", false,-1);
    tracep->declBit(c+3014,"io_AXI_O_ar_ready", false,-1);
    tracep->declBit(c+2850,"io_AXI_O_r_valid", false,-1);
    tracep->declQuad(c+2851,"io_AXI_O_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+2853,"io_AXI_O_r_bits_last", false,-1);
    tracep->declBit(c+3003,"io_master0_resp_valid", false,-1);
    tracep->declArray(c+2810,"io_master0_resp_bits_data", false,-1, 1023,0);
    tracep->declBit(c+2861,"io_master1_resp_valid", false,-1);
    tracep->declArray(c+2862,"io_master1_resp_bits_data", false,-1, 1023,0);
    tracep->declBit(c+2930,"io_master2_resp_valid", false,-1);
    tracep->declArray(c+2931,"io_master2_resp_bits_data", false,-1, 1023,0);
    tracep->declBit(c+5,"io_AXI_O_aw_valid", false,-1);
    tracep->declBus(c+6,"io_AXI_O_aw_bits_addr", false,-1, 31,0);
    tracep->declBus(c+7,"io_AXI_O_aw_bits_len", false,-1, 7,0);
    tracep->declBit(c+8,"io_AXI_O_w_valid", false,-1);
    tracep->declQuad(c+9,"io_AXI_O_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+11,"io_AXI_O_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+12,"io_AXI_O_w_bits_last", false,-1);
    tracep->declBit(c+3011,"io_AXI_O_ar_valid", false,-1);
    tracep->declBus(c+3012,"io_AXI_O_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+13,"io_AXI_O_ar_bits_len", false,-1, 7,0);
    tracep->declBus(c+3004,"master_choose", false,-1, 3,0);
    tracep->declBus(c+2493,"choose_buffer", false,-1, 3,0);
    tracep->declBus(c+2494,"mask", false,-1, 7,0);
    tracep->declBus(c+2495,"state", false,-1, 1,0);
    tracep->declBit(c+2496,"aw_comp", false,-1);
    tracep->declBit(c+2497,"w_comp", false,-1);
    tracep->declBus(c+2498,"w_count", false,-1, 3,0);
    tracep->declArray(c+2499,"r_buffer", false,-1, 1023,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("clint ");
    tracep->declBit(c+3009,"clock", false,-1);
    tracep->declBit(c+3010,"reset", false,-1);
    tracep->declBit(c+2531,"io_clex_valid", false,-1);
    tracep->declBus(c+29,"io_clex_ld_type", false,-1, 2,0);
    tracep->declQuad(c+2532,"io_clex_raddr", false,-1, 63,0);
    tracep->declBus(c+26,"io_clex_sd_type", false,-1, 2,0);
    tracep->declQuad(c+2532,"io_clex_waddr", false,-1, 63,0);
    tracep->declBus(c+67,"io_clex_wmask", false,-1, 7,0);
    tracep->declQuad(c+27,"io_clex_wdata", false,-1, 63,0);
    tracep->declBit(c+2534,"io_clmem_Clrvalue_valid", false,-1);
    tracep->declQuad(c+2535,"io_clmem_Clrvalue_bits", false,-1, 63,0);
    tracep->declBit(c+2537,"io_timer_int", false,-1);
    tracep->declBus(c+2538,"MSIP", false,-1, 31,0);
    tracep->declQuad(c+2539,"MTIMECMP", false,-1, 63,0);
    tracep->declQuad(c+2541,"MTIME", false,-1, 63,0);
    tracep->declQuad(c+2535,"rvalue_buf", false,-1, 63,0);
    tracep->declBit(c+2534,"valid_buf", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csrs ");
    tracep->declBit(c+3009,"clock", false,-1);
    tracep->declBit(c+3010,"reset", false,-1);
    tracep->declBus(c+2543,"io_CSRDe_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+53,"io_CSRWb_rd", false,-1, 11,0);
    tracep->declBit(c+2859,"io_CSRWb_csr_wen", false,-1);
    tracep->declQuad(c+50,"io_CSRWb_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+2544,"io_CSRTr_rd", false,-1, 11,0);
    tracep->declBit(c+2545,"io_CSRTr_csr_wen", false,-1);
    tracep->declQuad(c+2546,"io_CSRTr_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+2537,"io_timer_int", false,-1);
    tracep->declQuad(c+2548,"io_CSRDe_csr_rdata", false,-1, 63,0);
    tracep->declQuad(c+2550,"io_CSRTr_MTVEC", false,-1, 63,0);
    tracep->declQuad(c+2552,"io_CSRTr_MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+2554,"io_CSRTr_MEPC", false,-1, 63,0);
    tracep->declQuad(c+2556,"io_CSRTr_MIE", false,-1, 63,0);
    tracep->declQuad(c+2558,"io_CSRTr_MIP", false,-1, 63,0);
    tracep->declQuad(c+2560,"io_CSRTr_MSTATUS", false,-1, 63,0);
    tracep->declQuad(c+2550,"MTVEC", false,-1, 63,0);
    tracep->declQuad(c+2552,"MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+2554,"MEPC", false,-1, 63,0);
    tracep->declQuad(c+2556,"MIE", false,-1, 63,0);
    tracep->declQuad(c+2558,"MIP", false,-1, 63,0);
    tracep->declQuad(c+2560,"MSTATUS", false,-1, 63,0);
    tracep->declQuad(c+2562,"MSCRATCH", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("decode ");
    tracep->declBit(c+3009,"clock", false,-1);
    tracep->declBit(c+3010,"reset", false,-1);
    tracep->declBit(c+1268,"io_inst_valid", false,-1);
    tracep->declQuad(c+1269,"io_inst_bits_data", false,-1, 63,0);
    tracep->declBus(c+14,"io_fdio_pc", false,-1, 31,0);
    tracep->declQuad(c+2564,"io_rfio_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+2566,"io_rfio_reg2_rdata", false,-1, 63,0);
    tracep->declBit(c+60,"io_branch", false,-1);
    tracep->declBit(c+3005,"io_stall", false,-1);
    tracep->declBit(c+3006,"io_flush", false,-1);
    tracep->declBit(c+2568,"io_fwde_fw_sel1", false,-1);
    tracep->declBit(c+2569,"io_fwde_fw_sel2", false,-1);
    tracep->declQuad(c+2570,"io_fwde_fw_data1", false,-1, 63,0);
    tracep->declQuad(c+2572,"io_fwde_fw_data2", false,-1, 63,0);
    tracep->declBit(c+2574,"io_fwde_csr_fw_sel", false,-1);
    tracep->declQuad(c+2575,"io_fwde_csr_fw_data", false,-1, 63,0);
    tracep->declQuad(c+2548,"io_csrs_csr_rdata", false,-1, 63,0);
    tracep->declBus(c+2577,"io_rfio_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+2578,"io_rfio_reg2_raddr", false,-1, 4,0);
    tracep->declQuad(c+2579,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+2581,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+2583,"io_deio_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+2584,"io_deio_branch_type", false,-1);
    tracep->declQuad(c+2585,"io_deio_branch_addr", false,-1, 63,0);
    tracep->declBus(c+2587,"io_deio_alu_op", false,-1, 5,0);
    tracep->declBus(c+2588,"io_deio_shamt", false,-1, 5,0);
    tracep->declBus(c+2589,"io_deio_wb_type", false,-1, 1,0);
    tracep->declBus(c+2590,"io_deio_sd_type", false,-1, 2,0);
    tracep->declQuad(c+2591,"io_deio_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+2593,"io_deio_ld_type", false,-1, 2,0);
    tracep->declQuad(c+2594,"io_deio_csr_t", false,-1, 63,0);
    tracep->declBus(c+2596,"io_deio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+2597,"io_deio_csr_wen", false,-1);
    tracep->declBit(c+2842,"io_deio_has_inst", false,-1);
    tracep->declBit(c+2598,"io_jump_flag", false,-1);
    tracep->declBus(c+2599,"io_jump_pc", false,-1, 31,0);
    tracep->declBit(c+57,"io_load_use", false,-1);
    tracep->declBus(c+2577,"io_fwde_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+2578,"io_fwde_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+2543,"io_fwde_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+2543,"io_csrs_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+56,"inst", false,-1, 31,0);
    tracep->declBus(c+2600,"lu_rd", false,-1, 4,0);
    tracep->pushNamePrefix("cu ");
    tracep->declBus(c+56,"io_inst", false,-1, 31,0);
    tracep->declBus(c+2601,"io_jump_type", false,-1, 1,0);
    tracep->declBit(c+2584,"io_branch_type", false,-1);
    tracep->declBus(c+2602,"io_opa_type", false,-1, 1,0);
    tracep->declBus(c+2603,"io_opb_type", false,-1, 2,0);
    tracep->declBus(c+2604,"io_imm_type", false,-1, 2,0);
    tracep->declBus(c+2587,"io_alu_op", false,-1, 5,0);
    tracep->declBus(c+2589,"io_wb_type", false,-1, 1,0);
    tracep->declBus(c+2590,"io_sd_type", false,-1, 2,0);
    tracep->declBus(c+2593,"io_ld_type", false,-1, 2,0);
    tracep->declBus(c+2605,"io_csr_type", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("eximm ");
    tracep->declBus(c+56,"io_inst", false,-1, 31,0);
    tracep->declBus(c+2604,"io_imm_type", false,-1, 2,0);
    tracep->declQuad(c+2606,"io_eximm", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("excute ");
    tracep->declBit(c+3009,"clock", false,-1);
    tracep->declBit(c+3010,"reset", false,-1);
    tracep->declQuad(c+15,"io_deio_op_a", false,-1, 63,0);
    tracep->declQuad(c+17,"io_deio_op_b", false,-1, 63,0);
    tracep->declBus(c+19,"io_deio_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+20,"io_deio_branch_type", false,-1);
    tracep->declQuad(c+21,"io_deio_branch_addr", false,-1, 63,0);
    tracep->declBus(c+23,"io_deio_alu_op", false,-1, 5,0);
    tracep->declBus(c+24,"io_deio_shamt", false,-1, 5,0);
    tracep->declBus(c+25,"io_deio_wb_type", false,-1, 1,0);
    tracep->declBus(c+26,"io_deio_sd_type", false,-1, 2,0);
    tracep->declQuad(c+27,"io_deio_reg2_rdata", false,-1, 63,0);
    tracep->declBus(c+29,"io_deio_ld_type", false,-1, 2,0);
    tracep->declQuad(c+30,"io_deio_csr_t", false,-1, 63,0);
    tracep->declBus(c+32,"io_deio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+33,"io_deio_csr_wen", false,-1);
    tracep->declBit(c+34,"io_deio_has_inst", false,-1);
    tracep->declBit(c+3005,"io_fcex_stall", false,-1);
    tracep->declQuad(c+58,"io_emio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+19,"io_emio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+25,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+29,"io_emio_ld_type", false,-1, 2,0);
    tracep->declBus(c+2608,"io_emio_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+2532,"io_emio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+33,"io_emio_csr_wen", false,-1);
    tracep->declBus(c+32,"io_emio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+34,"io_emio_has_inst", false,-1);
    tracep->declBit(c+60,"io_fcex_jump_flag", false,-1);
    tracep->declBus(c+2609,"io_fcex_jump_pc", false,-1, 31,0);
    tracep->declBit(c+2610,"io_fcex_mul_div", false,-1);
    tracep->declBit(c+2611,"io_fcex_mul_div_valid", false,-1);
    tracep->declQuad(c+2612,"io_raddr", false,-1, 63,0);
    tracep->declQuad(c+2614,"io_waddr", false,-1, 63,0);
    tracep->declQuad(c+27,"io_wdata", false,-1, 63,0);
    tracep->declBus(c+67,"io_wmask", false,-1, 7,0);
    tracep->declBit(c+2531,"io_cl_type", false,-1);
    tracep->declBus(c+19,"io_fwex_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+2616,"io_fwex_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+2618,"io_fwex_reg_we", false,-1);
    tracep->declQuad(c+2532,"io_fwex_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+33,"io_fwex_csr_wen", false,-1);
    tracep->declBus(c+32,"io_fwex_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+2531,"io_clex_valid", false,-1);
    tracep->declBus(c+29,"io_clex_ld_type", false,-1, 2,0);
    tracep->declQuad(c+2532,"io_clex_raddr", false,-1, 63,0);
    tracep->declBus(c+26,"io_clex_sd_type", false,-1, 2,0);
    tracep->declQuad(c+2532,"io_clex_waddr", false,-1, 63,0);
    tracep->declBus(c+67,"io_clex_wmask", false,-1, 7,0);
    tracep->declQuad(c+27,"io_clex_wdata", false,-1, 63,0);
    tracep->declBit(c+2619,"aluvalid_buffer", false,-1);
    tracep->declQuad(c+2620,"alu_buffer", false,-1, 63,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+3009,"clock", false,-1);
    tracep->declBit(c+3010,"reset", false,-1);
    tracep->declQuad(c+15,"io_op_a", false,-1, 63,0);
    tracep->declQuad(c+17,"io_op_b", false,-1, 63,0);
    tracep->declBus(c+23,"io_alu_op", false,-1, 5,0);
    tracep->declBus(c+24,"io_shamt", false,-1, 5,0);
    tracep->declQuad(c+2532,"io_result", false,-1, 63,0);
    tracep->declBit(c+2611,"io_mul_div_outvalid", false,-1);
    tracep->pushNamePrefix("BM ");
    tracep->declBit(c+3009,"clock", false,-1);
    tracep->declBit(c+3010,"reset", false,-1);
    tracep->declBit(c+2622,"io_mul_valid", false,-1);
    tracep->declBit(c+2623,"io_mulw", false,-1);
    tracep->declBus(c+2624,"io_mul_signed", false,-1, 1,0);
    tracep->declQuad(c+2625,"io_multiplicand", false,-1, 63,0);
    tracep->declQuad(c+2627,"io_multiplier", false,-1, 63,0);
    tracep->declBit(c+2629,"io_out_valid", false,-1);
    tracep->declQuad(c+2630,"io_result_hi", false,-1, 63,0);
    tracep->declQuad(c+2632,"io_result_lo", false,-1, 63,0);
    tracep->declBit(c+2629,"out_valid", false,-1);
    tracep->declQuad(c+2630,"result_hi", false,-1, 63,0);
    tracep->declQuad(c+2632,"result_lo", false,-1, 63,0);
    tracep->declArray(c+2634,"multiplierReg", false,-1, 66,0);
    tracep->declArray(c+2637,"multiplicandReg", false,-1, 131,0);
    tracep->declArray(c+2642,"resultReg", false,-1, 131,0);
    tracep->declBit(c+2647,"state", false,-1);
    tracep->declBus(c+2648,"shiftCounter", false,-1, 5,0);
    tracep->declBus(c+2649,"total", false,-1, 5,0);
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
    tracep->declBit(c+3009,"clock", false,-1);
    tracep->declBit(c+3010,"reset", false,-1);
    tracep->declBit(c+2650,"io_div_valid", false,-1);
    tracep->declBit(c+2651,"io_divw", false,-1);
    tracep->declBit(c+2652,"io_div_signed", false,-1);
    tracep->declQuad(c+2653,"io_dividend", false,-1, 63,0);
    tracep->declQuad(c+2655,"io_divisor", false,-1, 63,0);
    tracep->declBit(c+2657,"io_out_valid", false,-1);
    tracep->declQuad(c+2658,"io_quotient", false,-1, 63,0);
    tracep->declBit(c+2657,"out_valid", false,-1);
    tracep->declQuad(c+2658,"quotient", false,-1, 63,0);
    tracep->declArray(c+2660,"partial_remainder", false,-1, 127,0);
    tracep->declArray(c+2664,"sub65", false,-1, 64,0);
    tracep->declQuad(c+2667,"sub33", false,-1, 32,0);
    tracep->declBit(c+2669,"sign_quo", false,-1);
    tracep->declBit(c+2670,"sign_rem", false,-1);
    tracep->declBus(c+2671,"state", false,-1, 1,0);
    tracep->declBus(c+2672,"shiftCounter", false,-1, 6,0);
    tracep->declQuad(c+2673,"temp_34", false,-1, 33,0);
    tracep->declArray(c+2675,"temp_66", false,-1, 65,0);
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
    tracep->declBit(c+2598,"io_fcde_jump_flag", false,-1);
    tracep->declBus(c+2599,"io_fcde_jump_pc", false,-1, 31,0);
    tracep->declBit(c+57,"io_fcde_load_use", false,-1);
    tracep->declBit(c+60,"io_fcex_jump_flag", false,-1);
    tracep->declBus(c+2609,"io_fcex_jump_pc", false,-1, 31,0);
    tracep->declBit(c+2610,"io_fcex_mul_div", false,-1);
    tracep->declBit(c+2611,"io_fcex_mul_div_valid", false,-1);
    tracep->declBit(c+2678,"io_fctr_pop_NOP", false,-1);
    tracep->declBus(c+64,"io_fctr_trap_state", false,-1, 2,0);
    tracep->declBit(c+2679,"io_fctr_jump_flag", false,-1);
    tracep->declBus(c+2680,"io_fctr_jump_pc", false,-1, 31,0);
    tracep->declBit(c+55,"io_fcIcache_req", false,-1);
    tracep->declBus(c+1307,"io_fcIcache_state", false,-1, 2,0);
    tracep->declBus(c+3018,"io_fcIcache_mask", false,-1, 7,0);
    tracep->declBit(c+1268,"io_fcIcache_cpu_valid", false,-1);
    tracep->declBit(c+2930,"io_fcIcache_axi_valid", false,-1);
    tracep->declBit(c+65,"io_fcDcache_req", false,-1);
    tracep->declBus(c+107,"io_fcDcache_state", false,-1, 2,0);
    tracep->declBus(c+67,"io_fcDcache_mask", false,-1, 7,0);
    tracep->declBit(c+108,"io_fcDcache_hit", false,-1);
    tracep->declBit(c+2861,"io_fcDcache_axi_valid", false,-1);
    tracep->declBit(c+2681,"io_fcio_req", false,-1);
    tracep->declBus(c+2682,"io_fcio_state", false,-1, 1,0);
    tracep->declBit(c+2683,"io_fcfe_jump_flag", false,-1);
    tracep->declBus(c+2684,"io_fcfe_jump_pc", false,-1, 31,0);
    tracep->declBit(c+2843,"io_fcfe_flush", false,-1);
    tracep->declBit(c+3007,"io_fcfe_stall", false,-1);
    tracep->declBit(c+3006,"io_fcde_flush", false,-1);
    tracep->declBit(c+3005,"io_fcde_stall", false,-1);
    tracep->declBit(c+3005,"io_fcex_stall", false,-1);
    tracep->declBit(c+3005,"io_fcmem_stall", false,-1);
    tracep->declBit(c+3005,"io_fcwb_stall", false,-1);
    tracep->declBit(c+3005,"io_fcio_stall", false,-1);
    tracep->declBit(c+2860,"io_sdb_stall", false,-1);
    tracep->declBit(c+2844,"Icache_stall", false,-1);
    tracep->declBit(c+2845,"Dcache_stall", false,-1);
    tracep->declBit(c+2685,"IO_stall", false,-1);
    tracep->declBit(c+2686,"MULDIV_stall", false,-1);
    tracep->declBit(c+3007,"SFBundle_0", false,-1);
    tracep->declBit(c+3005,"SFBundle_1", false,-1);
    tracep->declBit(c+3005,"SFBundle_2", false,-1);
    tracep->declBit(c+3005,"SFBundle_4", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+3009,"clock", false,-1);
    tracep->declBit(c+3010,"reset", false,-1);
    tracep->declBit(c+2683,"io_fcfe_jump_flag", false,-1);
    tracep->declBus(c+2684,"io_fcfe_jump_pc", false,-1, 31,0);
    tracep->declBit(c+2843,"io_fcfe_flush", false,-1);
    tracep->declBit(c+3007,"io_fcfe_stall", false,-1);
    tracep->declBus(c+2858,"io_fdio_pc", false,-1, 31,0);
    tracep->declBit(c+55,"io_pc_valid", false,-1);
    tracep->declBus(c+2858,"io_pc_bits", false,-1, 31,0);
    tracep->declBit(c+55,"started", false,-1);
    tracep->declBus(c+2687,"pc", false,-1, 31,0);
    tracep->declBus(c+2688,"old_pc", false,-1, 31,0);
    tracep->declBus(c+2846,"next_pc", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fw ");
    tracep->declBus(c+2577,"io_fwde_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+2578,"io_fwde_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+2543,"io_fwde_csr_raddr", false,-1, 11,0);
    tracep->declBus(c+19,"io_fwex_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+2616,"io_fwex_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+2618,"io_fwex_reg_we", false,-1);
    tracep->declQuad(c+2532,"io_fwex_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+33,"io_fwex_csr_wen", false,-1);
    tracep->declBus(c+32,"io_fwex_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+37,"io_fwmem_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+2689,"io_fwmem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+2691,"io_fwmem_reg_we", false,-1);
    tracep->declQuad(c+41,"io_fwmem_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+43,"io_fwmem_csr_wen", false,-1);
    tracep->declBus(c+44,"io_fwmem_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+48,"io_fwwb_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+46,"io_fwwb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+2692,"io_fwwb_reg_we", false,-1);
    tracep->declQuad(c+50,"io_fwwb_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+52,"io_fwwb_csr_wen", false,-1);
    tracep->declBus(c+53,"io_fwwb_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+2568,"io_fwde_fw_sel1", false,-1);
    tracep->declBit(c+2569,"io_fwde_fw_sel2", false,-1);
    tracep->declQuad(c+2570,"io_fwde_fw_data1", false,-1, 63,0);
    tracep->declQuad(c+2572,"io_fwde_fw_data2", false,-1, 63,0);
    tracep->declBit(c+2574,"io_fwde_csr_fw_sel", false,-1);
    tracep->declQuad(c+2575,"io_fwde_csr_fw_data", false,-1, 63,0);
    tracep->declBit(c+2693,"reg1_ex_hazard", false,-1);
    tracep->declBit(c+2694,"reg2_ex_hazard", false,-1);
    tracep->declBit(c+2695,"reg1_mem_hazard", false,-1);
    tracep->declBit(c+2696,"reg2_mem_hazard", false,-1);
    tracep->declBit(c+2697,"reg1_wb_hazard", false,-1);
    tracep->declBit(c+2698,"reg2_wb_hazard", false,-1);
    tracep->declBit(c+2699,"csr_ex_harzard", false,-1);
    tracep->declBit(c+2700,"csr_mem_harzard", false,-1);
    tracep->declBit(c+2701,"csr_wb_harzard", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("interact ");
    tracep->declBus(c+2847,"inst", false,-1, 31,0);
    tracep->declBit(c+3009,"clk", false,-1);
    tracep->declBit(c+3010,"rst", false,-1);
    tracep->declBit(c+2702,"ebreak_flag", false,-1);
    tracep->declBus(c+2703,"over_count", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ioformem ");
    tracep->declBit(c+3009,"clock", false,-1);
    tracep->declBit(c+3010,"reset", false,-1);
    tracep->declBit(c+3003,"io_axi_resp_valid", false,-1);
    tracep->declArray(c+2810,"io_axi_resp_bits_data", false,-1, 1023,0);
    tracep->declBus(c+2704,"io_excute_waddr", false,-1, 31,0);
    tracep->declBus(c+2705,"io_excute_raddr", false,-1, 31,0);
    tracep->declQuad(c+27,"io_excute_wdata", false,-1, 63,0);
    tracep->declBus(c+67,"io_excute_wmask", false,-1, 7,0);
    tracep->declBit(c+2706,"io_excute_load", false,-1);
    tracep->declBit(c+2707,"io_excute_store", false,-1);
    tracep->declBit(c+3005,"io_fc_stall", false,-1);
    tracep->declBit(c+2809,"io_axi_req_valid", false,-1);
    tracep->declBit(c+2458,"io_axi_req_bits_rw", false,-1);
    tracep->declBus(c+2459,"io_axi_req_bits_addr", false,-1, 31,0);
    tracep->declArray(c+2460,"io_axi_req_bits_data", false,-1, 1023,0);
    tracep->declBus(c+2492,"io_axi_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+2708,"io_mem_data_valid", false,-1);
    tracep->declQuad(c+2709,"io_mem_data_bits", false,-1, 63,0);
    tracep->declBit(c+2681,"io_fc_req", false,-1);
    tracep->declBus(c+2682,"io_fc_state", false,-1, 1,0);
    tracep->declBus(c+2682,"state", false,-1, 1,0);
    tracep->declBit(c+2711,"axi_req_valid", false,-1);
    tracep->declBit(c+2458,"axi_req_bits_rw", false,-1);
    tracep->declBus(c+2459,"axi_req_bits_addr", false,-1, 31,0);
    tracep->declQuad(c+2712,"axi_req_bits_data", false,-1, 63,0);
    tracep->declBus(c+2492,"axi_req_bits_mask", false,-1, 7,0);
    tracep->declBit(c+2708,"mem_data_valid", false,-1);
    tracep->declQuad(c+2709,"mem_data_bits", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+3009,"clock", false,-1);
    tracep->declBit(c+3010,"reset", false,-1);
    tracep->declQuad(c+35,"io_emio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+37,"io_emio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+38,"io_emio_wb_type", false,-1, 1,0);
    tracep->declBus(c+39,"io_emio_ld_type", false,-1, 2,0);
    tracep->declBus(c+40,"io_emio_ld_addr_lowbit", false,-1, 2,0);
    tracep->declQuad(c+41,"io_emio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+43,"io_emio_csr_wen", false,-1);
    tracep->declBus(c+44,"io_emio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+45,"io_emio_has_inst", false,-1);
    tracep->declBit(c+68,"io_rdata_valid", false,-1);
    tracep->declQuad(c+69,"io_rdata_bits_data", false,-1, 63,0);
    tracep->declBit(c+2708,"io_rdata_io_data_valid", false,-1);
    tracep->declQuad(c+2709,"io_rdata_io_data_bits", false,-1, 63,0);
    tracep->declBit(c+2534,"io_clmem_Clrvalue_valid", false,-1);
    tracep->declQuad(c+2535,"io_clmem_Clrvalue_bits", false,-1, 63,0);
    tracep->declBit(c+3005,"io_stall", false,-1);
    tracep->declQuad(c+2689,"io_mwio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+37,"io_mwio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+38,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declQuad(c+41,"io_mwio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+43,"io_mwio_csr_wen", false,-1);
    tracep->declBus(c+44,"io_mwio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+45,"io_mwio_has_inst", false,-1);
    tracep->declBus(c+37,"io_fwmem_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+2689,"io_fwmem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+2691,"io_fwmem_reg_we", false,-1);
    tracep->declQuad(c+41,"io_fwmem_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+43,"io_fwmem_csr_wen", false,-1);
    tracep->declBus(c+44,"io_fwmem_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+2714,"clmemvalid_buffer", false,-1);
    tracep->declBit(c+2715,"rdatavalid_buffer", false,-1);
    tracep->declBit(c+2716,"rdataiovalid_buffer", false,-1);
    tracep->declQuad(c+2717,"clmem_buffer", false,-1, 63,0);
    tracep->declQuad(c+2719,"rdata_buffer", false,-1, 63,0);
    tracep->declQuad(c+2721,"rdataio_buffer", false,-1, 63,0);
    tracep->declQuad(c+2723,"get_value", false,-1, 63,0);
    tracep->declQuad(c+2725,"rvalue", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+3009,"clock", false,-1);
    tracep->declBus(c+2577,"io_RfDe_reg1_raddr", false,-1, 4,0);
    tracep->declBus(c+2578,"io_RfDe_reg2_raddr", false,-1, 4,0);
    tracep->declBus(c+48,"io_RfWb_rd", false,-1, 4,0);
    tracep->declBit(c+2802,"io_RfWb_reg_wen", false,-1);
    tracep->declQuad(c+46,"io_RfWb_reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+2564,"io_RfDe_reg1_rdata", false,-1, 63,0);
    tracep->declQuad(c+2566,"io_RfDe_reg2_rdata", false,-1, 63,0);
    tracep->pushNamePrefix("regs_ext ");
    tracep->declBus(c+48,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+3014,"R0_en", false,-1);
    tracep->declBit(c+3009,"R0_clk", false,-1);
    tracep->declBus(c+2577,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+3014,"R1_en", false,-1);
    tracep->declBit(c+3009,"R1_clk", false,-1);
    tracep->declBus(c+2578,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+3014,"R2_en", false,-1);
    tracep->declBit(c+3009,"R2_clk", false,-1);
    tracep->declBus(c+3019,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+3014,"W0_en", false,-1);
    tracep->declBit(c+3009,"W0_clk", false,-1);
    tracep->declQuad(c+3016,"W0_data", false,-1, 63,0);
    tracep->declBus(c+48,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+3014,"W1_en", false,-1);
    tracep->declBit(c+3009,"W1_clk", false,-1);
    tracep->declQuad(c+2848,"W1_data", false,-1, 63,0);
    tracep->declQuad(c+2727,"R0_data", false,-1, 63,0);
    tracep->declQuad(c+2729,"R1_data", false,-1, 63,0);
    tracep->declQuad(c+2731,"R2_data", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+2733+i*2,"Memory", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("trap ");
    tracep->declBit(c+3009,"clock", false,-1);
    tracep->declBit(c+3010,"reset", false,-1);
    tracep->declBit(c+34,"io_ex_hasinst", false,-1);
    tracep->declBit(c+45,"io_mem_hasinst", false,-1);
    tracep->declBit(c+54,"io_wb_hasinst", false,-1);
    tracep->declQuad(c+2550,"io_csrtr_MTVEC", false,-1, 63,0);
    tracep->declQuad(c+2552,"io_csrtr_MCAUSE", false,-1, 63,0);
    tracep->declQuad(c+2554,"io_csrtr_MEPC", false,-1, 63,0);
    tracep->declQuad(c+2556,"io_csrtr_MIE", false,-1, 63,0);
    tracep->declQuad(c+2558,"io_csrtr_MIP", false,-1, 63,0);
    tracep->declQuad(c+2560,"io_csrtr_MSTATUS", false,-1, 63,0);
    tracep->declBus(c+56,"io_inst", false,-1, 31,0);
    tracep->declBus(c+2858,"io_pc", false,-1, 31,0);
    tracep->declBus(c+2544,"io_csrtr_rd", false,-1, 11,0);
    tracep->declBit(c+2545,"io_csrtr_csr_wen", false,-1);
    tracep->declQuad(c+2546,"io_csrtr_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+2678,"io_fctr_pop_NOP", false,-1);
    tracep->declBus(c+64,"io_fctr_trap_state", false,-1, 2,0);
    tracep->declBit(c+2679,"io_fctr_jump_flag", false,-1);
    tracep->declBus(c+2680,"io_fctr_jump_pc", false,-1, 31,0);
    tracep->declQuad(c+2797,"cause", false,-1, 63,0);
    tracep->declBus(c+2799,"pc", false,-1, 31,0);
    tracep->declBus(c+64,"state", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb ");
    tracep->declQuad(c+46,"io_mwio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+48,"io_mwio_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+49,"io_mwio_wb_type", false,-1, 1,0);
    tracep->declQuad(c+50,"io_mwio_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+52,"io_mwio_csr_wen", false,-1);
    tracep->declBus(c+53,"io_mwio_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+54,"io_mwio_has_inst", false,-1);
    tracep->declBit(c+3005,"io_stall", false,-1);
    tracep->declBus(c+48,"io_rfio_rd", false,-1, 4,0);
    tracep->declBit(c+2802,"io_rfio_reg_wen", false,-1);
    tracep->declQuad(c+46,"io_rfio_reg_wdata", false,-1, 63,0);
    tracep->declBus(c+48,"io_fwwb_reg_waddr", false,-1, 4,0);
    tracep->declQuad(c+46,"io_fwwb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+2692,"io_fwwb_reg_we", false,-1);
    tracep->declQuad(c+50,"io_fwwb_csr_wdata", false,-1, 63,0);
    tracep->declBit(c+52,"io_fwwb_csr_wen", false,-1);
    tracep->declBus(c+53,"io_fwwb_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+53,"io_csrs_rd", false,-1, 11,0);
    tracep->declBit(c+2859,"io_csrs_csr_wen", false,-1);
    tracep->declQuad(c+50,"io_csrs_csr_wdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+3009,"ACLK", false,-1);
    tracep->declBit(c+3013,"ARESETn", false,-1);
    tracep->declBit(c+3015,"S_AXI_AWID", false,-1);
    tracep->declBus(c+6,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+7,"S_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+3020,"S_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+3021,"S_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+3015,"S_AXI_AWLOCK", false,-1);
    tracep->declBus(c+3022,"S_AXI_AWCACHE", false,-1, 3,0);
    tracep->declBus(c+3023,"S_AXI_AWPROT", false,-1, 2,0);
    tracep->declBit(c+5,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+3014,"S_AXI_AWREADY", false,-1);
    tracep->declQuad(c+9,"S_AXI_WDATA", false,-1, 63,0);
    tracep->declBus(c+11,"S_AXI_WSTRB", false,-1, 7,0);
    tracep->declBit(c+12,"S_AXI_WLAST", false,-1);
    tracep->declBit(c+8,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+3014,"S_AXI_WREADY", false,-1);
    tracep->declBit(c+3015,"S_AXI_BID", false,-1);
    tracep->declBus(c+2,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+3014,"S_AXI_BREADY", false,-1);
    tracep->declBit(c+3015,"S_AXI_ARID", false,-1);
    tracep->declBus(c+3012,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+13,"S_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+3020,"S_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+3021,"S_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+3015,"S_AXI_ARLOCK", false,-1);
    tracep->declBus(c+3022,"S_AXI_ARCACHE", false,-1, 3,0);
    tracep->declBus(c+3023,"S_AXI_ARPROT", false,-1, 2,0);
    tracep->declBit(c+3011,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+3014,"S_AXI_ARREADY", false,-1);
    tracep->declBit(c+3015,"S_AXI_RID", false,-1);
    tracep->declQuad(c+2851,"S_AXI_RDATA", false,-1, 63,0);
    tracep->declBit(c+2853,"S_AXI_RLAST", false,-1);
    tracep->declBus(c+2854,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+2850,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+3014,"S_AXI_RREADY", false,-1);
    tracep->declBus(c+3,"w_count", false,-1, 3,0);
    tracep->declBus(c+2855,"r_count", false,-1, 3,0);
    tracep->declBus(c+2,"bresp", false,-1, 1,0);
    tracep->declBit(c+1,"bvalid", false,-1);
    tracep->declQuad(c+2851,"rdata", false,-1, 63,0);
    tracep->declBit(c+2853,"rlast", false,-1);
    tracep->declBus(c+2854,"rresp", false,-1, 1,0);
    tracep->declBit(c+2850,"rvalid", false,-1);
    tracep->declBus(c+4,"awaddr_buffer", false,-1, 31,0);
    tracep->declBus(c+3008,"awaddr", false,-1, 31,0);
    tracep->declBit(c+2800,"need_resp", false,-1);
    tracep->declBus(c+2856,"araddr", false,-1, 31,0);
    tracep->declBit(c+2857,"need_read", false,-1);
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

extern const VlWide<32>/*1023:0*/ VSoc__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<96>/*3071:0*/ VSoc__ConstPool__CONST_hbca7a291_0;

VL_ATTR_COLD void VSoc___024root__trace_full_sub_0(VSoc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<32>/*1023:0*/ __Vtemp_h029b5153__0;
    VlWide<8>/*255:0*/ __Vtemp_hfa2dc9d8__0;
    VlWide<8>/*255:0*/ __Vtemp_h4acefb0b__0;
    VlWide<32>/*1023:0*/ __Vtemp_hb5d6720c__0;
    VlWide<32>/*1023:0*/ __Vtemp_h758ec451__0;
    VlWide<3>/*95:0*/ __Vtemp_h5ee83ed9__0;
    VlWide<8>/*255:0*/ __Vtemp_h78afa619__0;
    VlWide<8>/*255:0*/ __Vtemp_h3953c90b__0;
    VlWide<32>/*1023:0*/ __Vtemp_h6aa59cf1__0;
    VlWide<128>/*4095:0*/ __Vtemp_hf48eb399__0;
    VlWide<32>/*1023:0*/ __Vtemp_h65d5a9df__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->Soc__DOT__sram__DOT__bvalid));
    bufp->fullCData(oldp+2,(vlSelf->Soc__DOT__sram__DOT__bresp),2);
    bufp->fullCData(oldp+3,(vlSelf->Soc__DOT__sram__DOT__w_count),4);
    bufp->fullIData(oldp+4,(vlSelf->Soc__DOT__sram__DOT__awaddr_buffer),32);
    bufp->fullBit(oldp+5,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1));
    bufp->fullIData(oldp+6,(vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr),32);
    bufp->fullCData(oldp+7,(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0)
                              ? 0U : ((IData)((8U != 
                                               (9U 
                                                & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))))
                                       ? 0U : ((2U 
                                                & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                                ? 0xfU
                                                : (0xfU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                                    >> 2U))))))))),8);
    bufp->fullBit(oldp+8,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_5));
    bufp->fullQData(oldp+9,(vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data),64);
    bufp->fullCData(oldp+11,(vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb),8);
    bufp->fullBit(oldp+12,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4));
    bufp->fullCData(oldp+13,((((2U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                               | ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                  | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))))
                               ? 0U : ((IData)((8U 
                                                != 
                                                (9U 
                                                 & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))))
                                        ? 0U : ((2U 
                                                 & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                                 ? 0xfU
                                                 : 
                                                (0xfU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                                  >> 2U))))))))),8);
    bufp->fullIData(oldp+14,(vlSelf->Soc__DOT__core__DOT__fdreg_pc),32);
    bufp->fullQData(oldp+15,(vlSelf->Soc__DOT__core__DOT__dereg_op_a),64);
    bufp->fullQData(oldp+17,(vlSelf->Soc__DOT__core__DOT__dereg_op_b),64);
    bufp->fullCData(oldp+19,(vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr),5);
    bufp->fullBit(oldp+20,(vlSelf->Soc__DOT__core__DOT__dereg_branch_type));
    bufp->fullQData(oldp+21,(vlSelf->Soc__DOT__core__DOT__dereg_branch_addr),64);
    bufp->fullCData(oldp+23,(vlSelf->Soc__DOT__core__DOT__dereg_alu_op),6);
    bufp->fullCData(oldp+24,(vlSelf->Soc__DOT__core__DOT__dereg_shamt),6);
    bufp->fullCData(oldp+25,(vlSelf->Soc__DOT__core__DOT__dereg_wb_type),2);
    bufp->fullCData(oldp+26,(vlSelf->Soc__DOT__core__DOT__dereg_sd_type),3);
    bufp->fullQData(oldp+27,(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata),64);
    bufp->fullCData(oldp+29,(vlSelf->Soc__DOT__core__DOT__dereg_ld_type),3);
    bufp->fullQData(oldp+30,(vlSelf->Soc__DOT__core__DOT__dereg_csr_t),64);
    bufp->fullSData(oldp+32,(vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr),12);
    bufp->fullBit(oldp+33,(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen));
    bufp->fullBit(oldp+34,(vlSelf->Soc__DOT__core__DOT__dereg_has_inst));
    bufp->fullQData(oldp+35,(vlSelf->Soc__DOT__core__DOT__emreg_reg_wdata),64);
    bufp->fullCData(oldp+37,(vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr),5);
    bufp->fullCData(oldp+38,(vlSelf->Soc__DOT__core__DOT__emreg_wb_type),2);
    bufp->fullCData(oldp+39,(vlSelf->Soc__DOT__core__DOT__emreg_ld_type),3);
    bufp->fullCData(oldp+40,(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit),3);
    bufp->fullQData(oldp+41,(vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata),64);
    bufp->fullBit(oldp+43,(vlSelf->Soc__DOT__core__DOT__emreg_csr_wen));
    bufp->fullSData(oldp+44,(vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr),12);
    bufp->fullBit(oldp+45,(vlSelf->Soc__DOT__core__DOT__emreg_has_inst));
    bufp->fullQData(oldp+46,(vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata),64);
    bufp->fullCData(oldp+48,(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr),5);
    bufp->fullCData(oldp+49,(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type),2);
    bufp->fullQData(oldp+50,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata),64);
    bufp->fullBit(oldp+52,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen));
    bufp->fullSData(oldp+53,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr),12);
    bufp->fullBit(oldp+54,(vlSelf->Soc__DOT__core__DOT__mwreg_has_inst));
    bufp->fullBit(oldp+55,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started));
    bufp->fullIData(oldp+56,(vlSelf->Soc__DOT__core__DOT__decode__DOT__inst),32);
    bufp->fullBit(oldp+57,(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16));
    bufp->fullQData(oldp+58,(((IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen)
                               ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                               : vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_h7d5adbc1__0)),64);
    bufp->fullBit(oldp+60,(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag));
    bufp->fullBit(oldp+61,((0U != ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))));
    bufp->fullQData(oldp+62,(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T),64);
    bufp->fullCData(oldp+64,(vlSelf->Soc__DOT__core__DOT__trap__DOT__state),3);
    bufp->fullBit(oldp+65,(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid));
    bufp->fullIData(oldp+66,((IData)(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T)),32);
    bufp->fullCData(oldp+67,(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask),8);
    bufp->fullBit(oldp+68,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_valid));
    bufp->fullQData(oldp+69,(vlSelf->Soc__DOT__core__DOT___Dcache_io_cpu_resp_bits_data),64);
    bufp->fullBit(oldp+71,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_valid));
    bufp->fullBit(oldp+72,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw));
    bufp->fullIData(oldp+73,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr),32);
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray) {
        __Vtemp_h029b5153__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0U];
        __Vtemp_h029b5153__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[1U];
        __Vtemp_h029b5153__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[2U];
        __Vtemp_h029b5153__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[3U];
        __Vtemp_h029b5153__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[4U];
        __Vtemp_h029b5153__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[5U];
        __Vtemp_h029b5153__0[6U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[6U];
        __Vtemp_h029b5153__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[7U];
        __Vtemp_h029b5153__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[8U];
        __Vtemp_h029b5153__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[9U];
        __Vtemp_h029b5153__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0xaU];
        __Vtemp_h029b5153__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0xbU];
        __Vtemp_h029b5153__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0xcU];
        __Vtemp_h029b5153__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0xdU];
        __Vtemp_h029b5153__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0xeU];
        __Vtemp_h029b5153__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0xfU];
        __Vtemp_h029b5153__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x10U];
        __Vtemp_h029b5153__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x11U];
        __Vtemp_h029b5153__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x12U];
        __Vtemp_h029b5153__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x13U];
        __Vtemp_h029b5153__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x14U];
        __Vtemp_h029b5153__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x15U];
        __Vtemp_h029b5153__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x16U];
        __Vtemp_h029b5153__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x17U];
        __Vtemp_h029b5153__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x18U];
        __Vtemp_h029b5153__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x19U];
        __Vtemp_h029b5153__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x1aU];
        __Vtemp_h029b5153__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x1bU];
        __Vtemp_h029b5153__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x1cU];
        __Vtemp_h029b5153__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x1dU];
        __Vtemp_h029b5153__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x1eU];
        __Vtemp_h029b5153__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x1fU];
    } else {
        __Vtemp_h029b5153__0[0U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
        __Vtemp_h029b5153__0[1U] = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
        __Vtemp_h029b5153__0[2U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
        __Vtemp_h029b5153__0[3U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
        __Vtemp_h029b5153__0[4U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
        __Vtemp_h029b5153__0[5U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
        __Vtemp_h029b5153__0[6U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
        __Vtemp_h029b5153__0[7U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
        __Vtemp_h029b5153__0[8U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
        __Vtemp_h029b5153__0[9U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
        __Vtemp_h029b5153__0[0xaU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
        __Vtemp_h029b5153__0[0xbU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
        __Vtemp_h029b5153__0[0xcU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
        __Vtemp_h029b5153__0[0xdU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
        __Vtemp_h029b5153__0[0xeU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
        __Vtemp_h029b5153__0[0xfU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
        __Vtemp_h029b5153__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
        __Vtemp_h029b5153__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
        __Vtemp_h029b5153__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
        __Vtemp_h029b5153__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
        __Vtemp_h029b5153__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
        __Vtemp_h029b5153__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
        __Vtemp_h029b5153__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
        __Vtemp_h029b5153__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
        __Vtemp_h029b5153__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
        __Vtemp_h029b5153__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
        __Vtemp_h029b5153__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        __Vtemp_h029b5153__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        __Vtemp_h029b5153__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        __Vtemp_h029b5153__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        __Vtemp_h029b5153__0[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        __Vtemp_h029b5153__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    }
    bufp->fullWData(oldp+74,(__Vtemp_h029b5153__0),1024);
    bufp->fullCData(oldp+106,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask),8);
    bufp->fullCData(oldp+107,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state),3);
    bufp->fullBit(oldp+108,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3));
    bufp->fullIData(oldp+109,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__tag),21);
    bufp->fullCData(oldp+110,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index),4);
    bufp->fullCData(oldp+111,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset),7);
    bufp->fullIData(oldp+112,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid),32);
    bufp->fullIData(oldp+113,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty),32);
    bufp->fullIData(oldp+114,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace),32);
    bufp->fullBit(oldp+115,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0));
    bufp->fullBit(oldp+116,(((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                              [(0x1fU & ((IData)(1U) 
                                         + (0x1eU & 
                                            ((IData)(
                                                     (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                      >> 7U)) 
                                             << 1U))))] 
                              == (0x1fffffU & (IData)(
                                                      (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                       >> 0xbU)))) 
                             & ((0x1fU >= (0x3fU & 
                                           ((IData)(1U) 
                                            + (0x1eU 
                                               & ((IData)(
                                                          (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                           >> 7U)) 
                                                  << 1U)))))
                                 ? (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid 
                                    >> (0x3fU & ((IData)(1U) 
                                                 + 
                                                 (0x1eU 
                                                  & ((IData)(
                                                             (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                              >> 7U)) 
                                                     << 1U)))))
                                 : 0U))));
    bufp->fullWData(oldp+117,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray),1024);
    bufp->fullBit(oldp+149,((1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))
                                    ? ((IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid) 
                                       & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3))
                                    : ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))
                                        ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8
                                        : ((6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                           | ((~ (IData)(
                                                         (7U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))) 
                                              & ((1U 
                                                  != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                                 & ((2U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))
                                                     ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8
                                                     : 
                                                    (3U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))))))))));
    __Vtemp_hfa2dc9d8__0[0U] = (IData)((QData)((IData)(
                                                       ((IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)
                                                         ? 
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)
                                                          ? 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0)
                                                           ? 
                                                          (0x1eU 
                                                           & ((IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                                       >> 7U)) 
                                                              << 1U))
                                                           : 
                                                          (0x3fU 
                                                           & ((IData)(1U) 
                                                              + 
                                                              (0x1eU 
                                                               & ((IData)(
                                                                          (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                                           >> 7U)) 
                                                                  << 1U)))))
                                                          : 0U)
                                                         : 0U))));
    __Vtemp_hfa2dc9d8__0[1U] = (IData)(((QData)((IData)(
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)
                                                          ? 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)
                                                           ? 
                                                          ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0)
                                                            ? 
                                                           (0x1eU 
                                                            & ((IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                                        >> 7U)) 
                                                               << 1U))
                                                            : 
                                                           (0x3fU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               (0x1eU 
                                                                & ((IData)(
                                                                           (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                                            >> 7U)) 
                                                                   << 1U)))))
                                                           : 0U)
                                                          : 0U))) 
                                        >> 0x20U));
    __Vtemp_hfa2dc9d8__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h0cf0809b__0;
    __Vtemp_hfa2dc9d8__0[3U] = (IData)((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h499d2e06__0)));
    __Vtemp_hfa2dc9d8__0[4U] = (IData)(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h499d2e06__0)) 
                                        >> 0x20U));
    __Vtemp_hfa2dc9d8__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h0cf0809b__0;
    __Vtemp_hfa2dc9d8__0[6U] = (IData)((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h499d2e06__0)));
    __Vtemp_hfa2dc9d8__0[7U] = (IData)(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h499d2e06__0)) 
                                        >> 0x20U));
    bufp->fullIData(oldp+150,((((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                 << 5U)))
                                 ? 0U : (__Vtemp_hfa2dc9d8__0[
                                         (((IData)(0x1fU) 
                                           + (0xffU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                 << 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                << 5U))))) 
                               | (__Vtemp_hfa2dc9d8__0[
                                  (7U & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))] 
                                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                               << 5U))))),32);
    bufp->fullBit(oldp+151,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray));
    bufp->fullBit(oldp+152,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim));
    bufp->fullIData(oldp+153,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr),32);
    bufp->fullQData(oldp+154,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data),64);
    bufp->fullCData(oldp+156,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask),8);
    bufp->fullBit(oldp+157,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inst_type));
    bufp->fullBit(oldp+158,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum));
    bufp->fullQData(oldp+159,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_bits_data),64);
    __Vtemp_h4acefb0b__0[0U] = (IData)((QData)((IData)(
                                                       ((IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)
                                                         ? 
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)
                                                          ? 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0)
                                                           ? 
                                                          (0x1eU 
                                                           & ((IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                                       >> 7U)) 
                                                              << 1U))
                                                           : 
                                                          (0x3fU 
                                                           & ((IData)(1U) 
                                                              + 
                                                              (0x1eU 
                                                               & ((IData)(
                                                                          (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                                           >> 7U)) 
                                                                  << 1U)))))
                                                          : 0U)
                                                         : 0U))));
    __Vtemp_h4acefb0b__0[1U] = (IData)(((QData)((IData)(
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)
                                                          ? 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)
                                                           ? 
                                                          ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0)
                                                            ? 
                                                           (0x1eU 
                                                            & ((IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                                        >> 7U)) 
                                                               << 1U))
                                                            : 
                                                           (0x3fU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               (0x1eU 
                                                                & ((IData)(
                                                                           (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                                            >> 7U)) 
                                                                   << 1U)))))
                                                           : 0U)
                                                          : 0U))) 
                                        >> 0x20U));
    __Vtemp_h4acefb0b__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h0cf0809b__0;
    __Vtemp_h4acefb0b__0[3U] = (IData)((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h499d2e06__0)));
    __Vtemp_h4acefb0b__0[4U] = (IData)(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h499d2e06__0)) 
                                        >> 0x20U));
    __Vtemp_h4acefb0b__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h0cf0809b__0;
    __Vtemp_h4acefb0b__0[6U] = (IData)((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h499d2e06__0)));
    __Vtemp_h4acefb0b__0[7U] = (IData)(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h499d2e06__0)) 
                                        >> 0x20U));
    bufp->fullCData(oldp+161,((0x1fU & (((0U == (0x1fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                    << 5U)))
                                          ? 0U : (__Vtemp_h4acefb0b__0[
                                                  (((IData)(4U) 
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
                                        | (__Vtemp_h4acefb0b__0[
                                           (7U & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))] 
                                           >> (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                  << 5U)))))),5);
    bufp->fullCData(oldp+162,((0x1fU & ((IData)(1U) 
                                        + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                           << 1U)))),5);
    bufp->fullCData(oldp+163,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                               << 1U)),5);
    bufp->fullBit(oldp+164,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum))));
    bufp->fullWData(oldp+165,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data),1024);
    bufp->fullBit(oldp+197,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0))));
    bufp->fullWData(oldp+198,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[0]),1024);
    bufp->fullWData(oldp+230,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[1]),1024);
    bufp->fullWData(oldp+262,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[2]),1024);
    bufp->fullWData(oldp+294,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[3]),1024);
    bufp->fullWData(oldp+326,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[4]),1024);
    bufp->fullWData(oldp+358,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[5]),1024);
    bufp->fullWData(oldp+390,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[6]),1024);
    bufp->fullWData(oldp+422,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[7]),1024);
    bufp->fullWData(oldp+454,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[8]),1024);
    bufp->fullWData(oldp+486,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[9]),1024);
    bufp->fullWData(oldp+518,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[10]),1024);
    bufp->fullWData(oldp+550,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[11]),1024);
    bufp->fullWData(oldp+582,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[12]),1024);
    bufp->fullWData(oldp+614,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[13]),1024);
    bufp->fullWData(oldp+646,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[14]),1024);
    bufp->fullWData(oldp+678,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[15]),1024);
    bufp->fullWData(oldp+710,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[16]),1024);
    bufp->fullWData(oldp+742,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[17]),1024);
    bufp->fullWData(oldp+774,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[18]),1024);
    bufp->fullWData(oldp+806,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[19]),1024);
    bufp->fullWData(oldp+838,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[20]),1024);
    bufp->fullWData(oldp+870,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[21]),1024);
    bufp->fullWData(oldp+902,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[22]),1024);
    bufp->fullWData(oldp+934,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[23]),1024);
    bufp->fullWData(oldp+966,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[24]),1024);
    bufp->fullWData(oldp+998,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[25]),1024);
    bufp->fullWData(oldp+1030,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[26]),1024);
    bufp->fullWData(oldp+1062,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[27]),1024);
    bufp->fullWData(oldp+1094,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[28]),1024);
    bufp->fullWData(oldp+1126,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[29]),1024);
    bufp->fullWData(oldp+1158,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[30]),1024);
    bufp->fullWData(oldp+1190,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[31]),1024);
    bufp->fullCData(oldp+1222,((0x1fU & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                          << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN)))),5);
    bufp->fullBit(oldp+1223,(((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                              & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                 & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8))));
    bufp->fullCData(oldp+1224,((0x1fU & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                          << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim)))),5);
    bufp->fullBit(oldp+1225,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8854f984__0) 
                              & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))));
    bufp->fullBit(oldp+1226,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8ecd23a9__0) 
                              & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                 & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8))));
    bufp->fullBit(oldp+1227,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca93995__0) 
                              & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))));
    bufp->fullCData(oldp+1228,((0x1eU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                  >> 7U)) 
                                         << 1U))),5);
    bufp->fullCData(oldp+1229,((0x1fU & ((IData)(1U) 
                                         + (0x1eU & 
                                            ((IData)(
                                                     (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                      >> 7U)) 
                                             << 1U))))),5);
    bufp->fullIData(oldp+1230,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                 & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                    & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8))
                                 ? vlSelf->__VdfgTmp_h10ac77a7__0
                                 : 0U)),21);
    bufp->fullIData(oldp+1231,((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8854f984__0) 
                                 & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))
                                 ? vlSelf->__VdfgTmp_h4fb76d38__0
                                 : 0U)),21);
    bufp->fullIData(oldp+1232,((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8ecd23a9__0) 
                                 & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                    & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8))
                                 ? vlSelf->__VdfgTmp_h10ac77a7__0
                                 : 0U)),21);
    bufp->fullIData(oldp+1233,((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca93995__0) 
                                 & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))
                                 ? vlSelf->__VdfgTmp_h4fb76d38__0
                                 : 0U)),21);
    bufp->fullIData(oldp+1234,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                               [(0x1eU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                   >> 7U)) 
                                          << 1U))]),21);
    bufp->fullIData(oldp+1235,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                               [(0x1fU & ((IData)(1U) 
                                          + (0x1eU 
                                             & ((IData)(
                                                        (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                         >> 7U)) 
                                                << 1U))))]),21);
    bufp->fullIData(oldp+1236,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[0]),21);
    bufp->fullIData(oldp+1237,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[1]),21);
    bufp->fullIData(oldp+1238,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[2]),21);
    bufp->fullIData(oldp+1239,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[3]),21);
    bufp->fullIData(oldp+1240,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[4]),21);
    bufp->fullIData(oldp+1241,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[5]),21);
    bufp->fullIData(oldp+1242,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[6]),21);
    bufp->fullIData(oldp+1243,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[7]),21);
    bufp->fullIData(oldp+1244,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[8]),21);
    bufp->fullIData(oldp+1245,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[9]),21);
    bufp->fullIData(oldp+1246,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[10]),21);
    bufp->fullIData(oldp+1247,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[11]),21);
    bufp->fullIData(oldp+1248,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[12]),21);
    bufp->fullIData(oldp+1249,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[13]),21);
    bufp->fullIData(oldp+1250,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[14]),21);
    bufp->fullIData(oldp+1251,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[15]),21);
    bufp->fullIData(oldp+1252,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[16]),21);
    bufp->fullIData(oldp+1253,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[17]),21);
    bufp->fullIData(oldp+1254,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[18]),21);
    bufp->fullIData(oldp+1255,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[19]),21);
    bufp->fullIData(oldp+1256,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[20]),21);
    bufp->fullIData(oldp+1257,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[21]),21);
    bufp->fullIData(oldp+1258,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[22]),21);
    bufp->fullIData(oldp+1259,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[23]),21);
    bufp->fullIData(oldp+1260,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[24]),21);
    bufp->fullIData(oldp+1261,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[25]),21);
    bufp->fullIData(oldp+1262,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[26]),21);
    bufp->fullIData(oldp+1263,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[27]),21);
    bufp->fullIData(oldp+1264,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[28]),21);
    bufp->fullIData(oldp+1265,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[29]),21);
    bufp->fullIData(oldp+1266,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[30]),21);
    bufp->fullIData(oldp+1267,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[31]),21);
    bufp->fullBit(oldp+1268,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid));
    bufp->fullQData(oldp+1269,(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data),64);
    bufp->fullBit(oldp+1271,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_valid));
    bufp->fullBit(oldp+1272,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw));
    bufp->fullIData(oldp+1273,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr),32);
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray) {
        __Vtemp_hb5d6720c__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0U];
        __Vtemp_hb5d6720c__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[1U];
        __Vtemp_hb5d6720c__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[2U];
        __Vtemp_hb5d6720c__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[3U];
        __Vtemp_hb5d6720c__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[4U];
        __Vtemp_hb5d6720c__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[5U];
        __Vtemp_hb5d6720c__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[6U];
        __Vtemp_hb5d6720c__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[7U];
        __Vtemp_hb5d6720c__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[8U];
        __Vtemp_hb5d6720c__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[9U];
        __Vtemp_hb5d6720c__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0xaU];
        __Vtemp_hb5d6720c__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0xbU];
        __Vtemp_hb5d6720c__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0xcU];
        __Vtemp_hb5d6720c__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0xdU];
        __Vtemp_hb5d6720c__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0xeU];
        __Vtemp_hb5d6720c__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0xfU];
        __Vtemp_hb5d6720c__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x10U];
        __Vtemp_hb5d6720c__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x11U];
        __Vtemp_hb5d6720c__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x12U];
        __Vtemp_hb5d6720c__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x13U];
        __Vtemp_hb5d6720c__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x14U];
        __Vtemp_hb5d6720c__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x15U];
        __Vtemp_hb5d6720c__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x16U];
        __Vtemp_hb5d6720c__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x17U];
        __Vtemp_hb5d6720c__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x18U];
        __Vtemp_hb5d6720c__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x19U];
        __Vtemp_hb5d6720c__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x1aU];
        __Vtemp_hb5d6720c__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x1bU];
        __Vtemp_hb5d6720c__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x1cU];
        __Vtemp_hb5d6720c__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x1dU];
        __Vtemp_hb5d6720c__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x1eU];
        __Vtemp_hb5d6720c__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x1fU];
    } else {
        __Vtemp_hb5d6720c__0[0U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
        __Vtemp_hb5d6720c__0[1U] = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
        __Vtemp_hb5d6720c__0[2U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
        __Vtemp_hb5d6720c__0[3U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
        __Vtemp_hb5d6720c__0[4U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
        __Vtemp_hb5d6720c__0[5U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
        __Vtemp_hb5d6720c__0[6U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
        __Vtemp_hb5d6720c__0[7U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
        __Vtemp_hb5d6720c__0[8U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
        __Vtemp_hb5d6720c__0[9U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
        __Vtemp_hb5d6720c__0[0xaU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
        __Vtemp_hb5d6720c__0[0xbU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
        __Vtemp_hb5d6720c__0[0xcU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
        __Vtemp_hb5d6720c__0[0xdU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
        __Vtemp_hb5d6720c__0[0xeU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
        __Vtemp_hb5d6720c__0[0xfU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
        __Vtemp_hb5d6720c__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
        __Vtemp_hb5d6720c__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
        __Vtemp_hb5d6720c__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
        __Vtemp_hb5d6720c__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
        __Vtemp_hb5d6720c__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
        __Vtemp_hb5d6720c__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
        __Vtemp_hb5d6720c__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
        __Vtemp_hb5d6720c__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
        __Vtemp_hb5d6720c__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
        __Vtemp_hb5d6720c__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
        __Vtemp_hb5d6720c__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        __Vtemp_hb5d6720c__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        __Vtemp_hb5d6720c__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        __Vtemp_hb5d6720c__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        __Vtemp_hb5d6720c__0[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        __Vtemp_hb5d6720c__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    }
    bufp->fullWData(oldp+1274,(__Vtemp_hb5d6720c__0),1024);
    bufp->fullCData(oldp+1306,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask),8);
    bufp->fullCData(oldp+1307,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state),3);
    bufp->fullIData(oldp+1308,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__tag),21);
    bufp->fullCData(oldp+1309,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index),4);
    bufp->fullCData(oldp+1310,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset),7);
    bufp->fullIData(oldp+1311,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid),32);
    bufp->fullIData(oldp+1312,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty),32);
    bufp->fullIData(oldp+1313,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace),32);
    bufp->fullWData(oldp+1314,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray),1024);
    bufp->fullBit(oldp+1346,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray));
    bufp->fullBit(oldp+1347,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim));
    bufp->fullIData(oldp+1348,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr),32);
    bufp->fullQData(oldp+1349,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data),64);
    bufp->fullCData(oldp+1351,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask),8);
    bufp->fullBit(oldp+1352,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inst_type));
    bufp->fullBit(oldp+1353,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum));
    bufp->fullQData(oldp+1354,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data),64);
    bufp->fullCData(oldp+1356,((0x1fU & ((IData)(1U) 
                                         + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                            << 1U)))),5);
    bufp->fullCData(oldp+1357,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                << 1U)),5);
    bufp->fullBit(oldp+1358,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0) 
                              & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum))));
    bufp->fullWData(oldp+1359,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data),1024);
    bufp->fullBit(oldp+1391,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum)) 
                              & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0))));
    bufp->fullWData(oldp+1392,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[0]),1024);
    bufp->fullWData(oldp+1424,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[1]),1024);
    bufp->fullWData(oldp+1456,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[2]),1024);
    bufp->fullWData(oldp+1488,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[3]),1024);
    bufp->fullWData(oldp+1520,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[4]),1024);
    bufp->fullWData(oldp+1552,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[5]),1024);
    bufp->fullWData(oldp+1584,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[6]),1024);
    bufp->fullWData(oldp+1616,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[7]),1024);
    bufp->fullWData(oldp+1648,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[8]),1024);
    bufp->fullWData(oldp+1680,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[9]),1024);
    bufp->fullWData(oldp+1712,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[10]),1024);
    bufp->fullWData(oldp+1744,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[11]),1024);
    bufp->fullWData(oldp+1776,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[12]),1024);
    bufp->fullWData(oldp+1808,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[13]),1024);
    bufp->fullWData(oldp+1840,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[14]),1024);
    bufp->fullWData(oldp+1872,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[15]),1024);
    bufp->fullWData(oldp+1904,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[16]),1024);
    bufp->fullWData(oldp+1936,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[17]),1024);
    bufp->fullWData(oldp+1968,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[18]),1024);
    bufp->fullWData(oldp+2000,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[19]),1024);
    bufp->fullWData(oldp+2032,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[20]),1024);
    bufp->fullWData(oldp+2064,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[21]),1024);
    bufp->fullWData(oldp+2096,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[22]),1024);
    bufp->fullWData(oldp+2128,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[23]),1024);
    bufp->fullWData(oldp+2160,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[24]),1024);
    bufp->fullWData(oldp+2192,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[25]),1024);
    bufp->fullWData(oldp+2224,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[26]),1024);
    bufp->fullWData(oldp+2256,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[27]),1024);
    bufp->fullWData(oldp+2288,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[28]),1024);
    bufp->fullWData(oldp+2320,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[29]),1024);
    bufp->fullWData(oldp+2352,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[30]),1024);
    bufp->fullWData(oldp+2384,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[31]),1024);
    bufp->fullCData(oldp+2416,((0x1fU & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                          << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN)))),5);
    bufp->fullBit(oldp+2417,(((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                              & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                 & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8))));
    bufp->fullCData(oldp+2418,((0x1fU & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                          << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim)))),5);
    bufp->fullBit(oldp+2419,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8854f984__0) 
                              & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))));
    bufp->fullBit(oldp+2420,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8ecd23a9__0) 
                              & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                 & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8))));
    bufp->fullBit(oldp+2421,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca93995__0) 
                              & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))));
    bufp->fullIData(oldp+2422,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                 & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                    & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8))
                                 ? vlSelf->__VdfgTmp_h2a73f274__0
                                 : 0U)),21);
    bufp->fullIData(oldp+2423,((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8854f984__0) 
                                 & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))
                                 ? vlSelf->__VdfgTmp_ha81e39ce__0
                                 : 0U)),21);
    bufp->fullIData(oldp+2424,((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8ecd23a9__0) 
                                 & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                    & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8))
                                 ? vlSelf->__VdfgTmp_h2a73f274__0
                                 : 0U)),21);
    bufp->fullIData(oldp+2425,((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca93995__0) 
                                 & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))
                                 ? vlSelf->__VdfgTmp_ha81e39ce__0
                                 : 0U)),21);
    bufp->fullIData(oldp+2426,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[0]),21);
    bufp->fullIData(oldp+2427,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[1]),21);
    bufp->fullIData(oldp+2428,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[2]),21);
    bufp->fullIData(oldp+2429,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[3]),21);
    bufp->fullIData(oldp+2430,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[4]),21);
    bufp->fullIData(oldp+2431,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[5]),21);
    bufp->fullIData(oldp+2432,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[6]),21);
    bufp->fullIData(oldp+2433,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[7]),21);
    bufp->fullIData(oldp+2434,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[8]),21);
    bufp->fullIData(oldp+2435,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[9]),21);
    bufp->fullIData(oldp+2436,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[10]),21);
    bufp->fullIData(oldp+2437,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[11]),21);
    bufp->fullIData(oldp+2438,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[12]),21);
    bufp->fullIData(oldp+2439,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[13]),21);
    bufp->fullIData(oldp+2440,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[14]),21);
    bufp->fullIData(oldp+2441,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[15]),21);
    bufp->fullIData(oldp+2442,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[16]),21);
    bufp->fullIData(oldp+2443,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[17]),21);
    bufp->fullIData(oldp+2444,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[18]),21);
    bufp->fullIData(oldp+2445,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[19]),21);
    bufp->fullIData(oldp+2446,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[20]),21);
    bufp->fullIData(oldp+2447,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[21]),21);
    bufp->fullIData(oldp+2448,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[22]),21);
    bufp->fullIData(oldp+2449,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[23]),21);
    bufp->fullIData(oldp+2450,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[24]),21);
    bufp->fullIData(oldp+2451,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[25]),21);
    bufp->fullIData(oldp+2452,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[26]),21);
    bufp->fullIData(oldp+2453,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[27]),21);
    bufp->fullIData(oldp+2454,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[28]),21);
    bufp->fullIData(oldp+2455,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[29]),21);
    bufp->fullIData(oldp+2456,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[30]),21);
    bufp->fullIData(oldp+2457,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[31]),21);
    bufp->fullBit(oldp+2458,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_rw));
    bufp->fullIData(oldp+2459,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_addr),32);
    __Vtemp_h758ec451__0[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_data);
    __Vtemp_h758ec451__0[1U] = (IData)((vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_data 
                                        >> 0x20U));
    __Vtemp_h758ec451__0[2U] = 0U;
    __Vtemp_h758ec451__0[3U] = 0U;
    __Vtemp_h758ec451__0[4U] = 0U;
    __Vtemp_h758ec451__0[5U] = 0U;
    __Vtemp_h758ec451__0[6U] = 0U;
    __Vtemp_h758ec451__0[7U] = 0U;
    __Vtemp_h758ec451__0[8U] = 0U;
    __Vtemp_h758ec451__0[9U] = 0U;
    __Vtemp_h758ec451__0[0xaU] = 0U;
    __Vtemp_h758ec451__0[0xbU] = 0U;
    __Vtemp_h758ec451__0[0xcU] = 0U;
    __Vtemp_h758ec451__0[0xdU] = 0U;
    __Vtemp_h758ec451__0[0xeU] = 0U;
    __Vtemp_h758ec451__0[0xfU] = 0U;
    __Vtemp_h758ec451__0[0x10U] = 0U;
    __Vtemp_h758ec451__0[0x11U] = 0U;
    __Vtemp_h758ec451__0[0x12U] = 0U;
    __Vtemp_h758ec451__0[0x13U] = 0U;
    __Vtemp_h758ec451__0[0x14U] = 0U;
    __Vtemp_h758ec451__0[0x15U] = 0U;
    __Vtemp_h758ec451__0[0x16U] = 0U;
    __Vtemp_h758ec451__0[0x17U] = 0U;
    __Vtemp_h758ec451__0[0x18U] = 0U;
    __Vtemp_h758ec451__0[0x19U] = 0U;
    __Vtemp_h758ec451__0[0x1aU] = 0U;
    __Vtemp_h758ec451__0[0x1bU] = 0U;
    __Vtemp_h758ec451__0[0x1cU] = 0U;
    __Vtemp_h758ec451__0[0x1dU] = 0U;
    __Vtemp_h758ec451__0[0x1eU] = 0U;
    __Vtemp_h758ec451__0[0x1fU] = 0U;
    bufp->fullWData(oldp+2460,(__Vtemp_h758ec451__0),1024);
    bufp->fullCData(oldp+2492,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_mask),8);
    bufp->fullCData(oldp+2493,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer),4);
    bufp->fullCData(oldp+2494,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__mask),8);
    bufp->fullCData(oldp+2495,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state),2);
    bufp->fullBit(oldp+2496,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp));
    bufp->fullBit(oldp+2497,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp));
    bufp->fullCData(oldp+2498,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_count),4);
    bufp->fullWData(oldp+2499,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer),1024);
    bufp->fullBit(oldp+2531,(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6));
    bufp->fullQData(oldp+2532,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result),64);
    bufp->fullBit(oldp+2534,(vlSelf->Soc__DOT__core__DOT__clint__DOT__valid_buf));
    bufp->fullQData(oldp+2535,(vlSelf->Soc__DOT__core__DOT__clint__DOT__rvalue_buf),64);
    bufp->fullBit(oldp+2537,((vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME 
                              >= vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP)));
    bufp->fullIData(oldp+2538,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MSIP),32);
    bufp->fullQData(oldp+2539,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP),64);
    bufp->fullQData(oldp+2541,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME),64);
    bufp->fullSData(oldp+2543,(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr),12);
    __Vtemp_h5ee83ed9__0[0U] = 0x41000000U;
    __Vtemp_h5ee83ed9__0[1U] = 0x3003423U;
    __Vtemp_h5ee83ed9__0[2U] = (0x30000000U | (((0x8000000000000007ULL 
                                                 == vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE)
                                                 ? 0x344U
                                                 : 0U) 
                                               << 8U));
    bufp->fullSData(oldp+2544,(((0x5fU >= (0x7fU & 
                                           ((IData)(0xcU) 
                                            * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))))
                                 ? (0xfffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xcU) 
                                                    * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))))
                                                ? 0U
                                                : (
                                                   __Vtemp_h5ee83ed9__0[
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
    bufp->fullBit(oldp+2545,(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen));
    bufp->fullQData(oldp+2546,(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata),64);
    bufp->fullQData(oldp+2548,(((0x340U == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
                                 ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH
                                 : ((0x300U == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
                                     ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS
                                     : (((0x344U == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr)) 
                                         | (0x304U 
                                            == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr)))
                                         ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE
                                         : ((0x341U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
                                             ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC
                                             : ((0x342U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
                                                 ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE
                                                 : 
                                                ((0x305U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
                                                  ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC
                                                  : 0ULL))))))),64);
    bufp->fullQData(oldp+2550,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC),64);
    bufp->fullQData(oldp+2552,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE),64);
    bufp->fullQData(oldp+2554,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC),64);
    bufp->fullQData(oldp+2556,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE),64);
    bufp->fullQData(oldp+2558,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP),64);
    bufp->fullQData(oldp+2560,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS),64);
    bufp->fullQData(oldp+2562,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH),64);
    bufp->fullQData(oldp+2564,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0)
                                 ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]
                                 : 0ULL)),64);
    bufp->fullQData(oldp+2566,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0)
                                 ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]
                                 : 0ULL)),64);
    bufp->fullBit(oldp+2568,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard) 
                              | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard) 
                                 | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)))));
    bufp->fullBit(oldp+2569,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
                              | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
                                 | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))));
    bufp->fullQData(oldp+2570,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard)
                                 ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                 : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard)
                                     ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                     : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)
                                         ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                         : 0ULL)))),64);
    bufp->fullQData(oldp+2572,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                                 ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                 : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                                     ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                     : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                                         ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                         : 0ULL)))),64);
    bufp->fullBit(oldp+2574,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard) 
                              | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard) 
                                 | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)))));
    bufp->fullQData(oldp+2575,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard)
                                 ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                 : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard)
                                     ? vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata
                                     : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)
                                         ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                                         : 0ULL)))),64);
    bufp->fullCData(oldp+2577,(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr),5);
    bufp->fullCData(oldp+2578,(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr),5);
    bufp->fullQData(oldp+2579,((((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                                 & ((0x17U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                    & ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                       & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4)) 
                                          & ((~ (IData)(vlSelf->__VdfgTmp_h4fff9582__0)) 
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
    bufp->fullQData(oldp+2581,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                 ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T
                                 : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                     ? 4ULL : ((2U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                                ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                                    ? vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm
                                                    : 0ULL))))),64);
    bufp->fullCData(oldp+2583,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_reg_waddr),5);
    bufp->fullBit(oldp+2584,(((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                              & ((0x17U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                 & ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                    & ((0x6fU != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                       & ((0x67U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                          & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5))))))));
    bufp->fullQData(oldp+2585,(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__fdreg_pc)) 
                                + (((- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))) 
                                    << 0xcU) | (QData)((IData)(
                                                               (((IData)(vlSelf->__VdfgTmp_h51515078__0) 
                                                                 << 0xbU) 
                                                                | (((IData)(vlSelf->__VdfgTmp_h0bbd64f5__0) 
                                                                    << 5U) 
                                                                   | ((IData)(vlSelf->__VdfgTmp_h0564c6e1__0) 
                                                                      << 1U)))))))),64);
    bufp->fullCData(oldp+2587,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op),6);
    bufp->fullCData(oldp+2588,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
                                 ? (0x3fU & (IData)(
                                                    (vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                                     >> 0x14U)))
                                 : 0U)),6);
    bufp->fullCData(oldp+2589,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
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
    bufp->fullCData(oldp+2590,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0)
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
    bufp->fullQData(oldp+2591,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T),64);
    bufp->fullCData(oldp+2593,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type),3);
    bufp->fullQData(oldp+2594,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T),64);
    bufp->fullSData(oldp+2596,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen)
                                 ? (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr)
                                 : 0U)),12);
    bufp->fullBit(oldp+2597,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen));
    bufp->fullBit(oldp+2598,(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag));
    bufp->fullIData(oldp+2599,(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                 ? (vlSelf->Soc__DOT__core__DOT__fdreg_pc 
                                    + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm))
                                 : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                     ? (0xfffffffeU 
                                        & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4) 
                                           + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm)))
                                     : 0x80000000U))),32);
    bufp->fullCData(oldp+2600,(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd),5);
    bufp->fullCData(oldp+2601,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type),2);
    bufp->fullCData(oldp+2602,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type),2);
    bufp->fullCData(oldp+2603,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type),3);
    bufp->fullCData(oldp+2604,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
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
    bufp->fullCData(oldp+2605,(((((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0) 
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
    bufp->fullQData(oldp+2606,(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm),64);
    bufp->fullCData(oldp+2608,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                 ? (7U & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result))
                                 : 0U)),3);
    bufp->fullIData(oldp+2609,((IData)(vlSelf->Soc__DOT__core__DOT__dereg_branch_addr)),32);
    bufp->fullBit(oldp+2610,(vlSelf->Soc__DOT__core__DOT__excute__DOT___mul_div_type_T_16));
    bufp->fullBit(oldp+2611,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_mul_div_outvalid));
    bufp->fullQData(oldp+2612,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                 ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                 : 0ULL)),64);
    bufp->fullQData(oldp+2614,(((IData)(vlSelf->__VdfgTmp_h9d5684c6__0)
                                 ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                 : 0ULL)),64);
    bufp->fullQData(oldp+2616,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata),64);
    bufp->fullBit(oldp+2618,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we));
    bufp->fullBit(oldp+2619,(vlSelf->Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer));
    bufp->fullQData(oldp+2620,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu_buffer),64);
    bufp->fullBit(oldp+2622,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8));
    bufp->fullBit(oldp+2623,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8) 
                              & (0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)))));
    bufp->fullCData(oldp+2624,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8)
                                 ? (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_h60d3cac5__0) 
                                     | (0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)))
                                     ? 3U : ((0x14U 
                                              == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
                                             << 1U))
                                 : 0U)),2);
    bufp->fullQData(oldp+2625,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand),64);
    bufp->fullQData(oldp+2627,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier),64);
    bufp->fullBit(oldp+2629,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid));
    bufp->fullQData(oldp+2630,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_hi),64);
    bufp->fullQData(oldp+2632,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_lo),64);
    bufp->fullWData(oldp+2634,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg),67);
    bufp->fullWData(oldp+2637,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg),132);
    bufp->fullWData(oldp+2642,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg),132);
    bufp->fullBit(oldp+2647,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state));
    bufp->fullCData(oldp+2648,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter),6);
    bufp->fullCData(oldp+2649,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total),6);
    bufp->fullBit(oldp+2650,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_15));
    bufp->fullBit(oldp+2651,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divw));
    bufp->fullBit(oldp+2652,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_div_signed));
    bufp->fullQData(oldp+2653,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend),64);
    bufp->fullQData(oldp+2655,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor),64);
    bufp->fullBit(oldp+2657,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid));
    bufp->fullQData(oldp+2658,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient),64);
    bufp->fullWData(oldp+2660,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder),128);
    bufp->fullWData(oldp+2664,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65),65);
    bufp->fullQData(oldp+2667,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub33),33);
    bufp->fullBit(oldp+2669,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo));
    bufp->fullBit(oldp+2670,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem));
    bufp->fullCData(oldp+2671,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state),2);
    bufp->fullCData(oldp+2672,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter),7);
    bufp->fullQData(oldp+2673,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34),34);
    bufp->fullWData(oldp+2675,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66),66);
    bufp->fullBit(oldp+2678,(((0U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                              & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2) 
                                 | ((0x30200073U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                                    | (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7))))));
    bufp->fullBit(oldp+2679,(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3));
    bufp->fullIData(oldp+2680,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                 ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC)
                                 : ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                     ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC)
                                     : 0U))),32);
    bufp->fullBit(oldp+2681,(((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_1) 
                              & (0x9fffffffU < vlSelf->Soc__DOT__core__DOT__ioformem__DOT___axi_req_bits_addr_T))));
    bufp->fullCData(oldp+2682,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state),2);
    bufp->fullBit(oldp+2683,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                              | ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag) 
                                 | (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)))));
    bufp->fullIData(oldp+2684,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc),32);
    bufp->fullBit(oldp+2685,(vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall));
    bufp->fullBit(oldp+2686,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_mul_div_outvalid)) 
                              & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___mul_div_type_T_16))));
    bufp->fullIData(oldp+2687,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),32);
    bufp->fullIData(oldp+2688,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc),32);
    bufp->fullQData(oldp+2689,(vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata),64);
    bufp->fullBit(oldp+2691,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))));
    bufp->fullBit(oldp+2692,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))));
    bufp->fullBit(oldp+2693,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard));
    bufp->fullBit(oldp+2694,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard));
    bufp->fullBit(oldp+2695,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard));
    bufp->fullBit(oldp+2696,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard));
    bufp->fullBit(oldp+2697,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard));
    bufp->fullBit(oldp+2698,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard));
    bufp->fullBit(oldp+2699,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard));
    bufp->fullBit(oldp+2700,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard));
    bufp->fullBit(oldp+2701,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard));
    bufp->fullBit(oldp+2702,(vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag));
    bufp->fullCData(oldp+2703,(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count),6);
    bufp->fullIData(oldp+2704,(((IData)(vlSelf->__VdfgTmp_h9d5684c6__0)
                                 ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)
                                 : 0U)),32);
    bufp->fullIData(oldp+2705,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                 ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)
                                 : 0U)),32);
    bufp->fullBit(oldp+2706,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type))));
    bufp->fullBit(oldp+2707,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))));
    bufp->fullBit(oldp+2708,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid));
    bufp->fullQData(oldp+2709,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_bits),64);
    bufp->fullBit(oldp+2711,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_valid));
    bufp->fullQData(oldp+2712,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_data),64);
    bufp->fullBit(oldp+2714,(vlSelf->Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer));
    bufp->fullBit(oldp+2715,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer));
    bufp->fullBit(oldp+2716,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer));
    bufp->fullQData(oldp+2717,(vlSelf->Soc__DOT__core__DOT__mem__DOT__clmem_buffer),64);
    bufp->fullQData(oldp+2719,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdata_buffer),64);
    bufp->fullQData(oldp+2721,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataio_buffer),64);
    bufp->fullQData(oldp+2723,(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value),64);
    bufp->fullQData(oldp+2725,((((QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
                                                 (((IData)(0x3fU) 
                                                   + 
                                                   (0x1ffU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                       << 6U))) 
                                                  >> 5U)])) 
                                 << ((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                << 6U)))
                                      ? 0x20U : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
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
    bufp->fullQData(oldp+2727,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr]),64);
    bufp->fullQData(oldp+2729,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]),64);
    bufp->fullQData(oldp+2731,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                               [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]),64);
    bufp->fullQData(oldp+2733,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
    bufp->fullQData(oldp+2735,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
    bufp->fullQData(oldp+2737,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
    bufp->fullQData(oldp+2739,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
    bufp->fullQData(oldp+2741,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
    bufp->fullQData(oldp+2743,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
    bufp->fullQData(oldp+2745,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
    bufp->fullQData(oldp+2747,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
    bufp->fullQData(oldp+2749,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
    bufp->fullQData(oldp+2751,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
    bufp->fullQData(oldp+2753,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
    bufp->fullQData(oldp+2755,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
    bufp->fullQData(oldp+2757,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
    bufp->fullQData(oldp+2759,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
    bufp->fullQData(oldp+2761,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
    bufp->fullQData(oldp+2763,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
    bufp->fullQData(oldp+2765,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
    bufp->fullQData(oldp+2767,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
    bufp->fullQData(oldp+2769,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
    bufp->fullQData(oldp+2771,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
    bufp->fullQData(oldp+2773,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
    bufp->fullQData(oldp+2775,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
    bufp->fullQData(oldp+2777,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
    bufp->fullQData(oldp+2779,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
    bufp->fullQData(oldp+2781,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
    bufp->fullQData(oldp+2783,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
    bufp->fullQData(oldp+2785,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
    bufp->fullQData(oldp+2787,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
    bufp->fullQData(oldp+2789,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
    bufp->fullQData(oldp+2791,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
    bufp->fullQData(oldp+2793,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
    bufp->fullQData(oldp+2795,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
    bufp->fullQData(oldp+2797,(vlSelf->Soc__DOT__core__DOT__trap__DOT__cause),64);
    bufp->fullIData(oldp+2799,(vlSelf->Soc__DOT__core__DOT__trap__DOT__pc),32);
    bufp->fullBit(oldp+2800,(vlSelf->Soc__DOT__sram__DOT__need_resp));
    bufp->fullBit(oldp+2801,(((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                              & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid))));
    bufp->fullBit(oldp+2802,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
                              & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)))));
    bufp->fullBit(oldp+2803,(((vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                               [(0x1fU & ((IData)(1U) 
                                          + (0x1eU 
                                             & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                >> 6U))))] 
                               == (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                   >> 0xbU)) & ((0x1fU 
                                                 >= 
                                                 (0x3fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0x1eU 
                                                      & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                         >> 6U)))))
                                                 ? 
                                                (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid 
                                                 >> 
                                                 (0x3fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0x1eU 
                                                      & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                         >> 6U)))))
                                                 : 0U))));
    bufp->fullBit(oldp+2804,((1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))
                                     ? ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started) 
                                        & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3))
                                     : ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))
                                         ? vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8
                                         : ((6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                            | ((~ (IData)(
                                                          (7U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))) 
                                               & ((1U 
                                                   != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                                  & ((2U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))
                                                      ? vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8
                                                      : 
                                                     (3U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))))))))));
    __Vtemp_h78afa619__0[0U] = (IData)((QData)((IData)(
                                                       ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                                                         ? 
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3)
                                                          ? 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0)
                                                           ? 
                                                          (0x1eU 
                                                           & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                              >> 6U))
                                                           : 
                                                          (0x3fU 
                                                           & ((IData)(1U) 
                                                              + 
                                                              (0x1eU 
                                                               & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                                  >> 6U)))))
                                                          : 0U)
                                                         : 0U))));
    __Vtemp_h78afa619__0[1U] = (IData)(((QData)((IData)(
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                                                          ? 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3)
                                                           ? 
                                                          ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0)
                                                            ? 
                                                           (0x1eU 
                                                            & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                               >> 6U))
                                                            : 
                                                           (0x3fU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               (0x1eU 
                                                                & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                                   >> 6U)))))
                                                           : 0U)
                                                          : 0U))) 
                                        >> 0x20U));
    __Vtemp_h78afa619__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h0cf0809b__0;
    __Vtemp_h78afa619__0[3U] = (IData)((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h499d2e06__0)));
    __Vtemp_h78afa619__0[4U] = (IData)(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h499d2e06__0)) 
                                        >> 0x20U));
    __Vtemp_h78afa619__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h0cf0809b__0;
    __Vtemp_h78afa619__0[6U] = (IData)((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h499d2e06__0)));
    __Vtemp_h78afa619__0[7U] = (IData)(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h499d2e06__0)) 
                                        >> 0x20U));
    bufp->fullIData(oldp+2805,((((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                  << 5U)))
                                  ? 0U : (__Vtemp_h78afa619__0[
                                          (((IData)(0x1fU) 
                                            + (0xffU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                  << 5U))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                    << 5U))))) 
                                | (__Vtemp_h78afa619__0[
                                   (7U & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))] 
                                   >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                << 5U))))),32);
    __Vtemp_h3953c90b__0[0U] = (IData)((QData)((IData)(
                                                       ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                                                         ? 
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3)
                                                          ? 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0)
                                                           ? 
                                                          (0x1eU 
                                                           & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                              >> 6U))
                                                           : 
                                                          (0x3fU 
                                                           & ((IData)(1U) 
                                                              + 
                                                              (0x1eU 
                                                               & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                                  >> 6U)))))
                                                          : 0U)
                                                         : 0U))));
    __Vtemp_h3953c90b__0[1U] = (IData)(((QData)((IData)(
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                                                          ? 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3)
                                                           ? 
                                                          ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0)
                                                            ? 
                                                           (0x1eU 
                                                            & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                               >> 6U))
                                                            : 
                                                           (0x3fU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               (0x1eU 
                                                                & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                                   >> 6U)))))
                                                           : 0U)
                                                          : 0U))) 
                                        >> 0x20U));
    __Vtemp_h3953c90b__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h0cf0809b__0;
    __Vtemp_h3953c90b__0[3U] = (IData)((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h499d2e06__0)));
    __Vtemp_h3953c90b__0[4U] = (IData)(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h499d2e06__0)) 
                                        >> 0x20U));
    __Vtemp_h3953c90b__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h0cf0809b__0;
    __Vtemp_h3953c90b__0[6U] = (IData)((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h499d2e06__0)));
    __Vtemp_h3953c90b__0[7U] = (IData)(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h499d2e06__0)) 
                                        >> 0x20U));
    bufp->fullCData(oldp+2806,((0x1fU & (((0U == (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 5U)))
                                           ? 0U : (
                                                   __Vtemp_h3953c90b__0[
                                                   (((IData)(4U) 
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
                                         | (__Vtemp_h3953c90b__0[
                                            (7U & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))] 
                                            >> (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                   << 5U)))))),5);
    bufp->fullIData(oldp+2807,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                               [(0x1eU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                          >> 6U))]),21);
    bufp->fullIData(oldp+2808,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                               [(0x1fU & ((IData)(1U) 
                                          + (0x1eU 
                                             & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                >> 6U))))]),21);
    bufp->fullBit(oldp+2809,((((~ ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
                                   & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_valid))) 
                               | (0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))) 
                              & (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_valid))));
    if ((1U & ((~ ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_9) 
                      & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer)))) 
               | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hfea5ad76__0)))) {
        __Vtemp_h6aa59cf1__0[0U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
        __Vtemp_h6aa59cf1__0[1U] = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
        __Vtemp_h6aa59cf1__0[2U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
        __Vtemp_h6aa59cf1__0[3U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
        __Vtemp_h6aa59cf1__0[4U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
        __Vtemp_h6aa59cf1__0[5U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
        __Vtemp_h6aa59cf1__0[6U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
        __Vtemp_h6aa59cf1__0[7U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
        __Vtemp_h6aa59cf1__0[8U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
        __Vtemp_h6aa59cf1__0[9U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
        __Vtemp_h6aa59cf1__0[0xaU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
        __Vtemp_h6aa59cf1__0[0xbU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
        __Vtemp_h6aa59cf1__0[0xcU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
        __Vtemp_h6aa59cf1__0[0xdU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
        __Vtemp_h6aa59cf1__0[0xeU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
        __Vtemp_h6aa59cf1__0[0xfU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
        __Vtemp_h6aa59cf1__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
        __Vtemp_h6aa59cf1__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
        __Vtemp_h6aa59cf1__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
        __Vtemp_h6aa59cf1__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
        __Vtemp_h6aa59cf1__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
        __Vtemp_h6aa59cf1__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
        __Vtemp_h6aa59cf1__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
        __Vtemp_h6aa59cf1__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
        __Vtemp_h6aa59cf1__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
        __Vtemp_h6aa59cf1__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
        __Vtemp_h6aa59cf1__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        __Vtemp_h6aa59cf1__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        __Vtemp_h6aa59cf1__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        __Vtemp_h6aa59cf1__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        __Vtemp_h6aa59cf1__0[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        __Vtemp_h6aa59cf1__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    } else {
        __Vtemp_h6aa59cf1__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[0U];
        __Vtemp_h6aa59cf1__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[1U];
        __Vtemp_h6aa59cf1__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[2U];
        __Vtemp_h6aa59cf1__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[3U];
        __Vtemp_h6aa59cf1__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[4U];
        __Vtemp_h6aa59cf1__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[5U];
        __Vtemp_h6aa59cf1__0[6U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[6U];
        __Vtemp_h6aa59cf1__0[7U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[7U];
        __Vtemp_h6aa59cf1__0[8U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[8U];
        __Vtemp_h6aa59cf1__0[9U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[9U];
        __Vtemp_h6aa59cf1__0[0xaU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[0xaU];
        __Vtemp_h6aa59cf1__0[0xbU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[0xbU];
        __Vtemp_h6aa59cf1__0[0xcU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[0xcU];
        __Vtemp_h6aa59cf1__0[0xdU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[0xdU];
        __Vtemp_h6aa59cf1__0[0xeU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[0xeU];
        __Vtemp_h6aa59cf1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[0xfU];
        __Vtemp_h6aa59cf1__0[0x10U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[0x10U];
        __Vtemp_h6aa59cf1__0[0x11U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[0x11U];
        __Vtemp_h6aa59cf1__0[0x12U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[0x12U];
        __Vtemp_h6aa59cf1__0[0x13U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[0x13U];
        __Vtemp_h6aa59cf1__0[0x14U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[0x14U];
        __Vtemp_h6aa59cf1__0[0x15U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[0x15U];
        __Vtemp_h6aa59cf1__0[0x16U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[0x16U];
        __Vtemp_h6aa59cf1__0[0x17U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[0x17U];
        __Vtemp_h6aa59cf1__0[0x18U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[0x18U];
        __Vtemp_h6aa59cf1__0[0x19U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[0x19U];
        __Vtemp_h6aa59cf1__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[0x1aU];
        __Vtemp_h6aa59cf1__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[0x1bU];
        __Vtemp_h6aa59cf1__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[0x1cU];
        __Vtemp_h6aa59cf1__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[0x1dU];
        __Vtemp_h6aa59cf1__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[0x1eU];
        __Vtemp_h6aa59cf1__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h43f699b6__0[0x1fU];
    }
    VL_CONCAT_WWW(4096,1024,3072, __Vtemp_hf48eb399__0, __Vtemp_h6aa59cf1__0, VSoc__ConstPool__CONST_hbca7a291_0);
    __Vtemp_h65d5a9df__0[0U] = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 0xaU)))
                                  ? 0U : (__Vtemp_hf48eb399__0[
                                          ((IData)(1U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 0xaU))))) 
                                | (__Vtemp_hf48eb399__0[
                                   (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 5U))] 
                                   >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))));
    __Vtemp_h65d5a9df__0[1U] = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 0xaU)))
                                  ? 0U : (__Vtemp_hf48eb399__0[
                                          ((IData)(2U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 0xaU))))) 
                                | (__Vtemp_hf48eb399__0[
                                   ((IData)(1U) + (0x60U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 5U)))] 
                                   >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))));
    __Vtemp_h65d5a9df__0[2U] = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 0xaU)))
                                  ? 0U : (__Vtemp_hf48eb399__0[
                                          ((IData)(3U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 0xaU))))) 
                                | (__Vtemp_hf48eb399__0[
                                   ((IData)(2U) + (0x60U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 5U)))] 
                                   >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))));
    __Vtemp_h65d5a9df__0[3U] = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 0xaU)))
                                  ? 0U : (__Vtemp_hf48eb399__0[
                                          ((IData)(4U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 0xaU))))) 
                                | (__Vtemp_hf48eb399__0[
                                   ((IData)(3U) + (0x60U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 5U)))] 
                                   >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))));
    __Vtemp_h65d5a9df__0[4U] = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 0xaU)))
                                  ? 0U : (__Vtemp_hf48eb399__0[
                                          ((IData)(5U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 0xaU))))) 
                                | (__Vtemp_hf48eb399__0[
                                   ((IData)(4U) + (0x60U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 5U)))] 
                                   >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))));
    __Vtemp_h65d5a9df__0[5U] = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 0xaU)))
                                  ? 0U : (__Vtemp_hf48eb399__0[
                                          ((IData)(6U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 0xaU))))) 
                                | (__Vtemp_hf48eb399__0[
                                   ((IData)(5U) + (0x60U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 5U)))] 
                                   >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))));
    __Vtemp_h65d5a9df__0[6U] = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 0xaU)))
                                  ? 0U : (__Vtemp_hf48eb399__0[
                                          ((IData)(7U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 0xaU))))) 
                                | (__Vtemp_hf48eb399__0[
                                   ((IData)(6U) + (0x60U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 5U)))] 
                                   >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))));
    __Vtemp_h65d5a9df__0[7U] = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 0xaU)))
                                  ? 0U : (__Vtemp_hf48eb399__0[
                                          ((IData)(8U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 0xaU))))) 
                                | (__Vtemp_hf48eb399__0[
                                   ((IData)(7U) + (0x60U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 5U)))] 
                                   >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))));
    __Vtemp_h65d5a9df__0[8U] = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 0xaU)))
                                  ? 0U : (__Vtemp_hf48eb399__0[
                                          ((IData)(9U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 0xaU))))) 
                                | (__Vtemp_hf48eb399__0[
                                   ((IData)(8U) + (0x60U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 5U)))] 
                                   >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))));
    __Vtemp_h65d5a9df__0[9U] = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 0xaU)))
                                  ? 0U : (__Vtemp_hf48eb399__0[
                                          ((IData)(0xaU) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 0xaU))))) 
                                | (__Vtemp_hf48eb399__0[
                                   ((IData)(9U) + (0x60U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 5U)))] 
                                   >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))));
    __Vtemp_h65d5a9df__0[0xaU] = (((0U == (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 0xaU)))
                                    ? 0U : (__Vtemp_hf48eb399__0[
                                            ((IData)(0xbU) 
                                             + (0x60U 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                  | (__Vtemp_hf48eb399__0[
                                     ((IData)(0xaU) 
                                      + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 5U)))] 
                                     >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 0xaU))));
    __Vtemp_h65d5a9df__0[0xbU] = (((0U == (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 0xaU)))
                                    ? 0U : (__Vtemp_hf48eb399__0[
                                            ((IData)(0xcU) 
                                             + (0x60U 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                  | (__Vtemp_hf48eb399__0[
                                     ((IData)(0xbU) 
                                      + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 5U)))] 
                                     >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 0xaU))));
    __Vtemp_h65d5a9df__0[0xcU] = (((0U == (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 0xaU)))
                                    ? 0U : (__Vtemp_hf48eb399__0[
                                            ((IData)(0xdU) 
                                             + (0x60U 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                  | (__Vtemp_hf48eb399__0[
                                     ((IData)(0xcU) 
                                      + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 5U)))] 
                                     >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 0xaU))));
    __Vtemp_h65d5a9df__0[0xdU] = (((0U == (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 0xaU)))
                                    ? 0U : (__Vtemp_hf48eb399__0[
                                            ((IData)(0xeU) 
                                             + (0x60U 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                  | (__Vtemp_hf48eb399__0[
                                     ((IData)(0xdU) 
                                      + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 5U)))] 
                                     >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 0xaU))));
    __Vtemp_h65d5a9df__0[0xeU] = (((0U == (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 0xaU)))
                                    ? 0U : (__Vtemp_hf48eb399__0[
                                            ((IData)(0xfU) 
                                             + (0x60U 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                  | (__Vtemp_hf48eb399__0[
                                     ((IData)(0xeU) 
                                      + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 5U)))] 
                                     >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 0xaU))));
    __Vtemp_h65d5a9df__0[0xfU] = (((0U == (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 0xaU)))
                                    ? 0U : (__Vtemp_hf48eb399__0[
                                            ((IData)(0x10U) 
                                             + (0x60U 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                  | (__Vtemp_hf48eb399__0[
                                     ((IData)(0xfU) 
                                      + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 5U)))] 
                                     >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 0xaU))));
    __Vtemp_h65d5a9df__0[0x10U] = (((0U == (0x1fU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 0xaU)))
                                     ? 0U : (__Vtemp_hf48eb399__0[
                                             ((IData)(0x11U) 
                                              + (0x60U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 0xaU))))) 
                                   | (__Vtemp_hf48eb399__0[
                                      ((IData)(0x10U) 
                                       + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 5U)))] 
                                      >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU))));
    __Vtemp_h65d5a9df__0[0x11U] = (((0U == (0x1fU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 0xaU)))
                                     ? 0U : (__Vtemp_hf48eb399__0[
                                             ((IData)(0x12U) 
                                              + (0x60U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 0xaU))))) 
                                   | (__Vtemp_hf48eb399__0[
                                      ((IData)(0x11U) 
                                       + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 5U)))] 
                                      >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU))));
    __Vtemp_h65d5a9df__0[0x12U] = (((0U == (0x1fU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 0xaU)))
                                     ? 0U : (__Vtemp_hf48eb399__0[
                                             ((IData)(0x13U) 
                                              + (0x60U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 0xaU))))) 
                                   | (__Vtemp_hf48eb399__0[
                                      ((IData)(0x12U) 
                                       + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 5U)))] 
                                      >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU))));
    __Vtemp_h65d5a9df__0[0x13U] = (((0U == (0x1fU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 0xaU)))
                                     ? 0U : (__Vtemp_hf48eb399__0[
                                             ((IData)(0x14U) 
                                              + (0x60U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 0xaU))))) 
                                   | (__Vtemp_hf48eb399__0[
                                      ((IData)(0x13U) 
                                       + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 5U)))] 
                                      >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU))));
    __Vtemp_h65d5a9df__0[0x14U] = (((0U == (0x1fU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 0xaU)))
                                     ? 0U : (__Vtemp_hf48eb399__0[
                                             ((IData)(0x15U) 
                                              + (0x60U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 0xaU))))) 
                                   | (__Vtemp_hf48eb399__0[
                                      ((IData)(0x14U) 
                                       + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 5U)))] 
                                      >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU))));
    __Vtemp_h65d5a9df__0[0x15U] = (((0U == (0x1fU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 0xaU)))
                                     ? 0U : (__Vtemp_hf48eb399__0[
                                             ((IData)(0x16U) 
                                              + (0x60U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 0xaU))))) 
                                   | (__Vtemp_hf48eb399__0[
                                      ((IData)(0x15U) 
                                       + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 5U)))] 
                                      >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU))));
    __Vtemp_h65d5a9df__0[0x16U] = (((0U == (0x1fU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 0xaU)))
                                     ? 0U : (__Vtemp_hf48eb399__0[
                                             ((IData)(0x17U) 
                                              + (0x60U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 0xaU))))) 
                                   | (__Vtemp_hf48eb399__0[
                                      ((IData)(0x16U) 
                                       + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 5U)))] 
                                      >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU))));
    __Vtemp_h65d5a9df__0[0x17U] = (((0U == (0x1fU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 0xaU)))
                                     ? 0U : (__Vtemp_hf48eb399__0[
                                             ((IData)(0x18U) 
                                              + (0x60U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 0xaU))))) 
                                   | (__Vtemp_hf48eb399__0[
                                      ((IData)(0x17U) 
                                       + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 5U)))] 
                                      >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU))));
    __Vtemp_h65d5a9df__0[0x18U] = (((0U == (0x1fU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 0xaU)))
                                     ? 0U : (__Vtemp_hf48eb399__0[
                                             ((IData)(0x19U) 
                                              + (0x60U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 0xaU))))) 
                                   | (__Vtemp_hf48eb399__0[
                                      ((IData)(0x18U) 
                                       + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 5U)))] 
                                      >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU))));
    __Vtemp_h65d5a9df__0[0x19U] = (((0U == (0x1fU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 0xaU)))
                                     ? 0U : (__Vtemp_hf48eb399__0[
                                             ((IData)(0x1aU) 
                                              + (0x60U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 0xaU))))) 
                                   | (__Vtemp_hf48eb399__0[
                                      ((IData)(0x19U) 
                                       + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 5U)))] 
                                      >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU))));
    __Vtemp_h65d5a9df__0[0x1aU] = (((0U == (0x1fU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 0xaU)))
                                     ? 0U : (__Vtemp_hf48eb399__0[
                                             ((IData)(0x1bU) 
                                              + (0x60U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 0xaU))))) 
                                   | (__Vtemp_hf48eb399__0[
                                      ((IData)(0x1aU) 
                                       + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 5U)))] 
                                      >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU))));
    __Vtemp_h65d5a9df__0[0x1bU] = (((0U == (0x1fU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 0xaU)))
                                     ? 0U : (__Vtemp_hf48eb399__0[
                                             ((IData)(0x1cU) 
                                              + (0x60U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 0xaU))))) 
                                   | (__Vtemp_hf48eb399__0[
                                      ((IData)(0x1bU) 
                                       + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 5U)))] 
                                      >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU))));
    __Vtemp_h65d5a9df__0[0x1cU] = (((0U == (0x1fU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 0xaU)))
                                     ? 0U : (__Vtemp_hf48eb399__0[
                                             ((IData)(0x1dU) 
                                              + (0x60U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 0xaU))))) 
                                   | (__Vtemp_hf48eb399__0[
                                      ((IData)(0x1cU) 
                                       + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 5U)))] 
                                      >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU))));
    __Vtemp_h65d5a9df__0[0x1dU] = (((0U == (0x1fU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 0xaU)))
                                     ? 0U : (__Vtemp_hf48eb399__0[
                                             ((IData)(0x1eU) 
                                              + (0x60U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 0xaU))))) 
                                   | (__Vtemp_hf48eb399__0[
                                      ((IData)(0x1dU) 
                                       + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 5U)))] 
                                      >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU))));
    __Vtemp_h65d5a9df__0[0x1eU] = (((0U == (0x1fU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 0xaU)))
                                     ? 0U : (__Vtemp_hf48eb399__0[
                                             ((IData)(0x1fU) 
                                              + (0x60U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 0xaU))))) 
                                   | (__Vtemp_hf48eb399__0[
                                      ((IData)(0x1eU) 
                                       + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 5U)))] 
                                      >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU))));
    __Vtemp_h65d5a9df__0[0x1fU] = (((0U == (0x1fU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 0xaU)))
                                     ? 0U : (__Vtemp_hf48eb399__0[
                                             ((IData)(0x20U) 
                                              + (0x60U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 0xaU))))) 
                                   | (__Vtemp_hf48eb399__0[
                                      ((IData)(0x1fU) 
                                       + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 5U)))] 
                                      >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU))));
    bufp->fullWData(oldp+2810,(__Vtemp_h65d5a9df__0),1024);
    bufp->fullBit(oldp+2842,((1U & (~ ((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                                       | (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush))))));
    bufp->fullBit(oldp+2843,(((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hd527f3ac__0) 
                              & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                                    | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14)) 
                                       & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                                          | ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                                             | (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag)))))))));
    bufp->fullBit(oldp+2844,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)) 
                              & ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                 & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_18)) 
                                    & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                       | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)) 
                                          & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                             & (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)))))))));
    bufp->fullBit(oldp+2845,(((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                              & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_18)) 
                                 & ((~ ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                        & (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid))) 
                                    & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                       | (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                           & (IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)) 
                                          & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h02ae5b32__0) 
                                             | (~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3))))))))));
    bufp->fullIData(oldp+2846,(((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2)
                                 ? ((IData)(4U) + vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc)
                                 : ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                                     ? ((IData)(4U) 
                                        + vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)
                                     : vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc))),32);
    bufp->fullIData(oldp+2847,((((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                                 & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid))
                                 ? (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)
                                 : 0U)),32);
    bufp->fullQData(oldp+2848,(((((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
                                  & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))) 
                                 & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr)))
                                 ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                 : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr])),64);
    bufp->fullBit(oldp+2850,(vlSelf->Soc__DOT__sram__DOT__rvalid));
    bufp->fullQData(oldp+2851,(vlSelf->Soc__DOT__sram__DOT__rdata),64);
    bufp->fullBit(oldp+2853,(vlSelf->Soc__DOT__sram__DOT__rlast));
    bufp->fullCData(oldp+2854,(vlSelf->Soc__DOT__sram__DOT__rresp),2);
    bufp->fullCData(oldp+2855,(vlSelf->Soc__DOT__sram__DOT__r_count),4);
    bufp->fullIData(oldp+2856,(vlSelf->Soc__DOT__sram__DOT__araddr),32);
    bufp->fullBit(oldp+2857,(vlSelf->Soc__DOT__sram__DOT__need_read));
    bufp->fullIData(oldp+2858,(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc),32);
    bufp->fullBit(oldp+2859,(vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen));
    bufp->fullBit(oldp+2860,(((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0) 
                              & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1))));
    bufp->fullBit(oldp+2861,(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid));
    bufp->fullWData(oldp+2862,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data),1024);
    bufp->fullBit(oldp+2894,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_12));
    bufp->fullBit(oldp+2895,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_14));
    bufp->fullBit(oldp+2896,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_19));
    bufp->fullWData(oldp+2897,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data),1024);
    bufp->fullBit(oldp+2929,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_26));
    bufp->fullBit(oldp+2930,(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid));
    bufp->fullWData(oldp+2931,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data),1024);
    bufp->fullBit(oldp+2963,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3));
    bufp->fullBit(oldp+2964,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0));
    bufp->fullBit(oldp+2965,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_12));
    bufp->fullBit(oldp+2966,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_14));
    bufp->fullBit(oldp+2967,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_19));
    bufp->fullWData(oldp+2968,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data),1024);
    bufp->fullBit(oldp+3000,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_26));
    bufp->fullCData(oldp+3001,((0x1eU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                         >> 6U))),5);
    bufp->fullCData(oldp+3002,((0x1fU & ((IData)(1U) 
                                         + (0x1eU & 
                                            (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                             >> 6U))))),5);
    bufp->fullBit(oldp+3003,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_valid));
    bufp->fullCData(oldp+3004,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose),4);
    bufp->fullBit(oldp+3005,(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1));
    bufp->fullBit(oldp+3006,(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush));
    bufp->fullBit(oldp+3007,(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0));
    bufp->fullIData(oldp+3008,(vlSelf->Soc__DOT__sram__DOT__awaddr),32);
    bufp->fullBit(oldp+3009,(vlSelf->clock));
    bufp->fullBit(oldp+3010,(vlSelf->reset));
    bufp->fullBit(oldp+3011,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_8));
    bufp->fullIData(oldp+3012,(vlSelf->Soc__DOT___core_io_AXI_Interface_ar_bits_addr),32);
    bufp->fullBit(oldp+3013,(vlSelf->Soc__DOT____Vcellinp__sram__ARESETn));
    bufp->fullBit(oldp+3014,(1U));
    bufp->fullBit(oldp+3015,(0U));
    bufp->fullQData(oldp+3016,(0ULL),64);
    bufp->fullCData(oldp+3018,(0U),8);
    bufp->fullCData(oldp+3019,(0U),5);
    bufp->fullCData(oldp+3020,(3U),3);
    bufp->fullCData(oldp+3021,(1U),2);
    bufp->fullCData(oldp+3022,(2U),4);
    bufp->fullCData(oldp+3023,(0U),3);
}
