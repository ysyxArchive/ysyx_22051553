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
    VlWide<16>/*511:0*/ __Vtemp_h773c399d__0;
    VlWide<8>/*255:0*/ __Vtemp_hb99da695__0;
    VlWide<3>/*95:0*/ __Vtemp_h5ee83ed9__0;
    VlWide<16>/*511:0*/ __Vtemp_hc4bbf11d__0;
    VlWide<8>/*255:0*/ __Vtemp_h1d13a2da__0;
    VlWide<8>/*255:0*/ __Vtemp_h554321c1__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->Soc__DOT__core__DOT__fdreg_pc),32);
        bufp->chgQData(oldp+1,(vlSelf->Soc__DOT__core__DOT__dereg_op_a),64);
        bufp->chgQData(oldp+3,(vlSelf->Soc__DOT__core__DOT__dereg_op_b),64);
        bufp->chgCData(oldp+5,(vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr),5);
        bufp->chgBit(oldp+6,(vlSelf->Soc__DOT__core__DOT__dereg_branch_type));
        bufp->chgQData(oldp+7,(vlSelf->Soc__DOT__core__DOT__dereg_branch_addr),64);
        bufp->chgCData(oldp+9,(vlSelf->Soc__DOT__core__DOT__dereg_alu_op),6);
        bufp->chgCData(oldp+10,(vlSelf->Soc__DOT__core__DOT__dereg_shamt),6);
        bufp->chgCData(oldp+11,(vlSelf->Soc__DOT__core__DOT__dereg_wb_type),2);
        bufp->chgCData(oldp+12,(vlSelf->Soc__DOT__core__DOT__dereg_sd_type),3);
        bufp->chgCData(oldp+13,(vlSelf->Soc__DOT__core__DOT__dereg_ld_type),3);
        bufp->chgQData(oldp+14,(vlSelf->Soc__DOT__core__DOT__dereg_csr_t),64);
        bufp->chgSData(oldp+16,(vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr),12);
        bufp->chgBit(oldp+17,(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen));
        bufp->chgBit(oldp+18,(vlSelf->Soc__DOT__core__DOT__dereg_has_inst));
        bufp->chgQData(oldp+19,(vlSelf->Soc__DOT__core__DOT__emreg_reg_wdata),64);
        bufp->chgCData(oldp+21,(vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr),5);
        bufp->chgCData(oldp+22,(vlSelf->Soc__DOT__core__DOT__emreg_wb_type),2);
        bufp->chgCData(oldp+23,(vlSelf->Soc__DOT__core__DOT__emreg_ld_type),3);
        bufp->chgCData(oldp+24,(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit),3);
        bufp->chgQData(oldp+25,(vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata),64);
        bufp->chgBit(oldp+27,(vlSelf->Soc__DOT__core__DOT__emreg_csr_wen));
        bufp->chgSData(oldp+28,(vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr),12);
        bufp->chgBit(oldp+29,(vlSelf->Soc__DOT__core__DOT__emreg_has_inst));
        bufp->chgQData(oldp+30,(vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata),64);
        bufp->chgCData(oldp+32,(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr),5);
        bufp->chgCData(oldp+33,(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type),2);
        bufp->chgQData(oldp+34,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata),64);
        bufp->chgBit(oldp+36,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen));
        bufp->chgSData(oldp+37,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr),12);
        bufp->chgBit(oldp+38,(vlSelf->Soc__DOT__core__DOT__mwreg_has_inst));
        bufp->chgBit(oldp+39,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started));
        bufp->chgQData(oldp+40,(((IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen)
                                  ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                                  : vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)),64);
        bufp->chgBit(oldp+42,(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag));
        bufp->chgBit(oldp+43,(vlSelf->Soc__DOT__core__DOT____Vcellinp__DI__mem_access));
        bufp->chgQData(oldp+44,(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T),64);
        bufp->chgBit(oldp+46,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))));
        bufp->chgBit(oldp+47,(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid));
        bufp->chgIData(oldp+48,((IData)(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T)),32);
        bufp->chgBit(oldp+49,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_valid));
        bufp->chgBit(oldp+50,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_valid));
        bufp->chgBit(oldp+51,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw));
        bufp->chgIData(oldp+52,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr),32);
        bufp->chgCData(oldp+53,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state),3);
        bufp->chgBit(oldp+54,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3));
        bufp->chgIData(oldp+55,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__tag),21);
        bufp->chgCData(oldp+56,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index),8);
        bufp->chgCData(oldp+57,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset),3);
        bufp->chgWData(oldp+58,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid),512);
        bufp->chgWData(oldp+74,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty),512);
        bufp->chgWData(oldp+90,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace),512);
        bufp->chgBit(oldp+106,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0));
        VL_SHIFTR_WWI(512,512,10, __Vtemp_h773c399d__0, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid, 
                      (0x3ffU & ((IData)(1U) + (0x1feU 
                                                & ((IData)(
                                                           (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                            >> 3U)) 
                                                   << 1U)))));
        bufp->chgBit(oldp+107,(((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
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
        bufp->chgBit(oldp+108,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim));
        bufp->chgIData(oldp+109,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr),32);
        bufp->chgQData(oldp+110,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data),64);
        bufp->chgCData(oldp+112,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask),8);
        bufp->chgBit(oldp+113,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inst_type));
        bufp->chgBit(oldp+114,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum));
        bufp->chgQData(oldp+115,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_bits_data),64);
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
        bufp->chgSData(oldp+117,((0x1ffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                  << 5U)))
                                              ? 0U : 
                                             (__Vtemp_hb99da695__0[
                                              (((IData)(8U) 
                                                + (0xffU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 5U))))) 
                                            | (__Vtemp_hb99da695__0[
                                               (7U 
                                                & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))] 
                                               >> (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 5U)))))),9);
        bufp->chgBit(oldp+118,((1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))
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
        bufp->chgSData(oldp+119,((0x1ffU & ((IData)(1U) 
                                            + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                               << 1U)))),9);
        bufp->chgSData(oldp+120,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                  << 1U)),9);
        bufp->chgBit(oldp+121,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum))));
        bufp->chgQData(oldp+122,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data),64);
        bufp->chgBit(oldp+124,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum)) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0))));
        bufp->chgSData(oldp+125,((0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                             << 1U) 
                                            + (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0)))),9);
        bufp->chgBit(oldp+126,(((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                   & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]))));
        bufp->chgSData(oldp+127,((0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                             << 1U) 
                                            + (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim)))),9);
        bufp->chgBit(oldp+128,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8854f984__0) 
                                & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))));
        bufp->chgBit(oldp+129,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8ecd23a9__0) 
                                & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                   & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]))));
        bufp->chgBit(oldp+130,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca93995__0) 
                                & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))));
        bufp->chgSData(oldp+131,((0x1feU & ((IData)(
                                                    (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                     >> 3U)) 
                                            << 1U))),9);
        bufp->chgSData(oldp+132,((0x1ffU & ((IData)(1U) 
                                            + (0x1feU 
                                               & ((IData)(
                                                          (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                           >> 3U)) 
                                                  << 1U))))),9);
        bufp->chgIData(oldp+133,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                   & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                      & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]))
                                   ? vlSelf->__VdfgTmp_h2fe899d6__0
                                   : 0U)),21);
        bufp->chgIData(oldp+134,((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8854f984__0) 
                                   & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))
                                   ? vlSelf->__VdfgTmp_h5f294843__0
                                   : 0U)),21);
        bufp->chgIData(oldp+135,((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8ecd23a9__0) 
                                   & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                      & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]))
                                   ? vlSelf->__VdfgTmp_h2fe899d6__0
                                   : 0U)),21);
        bufp->chgIData(oldp+136,((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca93995__0) 
                                   & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))
                                   ? vlSelf->__VdfgTmp_h5f294843__0
                                   : 0U)),21);
        bufp->chgIData(oldp+137,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                                 [(0x1feU & ((IData)(
                                                     (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                      >> 3U)) 
                                             << 1U))]),21);
        bufp->chgIData(oldp+138,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                                 [(0x1ffU & ((IData)(1U) 
                                             + (0x1feU 
                                                & ((IData)(
                                                           (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                            >> 3U)) 
                                                   << 1U))))]),21);
        bufp->chgBit(oldp+139,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid));
        bufp->chgBit(oldp+140,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_valid));
        bufp->chgBit(oldp+141,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw));
        bufp->chgIData(oldp+142,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr),32);
        bufp->chgCData(oldp+143,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state),3);
        bufp->chgIData(oldp+144,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__tag),21);
        bufp->chgCData(oldp+145,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index),8);
        bufp->chgCData(oldp+146,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset),3);
        bufp->chgWData(oldp+147,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid),512);
        bufp->chgWData(oldp+163,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty),512);
        bufp->chgWData(oldp+179,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace),512);
        bufp->chgBit(oldp+195,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim));
        bufp->chgIData(oldp+196,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr),32);
        bufp->chgQData(oldp+197,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data),64);
        bufp->chgCData(oldp+199,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask),8);
        bufp->chgBit(oldp+200,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inst_type));
        bufp->chgBit(oldp+201,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum));
        bufp->chgQData(oldp+202,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data),64);
        bufp->chgSData(oldp+204,((0x1ffU & ((IData)(1U) 
                                            + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                               << 1U)))),9);
        bufp->chgSData(oldp+205,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                  << 1U)),9);
        bufp->chgBit(oldp+206,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum))));
        bufp->chgQData(oldp+207,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data),64);
        bufp->chgBit(oldp+209,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum)) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0))));
        bufp->chgSData(oldp+210,((0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                             << 1U) 
                                            + (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_0)))),9);
        bufp->chgBit(oldp+211,(((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                   & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]))));
        bufp->chgSData(oldp+212,((0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                             << 1U) 
                                            + (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim)))),9);
        bufp->chgBit(oldp+213,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8854f984__0) 
                                & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))));
        bufp->chgBit(oldp+214,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8ecd23a9__0) 
                                & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                   & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]))));
        bufp->chgBit(oldp+215,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca93995__0) 
                                & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))));
        bufp->chgIData(oldp+216,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                   & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                      & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]))
                                   ? vlSelf->__VdfgTmp_heb865217__0
                                   : 0U)),21);
        bufp->chgIData(oldp+217,((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8854f984__0) 
                                   & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))
                                   ? vlSelf->__VdfgTmp_hb3a84c04__0
                                   : 0U)),21);
        bufp->chgIData(oldp+218,((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8ecd23a9__0) 
                                   & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                      & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]))
                                   ? vlSelf->__VdfgTmp_heb865217__0
                                   : 0U)),21);
        bufp->chgIData(oldp+219,((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca93995__0) 
                                   & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))
                                   ? vlSelf->__VdfgTmp_hb3a84c04__0
                                   : 0U)),21);
        bufp->chgBit(oldp+220,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_req_valid_T_5));
        bufp->chgBit(oldp+221,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type))));
        bufp->chgBit(oldp+222,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp));
        bufp->chgBit(oldp+223,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp));
        bufp->chgBit(oldp+224,(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6));
        bufp->chgQData(oldp+225,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result),64);
        bufp->chgBit(oldp+227,(vlSelf->Soc__DOT__core__DOT__clint__DOT__valid_buf));
        bufp->chgQData(oldp+228,(vlSelf->Soc__DOT__core__DOT__clint__DOT__rvalue_buf),64);
        bufp->chgBit(oldp+230,((vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME 
                                >= vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP)));
        bufp->chgIData(oldp+231,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MSIP),32);
        bufp->chgQData(oldp+232,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP),64);
        bufp->chgQData(oldp+234,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME),64);
        __Vtemp_h5ee83ed9__0[0U] = 0x41000000U;
        __Vtemp_h5ee83ed9__0[1U] = 0x3003423U;
        __Vtemp_h5ee83ed9__0[2U] = (0x30000000U | (
                                                   ((0x8000000000000007ULL 
                                                     == vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE)
                                                     ? 0x344U
                                                     : 0U) 
                                                   << 8U));
        bufp->chgSData(oldp+236,(((0x5fU >= (0x7fU 
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
        bufp->chgBit(oldp+237,(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen));
        bufp->chgQData(oldp+238,(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata),64);
        bufp->chgQData(oldp+240,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC),64);
        bufp->chgQData(oldp+242,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE),64);
        bufp->chgQData(oldp+244,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC),64);
        bufp->chgQData(oldp+246,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE),64);
        bufp->chgQData(oldp+248,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP),64);
        bufp->chgQData(oldp+250,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS),64);
        bufp->chgQData(oldp+252,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH),64);
        bufp->chgCData(oldp+254,(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd),5);
        bufp->chgCData(oldp+255,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                   ? ((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                       ? 0U : (7U & (IData)(vlSelf->__VdfgTmp_h6a80e86b__0)))
                                   : 0U)),3);
        bufp->chgIData(oldp+256,((IData)(vlSelf->Soc__DOT__core__DOT__dereg_branch_addr)),32);
        bufp->chgQData(oldp+257,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                   ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                   : 0ULL)),64);
        bufp->chgQData(oldp+259,((((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6)) 
                                   & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))
                                   ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                   : 0ULL)),64);
        bufp->chgQData(oldp+261,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata),64);
        bufp->chgBit(oldp+263,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we));
        bufp->chgCData(oldp+264,(vlSelf->Soc__DOT__core__DOT__trap__DOT__state),3);
        bufp->chgBit(oldp+265,(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3));
        bufp->chgIData(oldp+266,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                   ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC)
                                   : ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                       ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC)
                                       : 0U))),32);
        bufp->chgIData(oldp+267,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),32);
        bufp->chgIData(oldp+268,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc),32);
        bufp->chgBit(oldp+269,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))));
        bufp->chgBit(oldp+270,(vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag));
        bufp->chgCData(oldp+271,(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count),3);
        bufp->chgQData(oldp+272,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                                   & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr)))
                                   ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                   : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                  [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr])),64);
        bufp->chgQData(oldp+274,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr]),64);
        bufp->chgQData(oldp+276,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
        bufp->chgQData(oldp+278,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
        bufp->chgQData(oldp+280,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
        bufp->chgQData(oldp+282,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
        bufp->chgQData(oldp+284,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
        bufp->chgQData(oldp+286,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
        bufp->chgQData(oldp+288,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
        bufp->chgQData(oldp+290,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
        bufp->chgQData(oldp+292,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
        bufp->chgQData(oldp+294,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
        bufp->chgQData(oldp+296,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
        bufp->chgQData(oldp+298,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
        bufp->chgQData(oldp+300,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
        bufp->chgQData(oldp+302,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
        bufp->chgQData(oldp+304,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
        bufp->chgQData(oldp+306,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
        bufp->chgQData(oldp+308,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
        bufp->chgQData(oldp+310,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
        bufp->chgQData(oldp+312,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
        bufp->chgQData(oldp+314,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
        bufp->chgQData(oldp+316,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
        bufp->chgQData(oldp+318,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
        bufp->chgQData(oldp+320,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
        bufp->chgQData(oldp+322,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
        bufp->chgQData(oldp+324,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
        bufp->chgQData(oldp+326,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
        bufp->chgQData(oldp+328,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
        bufp->chgQData(oldp+330,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
        bufp->chgQData(oldp+332,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
        bufp->chgQData(oldp+334,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
        bufp->chgQData(oldp+336,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
        bufp->chgQData(oldp+338,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
        bufp->chgQData(oldp+340,(vlSelf->Soc__DOT__core__DOT__trap__DOT__cause),64);
        bufp->chgIData(oldp+342,(vlSelf->Soc__DOT__core__DOT__trap__DOT__pc),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgQData(oldp+343,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray)
                                   ? ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inst_type)
                                       ? (QData)((IData)(
                                                         ((0U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                           ? 
                                                          ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                            ? (IData)(vlSelf->__VdfgTmp_h02e5796b__0)
                                                            : 0U)
                                                           : vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hdd9fa219__0)))
                                       : vlSelf->Soc__DOT__core__DOT__Dcache__DOT___DataArray_ext_R0_data)
                                   : vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_bits_data)),64);
        bufp->chgQData(oldp+345,(((0x340U == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
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
        bufp->chgQData(oldp+347,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0)
                                   ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                  [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]
                                   : 0ULL)),64);
        bufp->chgQData(oldp+349,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0)
                                   ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                  [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]
                                   : 0ULL)),64);
        bufp->chgQData(oldp+351,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard)
                                   ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                   : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard)
                                       ? vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata
                                       : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)
                                           ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                                           : 0ULL)))),64);
        bufp->chgQData(oldp+353,(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__fdreg_pc)) 
                                  + (((- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (((IData)(vlSelf->__VdfgTmp_h315738f9__0) 
                                                                   << 0xbU) 
                                                                  | (((IData)(vlSelf->__VdfgTmp_h722d7b58__0) 
                                                                      << 5U) 
                                                                     | ((IData)(vlSelf->__VdfgTmp_h6dbd61c0__0) 
                                                                        << 1U)))))))),64);
        bufp->chgCData(oldp+355,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
                                   ? (0x3fU & (IData)(
                                                      (vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                                       >> 0x14U)))
                                   : 0U)),6);
        bufp->chgBit(oldp+356,(((0U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                                & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2) 
                                   | ((0x30200073U 
                                       == (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)) 
                                      | (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7))))));
        bufp->chgBit(oldp+357,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                                | ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)))));
        bufp->chgQData(oldp+358,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]),64);
        bufp->chgQData(oldp+360,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]),64);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+362,(((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid))));
        VL_SHIFTR_WWI(512,512,10, __Vtemp_hc4bbf11d__0, vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid, 
                      (0x3ffU & ((IData)(1U) + (0x1feU 
                                                & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                   >> 2U)))));
        bufp->chgBit(oldp+363,(((vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
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
        bufp->chgSData(oldp+364,((0x1ffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                  << 5U)))
                                              ? 0U : 
                                             (__Vtemp_h1d13a2da__0[
                                              (((IData)(8U) 
                                                + (0xffU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 5U))))) 
                                            | (__Vtemp_h1d13a2da__0[
                                               (7U 
                                                & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))] 
                                               >> (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 5U)))))),9);
        bufp->chgBit(oldp+365,((1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))
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
        bufp->chgIData(oldp+366,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                                 [(0x1feU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                             >> 2U))]),21);
        bufp->chgIData(oldp+367,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                                 [(0x1ffU & ((IData)(1U) 
                                             + (0x1feU 
                                                & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                   >> 2U))))]),21);
        bufp->chgBit(oldp+368,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)) 
                                & ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                   & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_18)) 
                                      & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                         | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)) 
                                            & ((0U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                               & (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)))))))));
        bufp->chgBit(oldp+369,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_valid)) 
                                & ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                   & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_18)) 
                                      & ((~ ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                             & (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid))) 
                                         & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                            | (((0U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                                & (IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)) 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h02ae5b32__0) 
                                                  | (~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)))))))))));
        bufp->chgIData(oldp+370,(((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2)
                                   ? ((IData)(4U) + vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc)
                                   : ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                                       ? ((IData)(4U) 
                                          + vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)
                                       : vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc))),32);
        bufp->chgQData(oldp+371,((((QData)((IData)(
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
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+373,(vlSelf->Soc__DOT__sram__DOT__awready));
        bufp->chgBit(oldp+374,(vlSelf->Soc__DOT__sram__DOT__wready));
        bufp->chgBit(oldp+375,(vlSelf->Soc__DOT__sram__DOT__bvalid));
        bufp->chgBit(oldp+376,(vlSelf->Soc__DOT__sram__DOT__arready));
        bufp->chgBit(oldp+377,(vlSelf->Soc__DOT__sram__DOT__rvalid));
        bufp->chgQData(oldp+378,(vlSelf->Soc__DOT__sram__DOT__rdata),64);
        bufp->chgCData(oldp+380,(vlSelf->Soc__DOT__sram__DOT__bresp),2);
        bufp->chgCData(oldp+381,(vlSelf->Soc__DOT__sram__DOT__rresp),2);
        bufp->chgIData(oldp+382,(vlSelf->Soc__DOT__sram__DOT__awaddr_buffer),32);
        bufp->chgBit(oldp+383,(vlSelf->Soc__DOT__sram__DOT__need_resp));
        bufp->chgIData(oldp+384,(vlSelf->Soc__DOT__sram__DOT__araddr),32);
        bufp->chgBit(oldp+385,(vlSelf->Soc__DOT__sram__DOT__need_read));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+386,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN));
        bufp->chgIData(oldp+387,(vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr),32);
        bufp->chgBit(oldp+388,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1));
        bufp->chgQData(oldp+389,(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0)
                                   ? 0ULL : ((1U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                              ? vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata
                                              : ((2U 
                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                                  ? 
                                                 ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray)
                                                   ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT___DataArray_ext_R0_data
                                                   : 0ULL)
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                                   ? 
                                                  ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray)
                                                    ? vlSelf->Soc__DOT__core__DOT__Icache__DOT___DataArray_ext_R0_data
                                                    : 0ULL)
                                                   : 0ULL))))),64);
        bufp->chgCData(oldp+391,(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0)
                                   ? 0U : ((1U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                            ? (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask)
                                            : ((2U 
                                                & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                                ? (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask)
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                                    ? (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask)
                                                    : 0U))))),8);
        bufp->chgBit(oldp+392,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4));
        bufp->chgIData(oldp+393,(((1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                         | ((~ ((2U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                   >> 3U))) 
                                            | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)))))
                                   ? 0U : vlSelf->Soc__DOT__core__DOT__arbitor__DOT___addr_T_6)),32);
        bufp->chgBit(oldp+394,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_5));
        bufp->chgQData(oldp+395,(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata),64);
        bufp->chgIData(oldp+397,((IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)),32);
        bufp->chgBit(oldp+398,(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16));
        bufp->chgCData(oldp+399,(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask),8);
        bufp->chgQData(oldp+400,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray)
                                   ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT___DataArray_ext_R0_data
                                   : 0ULL)),64);
        bufp->chgCData(oldp+402,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask),8);
        bufp->chgBit(oldp+403,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray));
        bufp->chgQData(oldp+404,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___DataArray_ext_R0_data),64);
        bufp->chgQData(oldp+406,(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data),64);
        bufp->chgQData(oldp+408,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray)
                                   ? vlSelf->Soc__DOT__core__DOT__Icache__DOT___DataArray_ext_R0_data
                                   : 0ULL)),64);
        bufp->chgCData(oldp+410,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask),8);
        bufp->chgBit(oldp+411,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray));
        bufp->chgQData(oldp+412,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___DataArray_ext_R0_data),64);
        bufp->chgCData(oldp+414,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose),4);
        bufp->chgCData(oldp+415,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer),4);
        bufp->chgCData(oldp+416,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state),2);
        bufp->chgSData(oldp+417,(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr),12);
        bufp->chgBit(oldp+418,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard) 
                                | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)))));
        bufp->chgBit(oldp+419,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
                                | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))));
        bufp->chgBit(oldp+420,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard) 
                                | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)))));
        bufp->chgCData(oldp+421,(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr),5);
        bufp->chgCData(oldp+422,(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr),5);
        bufp->chgCData(oldp+423,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_reg_waddr),5);
        bufp->chgBit(oldp+424,(((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                                & ((0x17U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                   & ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                      & ((0x6fU != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                         & ((0x67U 
                                             != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                            & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5))))))));
        bufp->chgCData(oldp+425,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op),6);
        bufp->chgCData(oldp+426,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
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
        bufp->chgCData(oldp+427,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0)
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
        bufp->chgCData(oldp+428,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type),3);
        bufp->chgQData(oldp+429,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T),64);
        bufp->chgSData(oldp+431,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen)
                                   ? (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr)
                                   : 0U)),12);
        bufp->chgBit(oldp+432,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen));
        bufp->chgBit(oldp+433,(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag));
        bufp->chgIData(oldp+434,(vlSelf->Soc__DOT__core__DOT__decode__DOT__inst),32);
        bufp->chgCData(oldp+435,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type),2);
        bufp->chgCData(oldp+436,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type),2);
        bufp->chgCData(oldp+437,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type),3);
        bufp->chgCData(oldp+438,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
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
        bufp->chgCData(oldp+439,(((((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0) 
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
        bufp->chgQData(oldp+440,(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm),64);
        bufp->chgBit(oldp+442,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard));
        bufp->chgBit(oldp+443,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard));
        bufp->chgBit(oldp+444,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard));
        bufp->chgBit(oldp+445,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard));
        bufp->chgBit(oldp+446,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard));
        bufp->chgBit(oldp+447,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard));
        bufp->chgBit(oldp+448,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard));
        bufp->chgBit(oldp+449,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard));
        bufp->chgBit(oldp+450,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+451,(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc),32);
        bufp->chgBit(oldp+452,(((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1))));
        bufp->chgBit(oldp+453,(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid));
        bufp->chgQData(oldp+454,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data),64);
        bufp->chgBit(oldp+456,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_14));
        bufp->chgBit(oldp+457,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16));
        bufp->chgBit(oldp+458,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_19));
        bufp->chgQData(oldp+459,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data),64);
        bufp->chgBit(oldp+461,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_25));
        bufp->chgBit(oldp+462,(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid));
        bufp->chgQData(oldp+463,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data),64);
        bufp->chgBit(oldp+465,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3));
        bufp->chgBit(oldp+466,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0));
        bufp->chgBit(oldp+467,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_14));
        bufp->chgBit(oldp+468,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16));
        bufp->chgBit(oldp+469,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_19));
        bufp->chgQData(oldp+470,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data),64);
        bufp->chgBit(oldp+472,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_25));
        bufp->chgSData(oldp+473,((0x1feU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                            >> 2U))),9);
        bufp->chgSData(oldp+474,((0x1ffU & ((IData)(1U) 
                                            + (0x1feU 
                                               & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                  >> 2U))))),9);
        bufp->chgBit(oldp+475,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_valid));
        bufp->chgBit(oldp+476,(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1));
        bufp->chgBit(oldp+477,(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush));
        bufp->chgQData(oldp+478,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T),64);
        bufp->chgIData(oldp+480,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc),32);
        bufp->chgBit(oldp+481,(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0));
        bufp->chgBit(oldp+482,(vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall));
        bufp->chgQData(oldp+483,(vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata),64);
    }
    bufp->chgBit(oldp+485,(vlSelf->clock));
    bufp->chgBit(oldp+486,(vlSelf->reset));
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
    bufp->chgQData(oldp+487,((((QData)((IData)(__Vtemp_h554321c1__0[
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
                              | (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
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
    bufp->chgQData(oldp+489,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard)
                               ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                               : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard)
                                   ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                   : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)
                                       ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                       : 0ULL)))),64);
    bufp->chgQData(oldp+491,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                               ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                               : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                                   ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                   : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                                       ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                       : 0ULL)))),64);
    bufp->chgQData(oldp+493,((((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
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
    bufp->chgQData(oldp+495,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                               ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T
                               : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                   ? 4ULL : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                              ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T
                                              : ((1U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                                  ? vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm
                                                  : 0ULL))))),64);
    bufp->chgBit(oldp+497,((1U & (~ ((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                                     | (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush))))));
    bufp->chgIData(oldp+498,(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                               ? (vlSelf->Soc__DOT__core__DOT__fdreg_pc 
                                  + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm))
                               : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                   ? (0xfffffffeU & 
                                      ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4) 
                                       + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm)))
                                   : 0x80000000U))),32);
    bufp->chgBit(oldp+499,(((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h836ed1e8__0) 
                            & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
                               & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                                  | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_21_0)) 
                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                                        | ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                                           | (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag)))))))));
    bufp->chgIData(oldp+500,((((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                               & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid))
                               ? (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)
                               : 0U)),32);
    bufp->chgBit(oldp+501,(vlSelf->Soc__DOT____Vcellinp__sram__ARESETn));
    bufp->chgIData(oldp+502,((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1) 
                               & ((IData)(vlSelf->Soc__DOT__sram__DOT__wready) 
                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN) 
                                     & (IData)(vlSelf->Soc__DOT__sram__DOT__awready))))
                               ? vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr
                               : vlSelf->Soc__DOT__sram__DOT__awaddr_buffer)),32);
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
