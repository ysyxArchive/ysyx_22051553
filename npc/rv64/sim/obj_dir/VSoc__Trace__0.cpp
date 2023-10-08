// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSoc__Syms.h"


void VSoc___024root__trace_chg_sub_0(VSoc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSoc___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_chg_top_0\n"); );
    // Init
    VSoc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSoc___024root*>(voidSelf);
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSoc___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VSoc___024root__trace_chg_sub_0(VSoc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_h5ee83ed9__0;
    VlWide<8>/*255:0*/ __Vtemp_h26f7ce52__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->Soc__DOT__sram__DOT__bvalid));
        bufp->chgCData(oldp+1,(vlSelf->Soc__DOT__sram__DOT__bresp),2);
        bufp->chgCData(oldp+2,(vlSelf->Soc__DOT__sram__DOT__w_count),4);
        bufp->chgIData(oldp+3,(vlSelf->Soc__DOT__sram__DOT__awaddr_buffer),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+4,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1));
        bufp->chgIData(oldp+5,(vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr),32);
        bufp->chgCData(oldp+6,(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN)
                                 ? 0U : (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__burst_len))),8);
        bufp->chgBit(oldp+7,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4));
        bufp->chgQData(oldp+8,(vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data),64);
        bufp->chgCData(oldp+10,(vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb),8);
        bufp->chgBit(oldp+11,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_3));
        bufp->chgCData(oldp+12,((((0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                  | ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                     | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))))
                                  ? 0U : (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__burst_len))),8);
        bufp->chgIData(oldp+13,(vlSelf->Soc__DOT__core__DOT__fdreg_pc),32);
        bufp->chgQData(oldp+14,(vlSelf->Soc__DOT__core__DOT__dereg_op_a),64);
        bufp->chgQData(oldp+16,(vlSelf->Soc__DOT__core__DOT__dereg_op_b),64);
        bufp->chgCData(oldp+18,(vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr),5);
        bufp->chgBit(oldp+19,(vlSelf->Soc__DOT__core__DOT__dereg_branch_type));
        bufp->chgQData(oldp+20,(vlSelf->Soc__DOT__core__DOT__dereg_branch_addr),64);
        bufp->chgCData(oldp+22,(vlSelf->Soc__DOT__core__DOT__dereg_alu_op),6);
        bufp->chgCData(oldp+23,(vlSelf->Soc__DOT__core__DOT__dereg_shamt),6);
        bufp->chgCData(oldp+24,(vlSelf->Soc__DOT__core__DOT__dereg_wb_type),2);
        bufp->chgCData(oldp+25,(vlSelf->Soc__DOT__core__DOT__dereg_sd_type),3);
        bufp->chgQData(oldp+26,(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata),64);
        bufp->chgCData(oldp+28,(vlSelf->Soc__DOT__core__DOT__dereg_ld_type),3);
        bufp->chgQData(oldp+29,(vlSelf->Soc__DOT__core__DOT__dereg_csr_t),64);
        bufp->chgSData(oldp+31,(vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr),12);
        bufp->chgBit(oldp+32,(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen));
        bufp->chgBit(oldp+33,(vlSelf->Soc__DOT__core__DOT__dereg_has_inst));
        bufp->chgQData(oldp+34,(vlSelf->Soc__DOT__core__DOT__emreg_reg_wdata),64);
        bufp->chgCData(oldp+36,(vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr),5);
        bufp->chgCData(oldp+37,(vlSelf->Soc__DOT__core__DOT__emreg_wb_type),2);
        bufp->chgCData(oldp+38,(vlSelf->Soc__DOT__core__DOT__emreg_ld_type),3);
        bufp->chgCData(oldp+39,(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit),3);
        bufp->chgQData(oldp+40,(vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata),64);
        bufp->chgBit(oldp+42,(vlSelf->Soc__DOT__core__DOT__emreg_csr_wen));
        bufp->chgSData(oldp+43,(vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr),12);
        bufp->chgBit(oldp+44,(vlSelf->Soc__DOT__core__DOT__emreg_has_inst));
        bufp->chgQData(oldp+45,(vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata),64);
        bufp->chgCData(oldp+47,(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr),5);
        bufp->chgCData(oldp+48,(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type),2);
        bufp->chgQData(oldp+49,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata),64);
        bufp->chgBit(oldp+51,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen));
        bufp->chgSData(oldp+52,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr),12);
        bufp->chgBit(oldp+53,(vlSelf->Soc__DOT__core__DOT__mwreg_has_inst));
        bufp->chgIData(oldp+54,(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc),32);
        bufp->chgBit(oldp+55,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started));
        bufp->chgIData(oldp+56,(vlSelf->Soc__DOT__core__DOT___GEN),32);
        bufp->chgBit(oldp+57,(((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                               & (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.io_cpu_resp_valid))));
        bufp->chgBit(oldp+58,(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16));
        bufp->chgQData(oldp+59,(((IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen)
                                  ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                                  : vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_h7d5adbc1__0)),64);
        bufp->chgBit(oldp+61,(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag));
        bufp->chgBit(oldp+62,((0U != ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type) 
                                      | (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))));
        bufp->chgQData(oldp+63,(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T),64);
        bufp->chgBit(oldp+65,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
                               & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)))));
        bufp->chgBit(oldp+66,(vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen));
        bufp->chgBit(oldp+67,(((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0) 
                               & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1))));
        bufp->chgCData(oldp+68,(vlSelf->Soc__DOT__core__DOT__trap__DOT__state),3);
        bufp->chgBit(oldp+69,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_rw));
        bufp->chgIData(oldp+70,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_addr),32);
        bufp->chgQData(oldp+71,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_data),64);
        bufp->chgCData(oldp+73,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_mask),8);
        bufp->chgBit(oldp+74,(((0U != (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__state)) 
                               & ((1U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__state))
                                   ? (~ (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.io_fccache_hit))
                                   : ((~ (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___T_356)) 
                                      & (2U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__state)))))));
        bufp->chgQData(oldp+75,((((QData)((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__read[
                                                  (((IData)(0x3fU) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__w_count) 
                                                        << 6U))) 
                                                   >> 5U)])) 
                                  << ((0U == (0x1fU 
                                              & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__w_count) 
                                                 << 6U)))
                                       ? 0x20U : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__w_count) 
                                                      << 6U))))) 
                                 | (((0U == (0x1fU 
                                             & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__w_count) 
                                                << 6U)))
                                      ? 0ULL : ((QData)((IData)(
                                                                vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__read[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x3ffU 
                                                                   & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__w_count) 
                                                                      << 6U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__w_count) 
                                                     << 6U))))) 
                                    | ((QData)((IData)(
                                                       vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__read[
                                                       (0x1eU 
                                                        & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__w_count) 
                                                           << 1U))])) 
                                       >> (0x1fU & 
                                           ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__w_count) 
                                            << 6U)))))),64);
        bufp->chgBit(oldp+77,(((0U != (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__state)) 
                               & ((1U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__state))
                                   ? (~ (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.io_fccache_hit))
                                   : ((~ (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___T_356)) 
                                      & (2U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__state)))))));
        bufp->chgQData(oldp+78,((((QData)((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__read[
                                                  (((IData)(0x3fU) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__w_count) 
                                                        << 6U))) 
                                                   >> 5U)])) 
                                  << ((0U == (0x1fU 
                                              & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__w_count) 
                                                 << 6U)))
                                       ? 0x20U : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__w_count) 
                                                      << 6U))))) 
                                 | (((0U == (0x1fU 
                                             & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__w_count) 
                                                << 6U)))
                                      ? 0ULL : ((QData)((IData)(
                                                                vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__read[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x3ffU 
                                                                   & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__w_count) 
                                                                      << 6U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__w_count) 
                                                     << 6U))))) 
                                    | ((QData)((IData)(
                                                       vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__read[
                                                       (0x1eU 
                                                        & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__w_count) 
                                                           << 1U))])) 
                                       >> (0x1fU & 
                                           ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__w_count) 
                                            << 6U)))))),64);
        bufp->chgCData(oldp+80,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer),4);
        bufp->chgIData(oldp+81,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__addr),32);
        bufp->chgCData(oldp+82,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__burst_len),4);
        bufp->chgCData(oldp+83,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state),2);
        bufp->chgBit(oldp+84,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp));
        bufp->chgBit(oldp+85,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp));
        bufp->chgCData(oldp+86,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_count),4);
        bufp->chgBit(oldp+87,(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6));
        bufp->chgQData(oldp+88,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result),64);
        bufp->chgCData(oldp+90,(vlSelf->Soc__DOT__core__DOT___excute_io_wmask),8);
        bufp->chgBit(oldp+91,(vlSelf->Soc__DOT__core__DOT__clint__DOT__valid_buf));
        bufp->chgQData(oldp+92,(vlSelf->Soc__DOT__core__DOT__clint__DOT__rvalue_buf),64);
        bufp->chgBit(oldp+94,((vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME 
                               >= vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP)));
        bufp->chgIData(oldp+95,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MSIP),32);
        bufp->chgQData(oldp+96,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP),64);
        bufp->chgQData(oldp+98,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME),64);
        bufp->chgSData(oldp+100,(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr),12);
        __Vtemp_h5ee83ed9__0[0U] = 0x41000000U;
        __Vtemp_h5ee83ed9__0[1U] = 0x3003423U;
        __Vtemp_h5ee83ed9__0[2U] = (0x30000000U | (
                                                   ((0x8000000000000007ULL 
                                                     == vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE)
                                                     ? 0x344U
                                                     : 0U) 
                                                   << 8U));
        bufp->chgSData(oldp+101,(((0x5fU >= (0x7fU 
                                             & ((IData)(0xcU) 
                                                * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))))
                                   ? (0xfffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0xcU) 
                                                      * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))))
                                                  ? 0U
                                                  : 
                                                 (__Vtemp_h5ee83ed9__0[
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
        bufp->chgBit(oldp+102,(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen));
        bufp->chgQData(oldp+103,(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata),64);
        bufp->chgQData(oldp+105,(((0x340U == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
                                   ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH
                                   : ((0x300U == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
                                       ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS
                                       : (((0x344U 
                                            == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr)) 
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
        bufp->chgQData(oldp+107,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC),64);
        bufp->chgQData(oldp+109,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE),64);
        bufp->chgQData(oldp+111,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC),64);
        bufp->chgQData(oldp+113,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE),64);
        bufp->chgQData(oldp+115,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP),64);
        bufp->chgQData(oldp+117,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS),64);
        bufp->chgQData(oldp+119,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH),64);
        bufp->chgBit(oldp+121,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.io_cpu_resp_valid));
        bufp->chgQData(oldp+122,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.io_cpu_resp_bits_data),64);
        bufp->chgQData(oldp+124,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0)
                                   ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                  [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]
                                   : 0ULL)),64);
        bufp->chgQData(oldp+126,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0)
                                   ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                  [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]
                                   : 0ULL)),64);
        bufp->chgBit(oldp+128,(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1));
        bufp->chgBit(oldp+129,(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush));
        bufp->chgBit(oldp+130,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard) 
                                | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)))));
        bufp->chgBit(oldp+131,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
                                | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))));
        bufp->chgQData(oldp+132,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard)
                                   ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                   : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard)
                                       ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                       : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)
                                           ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                           : 0ULL)))),64);
        bufp->chgQData(oldp+134,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                                   ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                   : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                                       ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                       : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                                           ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                           : 0ULL)))),64);
        bufp->chgBit(oldp+136,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard) 
                                | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)))));
        bufp->chgQData(oldp+137,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard)
                                   ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                   : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard)
                                       ? vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata
                                       : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)
                                           ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                                           : 0ULL)))),64);
        bufp->chgCData(oldp+139,(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr),5);
        bufp->chgCData(oldp+140,(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr),5);
        bufp->chgQData(oldp+141,((((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                                   & ((0x17U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                      & ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                         & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4)) 
                                            & ((~ (IData)(vlSelf->__VdfgTmp_hae56d818__0)) 
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
        bufp->chgQData(oldp+143,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                   ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T
                                   : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                       ? 4ULL : ((2U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                                  ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                                   ? vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm
                                                   : 0ULL))))),64);
        bufp->chgCData(oldp+145,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_reg_waddr),5);
        bufp->chgBit(oldp+146,(((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                                & ((0x17U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                   & ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                      & ((0x6fU != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                         & ((0x67U 
                                             != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                            & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5))))))));
        bufp->chgQData(oldp+147,(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__fdreg_pc)) 
                                  + (((- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (((IData)(vlSelf->__VdfgTmp_h3db68a5f__0) 
                                                                   << 0xbU) 
                                                                  | (((IData)(vlSelf->__VdfgTmp_hd31110f2__0) 
                                                                      << 5U) 
                                                                     | ((IData)(vlSelf->__VdfgTmp_hd0a2fa80__0) 
                                                                        << 1U)))))))),64);
        bufp->chgCData(oldp+149,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op),6);
        bufp->chgCData(oldp+150,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.io_cpu_resp_valid)
                                   ? (0x3fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT____VdfgTmp_hd891a444__0 
                                               >> 0x14U))
                                   : 0U)),6);
        bufp->chgCData(oldp+151,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                   ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_10)
                                            ? 1U : 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                             ? 0U : 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0)
                                              ? 2U : 
                                             ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
                                               ? 0U
                                               : (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11) 
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
        bufp->chgCData(oldp+152,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0)
                                   ? 0U : ((0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                            ? 1U : 
                                           ((0xa3U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                             ? 2U : 
                                            ((0x123U 
                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                              ? 3U : 
                                             ((0x1a3U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                              << 2U)))))),3);
        bufp->chgQData(oldp+153,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T),64);
        bufp->chgCData(oldp+155,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type),3);
        bufp->chgQData(oldp+156,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T),64);
        bufp->chgSData(oldp+158,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen)
                                   ? (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr)
                                   : 0U)),12);
        bufp->chgBit(oldp+159,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen));
        bufp->chgBit(oldp+160,((1U & (~ ((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                                         | (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush))))));
        bufp->chgBit(oldp+161,(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag));
        bufp->chgIData(oldp+162,(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                   ? (vlSelf->Soc__DOT__core__DOT__fdreg_pc 
                                      + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm))
                                   : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                       ? (0xfffffffeU 
                                          & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4) 
                                             + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm)))
                                       : 0x80000000U))),32);
        bufp->chgIData(oldp+163,(vlSelf->Soc__DOT__core__DOT__decode__DOT__inst),32);
        bufp->chgCData(oldp+164,(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd),5);
        bufp->chgCData(oldp+165,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type),2);
        bufp->chgCData(oldp+166,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type),2);
        bufp->chgCData(oldp+167,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type),3);
        bufp->chgCData(oldp+168,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                   ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                            ? 1U : 
                                           ((0x6fU 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                                             ? 2U : 
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
                                              ? 0U : 
                                             ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
                                               ? 3U
                                               : ((1U 
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
        bufp->chgCData(oldp+169,(((((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0) 
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
                                            ? 1U : 
                                           ((0x173U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                             ? 2U : 
                                            ((0x1f3U 
                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                              ? 3U : 
                                             ((0x2f3U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                               ? 1U
                                               : ((0x373U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                   ? 2U
                                                   : 
                                                  (3U 
                                                   & (- (IData)(
                                                                (0x3f3U 
                                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))),2);
        bufp->chgQData(oldp+170,(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm),64);
        bufp->chgCData(oldp+172,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                   ? (7U & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result))
                                   : 0U)),3);
        bufp->chgIData(oldp+173,((IData)(vlSelf->Soc__DOT__core__DOT__dereg_branch_addr)),32);
        bufp->chgBit(oldp+174,(vlSelf->Soc__DOT__core__DOT__excute__DOT___mul_div_type_T_16));
        bufp->chgBit(oldp+175,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_mul_div_outvalid));
        bufp->chgQData(oldp+176,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                   ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                   : 0ULL)),64);
        bufp->chgQData(oldp+178,(((IData)(vlSelf->__VdfgTmp_h9d5684c6__0)
                                   ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                   : 0ULL)),64);
        bufp->chgQData(oldp+180,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata),64);
        bufp->chgBit(oldp+182,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we));
        bufp->chgBit(oldp+183,(vlSelf->Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer));
        bufp->chgQData(oldp+184,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu_buffer),64);
        bufp->chgBit(oldp+186,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8));
        bufp->chgBit(oldp+187,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8) 
                                & (0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)))));
        bufp->chgCData(oldp+188,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8)
                                   ? (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_h60d3cac5__0) 
                                       | (0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)))
                                       ? 3U : ((0x14U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
                                               << 1U))
                                   : 0U)),2);
        bufp->chgQData(oldp+189,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand),64);
        bufp->chgQData(oldp+191,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier),64);
        bufp->chgBit(oldp+193,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid));
        bufp->chgQData(oldp+194,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_hi),64);
        bufp->chgQData(oldp+196,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_lo),64);
        bufp->chgWData(oldp+198,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg),67);
        bufp->chgWData(oldp+201,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg),132);
        bufp->chgWData(oldp+206,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg),132);
        bufp->chgBit(oldp+211,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state));
        bufp->chgCData(oldp+212,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter),6);
        bufp->chgCData(oldp+213,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total),6);
        bufp->chgBit(oldp+214,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_15));
        bufp->chgBit(oldp+215,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divw));
        bufp->chgBit(oldp+216,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_div_signed));
        bufp->chgQData(oldp+217,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend),64);
        bufp->chgQData(oldp+219,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor),64);
        bufp->chgBit(oldp+221,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid));
        bufp->chgQData(oldp+222,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient),64);
        bufp->chgWData(oldp+224,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder),128);
        bufp->chgWData(oldp+228,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65),65);
        bufp->chgQData(oldp+231,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub33),33);
        bufp->chgBit(oldp+233,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo));
        bufp->chgBit(oldp+234,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem));
        bufp->chgCData(oldp+235,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state),2);
        bufp->chgCData(oldp+236,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter),7);
        bufp->chgQData(oldp+237,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34),34);
        bufp->chgWData(oldp+239,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66),66);
        bufp->chgBit(oldp+242,(((0U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                                & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2) 
                                   | ((0x30200073U 
                                       == vlSelf->Soc__DOT__core__DOT___GEN) 
                                      | (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7))))));
        bufp->chgBit(oldp+243,(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3));
        bufp->chgIData(oldp+244,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                   ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC)
                                   : ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                       ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC)
                                       : 0U))),32);
        bufp->chgCData(oldp+245,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__state),3);
        bufp->chgBit(oldp+246,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.io_fccache_hit));
        bufp->chgBit(oldp+247,(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid));
        bufp->chgCData(oldp+248,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__state),3);
        bufp->chgBit(oldp+249,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.io_fccache_hit));
        bufp->chgBit(oldp+250,(((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_1) 
                                & (0x9fffffffU < vlSelf->Soc__DOT__core__DOT__ioformem__DOT___axi_req_bits_addr_T))));
        bufp->chgCData(oldp+251,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state),2);
        bufp->chgBit(oldp+252,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                                | ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)))));
        bufp->chgIData(oldp+253,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc),32);
        bufp->chgBit(oldp+254,(((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h63333fac__0) 
                                & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                                      | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14)) 
                                         & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                                            | ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                                               | (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag)))))))));
        bufp->chgBit(oldp+255,(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0));
        bufp->chgBit(oldp+256,(((~ (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.io_fccache_hit)) 
                                & (0U != (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__state)))));
        bufp->chgBit(oldp+257,(((0U != (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__state)) 
                                | (((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hb9efb46f__0) 
                                    & (0U != (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_wmask))) 
                                   | ((~ ((0U != (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_wmask)) 
                                          | (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.io_fccache_hit))) 
                                      & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hb9efb46f__0))))));
        bufp->chgBit(oldp+258,(vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall));
        bufp->chgBit(oldp+259,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_mul_div_outvalid)) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___mul_div_type_T_16))));
        bufp->chgIData(oldp+260,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),32);
        bufp->chgIData(oldp+261,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc),32);
        bufp->chgIData(oldp+262,(((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2)
                                   ? ((IData)(4U) + vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc)
                                   : ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                                       ? ((IData)(4U) 
                                          + vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)
                                       : vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc))),32);
        bufp->chgQData(oldp+263,(vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata),64);
        bufp->chgBit(oldp+265,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))));
        bufp->chgBit(oldp+266,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))));
        bufp->chgBit(oldp+267,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard));
        bufp->chgBit(oldp+268,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard));
        bufp->chgBit(oldp+269,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard));
        bufp->chgBit(oldp+270,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard));
        bufp->chgBit(oldp+271,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard));
        bufp->chgBit(oldp+272,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard));
        bufp->chgBit(oldp+273,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard));
        bufp->chgBit(oldp+274,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard));
        bufp->chgBit(oldp+275,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard));
        bufp->chgIData(oldp+276,((((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                                   & (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.io_cpu_resp_valid))
                                   ? (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.io_cpu_resp_bits_data)
                                   : 0U)),32);
        bufp->chgBit(oldp+277,(vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag));
        bufp->chgCData(oldp+278,(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count),6);
        bufp->chgIData(oldp+279,(((IData)(vlSelf->__VdfgTmp_h9d5684c6__0)
                                   ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)
                                   : 0U)),32);
        bufp->chgIData(oldp+280,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                   ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)
                                   : 0U)),32);
        bufp->chgBit(oldp+281,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type))));
        bufp->chgBit(oldp+282,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))));
        bufp->chgBit(oldp+283,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid));
        bufp->chgQData(oldp+284,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_bits),64);
        bufp->chgBit(oldp+286,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_valid));
        bufp->chgBit(oldp+287,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.io_cpu_resp_valid));
        bufp->chgQData(oldp+288,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.io_cpu_resp_bits_data),64);
        bufp->chgBit(oldp+290,(vlSelf->Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer));
        bufp->chgBit(oldp+291,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer));
        bufp->chgBit(oldp+292,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer));
        bufp->chgQData(oldp+293,(vlSelf->Soc__DOT__core__DOT__mem__DOT__clmem_buffer),64);
        bufp->chgQData(oldp+295,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdata_buffer),64);
        bufp->chgQData(oldp+297,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataio_buffer),64);
        bufp->chgQData(oldp+299,(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value),64);
        bufp->chgQData(oldp+301,((((QData)((IData)(
                                                   vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
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
                                  | (((0U == (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                 << 6U)))
                                       ? 0ULL : ((QData)((IData)(
                                                                 vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                                       << 6U))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                      << 6U))))) 
                                     | ((QData)((IData)(
                                                        vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
                                                        (0xeU 
                                                         & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                            << 1U))])) 
                                        >> (0x1fU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                             << 6U)))))),64);
        bufp->chgQData(oldp+303,(((((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
                                    & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))) 
                                   & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr)))
                                   ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                   : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                  [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr])),64);
        bufp->chgQData(oldp+305,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr]),64);
        bufp->chgQData(oldp+307,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]),64);
        bufp->chgQData(oldp+309,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]),64);
        bufp->chgQData(oldp+311,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
        bufp->chgQData(oldp+313,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
        bufp->chgQData(oldp+315,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
        bufp->chgQData(oldp+317,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
        bufp->chgQData(oldp+319,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
        bufp->chgQData(oldp+321,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
        bufp->chgQData(oldp+323,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
        bufp->chgQData(oldp+325,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
        bufp->chgQData(oldp+327,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
        bufp->chgQData(oldp+329,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
        bufp->chgQData(oldp+331,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
        bufp->chgQData(oldp+333,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
        bufp->chgQData(oldp+335,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
        bufp->chgQData(oldp+337,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
        bufp->chgQData(oldp+339,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
        bufp->chgQData(oldp+341,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
        bufp->chgQData(oldp+343,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
        bufp->chgQData(oldp+345,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
        bufp->chgQData(oldp+347,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
        bufp->chgQData(oldp+349,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
        bufp->chgQData(oldp+351,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
        bufp->chgQData(oldp+353,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
        bufp->chgQData(oldp+355,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
        bufp->chgQData(oldp+357,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
        bufp->chgQData(oldp+359,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
        bufp->chgQData(oldp+361,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
        bufp->chgQData(oldp+363,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
        bufp->chgQData(oldp+365,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
        bufp->chgQData(oldp+367,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
        bufp->chgQData(oldp+369,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
        bufp->chgQData(oldp+371,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
        bufp->chgQData(oldp+373,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
        bufp->chgQData(oldp+375,(vlSelf->Soc__DOT__core__DOT__trap__DOT__cause),64);
        bufp->chgIData(oldp+377,(vlSelf->Soc__DOT__core__DOT__trap__DOT__pc),32);
        bufp->chgBit(oldp+378,(vlSelf->Soc__DOT__sram__DOT__need_resp));
        bufp->chgCData(oldp+379,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__r_count),4);
        bufp->chgCData(oldp+380,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__w_count),4);
        bufp->chgBit(oldp+381,((0U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__state))));
        bufp->chgBit(oldp+382,((1U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__state))));
        bufp->chgBit(oldp+383,((2U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__state))));
        bufp->chgBit(oldp+384,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc));
        bufp->chgBit(oldp+385,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc_reg));
        bufp->chgIData(oldp+386,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__addr_reg),32);
        bufp->chgQData(oldp+387,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__cpu_data),64);
        bufp->chgCData(oldp+389,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__cpu_mask),8);
        bufp->chgSData(oldp+390,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__valid),16);
        bufp->chgSData(oldp+391,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__dirty),16);
        bufp->chgBit(oldp+392,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___dirty0_T) 
                                & (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___hit0_T_2))));
        bufp->chgBit(oldp+393,((0xffffU & (((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__valid) 
                                            >> (0x1fU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (0xeU 
                                                    & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__addr_reg 
                                                       >> 6U))))) 
                                           & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___TagArray_ext_R1_data 
                                              == (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__addr_reg 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+394,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0));
        bufp->chgBit(oldp+395,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__ren));
        bufp->chgBit(oldp+396,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__ren_reg));
        bufp->chgCData(oldp+397,((0xfU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__addr_reg 
                                          >> 3U))),4);
        bufp->chgCData(oldp+398,((0x1fU & ((IData)(1U) 
                                           + (0xeU 
                                              & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__addr_reg 
                                                 >> 6U))))),5);
        bufp->chgWData(oldp+399,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__rdata0),1024);
        bufp->chgWData(oldp+431,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__rdata1),1024);
        bufp->chgWData(oldp+463,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__rdata0_buf),1024);
        bufp->chgWData(oldp+495,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__rdata1_buf),1024);
        bufp->chgQData(oldp+527,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__refill_buffer_0),64);
        bufp->chgQData(oldp+529,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__refill_buffer_1),64);
        bufp->chgQData(oldp+531,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__refill_buffer_2),64);
        bufp->chgQData(oldp+533,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__refill_buffer_3),64);
        bufp->chgQData(oldp+535,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__refill_buffer_4),64);
        bufp->chgQData(oldp+537,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__refill_buffer_5),64);
        bufp->chgQData(oldp+539,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__refill_buffer_6),64);
        bufp->chgQData(oldp+541,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__refill_buffer_7),64);
        bufp->chgQData(oldp+543,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__refill_buffer_8),64);
        bufp->chgQData(oldp+545,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__refill_buffer_9),64);
        bufp->chgQData(oldp+547,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__refill_buffer_10),64);
        bufp->chgQData(oldp+549,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__refill_buffer_11),64);
        bufp->chgQData(oldp+551,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__refill_buffer_12),64);
        bufp->chgQData(oldp+553,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__refill_buffer_13),64);
        bufp->chgQData(oldp+555,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__refill_buffer_14),64);
        bufp->chgQData(oldp+557,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__refill_buffer_15),64);
        bufp->chgWData(oldp+559,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__read),1024);
        bufp->chgBit(oldp+591,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__dirty0));
        bufp->chgBit(oldp+592,((1U & (((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__valid) 
                                       >> (0x1fU & 
                                           ((IData)(1U) 
                                            + (0xeU 
                                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__addr_reg 
                                                  >> 6U))))) 
                                      & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__dirty) 
                                         >> (0x1fU 
                                             & ((IData)(1U) 
                                                + (0xeU 
                                                   & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__addr_reg 
                                                      >> 6U)))))))));
        bufp->chgCData(oldp+593,((0xeU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__addr_reg 
                                          >> 6U))),4);
        bufp->chgCData(oldp+594,((0xfU & ((IData)(1U) 
                                          + (0xeU & 
                                             (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__addr_reg 
                                              >> 6U))))),4);
        bufp->chgBit(oldp+595,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                   | ((0U >= (0x78U 
                                              & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__addr_reg))
                                       ? ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__cpu_mask) 
                                          << (0x78U 
                                              & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__addr_reg))
                                       : 0U)))));
        bufp->chgCData(oldp+596,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_0_ext__DOT___GEN)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_0_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_0_ext__DOT___GEN_0]
                                   : 0U)),8);
        bufp->chgCData(oldp+597,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_0_ext__DOT___GEN_1)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_0_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_0_ext__DOT___GEN_2]
                                   : 0U)),8);
        bufp->chgCData(oldp+598,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+599,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+600,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+601,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+602,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+603,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+604,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+605,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+606,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+607,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+608,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+609,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+610,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+611,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+612,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+613,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+614,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                   | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                      >> 1U)))));
        bufp->chgCData(oldp+615,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_1_ext__DOT___GEN)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_1_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_1_ext__DOT___GEN_0]
                                   : 0U)),8);
        bufp->chgCData(oldp+616,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_1_ext__DOT___GEN_1)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_1_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_1_ext__DOT___GEN_2]
                                   : 0U)),8);
        bufp->chgCData(oldp+617,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+618,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+619,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+620,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+621,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+622,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+623,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+624,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+625,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+626,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+627,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+628,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+629,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+630,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+631,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+632,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+633,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                   | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                      >> 2U)))));
        bufp->chgCData(oldp+634,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_2_ext__DOT___GEN)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_2_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_2_ext__DOT___GEN_0]
                                   : 0U)),8);
        bufp->chgCData(oldp+635,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_2_ext__DOT___GEN_1)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_2_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_2_ext__DOT___GEN_2]
                                   : 0U)),8);
        bufp->chgCData(oldp+636,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+637,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+638,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+639,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+640,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+641,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+642,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+643,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+644,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+645,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+646,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+647,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+648,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+649,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+650,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+651,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+652,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                   | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                      >> 3U)))));
        bufp->chgCData(oldp+653,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_3_ext__DOT___GEN)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_3_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_3_ext__DOT___GEN_0]
                                   : 0U)),8);
        bufp->chgCData(oldp+654,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_3_ext__DOT___GEN_1)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_3_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_3_ext__DOT___GEN_2]
                                   : 0U)),8);
        bufp->chgCData(oldp+655,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+656,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+657,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+658,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+659,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+660,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+661,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+662,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+663,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+664,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+665,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+666,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+667,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+668,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+669,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+670,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+671,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                   | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                      >> 4U)))));
        bufp->chgCData(oldp+672,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_4_ext__DOT___GEN)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_4_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_4_ext__DOT___GEN_0]
                                   : 0U)),8);
        bufp->chgCData(oldp+673,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_4_ext__DOT___GEN_1)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_4_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_4_ext__DOT___GEN_2]
                                   : 0U)),8);
        bufp->chgCData(oldp+674,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+675,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+676,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+677,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+678,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+679,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+680,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+681,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+682,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+683,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+684,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+685,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+686,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+687,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+688,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+689,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+690,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                   | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                      >> 5U)))));
        bufp->chgCData(oldp+691,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_5_ext__DOT___GEN)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_5_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_5_ext__DOT___GEN_0]
                                   : 0U)),8);
        bufp->chgCData(oldp+692,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_5_ext__DOT___GEN_1)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_5_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_5_ext__DOT___GEN_2]
                                   : 0U)),8);
        bufp->chgCData(oldp+693,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+694,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+695,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+696,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+697,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+698,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+699,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+700,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+701,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+702,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+703,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+704,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+705,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+706,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+707,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+708,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+709,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                   | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                      >> 6U)))));
        bufp->chgCData(oldp+710,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_6_ext__DOT___GEN)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_6_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_6_ext__DOT___GEN_0]
                                   : 0U)),8);
        bufp->chgCData(oldp+711,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_6_ext__DOT___GEN_1)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_6_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_6_ext__DOT___GEN_2]
                                   : 0U)),8);
        bufp->chgCData(oldp+712,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+713,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+714,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+715,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+716,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+717,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+718,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+719,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+720,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+721,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+722,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+723,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+724,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+725,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+726,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+727,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+728,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                   | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                      >> 7U)))));
        bufp->chgCData(oldp+729,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_7_ext__DOT___GEN)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_7_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_7_ext__DOT___GEN_0]
                                   : 0U)),8);
        bufp->chgCData(oldp+730,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_7_ext__DOT___GEN_1)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_7_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_7_ext__DOT___GEN_2]
                                   : 0U)),8);
        bufp->chgCData(oldp+731,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+732,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+733,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+734,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+735,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+736,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+737,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+738,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+739,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+740,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+741,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+742,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+743,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+744,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+745,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+746,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_0_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+747,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                   | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                      >> 0x10U)))));
        bufp->chgCData(oldp+748,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_0_ext__DOT___GEN)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_0_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_0_ext__DOT___GEN_0]
                                   : 0U)),8);
        bufp->chgCData(oldp+749,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_0_ext__DOT___GEN_1)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_0_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_0_ext__DOT___GEN_2]
                                   : 0U)),8);
        bufp->chgCData(oldp+750,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+751,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+752,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+753,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+754,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+755,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+756,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+757,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+758,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+759,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+760,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+761,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+762,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+763,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+764,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+765,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+766,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                   | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                      >> 0x11U)))));
        bufp->chgCData(oldp+767,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_1_ext__DOT___GEN)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_1_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_1_ext__DOT___GEN_0]
                                   : 0U)),8);
        bufp->chgCData(oldp+768,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_1_ext__DOT___GEN_1)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_1_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_1_ext__DOT___GEN_2]
                                   : 0U)),8);
        bufp->chgCData(oldp+769,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+770,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+771,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+772,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+773,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+774,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+775,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+776,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+777,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+778,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+779,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+780,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+781,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+782,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+783,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+784,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+785,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                   | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                      >> 0x12U)))));
        bufp->chgCData(oldp+786,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_2_ext__DOT___GEN)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_2_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_2_ext__DOT___GEN_0]
                                   : 0U)),8);
        bufp->chgCData(oldp+787,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_2_ext__DOT___GEN_1)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_2_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_2_ext__DOT___GEN_2]
                                   : 0U)),8);
        bufp->chgCData(oldp+788,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+789,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+790,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+791,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+792,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+793,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+794,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+795,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+796,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+797,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+798,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+799,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+800,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+801,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+802,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+803,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+804,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                   | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                      >> 0x13U)))));
        bufp->chgCData(oldp+805,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_3_ext__DOT___GEN)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_3_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_3_ext__DOT___GEN_0]
                                   : 0U)),8);
        bufp->chgCData(oldp+806,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_3_ext__DOT___GEN_1)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_3_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_3_ext__DOT___GEN_2]
                                   : 0U)),8);
        bufp->chgCData(oldp+807,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+808,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+809,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+810,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+811,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+812,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+813,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+814,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+815,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+816,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+817,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+818,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+819,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+820,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+821,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+822,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+823,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                   | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                      >> 0x14U)))));
        bufp->chgCData(oldp+824,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_4_ext__DOT___GEN)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_4_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_4_ext__DOT___GEN_0]
                                   : 0U)),8);
        bufp->chgCData(oldp+825,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_4_ext__DOT___GEN_1)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_4_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_4_ext__DOT___GEN_2]
                                   : 0U)),8);
        bufp->chgCData(oldp+826,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+827,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+828,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+829,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+830,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+831,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+832,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+833,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+834,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+835,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+836,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+837,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+838,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+839,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+840,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+841,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+842,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                   | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                      >> 0x15U)))));
        bufp->chgCData(oldp+843,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_5_ext__DOT___GEN)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_5_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_5_ext__DOT___GEN_0]
                                   : 0U)),8);
        bufp->chgCData(oldp+844,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_5_ext__DOT___GEN_1)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_5_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_5_ext__DOT___GEN_2]
                                   : 0U)),8);
        bufp->chgCData(oldp+845,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+846,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+847,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+848,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+849,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+850,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+851,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+852,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+853,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+854,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+855,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+856,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+857,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+858,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+859,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+860,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+861,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                   | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                      >> 0x16U)))));
        bufp->chgCData(oldp+862,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_6_ext__DOT___GEN)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_6_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_6_ext__DOT___GEN_0]
                                   : 0U)),8);
        bufp->chgCData(oldp+863,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_6_ext__DOT___GEN_1)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_6_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_6_ext__DOT___GEN_2]
                                   : 0U)),8);
        bufp->chgCData(oldp+864,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+865,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+866,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+867,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+868,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+869,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+870,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+871,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+872,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+873,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+874,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+875,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+876,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+877,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+878,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+879,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+880,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                   | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                      >> 0x17U)))));
        bufp->chgCData(oldp+881,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_7_ext__DOT___GEN)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_7_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_7_ext__DOT___GEN_0]
                                   : 0U)),8);
        bufp->chgCData(oldp+882,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_7_ext__DOT___GEN_1)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_7_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_7_ext__DOT___GEN_2]
                                   : 0U)),8);
        bufp->chgCData(oldp+883,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+884,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+885,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+886,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+887,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+888,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+889,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+890,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+891,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+892,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+893,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+894,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+895,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+896,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+897,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+898,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_10_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+899,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                   | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                      >> 0x18U)))));
        bufp->chgCData(oldp+900,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_0_ext__DOT___GEN)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_0_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_0_ext__DOT___GEN_0]
                                   : 0U)),8);
        bufp->chgCData(oldp+901,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_0_ext__DOT___GEN_1)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_0_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_0_ext__DOT___GEN_2]
                                   : 0U)),8);
        bufp->chgCData(oldp+902,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+903,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+904,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+905,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+906,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+907,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+908,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+909,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+910,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+911,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+912,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+913,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+914,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+915,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+916,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+917,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+918,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                   | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                      >> 0x19U)))));
        bufp->chgCData(oldp+919,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_1_ext__DOT___GEN)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_1_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_1_ext__DOT___GEN_0]
                                   : 0U)),8);
        bufp->chgCData(oldp+920,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_1_ext__DOT___GEN_1)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_1_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_1_ext__DOT___GEN_2]
                                   : 0U)),8);
        bufp->chgCData(oldp+921,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+922,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+923,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+924,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+925,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+926,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+927,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+928,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+929,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+930,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+931,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+932,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+933,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+934,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+935,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+936,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+937,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                   | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                      >> 0x1aU)))));
        bufp->chgCData(oldp+938,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_2_ext__DOT___GEN)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_2_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_2_ext__DOT___GEN_0]
                                   : 0U)),8);
        bufp->chgCData(oldp+939,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_2_ext__DOT___GEN_1)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_2_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_2_ext__DOT___GEN_2]
                                   : 0U)),8);
        bufp->chgCData(oldp+940,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+941,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+942,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+943,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+944,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+945,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+946,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+947,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+948,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+949,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+950,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+951,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+952,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+953,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+954,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+955,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+956,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                   | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                      >> 0x1bU)))));
        bufp->chgCData(oldp+957,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_3_ext__DOT___GEN)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_3_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_3_ext__DOT___GEN_0]
                                   : 0U)),8);
        bufp->chgCData(oldp+958,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_3_ext__DOT___GEN_1)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_3_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_3_ext__DOT___GEN_2]
                                   : 0U)),8);
        bufp->chgCData(oldp+959,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+960,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+961,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+962,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+963,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+964,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+965,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+966,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+967,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+968,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+969,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+970,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+971,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+972,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+973,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+974,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+975,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                   | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                      >> 0x1cU)))));
        bufp->chgCData(oldp+976,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_4_ext__DOT___GEN)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_4_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_4_ext__DOT___GEN_0]
                                   : 0U)),8);
        bufp->chgCData(oldp+977,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_4_ext__DOT___GEN_1)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_4_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_4_ext__DOT___GEN_2]
                                   : 0U)),8);
        bufp->chgCData(oldp+978,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+979,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+980,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+981,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+982,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+983,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+984,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+985,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+986,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+987,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+988,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+989,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+990,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+991,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+992,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+993,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+994,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                   | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                      >> 0x1dU)))));
        bufp->chgCData(oldp+995,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_5_ext__DOT___GEN)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_5_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_5_ext__DOT___GEN_0]
                                   : 0U)),8);
        bufp->chgCData(oldp+996,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_5_ext__DOT___GEN_1)
                                   ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_5_ext__DOT__Memory
                                  [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_5_ext__DOT___GEN_2]
                                   : 0U)),8);
        bufp->chgCData(oldp+997,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+998,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+999,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1000,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1001,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1002,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1003,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1004,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1005,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1006,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1007,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1008,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1009,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1010,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1011,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1012,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1013,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                       >> 0x1eU)))));
        bufp->chgCData(oldp+1014,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1015,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1016,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1017,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1018,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1019,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1020,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1021,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1022,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1023,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1024,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1025,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1026,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1027,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1028,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1029,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1030,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1031,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1032,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                       >> 0x1fU)))));
        bufp->chgCData(oldp+1033,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1034,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1035,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1036,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1037,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1038,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1039,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1040,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1041,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1042,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1043,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1044,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1045,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1046,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1047,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1048,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1049,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1050,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_11_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1051,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U]))));
        bufp->chgCData(oldp+1052,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1053,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1054,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1055,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1056,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1057,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1058,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1059,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1060,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1061,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1062,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1063,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1064,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1065,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1066,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1067,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1068,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1069,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1070,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 1U)))));
        bufp->chgCData(oldp+1071,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1072,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1073,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1074,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1075,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1076,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1077,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1078,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1079,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1080,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1081,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1082,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1083,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1084,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1085,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1086,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1087,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1088,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1089,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 2U)))));
        bufp->chgCData(oldp+1090,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1091,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1092,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1093,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1094,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1095,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1096,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1097,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1098,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1099,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1100,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1101,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1102,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1103,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1104,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1105,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1106,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1107,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1108,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 3U)))));
        bufp->chgCData(oldp+1109,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1110,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1111,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1112,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1113,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1114,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1115,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1116,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1117,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1118,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1119,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1120,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1121,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1122,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1123,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1124,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1125,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1126,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1127,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 4U)))));
        bufp->chgCData(oldp+1128,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1129,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1130,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1131,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1132,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1133,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1134,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1135,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1136,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1137,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1138,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1139,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1140,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1141,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1142,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1143,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1144,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1145,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1146,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 5U)))));
        bufp->chgCData(oldp+1147,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1148,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1149,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1150,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1151,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1152,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1153,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1154,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1155,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1156,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1157,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1158,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1159,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1160,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1161,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1162,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1163,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1164,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1165,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 6U)))));
        bufp->chgCData(oldp+1166,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1167,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1168,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1169,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1170,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1171,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1172,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1173,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1174,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1175,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1176,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1177,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1178,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1179,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1180,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1181,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1182,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1183,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1184,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 7U)))));
        bufp->chgCData(oldp+1185,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1186,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1187,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1188,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1189,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1190,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1191,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1192,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1193,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1194,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1195,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1196,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1197,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1198,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1199,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1200,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1201,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1202,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_12_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1203,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 8U)))));
        bufp->chgCData(oldp+1204,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1205,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1206,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1207,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1208,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1209,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1210,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1211,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1212,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1213,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1214,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1215,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1216,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1217,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1218,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1219,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1220,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1221,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1222,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 9U)))));
        bufp->chgCData(oldp+1223,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1224,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1225,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1226,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1227,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1228,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1229,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1230,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1231,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1232,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1233,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1234,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1235,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1236,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1237,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1238,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1239,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1240,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1241,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 0xaU)))));
        bufp->chgCData(oldp+1242,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1243,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1244,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1245,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1246,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1247,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1248,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1249,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1250,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1251,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1252,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1253,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1254,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1255,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1256,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1257,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1258,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1259,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1260,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 0xbU)))));
        bufp->chgCData(oldp+1261,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1262,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1263,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1264,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1265,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1266,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1267,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1268,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1269,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1270,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1271,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1272,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1273,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1274,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1275,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1276,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1277,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1278,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1279,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 0xcU)))));
        bufp->chgCData(oldp+1280,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1281,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1282,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1283,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1284,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1285,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1286,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1287,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1288,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1289,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1290,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1291,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1292,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1293,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1294,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1295,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1296,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1297,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1298,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 0xdU)))));
        bufp->chgCData(oldp+1299,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1300,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1301,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1302,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1303,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1304,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1305,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1306,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1307,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1308,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1309,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1310,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1311,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1312,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1313,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1314,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1315,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1316,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1317,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 0xeU)))));
        bufp->chgCData(oldp+1318,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1319,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1320,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1321,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1322,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1323,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1324,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1325,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1326,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1327,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1328,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1329,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1330,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1331,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1332,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1333,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1334,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1335,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1336,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 0xfU)))));
        bufp->chgCData(oldp+1337,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1338,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1339,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1340,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1341,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1342,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1343,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1344,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1345,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1346,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1347,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1348,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1349,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1350,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1351,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1352,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1353,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1354,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_13_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1355,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 0x10U)))));
        bufp->chgCData(oldp+1356,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1357,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1358,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1359,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1360,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1361,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1362,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1363,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1364,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1365,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1366,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1367,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1368,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1369,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1370,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1371,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1372,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1373,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1374,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 0x11U)))));
        bufp->chgCData(oldp+1375,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1376,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1377,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1378,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1379,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1380,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1381,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1382,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1383,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1384,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1385,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1386,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1387,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1388,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1389,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1390,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1391,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1392,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1393,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 0x12U)))));
        bufp->chgCData(oldp+1394,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1395,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1396,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1397,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1398,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1399,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1400,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1401,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1402,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1403,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1404,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1405,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1406,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1407,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1408,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1409,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1410,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1411,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1412,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 0x13U)))));
        bufp->chgCData(oldp+1413,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1414,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1415,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1416,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1417,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1418,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1419,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1420,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1421,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1422,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1423,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1424,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1425,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1426,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1427,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1428,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1429,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1430,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1431,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 0x14U)))));
        bufp->chgCData(oldp+1432,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1433,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1434,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1435,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1436,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1437,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1438,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1439,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1440,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1441,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1442,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1443,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1444,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1445,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1446,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1447,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1448,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1449,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1450,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 0x15U)))));
        bufp->chgCData(oldp+1451,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1452,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1453,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1454,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1455,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1456,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1457,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1458,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1459,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1460,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1461,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1462,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1463,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1464,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1465,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1466,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1467,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1468,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1469,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 0x16U)))));
        bufp->chgCData(oldp+1470,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1471,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1472,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1473,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1474,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1475,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1476,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1477,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1478,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1479,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1480,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1481,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1482,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1483,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1484,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1485,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1486,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1487,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1488,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 0x17U)))));
        bufp->chgCData(oldp+1489,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1490,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1491,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1492,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1493,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1494,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1495,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1496,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1497,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1498,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1499,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1500,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1501,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1502,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1503,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1504,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1505,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1506,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_14_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1507,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 0x18U)))));
        bufp->chgCData(oldp+1508,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1509,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1510,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1511,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1512,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1513,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1514,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1515,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1516,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1517,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1518,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1519,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1520,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1521,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1522,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1523,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1524,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1525,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1526,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 0x19U)))));
        bufp->chgCData(oldp+1527,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1528,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1529,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1530,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1531,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1532,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1533,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1534,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1535,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1536,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1537,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1538,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1539,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1540,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1541,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1542,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1543,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1544,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1545,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 0x1aU)))));
        bufp->chgCData(oldp+1546,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1547,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1548,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1549,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1550,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1551,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1552,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1553,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1554,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1555,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1556,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1557,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1558,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1559,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1560,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1561,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1562,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1563,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1564,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 0x1bU)))));
        bufp->chgCData(oldp+1565,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1566,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1567,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1568,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1569,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1570,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1571,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1572,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1573,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1574,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1575,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1576,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1577,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1578,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1579,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1580,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1581,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1582,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1583,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 0x1cU)))));
        bufp->chgCData(oldp+1584,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1585,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1586,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1587,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1588,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1589,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1590,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1591,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1592,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1593,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1594,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1595,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1596,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1597,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1598,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1599,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1600,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1601,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1602,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 0x1dU)))));
        bufp->chgCData(oldp+1603,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1604,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1605,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1606,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1607,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1608,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1609,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1610,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1611,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1612,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1613,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1614,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1615,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1616,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1617,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1618,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1619,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1620,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1621,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 0x1eU)))));
        bufp->chgCData(oldp+1622,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1623,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1624,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1625,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1626,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1627,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1628,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1629,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1630,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1631,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1632,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1633,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1634,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1635,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1636,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1637,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1638,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1639,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1640,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[3U] 
                                       >> 0x1fU)))));
        bufp->chgCData(oldp+1641,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1642,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1643,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1644,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1645,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1646,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1647,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1648,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1649,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1650,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1651,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1652,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1653,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1654,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1655,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1656,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1657,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1658,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_15_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1659,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                       >> 8U)))));
        bufp->chgCData(oldp+1660,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1661,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1662,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1663,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1664,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1665,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1666,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1667,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1668,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1669,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1670,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1671,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1672,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1673,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1674,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1675,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1676,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1677,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1678,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                       >> 9U)))));
        bufp->chgCData(oldp+1679,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1680,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1681,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1682,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1683,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1684,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1685,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1686,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1687,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1688,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1689,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1690,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1691,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1692,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1693,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1694,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1695,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1696,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1697,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                       >> 0xaU)))));
        bufp->chgCData(oldp+1698,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1699,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1700,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1701,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1702,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1703,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1704,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1705,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1706,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1707,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1708,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1709,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1710,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1711,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1712,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1713,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1714,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1715,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1716,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                       >> 0xbU)))));
        bufp->chgCData(oldp+1717,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1718,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1719,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1720,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1721,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1722,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1723,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1724,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1725,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1726,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1727,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1728,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1729,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1730,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1731,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1732,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1733,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1734,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1735,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                       >> 0xcU)))));
        bufp->chgCData(oldp+1736,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1737,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1738,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1739,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1740,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1741,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1742,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1743,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1744,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1745,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1746,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1747,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1748,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1749,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1750,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1751,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1752,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1753,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1754,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                       >> 0xdU)))));
        bufp->chgCData(oldp+1755,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1756,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1757,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1758,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1759,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1760,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1761,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1762,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1763,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1764,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1765,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1766,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1767,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1768,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1769,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1770,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1771,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1772,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1773,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                       >> 0xeU)))));
        bufp->chgCData(oldp+1774,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1775,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1776,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1777,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1778,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1779,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1780,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1781,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1782,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1783,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1784,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1785,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1786,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1787,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1788,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1789,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1790,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1791,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1792,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                       >> 0xfU)))));
        bufp->chgCData(oldp+1793,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1794,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1795,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1796,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1797,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1798,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1799,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1800,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1801,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1802,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1803,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1804,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1805,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1806,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1807,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1808,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1809,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1810,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_1_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1811,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                       >> 0x10U)))));
        bufp->chgCData(oldp+1812,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1813,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1814,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1815,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1816,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1817,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1818,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1819,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1820,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1821,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1822,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1823,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1824,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1825,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1826,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1827,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1828,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1829,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1830,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                       >> 0x11U)))));
        bufp->chgCData(oldp+1831,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1832,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1833,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1834,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1835,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1836,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1837,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1838,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1839,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1840,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1841,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1842,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1843,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1844,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1845,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1846,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1847,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1848,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1849,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                       >> 0x12U)))));
        bufp->chgCData(oldp+1850,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1851,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1852,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1853,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1854,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1855,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1856,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1857,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1858,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1859,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1860,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1861,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1862,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1863,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1864,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1865,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1866,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1867,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1868,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                       >> 0x13U)))));
        bufp->chgCData(oldp+1869,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1870,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1871,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1872,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1873,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1874,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1875,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1876,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1877,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1878,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1879,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1880,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1881,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1882,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1883,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1884,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1885,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1886,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1887,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                       >> 0x14U)))));
        bufp->chgCData(oldp+1888,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1889,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1890,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1891,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1892,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1893,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1894,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1895,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1896,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1897,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1898,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1899,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1900,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1901,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1902,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1903,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1904,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1905,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1906,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                       >> 0x15U)))));
        bufp->chgCData(oldp+1907,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1908,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1909,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1910,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1911,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1912,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1913,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1914,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1915,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1916,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1917,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1918,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1919,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1920,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1921,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1922,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1923,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1924,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1925,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                       >> 0x16U)))));
        bufp->chgCData(oldp+1926,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1927,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1928,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1929,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1930,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1931,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1932,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1933,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1934,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1935,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1936,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1937,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1938,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1939,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1940,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1941,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1942,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1943,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1944,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                       >> 0x17U)))));
        bufp->chgCData(oldp+1945,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1946,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1947,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1948,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1949,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1950,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1951,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1952,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1953,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1954,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1955,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1956,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1957,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1958,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1959,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1960,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1961,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1962,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_2_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1963,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                       >> 0x18U)))));
        bufp->chgCData(oldp+1964,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1965,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1966,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1967,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1968,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1969,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1970,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1971,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1972,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1973,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1974,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1975,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1976,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1977,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1978,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1979,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1980,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+1981,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+1982,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                       >> 0x19U)))));
        bufp->chgCData(oldp+1983,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+1984,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+1985,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+1986,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+1987,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+1988,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+1989,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+1990,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+1991,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+1992,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+1993,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+1994,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+1995,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+1996,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+1997,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+1998,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+1999,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2000,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2001,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                       >> 0x1aU)))));
        bufp->chgCData(oldp+2002,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2003,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2004,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2005,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2006,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2007,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2008,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2009,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2010,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2011,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2012,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2013,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2014,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2015,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2016,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2017,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2018,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2019,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2020,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                       >> 0x1bU)))));
        bufp->chgCData(oldp+2021,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2022,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2023,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2024,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2025,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2026,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2027,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2028,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2029,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2030,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2031,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2032,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2033,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2034,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2035,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2036,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2037,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2038,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2039,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                       >> 0x1cU)))));
        bufp->chgCData(oldp+2040,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2041,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2042,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2043,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2044,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2045,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2046,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2047,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2048,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2049,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2050,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2051,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2052,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2053,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2054,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2055,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2056,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2057,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2058,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                       >> 0x1dU)))));
        bufp->chgCData(oldp+2059,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2060,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2061,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2062,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2063,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2064,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2065,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2066,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2067,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2068,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2069,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2070,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2071,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2072,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2073,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2074,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2075,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2076,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2077,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                       >> 0x1eU)))));
        bufp->chgCData(oldp+2078,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2079,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2080,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2081,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2082,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2083,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2084,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2085,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2086,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2087,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2088,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2089,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2090,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2091,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2092,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2093,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2094,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2095,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2096,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[0U] 
                                       >> 0x1fU)))));
        bufp->chgCData(oldp+2097,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2098,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2099,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2100,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2101,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2102,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2103,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2104,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2105,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2106,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2107,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2108,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2109,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2110,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2111,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2112,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2113,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2114,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_3_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2115,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U]))));
        bufp->chgCData(oldp+2116,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2117,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2118,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2119,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2120,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2121,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2122,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2123,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2124,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2125,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2126,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2127,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2128,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2129,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2130,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2131,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2132,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2133,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2134,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 1U)))));
        bufp->chgCData(oldp+2135,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2136,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2137,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2138,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2139,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2140,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2141,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2142,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2143,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2144,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2145,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2146,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2147,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2148,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2149,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2150,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2151,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2152,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2153,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 2U)))));
        bufp->chgCData(oldp+2154,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2155,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2156,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2157,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2158,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2159,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2160,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2161,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2162,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2163,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2164,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2165,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2166,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2167,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2168,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2169,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2170,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2171,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2172,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 3U)))));
        bufp->chgCData(oldp+2173,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2174,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2175,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2176,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2177,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2178,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2179,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2180,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2181,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2182,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2183,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2184,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2185,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2186,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2187,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2188,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2189,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2190,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2191,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 4U)))));
        bufp->chgCData(oldp+2192,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2193,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2194,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2195,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2196,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2197,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2198,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2199,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2200,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2201,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2202,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2203,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2204,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2205,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2206,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2207,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2208,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2209,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2210,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 5U)))));
        bufp->chgCData(oldp+2211,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2212,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2213,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2214,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2215,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2216,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2217,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2218,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2219,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2220,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2221,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2222,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2223,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2224,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2225,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2226,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2227,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2228,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2229,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 6U)))));
        bufp->chgCData(oldp+2230,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2231,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2232,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2233,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2234,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2235,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2236,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2237,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2238,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2239,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2240,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2241,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2242,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2243,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2244,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2245,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2246,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2247,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2248,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 7U)))));
        bufp->chgCData(oldp+2249,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2250,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2251,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2252,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2253,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2254,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2255,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2256,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2257,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2258,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2259,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2260,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2261,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2262,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2263,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2264,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2265,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2266,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_4_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2267,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 8U)))));
        bufp->chgCData(oldp+2268,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2269,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2270,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2271,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2272,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2273,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2274,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2275,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2276,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2277,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2278,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2279,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2280,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2281,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2282,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2283,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2284,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2285,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2286,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 9U)))));
        bufp->chgCData(oldp+2287,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2288,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2289,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2290,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2291,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2292,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2293,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2294,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2295,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2296,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2297,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2298,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2299,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2300,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2301,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2302,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2303,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2304,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2305,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 0xaU)))));
        bufp->chgCData(oldp+2306,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2307,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2308,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2309,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2310,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2311,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2312,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2313,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2314,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2315,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2316,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2317,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2318,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2319,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2320,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2321,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2322,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2323,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2324,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 0xbU)))));
        bufp->chgCData(oldp+2325,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2326,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2327,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2328,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2329,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2330,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2331,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2332,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2333,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2334,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2335,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2336,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2337,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2338,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2339,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2340,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2341,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2342,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2343,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 0xcU)))));
        bufp->chgCData(oldp+2344,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2345,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2346,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2347,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2348,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2349,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2350,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2351,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2352,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2353,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2354,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2355,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2356,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2357,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2358,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2359,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2360,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2361,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2362,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 0xdU)))));
        bufp->chgCData(oldp+2363,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2364,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2365,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2366,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2367,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2368,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2369,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2370,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2371,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2372,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2373,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2374,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2375,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2376,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2377,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2378,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2379,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2380,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2381,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 0xeU)))));
        bufp->chgCData(oldp+2382,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2383,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2384,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2385,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2386,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2387,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2388,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2389,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2390,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2391,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2392,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2393,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2394,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2395,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2396,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2397,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2398,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2399,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2400,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 0xfU)))));
        bufp->chgCData(oldp+2401,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2402,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2403,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2404,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2405,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2406,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2407,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2408,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2409,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2410,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2411,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2412,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2413,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2414,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2415,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2416,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2417,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2418,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_5_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2419,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 0x10U)))));
        bufp->chgCData(oldp+2420,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2421,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2422,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2423,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2424,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2425,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2426,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2427,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2428,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2429,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2430,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2431,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2432,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2433,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2434,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2435,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2436,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2437,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2438,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 0x11U)))));
        bufp->chgCData(oldp+2439,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2440,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2441,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2442,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2443,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2444,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2445,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2446,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2447,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2448,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2449,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2450,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2451,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2452,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2453,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2454,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2455,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2456,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2457,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 0x12U)))));
        bufp->chgCData(oldp+2458,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2459,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2460,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2461,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2462,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2463,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2464,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2465,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2466,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2467,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2468,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2469,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2470,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2471,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2472,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2473,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2474,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2475,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2476,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 0x13U)))));
        bufp->chgCData(oldp+2477,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2478,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2479,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2480,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2481,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2482,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2483,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2484,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2485,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2486,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2487,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2488,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2489,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2490,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2491,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2492,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2493,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2494,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2495,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 0x14U)))));
        bufp->chgCData(oldp+2496,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2497,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2498,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2499,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2500,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2501,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2502,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2503,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2504,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2505,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2506,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2507,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2508,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2509,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2510,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2511,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2512,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2513,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2514,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 0x15U)))));
        bufp->chgCData(oldp+2515,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2516,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2517,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2518,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2519,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2520,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2521,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2522,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2523,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2524,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2525,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2526,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2527,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2528,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2529,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2530,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2531,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2532,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2533,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 0x16U)))));
        bufp->chgCData(oldp+2534,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2535,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2536,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2537,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2538,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2539,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2540,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2541,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2542,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2543,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2544,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2545,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2546,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2547,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2548,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2549,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2550,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2551,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2552,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 0x17U)))));
        bufp->chgCData(oldp+2553,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2554,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2555,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2556,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2557,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2558,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2559,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2560,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2561,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2562,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2563,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2564,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2565,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2566,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2567,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2568,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2569,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2570,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_6_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2571,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 0x18U)))));
        bufp->chgCData(oldp+2572,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2573,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2574,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2575,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2576,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2577,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2578,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2579,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2580,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2581,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2582,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2583,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2584,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2585,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2586,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2587,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2588,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2589,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2590,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 0x19U)))));
        bufp->chgCData(oldp+2591,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2592,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2593,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2594,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2595,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2596,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2597,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2598,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2599,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2600,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2601,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2602,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2603,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2604,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2605,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2606,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2607,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2608,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2609,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 0x1aU)))));
        bufp->chgCData(oldp+2610,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2611,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2612,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2613,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2614,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2615,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2616,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2617,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2618,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2619,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2620,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2621,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2622,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2623,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2624,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2625,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2626,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2627,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2628,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 0x1bU)))));
        bufp->chgCData(oldp+2629,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2630,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2631,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2632,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2633,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2634,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2635,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2636,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2637,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2638,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2639,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2640,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2641,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2642,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2643,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2644,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2645,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2646,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2647,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 0x1cU)))));
        bufp->chgCData(oldp+2648,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2649,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2650,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2651,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2652,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2653,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2654,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2655,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2656,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2657,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2658,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2659,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2660,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2661,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2662,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2663,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2664,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2665,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2666,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 0x1dU)))));
        bufp->chgCData(oldp+2667,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2668,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2669,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2670,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2671,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2672,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2673,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2674,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2675,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2676,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2677,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2678,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2679,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2680,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2681,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2682,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2683,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2684,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2685,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 0x1eU)))));
        bufp->chgCData(oldp+2686,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2687,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2688,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2689,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2690,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2691,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2692,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2693,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2694,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2695,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2696,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2697,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2698,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2699,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2700,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2701,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2702,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2703,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2704,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[1U] 
                                       >> 0x1fU)))));
        bufp->chgCData(oldp+2705,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2706,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2707,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2708,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2709,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2710,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2711,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2712,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2713,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2714,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2715,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2716,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2717,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2718,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2719,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2720,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2721,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2722,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_7_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2723,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U]))));
        bufp->chgCData(oldp+2724,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2725,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2726,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2727,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2728,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2729,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2730,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2731,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2732,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2733,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2734,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2735,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2736,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2737,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2738,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2739,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2740,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2741,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2742,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                       >> 1U)))));
        bufp->chgCData(oldp+2743,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2744,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2745,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2746,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2747,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2748,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2749,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2750,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2751,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2752,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2753,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2754,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2755,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2756,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2757,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2758,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2759,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2760,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2761,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                       >> 2U)))));
        bufp->chgCData(oldp+2762,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2763,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2764,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2765,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2766,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2767,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2768,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2769,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2770,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2771,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2772,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2773,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2774,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2775,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2776,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2777,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2778,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2779,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2780,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                       >> 3U)))));
        bufp->chgCData(oldp+2781,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2782,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2783,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2784,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2785,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2786,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2787,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2788,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2789,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2790,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2791,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2792,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2793,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2794,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2795,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2796,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2797,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2798,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2799,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                       >> 4U)))));
        bufp->chgCData(oldp+2800,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2801,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2802,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2803,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2804,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2805,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2806,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2807,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2808,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2809,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2810,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2811,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2812,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2813,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2814,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2815,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2816,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2817,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2818,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                       >> 5U)))));
        bufp->chgCData(oldp+2819,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2820,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2821,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2822,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2823,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2824,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2825,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2826,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2827,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2828,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2829,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2830,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2831,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2832,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2833,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2834,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2835,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2836,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2837,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                       >> 6U)))));
        bufp->chgCData(oldp+2838,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2839,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2840,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2841,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2842,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2843,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2844,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2845,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2846,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2847,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2848,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2849,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2850,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2851,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2852,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2853,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2854,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2855,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2856,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                       >> 7U)))));
        bufp->chgCData(oldp+2857,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2858,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2859,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2860,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2861,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2862,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2863,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2864,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2865,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2866,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2867,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2868,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2869,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2870,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2871,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2872,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2873,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2874,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_8_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2875,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                       >> 8U)))));
        bufp->chgCData(oldp+2876,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2877,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2878,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2879,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2880,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2881,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2882,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2883,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2884,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2885,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2886,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2887,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2888,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2889,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2890,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2891,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2892,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2893,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2894,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                       >> 9U)))));
        bufp->chgCData(oldp+2895,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2896,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2897,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2898,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2899,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2900,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2901,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2902,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2903,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2904,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2905,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2906,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2907,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2908,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2909,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2910,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2911,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2912,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2913,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                       >> 0xaU)))));
        bufp->chgCData(oldp+2914,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2915,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2916,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2917,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2918,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2919,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2920,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2921,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2922,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2923,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2924,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2925,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2926,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2927,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2928,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2929,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2930,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2931,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2932,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                       >> 0xbU)))));
        bufp->chgCData(oldp+2933,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2934,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2935,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2936,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2937,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2938,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2939,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2940,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2941,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2942,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2943,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2944,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2945,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2946,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2947,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2948,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2949,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2950,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2951,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                       >> 0xcU)))));
        bufp->chgCData(oldp+2952,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2953,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2954,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2955,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2956,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2957,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2958,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2959,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2960,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2961,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2962,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2963,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2964,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2965,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2966,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2967,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2968,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2969,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2970,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                       >> 0xdU)))));
        bufp->chgCData(oldp+2971,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2972,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2973,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2974,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2975,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2976,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2977,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2978,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2979,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2980,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+2981,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+2982,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+2983,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+2984,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+2985,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+2986,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+2987,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+2988,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+2989,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                       >> 0xeU)))));
        bufp->chgCData(oldp+2990,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+2991,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+2992,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+2993,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+2994,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+2995,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+2996,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+2997,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+2998,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+2999,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3000,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3001,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3002,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3003,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3004,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3005,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3006,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3007,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3008,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___wmask_T_2[2U] 
                                       >> 0xfU)))));
        bufp->chgCData(oldp+3009,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3010,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3011,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3012,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3013,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3014,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3015,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3016,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3017,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3018,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3019,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3020,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3021,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3022,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3023,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3024,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3025,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3026,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__DataArray_9_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3027,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                 & (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc))));
        bufp->chgIData(oldp+3028,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__addr_reg 
                                   >> 0xaU)),22);
        bufp->chgIData(oldp+3029,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___TagArray_ext_R0_data),22);
        bufp->chgIData(oldp+3030,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___TagArray_ext_R1_data),22);
        bufp->chgIData(oldp+3031,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__TagArray_ext__DOT__Memory[0]),22);
        bufp->chgIData(oldp+3032,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__TagArray_ext__DOT__Memory[1]),22);
        bufp->chgIData(oldp+3033,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__TagArray_ext__DOT__Memory[2]),22);
        bufp->chgIData(oldp+3034,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__TagArray_ext__DOT__Memory[3]),22);
        bufp->chgIData(oldp+3035,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__TagArray_ext__DOT__Memory[4]),22);
        bufp->chgIData(oldp+3036,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__TagArray_ext__DOT__Memory[5]),22);
        bufp->chgIData(oldp+3037,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__TagArray_ext__DOT__Memory[6]),22);
        bufp->chgIData(oldp+3038,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__TagArray_ext__DOT__Memory[7]),22);
        bufp->chgIData(oldp+3039,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__TagArray_ext__DOT__Memory[8]),22);
        bufp->chgIData(oldp+3040,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__TagArray_ext__DOT__Memory[9]),22);
        bufp->chgIData(oldp+3041,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__TagArray_ext__DOT__Memory[10]),22);
        bufp->chgIData(oldp+3042,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__TagArray_ext__DOT__Memory[11]),22);
        bufp->chgIData(oldp+3043,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__TagArray_ext__DOT__Memory[12]),22);
        bufp->chgIData(oldp+3044,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__TagArray_ext__DOT__Memory[13]),22);
        bufp->chgIData(oldp+3045,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__TagArray_ext__DOT__Memory[14]),22);
        bufp->chgIData(oldp+3046,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__TagArray_ext__DOT__Memory[15]),22);
        bufp->chgIData(oldp+3047,((IData)(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T)),32);
        bufp->chgCData(oldp+3048,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__r_count),4);
        bufp->chgCData(oldp+3049,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__w_count),4);
        bufp->chgBit(oldp+3050,((0U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__state))));
        bufp->chgBit(oldp+3051,((1U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__state))));
        bufp->chgBit(oldp+3052,((2U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__state))));
        bufp->chgBit(oldp+3053,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc));
        bufp->chgBit(oldp+3054,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc_reg));
        bufp->chgIData(oldp+3055,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__addr_reg),32);
        bufp->chgQData(oldp+3056,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__cpu_data),64);
        bufp->chgCData(oldp+3058,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__cpu_mask),8);
        bufp->chgSData(oldp+3059,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__valid),16);
        bufp->chgSData(oldp+3060,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__dirty),16);
        bufp->chgBit(oldp+3061,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___dirty0_T) 
                                 & (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___hit0_T_2))));
        bufp->chgBit(oldp+3062,((0xffffU & (((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__valid) 
                                             >> (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (0xeU 
                                                     & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__addr_reg 
                                                        >> 6U))))) 
                                            & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___TagArray_ext_R1_data 
                                               == (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__addr_reg 
                                                   >> 0xaU))))));
        bufp->chgBit(oldp+3063,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0));
        bufp->chgBit(oldp+3064,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__ren));
        bufp->chgBit(oldp+3065,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__ren_reg));
        bufp->chgCData(oldp+3066,((0xfU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__addr_reg 
                                           >> 3U))),4);
        bufp->chgCData(oldp+3067,((0x1fU & ((IData)(1U) 
                                            + (0xeU 
                                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__addr_reg 
                                                  >> 6U))))),5);
        bufp->chgWData(oldp+3068,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__rdata0),1024);
        bufp->chgWData(oldp+3100,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__rdata1),1024);
        bufp->chgWData(oldp+3132,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__rdata0_buf),1024);
        bufp->chgWData(oldp+3164,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__rdata1_buf),1024);
        bufp->chgQData(oldp+3196,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__refill_buffer_0),64);
        bufp->chgQData(oldp+3198,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__refill_buffer_1),64);
        bufp->chgQData(oldp+3200,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__refill_buffer_2),64);
        bufp->chgQData(oldp+3202,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__refill_buffer_3),64);
        bufp->chgQData(oldp+3204,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__refill_buffer_4),64);
        bufp->chgQData(oldp+3206,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__refill_buffer_5),64);
        bufp->chgQData(oldp+3208,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__refill_buffer_6),64);
        bufp->chgQData(oldp+3210,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__refill_buffer_7),64);
        bufp->chgQData(oldp+3212,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__refill_buffer_8),64);
        bufp->chgQData(oldp+3214,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__refill_buffer_9),64);
        bufp->chgQData(oldp+3216,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__refill_buffer_10),64);
        bufp->chgQData(oldp+3218,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__refill_buffer_11),64);
        bufp->chgQData(oldp+3220,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__refill_buffer_12),64);
        bufp->chgQData(oldp+3222,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__refill_buffer_13),64);
        bufp->chgQData(oldp+3224,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__refill_buffer_14),64);
        bufp->chgQData(oldp+3226,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__refill_buffer_15),64);
        bufp->chgWData(oldp+3228,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__read),1024);
        bufp->chgBit(oldp+3260,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__dirty0));
        bufp->chgBit(oldp+3261,((1U & (((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__valid) 
                                        >> (0x1fU & 
                                            ((IData)(1U) 
                                             + (0xeU 
                                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__addr_reg 
                                                   >> 6U))))) 
                                       & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__dirty) 
                                          >> (0x1fU 
                                              & ((IData)(1U) 
                                                 + 
                                                 (0xeU 
                                                  & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__addr_reg 
                                                     >> 6U)))))))));
        bufp->chgCData(oldp+3262,((0xeU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__addr_reg 
                                           >> 6U))),4);
        bufp->chgCData(oldp+3263,((0xfU & ((IData)(1U) 
                                           + (0xeU 
                                              & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__addr_reg 
                                                 >> 6U))))),4);
        bufp->chgBit(oldp+3264,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | ((0U >= (0x78U 
                                               & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__addr_reg))
                                        ? ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__cpu_mask) 
                                           << (0x78U 
                                               & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__addr_reg))
                                        : 0U)))));
        bufp->chgCData(oldp+3265,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3266,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3267,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3268,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3269,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3270,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3271,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3272,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3273,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3274,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3275,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3276,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3277,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3278,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3279,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3280,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3281,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3282,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3283,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 1U)))));
        bufp->chgCData(oldp+3284,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3285,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3286,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3287,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3288,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3289,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3290,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3291,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3292,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3293,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3294,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3295,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3296,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3297,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3298,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3299,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3300,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3301,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3302,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 2U)))));
        bufp->chgCData(oldp+3303,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3304,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3305,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3306,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3307,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3308,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3309,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3310,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3311,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3312,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3313,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3314,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3315,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3316,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3317,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3318,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3319,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3320,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3321,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 3U)))));
        bufp->chgCData(oldp+3322,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3323,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3324,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3325,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3326,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3327,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3328,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3329,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3330,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3331,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3332,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3333,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3334,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3335,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3336,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3337,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3338,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3339,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3340,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 4U)))));
        bufp->chgCData(oldp+3341,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3342,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3343,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3344,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3345,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3346,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3347,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3348,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3349,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3350,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3351,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3352,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3353,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3354,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3355,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3356,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3357,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3358,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3359,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 5U)))));
        bufp->chgCData(oldp+3360,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3361,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3362,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3363,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3364,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3365,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3366,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3367,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3368,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3369,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3370,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3371,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3372,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3373,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3374,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3375,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3376,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3377,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3378,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 6U)))));
        bufp->chgCData(oldp+3379,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3380,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3381,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3382,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3383,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3384,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3385,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3386,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3387,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3388,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3389,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3390,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3391,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3392,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3393,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3394,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3395,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3396,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3397,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 7U)))));
        bufp->chgCData(oldp+3398,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3399,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3400,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3401,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3402,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3403,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3404,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3405,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3406,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3407,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3408,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3409,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3410,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3411,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3412,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3413,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3414,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3415,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_0_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3416,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 0x10U)))));
        bufp->chgCData(oldp+3417,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3418,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3419,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3420,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3421,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3422,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3423,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3424,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3425,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3426,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3427,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3428,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3429,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3430,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3431,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3432,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3433,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3434,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3435,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 0x11U)))));
        bufp->chgCData(oldp+3436,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3437,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3438,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3439,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3440,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3441,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3442,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3443,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3444,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3445,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3446,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3447,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3448,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3449,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3450,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3451,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3452,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3453,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3454,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 0x12U)))));
        bufp->chgCData(oldp+3455,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3456,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3457,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3458,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3459,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3460,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3461,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3462,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3463,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3464,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3465,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3466,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3467,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3468,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3469,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3470,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3471,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3472,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3473,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 0x13U)))));
        bufp->chgCData(oldp+3474,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3475,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3476,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3477,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3478,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3479,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3480,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3481,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3482,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3483,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3484,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3485,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3486,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3487,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3488,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3489,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3490,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3491,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3492,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 0x14U)))));
        bufp->chgCData(oldp+3493,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3494,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3495,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3496,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3497,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3498,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3499,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3500,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3501,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3502,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3503,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3504,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3505,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3506,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3507,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3508,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3509,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3510,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3511,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 0x15U)))));
        bufp->chgCData(oldp+3512,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3513,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3514,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3515,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3516,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3517,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3518,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3519,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3520,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3521,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3522,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3523,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3524,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3525,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3526,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3527,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3528,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3529,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3530,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 0x16U)))));
        bufp->chgCData(oldp+3531,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3532,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3533,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3534,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3535,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3536,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3537,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3538,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3539,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3540,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3541,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3542,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3543,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3544,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3545,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3546,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3547,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3548,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3549,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 0x17U)))));
        bufp->chgCData(oldp+3550,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3551,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3552,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3553,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3554,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3555,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3556,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3557,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3558,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3559,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3560,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3561,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3562,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3563,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3564,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3565,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3566,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3567,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_10_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3568,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 0x18U)))));
        bufp->chgCData(oldp+3569,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3570,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3571,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3572,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3573,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3574,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3575,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3576,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3577,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3578,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3579,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3580,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3581,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3582,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3583,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3584,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3585,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3586,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3587,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 0x19U)))));
        bufp->chgCData(oldp+3588,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3589,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3590,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3591,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3592,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3593,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3594,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3595,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3596,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3597,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3598,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3599,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3600,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3601,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3602,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3603,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3604,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3605,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3606,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 0x1aU)))));
        bufp->chgCData(oldp+3607,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3608,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3609,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3610,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3611,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3612,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3613,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3614,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3615,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3616,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3617,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3618,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3619,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3620,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3621,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3622,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3623,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3624,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3625,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 0x1bU)))));
        bufp->chgCData(oldp+3626,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3627,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3628,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3629,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3630,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3631,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3632,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3633,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3634,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3635,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3636,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3637,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3638,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3639,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3640,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3641,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3642,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3643,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3644,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 0x1cU)))));
        bufp->chgCData(oldp+3645,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3646,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3647,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3648,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3649,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3650,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3651,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3652,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3653,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3654,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3655,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3656,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3657,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3658,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3659,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3660,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3661,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3662,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3663,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 0x1dU)))));
        bufp->chgCData(oldp+3664,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3665,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3666,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3667,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3668,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3669,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3670,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3671,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3672,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3673,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3674,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3675,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3676,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3677,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3678,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3679,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3680,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3681,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3682,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 0x1eU)))));
        bufp->chgCData(oldp+3683,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3684,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3685,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3686,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3687,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3688,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3689,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3690,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3691,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3692,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3693,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3694,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3695,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3696,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3697,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3698,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3699,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3700,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3701,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 0x1fU)))));
        bufp->chgCData(oldp+3702,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3703,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3704,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3705,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3706,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3707,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3708,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3709,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3710,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3711,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3712,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3713,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3714,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3715,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3716,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3717,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3718,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3719,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_11_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3720,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U]))));
        bufp->chgCData(oldp+3721,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3722,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3723,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3724,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3725,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3726,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3727,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3728,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3729,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3730,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3731,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3732,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3733,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3734,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3735,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3736,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3737,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3738,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3739,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 1U)))));
        bufp->chgCData(oldp+3740,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3741,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3742,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3743,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3744,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3745,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3746,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3747,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3748,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3749,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3750,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3751,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3752,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3753,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3754,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3755,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3756,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3757,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3758,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 2U)))));
        bufp->chgCData(oldp+3759,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3760,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3761,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3762,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3763,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3764,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3765,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3766,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3767,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3768,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3769,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3770,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3771,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3772,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3773,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3774,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3775,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3776,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3777,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 3U)))));
        bufp->chgCData(oldp+3778,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3779,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3780,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3781,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3782,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3783,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3784,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3785,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3786,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3787,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3788,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3789,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3790,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3791,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3792,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3793,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3794,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3795,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3796,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 4U)))));
        bufp->chgCData(oldp+3797,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3798,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3799,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3800,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3801,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3802,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3803,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3804,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3805,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3806,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3807,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3808,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3809,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3810,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3811,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3812,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3813,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3814,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3815,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 5U)))));
        bufp->chgCData(oldp+3816,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3817,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3818,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3819,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3820,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3821,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3822,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3823,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3824,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3825,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3826,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3827,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3828,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3829,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3830,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3831,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3832,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3833,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3834,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 6U)))));
        bufp->chgCData(oldp+3835,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3836,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3837,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3838,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3839,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3840,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3841,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3842,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3843,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3844,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3845,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3846,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3847,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3848,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3849,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3850,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3851,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3852,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3853,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 7U)))));
        bufp->chgCData(oldp+3854,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3855,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3856,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3857,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3858,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3859,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3860,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3861,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3862,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3863,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3864,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3865,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3866,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3867,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3868,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3869,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3870,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3871,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_12_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3872,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 8U)))));
        bufp->chgCData(oldp+3873,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3874,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3875,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3876,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3877,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3878,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3879,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3880,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3881,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3882,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3883,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3884,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3885,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3886,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3887,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3888,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3889,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3890,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3891,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 9U)))));
        bufp->chgCData(oldp+3892,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3893,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3894,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3895,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3896,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3897,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3898,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3899,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3900,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3901,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3902,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3903,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3904,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3905,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3906,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3907,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3908,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3909,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3910,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 0xaU)))));
        bufp->chgCData(oldp+3911,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3912,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3913,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3914,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3915,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3916,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3917,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3918,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3919,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3920,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3921,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3922,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3923,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3924,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3925,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3926,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3927,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3928,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3929,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 0xbU)))));
        bufp->chgCData(oldp+3930,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3931,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3932,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3933,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3934,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3935,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3936,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3937,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3938,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3939,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3940,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3941,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3942,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3943,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3944,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3945,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3946,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3947,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3948,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 0xcU)))));
        bufp->chgCData(oldp+3949,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3950,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3951,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3952,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3953,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3954,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3955,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3956,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3957,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3958,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3959,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3960,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3961,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3962,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3963,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3964,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3965,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3966,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3967,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 0xdU)))));
        bufp->chgCData(oldp+3968,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3969,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3970,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3971,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3972,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3973,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3974,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3975,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3976,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3977,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3978,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3979,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3980,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+3981,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+3982,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+3983,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+3984,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+3985,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+3986,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 0xeU)))));
        bufp->chgCData(oldp+3987,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+3988,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+3989,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+3990,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+3991,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+3992,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+3993,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+3994,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+3995,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+3996,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+3997,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+3998,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+3999,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4000,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4001,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4002,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4003,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4004,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4005,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 0xfU)))));
        bufp->chgCData(oldp+4006,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4007,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4008,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4009,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4010,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4011,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4012,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4013,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4014,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4015,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4016,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4017,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4018,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4019,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4020,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4021,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4022,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4023,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_13_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4024,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 0x10U)))));
        bufp->chgCData(oldp+4025,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4026,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4027,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4028,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4029,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4030,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4031,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4032,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4033,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4034,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4035,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4036,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4037,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4038,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4039,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4040,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4041,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4042,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4043,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 0x11U)))));
        bufp->chgCData(oldp+4044,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4045,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4046,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4047,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4048,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4049,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4050,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4051,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4052,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4053,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4054,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4055,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4056,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4057,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4058,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4059,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4060,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4061,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4062,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 0x12U)))));
        bufp->chgCData(oldp+4063,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4064,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4065,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4066,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4067,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4068,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4069,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4070,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4071,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4072,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4073,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4074,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4075,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4076,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4077,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4078,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4079,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4080,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4081,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 0x13U)))));
        bufp->chgCData(oldp+4082,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4083,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4084,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4085,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4086,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4087,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4088,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4089,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4090,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4091,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4092,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4093,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4094,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4095,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4096,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4097,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4098,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4099,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4100,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 0x14U)))));
        bufp->chgCData(oldp+4101,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4102,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4103,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4104,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4105,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4106,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4107,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4108,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4109,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4110,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4111,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4112,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4113,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4114,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4115,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4116,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4117,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4118,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4119,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 0x15U)))));
        bufp->chgCData(oldp+4120,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4121,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4122,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4123,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4124,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4125,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4126,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4127,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4128,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4129,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4130,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4131,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4132,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4133,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4134,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4135,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4136,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4137,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4138,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 0x16U)))));
        bufp->chgCData(oldp+4139,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4140,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4141,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4142,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4143,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4144,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4145,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4146,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4147,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4148,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4149,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4150,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4151,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4152,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4153,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4154,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4155,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4156,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4157,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 0x17U)))));
        bufp->chgCData(oldp+4158,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4159,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4160,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4161,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4162,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4163,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4164,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4165,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4166,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4167,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4168,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4169,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4170,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4171,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4172,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4173,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4174,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4175,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_14_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4176,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 0x18U)))));
        bufp->chgCData(oldp+4177,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4178,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4179,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4180,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4181,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4182,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4183,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4184,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4185,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4186,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4187,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4188,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4189,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4190,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4191,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4192,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4193,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4194,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4195,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 0x19U)))));
        bufp->chgCData(oldp+4196,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4197,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4198,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4199,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4200,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4201,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4202,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4203,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4204,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4205,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4206,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4207,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4208,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4209,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4210,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4211,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4212,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4213,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4214,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 0x1aU)))));
        bufp->chgCData(oldp+4215,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4216,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4217,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4218,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4219,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4220,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4221,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4222,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4223,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4224,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4225,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4226,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4227,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4228,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4229,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4230,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4231,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4232,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4233,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 0x1bU)))));
        bufp->chgCData(oldp+4234,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4235,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4236,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4237,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4238,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4239,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4240,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4241,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4242,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4243,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4244,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4245,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4246,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4247,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4248,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4249,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4250,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4251,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4252,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 0x1cU)))));
        bufp->chgCData(oldp+4253,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4254,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4255,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4256,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4257,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4258,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4259,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4260,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4261,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4262,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4263,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4264,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4265,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4266,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4267,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4268,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4269,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4270,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4271,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 0x1dU)))));
        bufp->chgCData(oldp+4272,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4273,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4274,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4275,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4276,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4277,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4278,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4279,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4280,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4281,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4282,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4283,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4284,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4285,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4286,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4287,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4288,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4289,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4290,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 0x1eU)))));
        bufp->chgCData(oldp+4291,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4292,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4293,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4294,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4295,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4296,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4297,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4298,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4299,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4300,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4301,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4302,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4303,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4304,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4305,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4306,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4307,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4308,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4309,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[3U] 
                                       >> 0x1fU)))));
        bufp->chgCData(oldp+4310,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4311,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4312,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4313,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4314,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4315,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4316,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4317,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4318,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4319,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4320,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4321,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4322,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4323,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4324,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4325,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4326,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4327,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_15_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4328,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 8U)))));
        bufp->chgCData(oldp+4329,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4330,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4331,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4332,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4333,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4334,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4335,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4336,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4337,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4338,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4339,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4340,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4341,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4342,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4343,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4344,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4345,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4346,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4347,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 9U)))));
        bufp->chgCData(oldp+4348,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4349,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4350,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4351,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4352,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4353,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4354,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4355,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4356,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4357,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4358,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4359,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4360,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4361,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4362,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4363,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4364,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4365,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4366,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 0xaU)))));
        bufp->chgCData(oldp+4367,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4368,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4369,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4370,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4371,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4372,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4373,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4374,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4375,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4376,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4377,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4378,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4379,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4380,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4381,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4382,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4383,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4384,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4385,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 0xbU)))));
        bufp->chgCData(oldp+4386,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4387,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4388,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4389,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4390,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4391,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4392,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4393,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4394,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4395,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4396,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4397,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4398,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4399,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4400,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4401,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4402,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4403,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4404,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 0xcU)))));
        bufp->chgCData(oldp+4405,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4406,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4407,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4408,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4409,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4410,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4411,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4412,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4413,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4414,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4415,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4416,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4417,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4418,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4419,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4420,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4421,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4422,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4423,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 0xdU)))));
        bufp->chgCData(oldp+4424,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4425,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4426,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4427,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4428,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4429,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4430,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4431,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4432,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4433,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4434,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4435,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4436,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4437,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4438,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4439,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4440,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4441,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4442,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 0xeU)))));
        bufp->chgCData(oldp+4443,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4444,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4445,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4446,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4447,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4448,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4449,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4450,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4451,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4452,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4453,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4454,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4455,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4456,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4457,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4458,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4459,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4460,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4461,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 0xfU)))));
        bufp->chgCData(oldp+4462,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4463,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4464,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4465,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4466,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4467,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4468,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4469,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4470,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4471,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4472,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4473,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4474,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4475,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4476,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4477,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4478,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4479,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_1_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4480,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 0x10U)))));
        bufp->chgCData(oldp+4481,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4482,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4483,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4484,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4485,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4486,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4487,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4488,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4489,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4490,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4491,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4492,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4493,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4494,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4495,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4496,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4497,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4498,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4499,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 0x11U)))));
        bufp->chgCData(oldp+4500,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4501,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4502,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4503,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4504,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4505,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4506,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4507,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4508,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4509,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4510,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4511,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4512,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4513,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4514,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4515,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4516,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4517,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4518,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 0x12U)))));
        bufp->chgCData(oldp+4519,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4520,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4521,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4522,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4523,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4524,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4525,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4526,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4527,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4528,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4529,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4530,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4531,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4532,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4533,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4534,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4535,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4536,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4537,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 0x13U)))));
        bufp->chgCData(oldp+4538,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4539,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4540,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4541,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4542,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4543,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4544,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4545,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4546,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4547,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4548,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4549,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4550,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4551,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4552,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4553,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4554,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4555,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4556,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 0x14U)))));
        bufp->chgCData(oldp+4557,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4558,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4559,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4560,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4561,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4562,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4563,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4564,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4565,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4566,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4567,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4568,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4569,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4570,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4571,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4572,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4573,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4574,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4575,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 0x15U)))));
        bufp->chgCData(oldp+4576,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4577,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4578,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4579,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4580,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4581,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4582,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4583,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4584,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4585,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4586,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4587,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4588,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4589,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4590,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4591,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4592,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4593,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4594,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 0x16U)))));
        bufp->chgCData(oldp+4595,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4596,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4597,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4598,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4599,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4600,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4601,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4602,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4603,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4604,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4605,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4606,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4607,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4608,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4609,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4610,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4611,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4612,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4613,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 0x17U)))));
        bufp->chgCData(oldp+4614,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4615,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4616,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4617,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4618,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4619,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4620,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4621,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4622,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4623,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4624,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4625,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4626,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4627,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4628,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4629,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4630,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4631,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_2_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4632,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 0x18U)))));
        bufp->chgCData(oldp+4633,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4634,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4635,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4636,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4637,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4638,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4639,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4640,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4641,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4642,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4643,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4644,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4645,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4646,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4647,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4648,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4649,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4650,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4651,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 0x19U)))));
        bufp->chgCData(oldp+4652,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4653,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4654,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4655,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4656,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4657,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4658,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4659,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4660,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4661,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4662,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4663,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4664,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4665,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4666,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4667,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4668,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4669,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4670,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 0x1aU)))));
        bufp->chgCData(oldp+4671,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4672,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4673,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4674,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4675,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4676,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4677,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4678,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4679,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4680,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4681,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4682,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4683,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4684,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4685,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4686,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4687,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4688,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4689,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 0x1bU)))));
        bufp->chgCData(oldp+4690,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4691,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4692,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4693,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4694,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4695,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4696,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4697,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4698,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4699,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4700,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4701,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4702,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4703,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4704,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4705,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4706,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4707,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4708,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 0x1cU)))));
        bufp->chgCData(oldp+4709,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4710,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4711,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4712,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4713,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4714,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4715,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4716,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4717,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4718,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4719,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4720,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4721,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4722,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4723,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4724,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4725,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4726,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4727,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 0x1dU)))));
        bufp->chgCData(oldp+4728,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4729,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4730,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4731,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4732,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4733,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4734,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4735,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4736,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4737,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4738,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4739,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4740,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4741,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4742,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4743,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4744,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4745,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4746,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 0x1eU)))));
        bufp->chgCData(oldp+4747,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4748,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4749,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4750,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4751,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4752,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4753,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4754,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4755,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4756,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4757,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4758,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4759,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4760,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4761,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4762,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4763,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4764,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4765,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[0U] 
                                       >> 0x1fU)))));
        bufp->chgCData(oldp+4766,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4767,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4768,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4769,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4770,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4771,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4772,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4773,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4774,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4775,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4776,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4777,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4778,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4779,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4780,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4781,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4782,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4783,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_3_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4784,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U]))));
        bufp->chgCData(oldp+4785,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4786,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4787,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4788,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4789,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4790,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4791,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4792,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4793,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4794,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4795,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4796,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4797,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4798,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4799,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4800,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4801,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4802,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4803,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 1U)))));
        bufp->chgCData(oldp+4804,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4805,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4806,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4807,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4808,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4809,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4810,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4811,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4812,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4813,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4814,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4815,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4816,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4817,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4818,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4819,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4820,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4821,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4822,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 2U)))));
        bufp->chgCData(oldp+4823,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4824,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4825,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4826,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4827,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4828,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4829,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4830,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4831,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4832,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4833,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4834,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4835,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4836,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4837,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4838,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4839,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4840,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4841,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 3U)))));
        bufp->chgCData(oldp+4842,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4843,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4844,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4845,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4846,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4847,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4848,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4849,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4850,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4851,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4852,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4853,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4854,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4855,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4856,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4857,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4858,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4859,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4860,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 4U)))));
        bufp->chgCData(oldp+4861,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4862,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4863,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4864,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4865,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4866,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4867,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4868,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4869,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4870,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4871,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4872,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4873,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4874,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4875,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4876,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4877,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4878,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4879,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 5U)))));
        bufp->chgCData(oldp+4880,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4881,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4882,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4883,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4884,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4885,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4886,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4887,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4888,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4889,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4890,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4891,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4892,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4893,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4894,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4895,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4896,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4897,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4898,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 6U)))));
        bufp->chgCData(oldp+4899,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4900,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4901,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4902,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4903,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4904,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4905,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4906,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4907,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4908,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4909,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4910,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4911,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4912,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4913,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4914,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4915,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4916,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4917,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 7U)))));
        bufp->chgCData(oldp+4918,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4919,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4920,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4921,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4922,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4923,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4924,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4925,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4926,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4927,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4928,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4929,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4930,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4931,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4932,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4933,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4934,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4935,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_4_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4936,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 8U)))));
        bufp->chgCData(oldp+4937,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4938,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4939,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4940,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4941,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4942,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4943,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4944,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4945,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4946,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4947,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4948,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4949,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4950,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4951,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4952,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4953,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4954,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4955,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 9U)))));
        bufp->chgCData(oldp+4956,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4957,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4958,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4959,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4960,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4961,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4962,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4963,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4964,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4965,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4966,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4967,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4968,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4969,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4970,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4971,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4972,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4973,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4974,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 0xaU)))));
        bufp->chgCData(oldp+4975,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4976,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4977,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4978,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4979,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4980,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+4981,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+4982,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+4983,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+4984,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+4985,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+4986,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+4987,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+4988,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+4989,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+4990,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+4991,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+4992,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+4993,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 0xbU)))));
        bufp->chgCData(oldp+4994,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+4995,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+4996,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+4997,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+4998,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+4999,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5000,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5001,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5002,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5003,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5004,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5005,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5006,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5007,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5008,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5009,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5010,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5011,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5012,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 0xcU)))));
        bufp->chgCData(oldp+5013,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5014,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5015,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5016,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5017,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5018,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5019,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5020,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5021,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5022,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5023,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5024,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5025,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5026,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5027,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5028,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5029,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5030,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5031,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 0xdU)))));
        bufp->chgCData(oldp+5032,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5033,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5034,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5035,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5036,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5037,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5038,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5039,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5040,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5041,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5042,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5043,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5044,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5045,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5046,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5047,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5048,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5049,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5050,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 0xeU)))));
        bufp->chgCData(oldp+5051,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5052,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5053,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5054,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5055,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5056,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5057,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5058,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5059,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5060,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5061,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5062,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5063,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5064,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5065,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5066,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5067,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5068,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5069,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 0xfU)))));
        bufp->chgCData(oldp+5070,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5071,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5072,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5073,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5074,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5075,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5076,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5077,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5078,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5079,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5080,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5081,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5082,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5083,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5084,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5085,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5086,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5087,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_5_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5088,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 0x10U)))));
        bufp->chgCData(oldp+5089,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5090,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5091,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5092,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5093,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5094,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5095,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5096,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5097,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5098,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5099,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5100,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5101,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5102,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5103,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5104,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5105,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5106,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5107,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 0x11U)))));
        bufp->chgCData(oldp+5108,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5109,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5110,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5111,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5112,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5113,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5114,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5115,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5116,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5117,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5118,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5119,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5120,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5121,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5122,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5123,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5124,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5125,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5126,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 0x12U)))));
        bufp->chgCData(oldp+5127,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5128,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5129,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5130,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5131,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5132,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5133,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5134,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5135,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5136,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5137,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5138,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5139,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5140,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5141,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5142,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5143,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5144,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5145,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 0x13U)))));
        bufp->chgCData(oldp+5146,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5147,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5148,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5149,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5150,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5151,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5152,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5153,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5154,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5155,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5156,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5157,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5158,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5159,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5160,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5161,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5162,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5163,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5164,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 0x14U)))));
        bufp->chgCData(oldp+5165,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5166,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5167,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5168,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5169,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5170,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5171,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5172,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5173,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5174,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5175,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5176,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5177,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5178,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5179,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5180,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5181,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5182,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5183,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 0x15U)))));
        bufp->chgCData(oldp+5184,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5185,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5186,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5187,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5188,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5189,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5190,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5191,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5192,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5193,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5194,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5195,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5196,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5197,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5198,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5199,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5200,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5201,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5202,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 0x16U)))));
        bufp->chgCData(oldp+5203,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5204,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5205,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5206,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5207,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5208,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5209,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5210,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5211,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5212,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5213,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5214,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5215,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5216,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5217,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5218,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5219,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5220,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5221,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 0x17U)))));
        bufp->chgCData(oldp+5222,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5223,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5224,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5225,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5226,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5227,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5228,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5229,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5230,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5231,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5232,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5233,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5234,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5235,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5236,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5237,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5238,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5239,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_6_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5240,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 0x18U)))));
        bufp->chgCData(oldp+5241,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5242,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5243,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5244,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5245,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5246,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5247,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5248,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5249,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5250,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5251,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5252,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5253,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5254,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5255,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5256,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5257,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5258,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5259,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 0x19U)))));
        bufp->chgCData(oldp+5260,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5261,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5262,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5263,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5264,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5265,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5266,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5267,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5268,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5269,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5270,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5271,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5272,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5273,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5274,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5275,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5276,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5277,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5278,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 0x1aU)))));
        bufp->chgCData(oldp+5279,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5280,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5281,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5282,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5283,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5284,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5285,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5286,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5287,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5288,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5289,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5290,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5291,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5292,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5293,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5294,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5295,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5296,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5297,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 0x1bU)))));
        bufp->chgCData(oldp+5298,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5299,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5300,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5301,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5302,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5303,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5304,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5305,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5306,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5307,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5308,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5309,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5310,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5311,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5312,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5313,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5314,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5315,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5316,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 0x1cU)))));
        bufp->chgCData(oldp+5317,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5318,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5319,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5320,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5321,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5322,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5323,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5324,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5325,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5326,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5327,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5328,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5329,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5330,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5331,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5332,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5333,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5334,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5335,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 0x1dU)))));
        bufp->chgCData(oldp+5336,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5337,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5338,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5339,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5340,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5341,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5342,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5343,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5344,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5345,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5346,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5347,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5348,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5349,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5350,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5351,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5352,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5353,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5354,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 0x1eU)))));
        bufp->chgCData(oldp+5355,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5356,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5357,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5358,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5359,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5360,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5361,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5362,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5363,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5364,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5365,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5366,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5367,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5368,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5369,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5370,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5371,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5372,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5373,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[1U] 
                                       >> 0x1fU)))));
        bufp->chgCData(oldp+5374,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5375,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5376,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5377,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5378,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5379,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5380,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5381,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5382,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5383,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5384,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5385,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5386,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5387,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5388,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5389,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5390,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5391,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_7_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5392,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U]))));
        bufp->chgCData(oldp+5393,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5394,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5395,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5396,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5397,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5398,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5399,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5400,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5401,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5402,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5403,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5404,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5405,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5406,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5407,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5408,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5409,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5410,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5411,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 1U)))));
        bufp->chgCData(oldp+5412,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5413,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5414,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5415,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5416,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5417,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5418,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5419,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5420,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5421,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5422,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5423,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5424,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5425,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5426,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5427,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5428,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5429,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5430,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 2U)))));
        bufp->chgCData(oldp+5431,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5432,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5433,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5434,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5435,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5436,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5437,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5438,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5439,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5440,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5441,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5442,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5443,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5444,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5445,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5446,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5447,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5448,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5449,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 3U)))));
        bufp->chgCData(oldp+5450,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5451,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5452,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5453,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5454,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5455,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5456,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5457,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5458,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5459,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5460,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5461,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5462,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5463,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5464,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5465,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5466,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5467,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5468,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 4U)))));
        bufp->chgCData(oldp+5469,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5470,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5471,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5472,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5473,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5474,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5475,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5476,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5477,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5478,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5479,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5480,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5481,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5482,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5483,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5484,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5485,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5486,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5487,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 5U)))));
        bufp->chgCData(oldp+5488,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5489,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5490,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5491,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5492,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5493,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5494,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5495,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5496,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5497,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5498,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5499,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5500,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5501,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5502,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5503,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5504,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5505,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5506,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 6U)))));
        bufp->chgCData(oldp+5507,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5508,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5509,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5510,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5511,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5512,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5513,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5514,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5515,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5516,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5517,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5518,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5519,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5520,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5521,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5522,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5523,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5524,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5525,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 7U)))));
        bufp->chgCData(oldp+5526,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5527,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5528,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5529,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5530,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5531,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5532,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5533,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5534,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5535,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5536,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5537,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5538,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5539,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5540,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5541,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5542,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5543,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_8_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5544,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 8U)))));
        bufp->chgCData(oldp+5545,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_0_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_0_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5546,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_0_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_0_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_0_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5547,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_0_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5548,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_0_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5549,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_0_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5550,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_0_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5551,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_0_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5552,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_0_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5553,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_0_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5554,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_0_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5555,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_0_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5556,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_0_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5557,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_0_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5558,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_0_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5559,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_0_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5560,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_0_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5561,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_0_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5562,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_0_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5563,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 9U)))));
        bufp->chgCData(oldp+5564,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_1_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_1_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5565,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_1_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_1_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_1_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5566,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_1_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5567,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_1_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5568,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_1_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5569,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_1_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5570,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_1_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5571,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_1_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5572,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_1_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5573,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_1_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5574,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_1_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5575,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_1_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5576,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_1_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5577,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_1_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5578,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_1_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5579,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_1_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5580,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_1_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5581,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_1_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5582,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 0xaU)))));
        bufp->chgCData(oldp+5583,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_2_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_2_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5584,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_2_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_2_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_2_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5585,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_2_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5586,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_2_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5587,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_2_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5588,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_2_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5589,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_2_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5590,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_2_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5591,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_2_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5592,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_2_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5593,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_2_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5594,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_2_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5595,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_2_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5596,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_2_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5597,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_2_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5598,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_2_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5599,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_2_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5600,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_2_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5601,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 0xbU)))));
        bufp->chgCData(oldp+5602,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_3_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_3_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5603,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_3_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_3_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_3_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5604,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_3_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5605,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_3_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5606,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_3_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5607,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_3_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5608,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_3_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5609,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_3_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5610,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_3_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5611,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_3_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5612,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_3_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5613,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_3_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5614,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_3_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5615,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_3_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5616,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_3_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5617,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_3_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5618,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_3_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5619,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_3_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5620,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 0xcU)))));
        bufp->chgCData(oldp+5621,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_4_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_4_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5622,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_4_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_4_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_4_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5623,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_4_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5624,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_4_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5625,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_4_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5626,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_4_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5627,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_4_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5628,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_4_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5629,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_4_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5630,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_4_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5631,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_4_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5632,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_4_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5633,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_4_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5634,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_4_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5635,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_4_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5636,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_4_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5637,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_4_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5638,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_4_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5639,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 0xdU)))));
        bufp->chgCData(oldp+5640,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_5_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_5_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5641,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_5_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_5_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_5_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5642,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_5_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5643,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_5_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5644,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_5_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5645,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_5_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5646,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_5_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5647,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_5_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5648,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_5_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5649,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_5_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5650,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_5_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5651,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_5_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5652,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_5_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5653,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_5_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5654,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_5_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5655,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_5_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5656,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_5_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5657,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_5_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5658,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 0xeU)))));
        bufp->chgCData(oldp+5659,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_6_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_6_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5660,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_6_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_6_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_6_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5661,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_6_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5662,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_6_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5663,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_6_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5664,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_6_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5665,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_6_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5666,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_6_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5667,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_6_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5668,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_6_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5669,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_6_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5670,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_6_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5671,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_6_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5672,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_6_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5673,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_6_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5674,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_6_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5675,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_6_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5676,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_6_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5677,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc) 
                                    | (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___wmask_T_2[2U] 
                                       >> 0xfU)))));
        bufp->chgCData(oldp+5678,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_7_ext__DOT___GEN)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_7_ext__DOT___GEN_0]
                                    : 0U)),8);
        bufp->chgCData(oldp+5679,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_7_ext__DOT___GEN_1)
                                    ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_7_ext__DOT__Memory
                                   [vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_7_ext__DOT___GEN_2]
                                    : 0U)),8);
        bufp->chgCData(oldp+5680,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_7_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+5681,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_7_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+5682,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_7_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+5683,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_7_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+5684,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_7_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+5685,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_7_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+5686,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_7_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+5687,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_7_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+5688,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_7_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+5689,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_7_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+5690,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_7_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+5691,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_7_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+5692,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_7_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+5693,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_7_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+5694,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_7_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+5695,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__DataArray_9_7_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+5696,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_0) 
                                 & (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__is_alloc))));
        bufp->chgIData(oldp+5697,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__addr_reg 
                                   >> 0xaU)),22);
        bufp->chgIData(oldp+5698,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___TagArray_ext_R0_data),22);
        bufp->chgIData(oldp+5699,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___TagArray_ext_R1_data),22);
        bufp->chgIData(oldp+5700,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__TagArray_ext__DOT__Memory[0]),22);
        bufp->chgIData(oldp+5701,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__TagArray_ext__DOT__Memory[1]),22);
        bufp->chgIData(oldp+5702,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__TagArray_ext__DOT__Memory[2]),22);
        bufp->chgIData(oldp+5703,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__TagArray_ext__DOT__Memory[3]),22);
        bufp->chgIData(oldp+5704,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__TagArray_ext__DOT__Memory[4]),22);
        bufp->chgIData(oldp+5705,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__TagArray_ext__DOT__Memory[5]),22);
        bufp->chgIData(oldp+5706,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__TagArray_ext__DOT__Memory[6]),22);
        bufp->chgIData(oldp+5707,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__TagArray_ext__DOT__Memory[7]),22);
        bufp->chgIData(oldp+5708,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__TagArray_ext__DOT__Memory[8]),22);
        bufp->chgIData(oldp+5709,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__TagArray_ext__DOT__Memory[9]),22);
        bufp->chgIData(oldp+5710,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__TagArray_ext__DOT__Memory[10]),22);
        bufp->chgIData(oldp+5711,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__TagArray_ext__DOT__Memory[11]),22);
        bufp->chgIData(oldp+5712,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__TagArray_ext__DOT__Memory[12]),22);
        bufp->chgIData(oldp+5713,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__TagArray_ext__DOT__Memory[13]),22);
        bufp->chgIData(oldp+5714,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__TagArray_ext__DOT__Memory[14]),22);
        bufp->chgIData(oldp+5715,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__TagArray_ext__DOT__Memory[15]),22);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+5716,((((~ ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
                                      & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_valid))) 
                                  | (0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))) 
                                 & (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_valid))));
        bufp->chgBit(oldp+5717,(((0U != (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__state)) 
                                 & ((1U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__state))
                                     ? ((~ (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.io_fccache_hit)) 
                                        & (~ (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__dirty0)))
                                     : ((2U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__state))
                                         ? ((~ (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___T_356)) 
                                            & (~ (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__dirty0)))
                                         : (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_8))))));
        bufp->chgIData(oldp+5718,(((0U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__state))
                                    ? 0U : ((1U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__state))
                                             ? ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.io_fccache_hit)
                                                 ? 0U
                                                 : vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__VdfgTmp_h082e9772__0)
                                             : ((2U 
                                                 == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__state))
                                                 ? 
                                                ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___T_356)
                                                  ? 0U
                                                  : vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__VdfgTmp_h082e9772__0)
                                                 : 
                                                ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_8)
                                                  ? 
                                                 (0xffffff80U 
                                                  & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__addr_reg)
                                                  : 0U))))),32);
        bufp->chgBit(oldp+5719,(((0U != (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__state)) 
                                 & ((1U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__state))
                                     ? ((~ (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.io_fccache_hit)) 
                                        & (~ (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__dirty0)))
                                     : ((2U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__state))
                                         ? ((~ (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___T_356)) 
                                            & (~ (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__dirty0)))
                                         : (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_8))))));
        bufp->chgIData(oldp+5720,(((0U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__state))
                                    ? 0U : ((1U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__state))
                                             ? ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.io_fccache_hit)
                                                 ? 0U
                                                 : vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_h082e9772__0)
                                             : ((2U 
                                                 == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__state))
                                                 ? 
                                                ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___T_356)
                                                  ? 0U
                                                  : vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_h082e9772__0)
                                                 : 
                                                ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_8)
                                                  ? 
                                                 (0xffffff80U 
                                                  & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__addr_reg)
                                                  : 0U))))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+5721,(vlSelf->Soc__DOT__sram__DOT__rvalid));
        bufp->chgQData(oldp+5722,(vlSelf->Soc__DOT__sram__DOT__rdata),64);
        bufp->chgBit(oldp+5724,(vlSelf->Soc__DOT__sram__DOT__rlast));
        bufp->chgCData(oldp+5725,(vlSelf->Soc__DOT__sram__DOT__rresp),2);
        bufp->chgCData(oldp+5726,(vlSelf->Soc__DOT__sram__DOT__r_count),4);
        bufp->chgIData(oldp+5727,(vlSelf->Soc__DOT__sram__DOT__araddr),32);
        bufp->chgBit(oldp+5728,(vlSelf->Soc__DOT__sram__DOT__need_read));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+5729,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_valid));
        bufp->chgBit(oldp+5730,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_valid));
        bufp->chgQData(oldp+5731,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data),64);
        bufp->chgBit(oldp+5733,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_valid));
        bufp->chgQData(oldp+5734,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data),64);
        bufp->chgCData(oldp+5736,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose),4);
        bufp->chgIData(oldp+5737,(vlSelf->Soc__DOT__sram__DOT__awaddr),32);
        bufp->chgWData(oldp+5738,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata),1024);
        bufp->chgCData(oldp+5770,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0U])),8);
        bufp->chgCData(oldp+5771,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5772,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5773,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5774,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[1U])),8);
        bufp->chgCData(oldp+5775,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5776,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5777,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5778,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x14U])),8);
        bufp->chgCData(oldp+5779,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x14U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5780,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x14U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5781,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x14U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5782,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x15U])),8);
        bufp->chgCData(oldp+5783,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x15U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5784,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x15U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5785,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x15U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5786,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x16U])),8);
        bufp->chgCData(oldp+5787,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x16U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5788,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x16U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5789,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x16U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5790,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x17U])),8);
        bufp->chgCData(oldp+5791,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x17U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5792,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x17U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5793,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x17U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5794,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x18U])),8);
        bufp->chgCData(oldp+5795,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x18U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5796,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x18U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5797,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x18U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5798,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x19U])),8);
        bufp->chgCData(oldp+5799,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x19U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5800,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x19U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5801,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x19U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5802,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1aU])),8);
        bufp->chgCData(oldp+5803,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1aU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5804,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1aU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5805,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1aU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5806,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1bU])),8);
        bufp->chgCData(oldp+5807,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1bU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5808,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1bU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5809,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1bU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5810,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1cU])),8);
        bufp->chgCData(oldp+5811,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1cU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5812,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1cU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5813,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1cU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5814,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1dU])),8);
        bufp->chgCData(oldp+5815,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1dU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5816,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1dU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5817,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1dU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5818,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1eU])),8);
        bufp->chgCData(oldp+5819,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1eU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5820,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1eU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5821,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1eU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5822,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1fU])),8);
        bufp->chgCData(oldp+5823,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1fU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5824,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1fU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5825,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1fU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5826,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[2U])),8);
        bufp->chgCData(oldp+5827,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5828,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5829,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5830,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[3U])),8);
        bufp->chgCData(oldp+5831,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5832,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5833,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5834,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[4U])),8);
        bufp->chgCData(oldp+5835,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5836,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5837,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5838,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[5U])),8);
        bufp->chgCData(oldp+5839,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5840,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5841,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5842,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[6U])),8);
        bufp->chgCData(oldp+5843,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5844,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5845,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5846,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[7U])),8);
        bufp->chgCData(oldp+5847,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5848,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5849,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5850,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[8U])),8);
        bufp->chgCData(oldp+5851,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5852,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5853,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5854,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[9U])),8);
        bufp->chgCData(oldp+5855,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5856,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5857,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5858,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xaU])),8);
        bufp->chgCData(oldp+5859,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5860,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5861,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5862,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xbU])),8);
        bufp->chgCData(oldp+5863,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5864,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5865,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5866,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xcU])),8);
        bufp->chgCData(oldp+5867,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5868,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5869,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5870,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xdU])),8);
        bufp->chgCData(oldp+5871,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5872,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5873,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5874,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xeU])),8);
        bufp->chgCData(oldp+5875,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5876,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5877,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xeU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5878,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xfU])),8);
        bufp->chgCData(oldp+5879,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5880,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5881,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xfU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5882,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x10U])),8);
        bufp->chgCData(oldp+5883,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x10U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5884,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x10U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5885,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x10U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5886,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x11U])),8);
        bufp->chgCData(oldp+5887,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x11U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5888,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x11U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5889,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x11U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5890,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x12U])),8);
        bufp->chgCData(oldp+5891,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x12U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5892,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x12U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5893,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x12U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5894,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x13U])),8);
        bufp->chgCData(oldp+5895,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x13U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5896,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x13U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5897,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x13U] 
                                   >> 0x18U)),8);
        bufp->chgWData(oldp+5898,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata),1024);
        bufp->chgCData(oldp+5930,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0U])),8);
        bufp->chgCData(oldp+5931,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5932,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5933,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5934,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[1U])),8);
        bufp->chgCData(oldp+5935,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5936,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5937,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5938,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x14U])),8);
        bufp->chgCData(oldp+5939,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x14U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5940,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x14U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5941,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x14U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5942,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x15U])),8);
        bufp->chgCData(oldp+5943,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x15U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5944,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x15U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5945,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x15U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5946,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x16U])),8);
        bufp->chgCData(oldp+5947,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x16U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5948,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x16U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5949,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x16U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5950,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x17U])),8);
        bufp->chgCData(oldp+5951,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x17U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5952,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x17U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5953,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x17U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5954,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x18U])),8);
        bufp->chgCData(oldp+5955,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x18U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5956,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x18U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5957,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x18U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5958,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x19U])),8);
        bufp->chgCData(oldp+5959,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x19U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5960,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x19U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5961,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x19U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5962,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1aU])),8);
        bufp->chgCData(oldp+5963,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1aU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5964,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1aU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5965,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1aU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5966,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1bU])),8);
        bufp->chgCData(oldp+5967,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1bU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5968,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1bU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5969,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1bU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5970,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1cU])),8);
        bufp->chgCData(oldp+5971,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1cU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5972,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1cU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5973,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1cU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5974,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1dU])),8);
        bufp->chgCData(oldp+5975,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1dU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5976,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1dU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5977,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1dU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5978,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1eU])),8);
        bufp->chgCData(oldp+5979,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1eU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5980,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1eU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5981,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1eU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5982,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1fU])),8);
        bufp->chgCData(oldp+5983,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1fU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5984,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1fU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5985,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1fU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5986,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[2U])),8);
        bufp->chgCData(oldp+5987,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5988,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5989,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5990,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[3U])),8);
        bufp->chgCData(oldp+5991,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5992,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5993,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5994,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[4U])),8);
        bufp->chgCData(oldp+5995,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+5996,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+5997,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+5998,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[5U])),8);
        bufp->chgCData(oldp+5999,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+6000,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+6001,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+6002,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[6U])),8);
        bufp->chgCData(oldp+6003,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+6004,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+6005,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+6006,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[7U])),8);
        bufp->chgCData(oldp+6007,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+6008,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+6009,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+6010,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[8U])),8);
        bufp->chgCData(oldp+6011,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+6012,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+6013,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+6014,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[9U])),8);
        bufp->chgCData(oldp+6015,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+6016,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+6017,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+6018,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xaU])),8);
        bufp->chgCData(oldp+6019,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+6020,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+6021,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+6022,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xbU])),8);
        bufp->chgCData(oldp+6023,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+6024,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+6025,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+6026,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xcU])),8);
        bufp->chgCData(oldp+6027,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+6028,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+6029,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+6030,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xdU])),8);
        bufp->chgCData(oldp+6031,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+6032,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+6033,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+6034,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xeU])),8);
        bufp->chgCData(oldp+6035,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+6036,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+6037,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xeU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+6038,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xfU])),8);
        bufp->chgCData(oldp+6039,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+6040,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+6041,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xfU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+6042,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x10U])),8);
        bufp->chgCData(oldp+6043,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x10U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+6044,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x10U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+6045,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x10U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+6046,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x11U])),8);
        bufp->chgCData(oldp+6047,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x11U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+6048,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x11U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+6049,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x11U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+6050,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x12U])),8);
        bufp->chgCData(oldp+6051,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x12U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+6052,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x12U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+6053,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x12U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+6054,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x13U])),8);
        bufp->chgCData(oldp+6055,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x13U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+6056,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x13U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+6057,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x13U] 
                                   >> 0x18U)),8);
    }
    bufp->chgBit(oldp+6058,(vlSelf->clock));
    bufp->chgBit(oldp+6059,(vlSelf->reset));
    bufp->chgBit(oldp+6060,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_7));
    bufp->chgIData(oldp+6061,(vlSelf->Soc__DOT___core_io_AXI_Interface_ar_bits_addr),32);
    __Vtemp_h26f7ce52__0[0U] = 0U;
    __Vtemp_h26f7ce52__0[1U] = 0U;
    __Vtemp_h26f7ce52__0[2U] = 0U;
    __Vtemp_h26f7ce52__0[3U] = 0U;
    __Vtemp_h26f7ce52__0[4U] = 0U;
    __Vtemp_h26f7ce52__0[5U] = 0U;
    __Vtemp_h26f7ce52__0[6U] = (IData)(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_13)
                                         ? 0ULL : ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_12)
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                        | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_9)))
                                                     ? vlSelf->Soc__DOT__sram__DOT__rdata
                                                     : 0ULL)
                                                    : 
                                                   ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_9)
                                                     ? vlSelf->Soc__DOT__sram__DOT__rdata
                                                     : 0ULL))));
    __Vtemp_h26f7ce52__0[7U] = (IData)((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_13)
                                          ? 0ULL : 
                                         ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_12)
                                           ? ((1U & 
                                               ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_9)))
                                               ? vlSelf->Soc__DOT__sram__DOT__rdata
                                               : 0ULL)
                                           : ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_9)
                                               ? vlSelf->Soc__DOT__sram__DOT__rdata
                                               : 0ULL))) 
                                        >> 0x20U));
    bufp->chgQData(oldp+6062,((((QData)((IData)(__Vtemp_h26f7ce52__0[
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
                                                              __Vtemp_h26f7ce52__0[
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
                                                     __Vtemp_h26f7ce52__0[
                                                     (6U 
                                                      & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                         << 1U))])) 
                                     >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 6U)))))),64);
    bufp->chgBit(oldp+6064,(vlSelf->Soc__DOT____Vcellinp__sram__ARESETn));
}

void VSoc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_cleanup\n"); );
    // Init
    VSoc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSoc___024root*>(voidSelf);
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
