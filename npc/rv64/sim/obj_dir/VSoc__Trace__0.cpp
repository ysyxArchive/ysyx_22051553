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
    VlWide<16>/*511:0*/ __Vtemp_h773c399d__0;
    VlWide<8>/*255:0*/ __Vtemp_hb99da695__0;
    VlWide<8>/*255:0*/ __Vtemp_hff88a999__0;
    VlWide<16>/*511:0*/ __Vtemp_hc4bbf11d__0;
    VlWide<8>/*255:0*/ __Vtemp_h1d13a2da__0;
    VlWide<8>/*255:0*/ __Vtemp_hf821f428__0;
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
        bufp->chgQData(oldp+13,(vlSelf->Soc__DOT__core__DOT__dereg_csr_t),64);
        bufp->chgSData(oldp+15,(vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr),12);
        bufp->chgBit(oldp+16,(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen));
        bufp->chgBit(oldp+17,(vlSelf->Soc__DOT__core__DOT__dereg_has_inst));
        bufp->chgQData(oldp+18,(vlSelf->Soc__DOT__core__DOT__emreg_reg_wdata),64);
        bufp->chgCData(oldp+20,(vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr),5);
        bufp->chgCData(oldp+21,(vlSelf->Soc__DOT__core__DOT__emreg_wb_type),2);
        bufp->chgCData(oldp+22,(vlSelf->Soc__DOT__core__DOT__emreg_ld_type),3);
        bufp->chgCData(oldp+23,(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit),3);
        bufp->chgQData(oldp+24,(vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata),64);
        bufp->chgBit(oldp+26,(vlSelf->Soc__DOT__core__DOT__emreg_csr_wen));
        bufp->chgSData(oldp+27,(vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr),12);
        bufp->chgBit(oldp+28,(vlSelf->Soc__DOT__core__DOT__emreg_has_inst));
        bufp->chgQData(oldp+29,(vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata),64);
        bufp->chgCData(oldp+31,(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr),5);
        bufp->chgCData(oldp+32,(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type),2);
        bufp->chgQData(oldp+33,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata),64);
        bufp->chgBit(oldp+35,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen));
        bufp->chgSData(oldp+36,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr),12);
        bufp->chgBit(oldp+37,(vlSelf->Soc__DOT__core__DOT__mwreg_has_inst));
        bufp->chgBit(oldp+38,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started));
        bufp->chgQData(oldp+39,(((IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen)
                                  ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                                  : vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_h7d5adbc1__0)),64);
        bufp->chgBit(oldp+41,(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag));
        bufp->chgBit(oldp+42,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_valid));
        bufp->chgBit(oldp+43,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_valid));
        bufp->chgBit(oldp+44,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw));
        bufp->chgIData(oldp+45,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr),32);
        bufp->chgCData(oldp+46,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state),3);
        bufp->chgIData(oldp+47,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__tag),21);
        bufp->chgCData(oldp+48,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index),8);
        bufp->chgCData(oldp+49,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset),3);
        bufp->chgWData(oldp+50,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid),512);
        bufp->chgWData(oldp+66,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty),512);
        bufp->chgWData(oldp+82,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace),512);
        bufp->chgBit(oldp+98,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim));
        bufp->chgIData(oldp+99,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr),32);
        bufp->chgQData(oldp+100,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data),64);
        bufp->chgCData(oldp+102,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask),8);
        bufp->chgBit(oldp+103,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inst_type));
        bufp->chgBit(oldp+104,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum));
        bufp->chgQData(oldp+105,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_bits_data),64);
        bufp->chgSData(oldp+107,((0x1ffU & ((IData)(1U) 
                                            + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                               << 1U)))),9);
        bufp->chgSData(oldp+108,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                  << 1U)),9);
        bufp->chgBit(oldp+109,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum))));
        bufp->chgQData(oldp+110,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data),64);
        bufp->chgBit(oldp+112,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum)) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0))));
        bufp->chgSData(oldp+113,((0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                             << 1U) 
                                            + (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN)))),9);
        bufp->chgBit(oldp+114,(((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                   & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]))));
        bufp->chgSData(oldp+115,((0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                             << 1U) 
                                            + (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim)))),9);
        bufp->chgBit(oldp+116,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8854f984__0) 
                                & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))));
        bufp->chgBit(oldp+117,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8ecd23a9__0) 
                                & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                   & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]))));
        bufp->chgBit(oldp+118,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca93995__0) 
                                & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))));
        bufp->chgIData(oldp+119,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                   & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                      & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]))
                                   ? vlSelf->__VdfgTmp_h2fe899d6__0
                                   : 0U)),21);
        bufp->chgIData(oldp+120,((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8854f984__0) 
                                   & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))
                                   ? vlSelf->__VdfgTmp_h5f294843__0
                                   : 0U)),21);
        bufp->chgIData(oldp+121,((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8ecd23a9__0) 
                                   & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                      & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]))
                                   ? vlSelf->__VdfgTmp_h2fe899d6__0
                                   : 0U)),21);
        bufp->chgIData(oldp+122,((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca93995__0) 
                                   & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))
                                   ? vlSelf->__VdfgTmp_h5f294843__0
                                   : 0U)),21);
        bufp->chgBit(oldp+123,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid));
        bufp->chgBit(oldp+124,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_valid));
        bufp->chgBit(oldp+125,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw));
        bufp->chgIData(oldp+126,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr),32);
        bufp->chgCData(oldp+127,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state),3);
        bufp->chgIData(oldp+128,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__tag),21);
        bufp->chgCData(oldp+129,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index),8);
        bufp->chgCData(oldp+130,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset),3);
        bufp->chgWData(oldp+131,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid),512);
        bufp->chgWData(oldp+147,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty),512);
        bufp->chgWData(oldp+163,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace),512);
        bufp->chgBit(oldp+179,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim));
        bufp->chgIData(oldp+180,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr),32);
        bufp->chgQData(oldp+181,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data),64);
        bufp->chgCData(oldp+183,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask),8);
        bufp->chgBit(oldp+184,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inst_type));
        bufp->chgBit(oldp+185,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum));
        bufp->chgQData(oldp+186,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data),64);
        bufp->chgSData(oldp+188,((0x1ffU & ((IData)(1U) 
                                            + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                               << 1U)))),9);
        bufp->chgSData(oldp+189,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                  << 1U)),9);
        bufp->chgBit(oldp+190,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum))));
        bufp->chgQData(oldp+191,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data),64);
        bufp->chgBit(oldp+193,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum)) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0))));
        bufp->chgSData(oldp+194,((0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                             << 1U) 
                                            + (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN)))),9);
        bufp->chgBit(oldp+195,(((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                   & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]))));
        bufp->chgSData(oldp+196,((0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                             << 1U) 
                                            + (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim)))),9);
        bufp->chgBit(oldp+197,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8854f984__0) 
                                & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))));
        bufp->chgBit(oldp+198,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8ecd23a9__0) 
                                & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                   & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]))));
        bufp->chgBit(oldp+199,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca93995__0) 
                                & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))));
        bufp->chgIData(oldp+200,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                   & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                      & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]))
                                   ? vlSelf->__VdfgTmp_heb865217__0
                                   : 0U)),21);
        bufp->chgIData(oldp+201,((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8854f984__0) 
                                   & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))
                                   ? vlSelf->__VdfgTmp_hb3a84c04__0
                                   : 0U)),21);
        bufp->chgIData(oldp+202,((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8ecd23a9__0) 
                                   & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                      & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]))
                                   ? vlSelf->__VdfgTmp_heb865217__0
                                   : 0U)),21);
        bufp->chgIData(oldp+203,((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca93995__0) 
                                   & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))
                                   ? vlSelf->__VdfgTmp_hb3a84c04__0
                                   : 0U)),21);
        bufp->chgBit(oldp+204,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp));
        bufp->chgBit(oldp+205,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp));
        bufp->chgQData(oldp+206,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result),64);
        bufp->chgBit(oldp+208,(vlSelf->Soc__DOT__core__DOT__clint__DOT__valid_buf));
        bufp->chgQData(oldp+209,(vlSelf->Soc__DOT__core__DOT__clint__DOT__rvalue_buf),64);
        bufp->chgBit(oldp+211,((vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME 
                                >= vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP)));
        bufp->chgIData(oldp+212,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MSIP),32);
        bufp->chgQData(oldp+213,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP),64);
        bufp->chgQData(oldp+215,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME),64);
        __Vtemp_h5ee83ed9__0[0U] = 0x41000000U;
        __Vtemp_h5ee83ed9__0[1U] = 0x3003423U;
        __Vtemp_h5ee83ed9__0[2U] = (0x30000000U | (
                                                   ((0x8000000000000007ULL 
                                                     == vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE)
                                                     ? 0x344U
                                                     : 0U) 
                                                   << 8U));
        bufp->chgSData(oldp+217,(((0x5fU >= (0x7fU 
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
        bufp->chgBit(oldp+218,(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen));
        bufp->chgQData(oldp+219,(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata),64);
        bufp->chgQData(oldp+221,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC),64);
        bufp->chgQData(oldp+223,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE),64);
        bufp->chgQData(oldp+225,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC),64);
        bufp->chgQData(oldp+227,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE),64);
        bufp->chgQData(oldp+229,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP),64);
        bufp->chgQData(oldp+231,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS),64);
        bufp->chgQData(oldp+233,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH),64);
        bufp->chgCData(oldp+235,(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd),5);
        bufp->chgIData(oldp+236,((IData)(vlSelf->Soc__DOT__core__DOT__dereg_branch_addr)),32);
        bufp->chgBit(oldp+237,(vlSelf->Soc__DOT__core__DOT__excute__DOT___mul_div_type_T_16));
        bufp->chgBit(oldp+238,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_mul_div_outvalid));
        bufp->chgQData(oldp+239,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata),64);
        bufp->chgBit(oldp+241,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we));
        bufp->chgBit(oldp+242,(vlSelf->Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer));
        bufp->chgQData(oldp+243,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu_buffer),64);
        bufp->chgBit(oldp+245,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8));
        bufp->chgBit(oldp+246,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8) 
                                & (0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)))));
        bufp->chgCData(oldp+247,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8)
                                   ? (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_h60d3cac5__0) 
                                       | (0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)))
                                       ? 3U : ((0x14U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
                                               << 1U))
                                   : 0U)),2);
        bufp->chgQData(oldp+248,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand),64);
        bufp->chgQData(oldp+250,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier),64);
        bufp->chgBit(oldp+252,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid));
        bufp->chgQData(oldp+253,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_hi),64);
        bufp->chgQData(oldp+255,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_lo),64);
        bufp->chgWData(oldp+257,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg),67);
        bufp->chgWData(oldp+260,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg),132);
        bufp->chgWData(oldp+265,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg),132);
        bufp->chgBit(oldp+270,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state));
        bufp->chgCData(oldp+271,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter),6);
        bufp->chgCData(oldp+272,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total),6);
        bufp->chgBit(oldp+273,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_15));
        bufp->chgBit(oldp+274,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divw));
        bufp->chgBit(oldp+275,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_div_signed));
        bufp->chgQData(oldp+276,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend),64);
        bufp->chgQData(oldp+278,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor),64);
        bufp->chgBit(oldp+280,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid));
        bufp->chgQData(oldp+281,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient),64);
        bufp->chgWData(oldp+283,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder),128);
        bufp->chgWData(oldp+287,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65),65);
        bufp->chgQData(oldp+290,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub33),33);
        bufp->chgBit(oldp+292,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo));
        bufp->chgBit(oldp+293,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem));
        bufp->chgCData(oldp+294,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state),2);
        bufp->chgCData(oldp+295,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter),7);
        bufp->chgQData(oldp+296,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34),34);
        bufp->chgWData(oldp+298,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66),66);
        bufp->chgCData(oldp+301,(vlSelf->Soc__DOT__core__DOT__trap__DOT__state),3);
        bufp->chgBit(oldp+302,(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3));
        bufp->chgIData(oldp+303,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                   ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC)
                                   : ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                       ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC)
                                       : 0U))),32);
        bufp->chgBit(oldp+304,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_mul_div_outvalid)) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___mul_div_type_T_16))));
        bufp->chgIData(oldp+305,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),32);
        bufp->chgIData(oldp+306,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc),32);
        bufp->chgBit(oldp+307,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))));
        bufp->chgBit(oldp+308,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))));
        bufp->chgBit(oldp+309,(vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag));
        bufp->chgCData(oldp+310,(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count),6);
        bufp->chgBit(oldp+311,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))));
        bufp->chgBit(oldp+312,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid));
        bufp->chgQData(oldp+313,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_bits),64);
        bufp->chgBit(oldp+315,(vlSelf->Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer));
        bufp->chgBit(oldp+316,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer));
        bufp->chgBit(oldp+317,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer));
        bufp->chgQData(oldp+318,(vlSelf->Soc__DOT__core__DOT__mem__DOT__clmem_buffer),64);
        bufp->chgQData(oldp+320,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdata_buffer),64);
        bufp->chgQData(oldp+322,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataio_buffer),64);
        bufp->chgQData(oldp+324,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr]),64);
        bufp->chgQData(oldp+326,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
        bufp->chgQData(oldp+328,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
        bufp->chgQData(oldp+330,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
        bufp->chgQData(oldp+332,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
        bufp->chgQData(oldp+334,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
        bufp->chgQData(oldp+336,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
        bufp->chgQData(oldp+338,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
        bufp->chgQData(oldp+340,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
        bufp->chgQData(oldp+342,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
        bufp->chgQData(oldp+344,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
        bufp->chgQData(oldp+346,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
        bufp->chgQData(oldp+348,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
        bufp->chgQData(oldp+350,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
        bufp->chgQData(oldp+352,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
        bufp->chgQData(oldp+354,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
        bufp->chgQData(oldp+356,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
        bufp->chgQData(oldp+358,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
        bufp->chgQData(oldp+360,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
        bufp->chgQData(oldp+362,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
        bufp->chgQData(oldp+364,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
        bufp->chgQData(oldp+366,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
        bufp->chgQData(oldp+368,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
        bufp->chgQData(oldp+370,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
        bufp->chgQData(oldp+372,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
        bufp->chgQData(oldp+374,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
        bufp->chgQData(oldp+376,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
        bufp->chgQData(oldp+378,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
        bufp->chgQData(oldp+380,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
        bufp->chgQData(oldp+382,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
        bufp->chgQData(oldp+384,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
        bufp->chgQData(oldp+386,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
        bufp->chgQData(oldp+388,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
        bufp->chgQData(oldp+390,(vlSelf->Soc__DOT__core__DOT__trap__DOT__cause),64);
        bufp->chgIData(oldp+392,(vlSelf->Soc__DOT__core__DOT__trap__DOT__pc),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+393,((0U != ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type) 
                                       | (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))));
        VL_SHIFTR_WWI(512,512,10, __Vtemp_h773c399d__0, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid, 
                      (0x3ffU & ((IData)(1U) + (0x1feU 
                                                & ((IData)(
                                                           (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                            >> 3U)) 
                                                   << 1U)))));
        bufp->chgBit(oldp+394,(((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
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
        bufp->chgBit(oldp+395,((1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))
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
        bufp->chgIData(oldp+396,((((0U == (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                            << 5U)))
                                    ? 0U : (__Vtemp_hb99da695__0[
                                            (((IData)(0x1fU) 
                                              + (0xffU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                    << 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
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
        bufp->chgSData(oldp+397,((0x1ffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                  << 5U)))
                                              ? 0U : 
                                             (__Vtemp_hff88a999__0[
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
                                            | (__Vtemp_hff88a999__0[
                                               (7U 
                                                & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))] 
                                               >> (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 5U)))))),9);
        bufp->chgIData(oldp+398,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                                 [(0x1feU & ((IData)(
                                                     (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                      >> 3U)) 
                                             << 1U))]),21);
        bufp->chgIData(oldp+399,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                                 [(0x1ffU & ((IData)(1U) 
                                             + (0x1feU 
                                                & ((IData)(
                                                           (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                            >> 3U)) 
                                                   << 1U))))]),21);
        bufp->chgQData(oldp+400,(((0x340U == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
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
        bufp->chgQData(oldp+402,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0)
                                   ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                  [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]
                                   : 0ULL)),64);
        bufp->chgQData(oldp+404,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0)
                                   ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                  [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]
                                   : 0ULL)),64);
        bufp->chgQData(oldp+406,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard)
                                   ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                   : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard)
                                       ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                       : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)
                                           ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                           : 0ULL)))),64);
        bufp->chgQData(oldp+408,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                                   ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                   : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                                       ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                       : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                                           ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                           : 0ULL)))),64);
        bufp->chgQData(oldp+410,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard)
                                   ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                   : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard)
                                       ? vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata
                                       : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)
                                           ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                                           : 0ULL)))),64);
        bufp->chgQData(oldp+412,((((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
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
        bufp->chgQData(oldp+414,(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__fdreg_pc)) 
                                  + (((- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (((IData)(vlSelf->__VdfgTmp_h315738f9__0) 
                                                                   << 0xbU) 
                                                                  | (((IData)(vlSelf->__VdfgTmp_h722d7b58__0) 
                                                                      << 5U) 
                                                                     | ((IData)(vlSelf->__VdfgTmp_h6dbd61c0__0) 
                                                                        << 1U)))))))),64);
        bufp->chgCData(oldp+416,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
                                   ? (0x3fU & (IData)(
                                                      (vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                                       >> 0x14U)))
                                   : 0U)),6);
        bufp->chgIData(oldp+417,(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                   ? (vlSelf->Soc__DOT__core__DOT__fdreg_pc 
                                      + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm))
                                   : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                       ? (0xfffffffeU 
                                          & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4) 
                                             + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm)))
                                       : 0x80000000U))),32);
        bufp->chgCData(oldp+418,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                   ? (7U & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result))
                                   : 0U)),3);
        bufp->chgQData(oldp+419,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                   ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                   : 0ULL)),64);
        bufp->chgQData(oldp+421,(((IData)(vlSelf->__VdfgTmp_h9d5684c6__0)
                                   ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                   : 0ULL)),64);
        bufp->chgBit(oldp+423,(((0U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                                & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2) 
                                   | ((0x30200073U 
                                       == (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)) 
                                      | (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7))))));
        bufp->chgBit(oldp+424,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                                | ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)))));
        bufp->chgIData(oldp+425,(((IData)(vlSelf->__VdfgTmp_h9d5684c6__0)
                                   ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)
                                   : 0U)),32);
        bufp->chgIData(oldp+426,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                   ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)
                                   : 0U)),32);
        bufp->chgQData(oldp+427,((((QData)((IData)(
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
        bufp->chgQData(oldp+429,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]),64);
        bufp->chgQData(oldp+431,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]),64);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+433,(((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid))));
        bufp->chgBit(oldp+434,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
                                & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)))));
        VL_SHIFTR_WWI(512,512,10, __Vtemp_hc4bbf11d__0, vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid, 
                      (0x3ffU & ((IData)(1U) + (0x1feU 
                                                & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                   >> 2U)))));
        bufp->chgBit(oldp+435,(((vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                                 [(0x1ffU & ((IData)(1U) 
                                             + (0x1feU 
                                                & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                   >> 2U))))] 
                                 == (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                     >> 0xbU)) & __Vtemp_hc4bbf11d__0[0U])));
        bufp->chgBit(oldp+436,((1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))
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
        bufp->chgIData(oldp+437,((((0U == (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                            << 5U)))
                                    ? 0U : (__Vtemp_h1d13a2da__0[
                                            (((IData)(0x1fU) 
                                              + (0xffU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                    << 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
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
        bufp->chgSData(oldp+438,((0x1ffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                  << 5U)))
                                              ? 0U : 
                                             (__Vtemp_hf821f428__0[
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
                                            | (__Vtemp_hf821f428__0[
                                               (7U 
                                                & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))] 
                                               >> (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 5U)))))),9);
        bufp->chgIData(oldp+439,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                                 [(0x1feU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                             >> 2U))]),21);
        bufp->chgIData(oldp+440,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                                 [(0x1ffU & ((IData)(1U) 
                                             + (0x1feU 
                                                & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                   >> 2U))))]),21);
        bufp->chgQData(oldp+441,(((((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
                                    & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))) 
                                   & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr)))
                                   ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                   : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                  [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr])),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+443,(vlSelf->Soc__DOT__sram__DOT__awready));
        bufp->chgBit(oldp+444,(vlSelf->Soc__DOT__sram__DOT__wready));
        bufp->chgBit(oldp+445,(vlSelf->Soc__DOT__sram__DOT__bvalid));
        bufp->chgBit(oldp+446,(vlSelf->Soc__DOT__sram__DOT__arready));
        bufp->chgBit(oldp+447,(vlSelf->Soc__DOT__sram__DOT__rvalid));
        bufp->chgQData(oldp+448,(vlSelf->Soc__DOT__sram__DOT__rdata),64);
        bufp->chgCData(oldp+450,(vlSelf->Soc__DOT__sram__DOT__bresp),2);
        bufp->chgCData(oldp+451,(vlSelf->Soc__DOT__sram__DOT__rresp),2);
        bufp->chgIData(oldp+452,(vlSelf->Soc__DOT__sram__DOT__awaddr_buffer),32);
        bufp->chgBit(oldp+453,(vlSelf->Soc__DOT__sram__DOT__need_resp));
        bufp->chgIData(oldp+454,(vlSelf->Soc__DOT__sram__DOT__araddr),32);
        bufp->chgBit(oldp+455,(vlSelf->Soc__DOT__sram__DOT__need_read));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+456,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN));
        bufp->chgIData(oldp+457,(vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr),32);
        bufp->chgBit(oldp+458,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1));
        bufp->chgQData(oldp+459,(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0)
                                   ? 0ULL : ((1U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                              ? vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_data
                                              : ((2U 
                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                                  ? 
                                                 ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray)
                                                   ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray
                                                   : 0ULL)
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                                   ? 
                                                  ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray)
                                                    ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray
                                                    : 0ULL)
                                                   : 0ULL))))),64);
        bufp->chgCData(oldp+461,(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0)
                                   ? 0U : ((1U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                            ? (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_mask)
                                            : ((2U 
                                                & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                                ? (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask)
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                                    ? (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask)
                                                    : 0U))))),8);
        bufp->chgBit(oldp+462,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4));
        bufp->chgIData(oldp+463,(((1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                         | ((~ ((2U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                   >> 3U))) 
                                            | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)))))
                                   ? 0U : vlSelf->Soc__DOT__core__DOT__arbitor__DOT___addr_T_6)),32);
        bufp->chgBit(oldp+464,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_5));
        bufp->chgQData(oldp+465,(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata),64);
        bufp->chgCData(oldp+467,(vlSelf->Soc__DOT__core__DOT__dereg_ld_type),3);
        bufp->chgIData(oldp+468,((IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)),32);
        bufp->chgBit(oldp+469,(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16));
        bufp->chgQData(oldp+470,(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T),64);
        bufp->chgBit(oldp+472,(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid));
        bufp->chgIData(oldp+473,((IData)(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T)),32);
        bufp->chgCData(oldp+474,(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask),8);
        bufp->chgQData(oldp+475,(vlSelf->Soc__DOT__core__DOT___Dcache_io_cpu_resp_bits_data),64);
        bufp->chgQData(oldp+477,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray)
                                   ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray
                                   : 0ULL)),64);
        bufp->chgCData(oldp+479,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask),8);
        bufp->chgBit(oldp+480,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3));
        bufp->chgBit(oldp+481,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0));
        bufp->chgQData(oldp+482,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray),64);
        bufp->chgBit(oldp+484,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray));
        bufp->chgSData(oldp+485,((0x1feU & ((IData)(
                                                    (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                     >> 3U)) 
                                            << 1U))),9);
        bufp->chgSData(oldp+486,((0x1ffU & ((IData)(1U) 
                                            + (0x1feU 
                                               & ((IData)(
                                                          (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                           >> 3U)) 
                                                  << 1U))))),9);
        bufp->chgQData(oldp+487,(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data),64);
        bufp->chgQData(oldp+489,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray)
                                   ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray
                                   : 0ULL)),64);
        bufp->chgCData(oldp+491,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask),8);
        bufp->chgQData(oldp+492,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray),64);
        bufp->chgBit(oldp+494,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray));
        bufp->chgBit(oldp+495,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_rw));
        bufp->chgIData(oldp+496,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_addr),32);
        bufp->chgQData(oldp+497,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_data),64);
        bufp->chgCData(oldp+499,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_mask),8);
        bufp->chgCData(oldp+500,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer),4);
        bufp->chgCData(oldp+501,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state),2);
        bufp->chgBit(oldp+502,(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6));
        bufp->chgSData(oldp+503,(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr),12);
        bufp->chgBit(oldp+504,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard) 
                                | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)))));
        bufp->chgBit(oldp+505,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
                                | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))));
        bufp->chgBit(oldp+506,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard) 
                                | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)))));
        bufp->chgCData(oldp+507,(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr),5);
        bufp->chgCData(oldp+508,(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr),5);
        bufp->chgQData(oldp+509,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
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
        bufp->chgCData(oldp+511,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_reg_waddr),5);
        bufp->chgBit(oldp+512,(((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                                & ((0x17U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                   & ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                      & ((0x6fU != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                         & ((0x67U 
                                             != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                            & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5))))))));
        bufp->chgCData(oldp+513,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op),6);
        bufp->chgCData(oldp+514,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
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
        bufp->chgCData(oldp+515,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0)
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
        bufp->chgQData(oldp+516,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T),64);
        bufp->chgCData(oldp+518,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type),3);
        bufp->chgQData(oldp+519,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T),64);
        bufp->chgSData(oldp+521,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen)
                                   ? (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr)
                                   : 0U)),12);
        bufp->chgBit(oldp+522,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen));
        bufp->chgBit(oldp+523,(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag));
        bufp->chgIData(oldp+524,(vlSelf->Soc__DOT__core__DOT__decode__DOT__inst),32);
        bufp->chgCData(oldp+525,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type),2);
        bufp->chgCData(oldp+526,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type),2);
        bufp->chgCData(oldp+527,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type),3);
        bufp->chgCData(oldp+528,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
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
        bufp->chgCData(oldp+529,(((((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0) 
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
        bufp->chgQData(oldp+530,(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm),64);
        bufp->chgBit(oldp+532,(((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_1) 
                                & (0x9fffffffU < vlSelf->Soc__DOT__core__DOT__ioformem__DOT___axi_req_bits_addr_T))));
        bufp->chgCData(oldp+533,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state),2);
        bufp->chgIData(oldp+534,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc),32);
        bufp->chgBit(oldp+535,(vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall));
        bufp->chgQData(oldp+536,(vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata),64);
        bufp->chgBit(oldp+538,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard));
        bufp->chgBit(oldp+539,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard));
        bufp->chgBit(oldp+540,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard));
        bufp->chgBit(oldp+541,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard));
        bufp->chgBit(oldp+542,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard));
        bufp->chgBit(oldp+543,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard));
        bufp->chgBit(oldp+544,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard));
        bufp->chgBit(oldp+545,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard));
        bufp->chgBit(oldp+546,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard));
        bufp->chgBit(oldp+547,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type))));
        bufp->chgBit(oldp+548,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_valid));
        bufp->chgQData(oldp+549,(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+551,(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc),32);
        bufp->chgBit(oldp+552,(vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen));
        bufp->chgBit(oldp+553,(((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1))));
        bufp->chgBit(oldp+554,(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid));
        bufp->chgQData(oldp+555,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data),64);
        bufp->chgBit(oldp+557,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_13));
        bufp->chgBit(oldp+558,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_15));
        bufp->chgBit(oldp+559,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20));
        bufp->chgQData(oldp+560,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data),64);
        bufp->chgBit(oldp+562,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_27));
        bufp->chgBit(oldp+563,(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid));
        bufp->chgQData(oldp+564,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data),64);
        bufp->chgBit(oldp+566,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3));
        bufp->chgBit(oldp+567,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0));
        bufp->chgBit(oldp+568,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_13));
        bufp->chgBit(oldp+569,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_15));
        bufp->chgBit(oldp+570,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20));
        bufp->chgQData(oldp+571,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data),64);
        bufp->chgBit(oldp+573,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_27));
        bufp->chgSData(oldp+574,((0x1feU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                            >> 2U))),9);
        bufp->chgSData(oldp+575,((0x1ffU & ((IData)(1U) 
                                            + (0x1feU 
                                               & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                  >> 2U))))),9);
        bufp->chgBit(oldp+576,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_valid));
        bufp->chgCData(oldp+577,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose),4);
        bufp->chgBit(oldp+578,(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1));
        bufp->chgBit(oldp+579,(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush));
        bufp->chgBit(oldp+580,(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0));
    }
    bufp->chgBit(oldp+581,(vlSelf->clock));
    bufp->chgBit(oldp+582,(vlSelf->reset));
    bufp->chgBit(oldp+583,((((~ ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
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
    bufp->chgQData(oldp+584,((((QData)((IData)(__Vtemp_h554321c1__0[
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
    bufp->chgBit(oldp+586,((1U & (~ ((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                                     | (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush))))));
    bufp->chgBit(oldp+587,(((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hd527f3ac__0) 
                            & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
                               & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                                  | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14)) 
                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                                        | ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                                           | (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag)))))))));
    bufp->chgBit(oldp+588,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)) 
                            & ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                               & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_19)) 
                                  & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                     | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)) 
                                        & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                           & (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)))))))));
    bufp->chgBit(oldp+589,(((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                            & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_19)) 
                               & ((~ ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                      & (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid))) 
                                  & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                     | (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                         & (IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)) 
                                        & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h02ae5b32__0) 
                                           | (~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3))))))))));
    bufp->chgIData(oldp+590,(((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2)
                               ? ((IData)(4U) + vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc)
                               : ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                                   ? ((IData)(4U) + vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)
                                   : vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc))),32);
    bufp->chgIData(oldp+591,((((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                               & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid))
                               ? (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)
                               : 0U)),32);
    bufp->chgBit(oldp+592,(vlSelf->Soc__DOT____Vcellinp__sram__ARESETn));
    bufp->chgIData(oldp+593,((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1) 
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
