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

extern const VlWide<32>/*1023:0*/ VSoc__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<96>/*3071:0*/ VSoc__ConstPool__CONST_hbca7a291_0;

void VSoc___024root__trace_chg_sub_0(VSoc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<32>/*1023:0*/ __Vtemp_ha6bbd6af__0;
    VlWide<32>/*1023:0*/ __Vtemp_h4f45b7d6__1;
    VlWide<8>/*255:0*/ __Vtemp_hfa2dc9d8__0;
    VlWide<8>/*255:0*/ __Vtemp_h4acefb0b__0;
    VlWide<32>/*1023:0*/ __Vtemp_h881a344c__0;
    VlWide<32>/*1023:0*/ __Vtemp_h62aaa50d__1;
    VlWide<32>/*1023:0*/ __Vtemp_h758ec451__0;
    VlWide<3>/*95:0*/ __Vtemp_h5ee83ed9__0;
    VlWide<8>/*255:0*/ __Vtemp_h78afa619__0;
    VlWide<8>/*255:0*/ __Vtemp_h3953c90b__0;
    VlWide<32>/*1023:0*/ __Vtemp_h6aa59cf1__0;
    VlWide<128>/*4095:0*/ __Vtemp_hf48eb399__0;
    VlWide<32>/*1023:0*/ __Vtemp_h65d5a9df__0;
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
        bufp->chgCData(oldp+6,(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0)
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
        bufp->chgBit(oldp+7,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_5));
        bufp->chgQData(oldp+8,(vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data),64);
        bufp->chgCData(oldp+10,(vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb),8);
        bufp->chgBit(oldp+11,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4));
        bufp->chgCData(oldp+12,((((2U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                  | ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                     | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))))
                                  ? 0U : ((IData)((8U 
                                                   != 
                                                   (9U 
                                                    & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                                    ? 0xfU
                                                    : 
                                                   (0xfU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                                     >> 2U))))))))),8);
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
        bufp->chgBit(oldp+54,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started));
        bufp->chgIData(oldp+55,(vlSelf->Soc__DOT__core__DOT__decode__DOT__inst),32);
        bufp->chgBit(oldp+56,(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16));
        bufp->chgQData(oldp+57,(((IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen)
                                  ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                                  : vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_h7d5adbc1__0)),64);
        bufp->chgBit(oldp+59,(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag));
        bufp->chgBit(oldp+60,((0U != ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type) 
                                      | (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))));
        bufp->chgQData(oldp+61,(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T),64);
        bufp->chgCData(oldp+63,(vlSelf->Soc__DOT__core__DOT__trap__DOT__state),3);
        bufp->chgBit(oldp+64,(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid));
        bufp->chgIData(oldp+65,((IData)(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T)),32);
        bufp->chgCData(oldp+66,(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask),8);
        bufp->chgBit(oldp+67,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_valid));
        bufp->chgQData(oldp+68,(vlSelf->Soc__DOT__core__DOT___Dcache_io_cpu_resp_bits_data),64);
        bufp->chgBit(oldp+70,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_valid));
        bufp->chgBit(oldp+71,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw));
        bufp->chgIData(oldp+72,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr),32);
        if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray) {
            if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN) {
                __Vtemp_ha6bbd6af__0[0U] = vlSelf->__VdfgTmp_h0981aadf__0[0U];
                __Vtemp_ha6bbd6af__0[1U] = vlSelf->__VdfgTmp_h0981aadf__0[1U];
                __Vtemp_ha6bbd6af__0[2U] = vlSelf->__VdfgTmp_h0981aadf__0[2U];
                __Vtemp_ha6bbd6af__0[3U] = vlSelf->__VdfgTmp_h0981aadf__0[3U];
                __Vtemp_ha6bbd6af__0[4U] = vlSelf->__VdfgTmp_h0981aadf__0[4U];
                __Vtemp_ha6bbd6af__0[5U] = vlSelf->__VdfgTmp_h0981aadf__0[5U];
                __Vtemp_ha6bbd6af__0[6U] = vlSelf->__VdfgTmp_h0981aadf__0[6U];
                __Vtemp_ha6bbd6af__0[7U] = vlSelf->__VdfgTmp_h0981aadf__0[7U];
                __Vtemp_ha6bbd6af__0[8U] = vlSelf->__VdfgTmp_h0981aadf__0[8U];
                __Vtemp_ha6bbd6af__0[9U] = vlSelf->__VdfgTmp_h0981aadf__0[9U];
                __Vtemp_ha6bbd6af__0[0xaU] = vlSelf->__VdfgTmp_h0981aadf__0[0xaU];
                __Vtemp_ha6bbd6af__0[0xbU] = vlSelf->__VdfgTmp_h0981aadf__0[0xbU];
                __Vtemp_ha6bbd6af__0[0xcU] = vlSelf->__VdfgTmp_h0981aadf__0[0xcU];
                __Vtemp_ha6bbd6af__0[0xdU] = vlSelf->__VdfgTmp_h0981aadf__0[0xdU];
                __Vtemp_ha6bbd6af__0[0xeU] = vlSelf->__VdfgTmp_h0981aadf__0[0xeU];
                __Vtemp_ha6bbd6af__0[0xfU] = vlSelf->__VdfgTmp_h0981aadf__0[0xfU];
                __Vtemp_ha6bbd6af__0[0x10U] = vlSelf->__VdfgTmp_h0981aadf__0[0x10U];
                __Vtemp_ha6bbd6af__0[0x11U] = vlSelf->__VdfgTmp_h0981aadf__0[0x11U];
                __Vtemp_ha6bbd6af__0[0x12U] = vlSelf->__VdfgTmp_h0981aadf__0[0x12U];
                __Vtemp_ha6bbd6af__0[0x13U] = vlSelf->__VdfgTmp_h0981aadf__0[0x13U];
                __Vtemp_ha6bbd6af__0[0x14U] = vlSelf->__VdfgTmp_h0981aadf__0[0x14U];
                __Vtemp_ha6bbd6af__0[0x15U] = vlSelf->__VdfgTmp_h0981aadf__0[0x15U];
                __Vtemp_ha6bbd6af__0[0x16U] = vlSelf->__VdfgTmp_h0981aadf__0[0x16U];
                __Vtemp_ha6bbd6af__0[0x17U] = vlSelf->__VdfgTmp_h0981aadf__0[0x17U];
                __Vtemp_ha6bbd6af__0[0x18U] = vlSelf->__VdfgTmp_h0981aadf__0[0x18U];
                __Vtemp_ha6bbd6af__0[0x19U] = vlSelf->__VdfgTmp_h0981aadf__0[0x19U];
                __Vtemp_ha6bbd6af__0[0x1aU] = vlSelf->__VdfgTmp_h0981aadf__0[0x1aU];
                __Vtemp_ha6bbd6af__0[0x1bU] = vlSelf->__VdfgTmp_h0981aadf__0[0x1bU];
                __Vtemp_ha6bbd6af__0[0x1cU] = vlSelf->__VdfgTmp_h0981aadf__0[0x1cU];
                __Vtemp_ha6bbd6af__0[0x1dU] = vlSelf->__VdfgTmp_h0981aadf__0[0x1dU];
                __Vtemp_ha6bbd6af__0[0x1eU] = vlSelf->__VdfgTmp_h0981aadf__0[0x1eU];
                __Vtemp_ha6bbd6af__0[0x1fU] = vlSelf->__VdfgTmp_h0981aadf__0[0x1fU];
            } else {
                __Vtemp_ha6bbd6af__0[0U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
                __Vtemp_ha6bbd6af__0[1U] = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
                __Vtemp_ha6bbd6af__0[2U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
                __Vtemp_ha6bbd6af__0[3U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
                __Vtemp_ha6bbd6af__0[4U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
                __Vtemp_ha6bbd6af__0[5U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
                __Vtemp_ha6bbd6af__0[6U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
                __Vtemp_ha6bbd6af__0[7U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
                __Vtemp_ha6bbd6af__0[8U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
                __Vtemp_ha6bbd6af__0[9U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
                __Vtemp_ha6bbd6af__0[0xaU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
                __Vtemp_ha6bbd6af__0[0xbU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
                __Vtemp_ha6bbd6af__0[0xcU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
                __Vtemp_ha6bbd6af__0[0xdU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
                __Vtemp_ha6bbd6af__0[0xeU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
                __Vtemp_ha6bbd6af__0[0xfU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
                __Vtemp_ha6bbd6af__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
                __Vtemp_ha6bbd6af__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
                __Vtemp_ha6bbd6af__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
                __Vtemp_ha6bbd6af__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
                __Vtemp_ha6bbd6af__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
                __Vtemp_ha6bbd6af__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
                __Vtemp_ha6bbd6af__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
                __Vtemp_ha6bbd6af__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
                __Vtemp_ha6bbd6af__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
                __Vtemp_ha6bbd6af__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
                __Vtemp_ha6bbd6af__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
                __Vtemp_ha6bbd6af__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
                __Vtemp_ha6bbd6af__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
                __Vtemp_ha6bbd6af__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
                __Vtemp_ha6bbd6af__0[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
                __Vtemp_ha6bbd6af__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
            }
        } else {
            __Vtemp_ha6bbd6af__0[0U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
            __Vtemp_ha6bbd6af__0[1U] = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
            __Vtemp_ha6bbd6af__0[2U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
            __Vtemp_ha6bbd6af__0[3U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
            __Vtemp_ha6bbd6af__0[4U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
            __Vtemp_ha6bbd6af__0[5U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
            __Vtemp_ha6bbd6af__0[6U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
            __Vtemp_ha6bbd6af__0[7U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
            __Vtemp_ha6bbd6af__0[8U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
            __Vtemp_ha6bbd6af__0[9U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
            __Vtemp_ha6bbd6af__0[0xaU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
            __Vtemp_ha6bbd6af__0[0xbU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
            __Vtemp_ha6bbd6af__0[0xcU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
            __Vtemp_ha6bbd6af__0[0xdU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
            __Vtemp_ha6bbd6af__0[0xeU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
            __Vtemp_ha6bbd6af__0[0xfU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
            __Vtemp_ha6bbd6af__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
            __Vtemp_ha6bbd6af__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
            __Vtemp_ha6bbd6af__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
            __Vtemp_ha6bbd6af__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
            __Vtemp_ha6bbd6af__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
            __Vtemp_ha6bbd6af__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
            __Vtemp_ha6bbd6af__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
            __Vtemp_ha6bbd6af__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
            __Vtemp_ha6bbd6af__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
            __Vtemp_ha6bbd6af__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
            __Vtemp_ha6bbd6af__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
            __Vtemp_ha6bbd6af__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
            __Vtemp_ha6bbd6af__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
            __Vtemp_ha6bbd6af__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
            __Vtemp_ha6bbd6af__0[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
            __Vtemp_ha6bbd6af__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        }
        bufp->chgWData(oldp+73,(__Vtemp_ha6bbd6af__0),1024);
        bufp->chgCData(oldp+105,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask),8);
        bufp->chgCData(oldp+106,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state),3);
        bufp->chgBit(oldp+107,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3));
        bufp->chgIData(oldp+108,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__tag),21);
        bufp->chgCData(oldp+109,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index),4);
        bufp->chgCData(oldp+110,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset),7);
        bufp->chgIData(oldp+111,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid),32);
        bufp->chgIData(oldp+112,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty),32);
        bufp->chgIData(oldp+113,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace),32);
        bufp->chgBit(oldp+114,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0));
        bufp->chgBit(oldp+115,(((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                                 [(0x1fU & ((IData)(1U) 
                                            + (0x1eU 
                                               & ((IData)(
                                                          (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                           >> 7U)) 
                                                  << 1U))))] 
                                 == (0x1fffffU & (IData)(
                                                         (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                          >> 0xbU)))) 
                                & ((0x1fU >= (0x3fU 
                                              & ((IData)(1U) 
                                                 + 
                                                 (0x1eU 
                                                  & ((IData)(
                                                             (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                              >> 7U)) 
                                                     << 1U)))))
                                    ? (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid 
                                       >> (0x3fU & 
                                           ((IData)(1U) 
                                            + (0x1eU 
                                               & ((IData)(
                                                          (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                           >> 7U)) 
                                                  << 1U)))))
                                    : 0U))));
        if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN) {
            __Vtemp_h4f45b7d6__1[0U] = vlSelf->__VdfgTmp_h0981aadf__0[0U];
            __Vtemp_h4f45b7d6__1[1U] = vlSelf->__VdfgTmp_h0981aadf__0[1U];
            __Vtemp_h4f45b7d6__1[2U] = vlSelf->__VdfgTmp_h0981aadf__0[2U];
            __Vtemp_h4f45b7d6__1[3U] = vlSelf->__VdfgTmp_h0981aadf__0[3U];
            __Vtemp_h4f45b7d6__1[4U] = vlSelf->__VdfgTmp_h0981aadf__0[4U];
            __Vtemp_h4f45b7d6__1[5U] = vlSelf->__VdfgTmp_h0981aadf__0[5U];
            __Vtemp_h4f45b7d6__1[6U] = vlSelf->__VdfgTmp_h0981aadf__0[6U];
            __Vtemp_h4f45b7d6__1[7U] = vlSelf->__VdfgTmp_h0981aadf__0[7U];
            __Vtemp_h4f45b7d6__1[8U] = vlSelf->__VdfgTmp_h0981aadf__0[8U];
            __Vtemp_h4f45b7d6__1[9U] = vlSelf->__VdfgTmp_h0981aadf__0[9U];
            __Vtemp_h4f45b7d6__1[0xaU] = vlSelf->__VdfgTmp_h0981aadf__0[0xaU];
            __Vtemp_h4f45b7d6__1[0xbU] = vlSelf->__VdfgTmp_h0981aadf__0[0xbU];
            __Vtemp_h4f45b7d6__1[0xcU] = vlSelf->__VdfgTmp_h0981aadf__0[0xcU];
            __Vtemp_h4f45b7d6__1[0xdU] = vlSelf->__VdfgTmp_h0981aadf__0[0xdU];
            __Vtemp_h4f45b7d6__1[0xeU] = vlSelf->__VdfgTmp_h0981aadf__0[0xeU];
            __Vtemp_h4f45b7d6__1[0xfU] = vlSelf->__VdfgTmp_h0981aadf__0[0xfU];
            __Vtemp_h4f45b7d6__1[0x10U] = vlSelf->__VdfgTmp_h0981aadf__0[0x10U];
            __Vtemp_h4f45b7d6__1[0x11U] = vlSelf->__VdfgTmp_h0981aadf__0[0x11U];
            __Vtemp_h4f45b7d6__1[0x12U] = vlSelf->__VdfgTmp_h0981aadf__0[0x12U];
            __Vtemp_h4f45b7d6__1[0x13U] = vlSelf->__VdfgTmp_h0981aadf__0[0x13U];
            __Vtemp_h4f45b7d6__1[0x14U] = vlSelf->__VdfgTmp_h0981aadf__0[0x14U];
            __Vtemp_h4f45b7d6__1[0x15U] = vlSelf->__VdfgTmp_h0981aadf__0[0x15U];
            __Vtemp_h4f45b7d6__1[0x16U] = vlSelf->__VdfgTmp_h0981aadf__0[0x16U];
            __Vtemp_h4f45b7d6__1[0x17U] = vlSelf->__VdfgTmp_h0981aadf__0[0x17U];
            __Vtemp_h4f45b7d6__1[0x18U] = vlSelf->__VdfgTmp_h0981aadf__0[0x18U];
            __Vtemp_h4f45b7d6__1[0x19U] = vlSelf->__VdfgTmp_h0981aadf__0[0x19U];
            __Vtemp_h4f45b7d6__1[0x1aU] = vlSelf->__VdfgTmp_h0981aadf__0[0x1aU];
            __Vtemp_h4f45b7d6__1[0x1bU] = vlSelf->__VdfgTmp_h0981aadf__0[0x1bU];
            __Vtemp_h4f45b7d6__1[0x1cU] = vlSelf->__VdfgTmp_h0981aadf__0[0x1cU];
            __Vtemp_h4f45b7d6__1[0x1dU] = vlSelf->__VdfgTmp_h0981aadf__0[0x1dU];
            __Vtemp_h4f45b7d6__1[0x1eU] = vlSelf->__VdfgTmp_h0981aadf__0[0x1eU];
            __Vtemp_h4f45b7d6__1[0x1fU] = vlSelf->__VdfgTmp_h0981aadf__0[0x1fU];
        } else {
            __Vtemp_h4f45b7d6__1[0U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
            __Vtemp_h4f45b7d6__1[1U] = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
            __Vtemp_h4f45b7d6__1[2U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
            __Vtemp_h4f45b7d6__1[3U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
            __Vtemp_h4f45b7d6__1[4U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
            __Vtemp_h4f45b7d6__1[5U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
            __Vtemp_h4f45b7d6__1[6U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
            __Vtemp_h4f45b7d6__1[7U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
            __Vtemp_h4f45b7d6__1[8U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
            __Vtemp_h4f45b7d6__1[9U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
            __Vtemp_h4f45b7d6__1[0xaU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
            __Vtemp_h4f45b7d6__1[0xbU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
            __Vtemp_h4f45b7d6__1[0xcU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
            __Vtemp_h4f45b7d6__1[0xdU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
            __Vtemp_h4f45b7d6__1[0xeU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
            __Vtemp_h4f45b7d6__1[0xfU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
            __Vtemp_h4f45b7d6__1[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
            __Vtemp_h4f45b7d6__1[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
            __Vtemp_h4f45b7d6__1[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
            __Vtemp_h4f45b7d6__1[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
            __Vtemp_h4f45b7d6__1[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
            __Vtemp_h4f45b7d6__1[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
            __Vtemp_h4f45b7d6__1[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
            __Vtemp_h4f45b7d6__1[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
            __Vtemp_h4f45b7d6__1[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
            __Vtemp_h4f45b7d6__1[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
            __Vtemp_h4f45b7d6__1[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
            __Vtemp_h4f45b7d6__1[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
            __Vtemp_h4f45b7d6__1[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
            __Vtemp_h4f45b7d6__1[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
            __Vtemp_h4f45b7d6__1[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
            __Vtemp_h4f45b7d6__1[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        }
        bufp->chgWData(oldp+116,(__Vtemp_h4f45b7d6__1),1024);
        bufp->chgBit(oldp+148,((1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))
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
        bufp->chgIData(oldp+149,((((0U == (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                            << 5U)))
                                    ? 0U : (__Vtemp_hfa2dc9d8__0[
                                            (((IData)(0x1fU) 
                                              + (0xffU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                    << 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 5U))))) 
                                  | (__Vtemp_hfa2dc9d8__0[
                                     (7U & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))] 
                                     >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                  << 5U))))),32);
        bufp->chgBit(oldp+150,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray));
        bufp->chgBit(oldp+151,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim));
        bufp->chgIData(oldp+152,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr),32);
        bufp->chgQData(oldp+153,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data),64);
        bufp->chgCData(oldp+155,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask),8);
        bufp->chgBit(oldp+156,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inst_type));
        bufp->chgBit(oldp+157,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum));
        bufp->chgQData(oldp+158,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_bits_data),64);
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
        bufp->chgCData(oldp+160,((0x1fU & (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                 << 5U)))
                                             ? 0U : 
                                            (__Vtemp_h4acefb0b__0[
                                             (((IData)(4U) 
                                               + (0xffU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 5U))))) 
                                           | (__Vtemp_h4acefb0b__0[
                                              (7U & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 5U)))))),5);
        bufp->chgCData(oldp+161,((0x1fU & ((IData)(1U) 
                                           + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                              << 1U)))),5);
        bufp->chgCData(oldp+162,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                  << 1U)),5);
        bufp->chgBit(oldp+163,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum))));
        bufp->chgWData(oldp+164,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data),1024);
        bufp->chgBit(oldp+196,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum)) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0))));
        bufp->chgWData(oldp+197,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[0]),1024);
        bufp->chgWData(oldp+229,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[1]),1024);
        bufp->chgWData(oldp+261,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[2]),1024);
        bufp->chgWData(oldp+293,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[3]),1024);
        bufp->chgWData(oldp+325,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[4]),1024);
        bufp->chgWData(oldp+357,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[5]),1024);
        bufp->chgWData(oldp+389,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[6]),1024);
        bufp->chgWData(oldp+421,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[7]),1024);
        bufp->chgWData(oldp+453,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[8]),1024);
        bufp->chgWData(oldp+485,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[9]),1024);
        bufp->chgWData(oldp+517,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[10]),1024);
        bufp->chgWData(oldp+549,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[11]),1024);
        bufp->chgWData(oldp+581,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[12]),1024);
        bufp->chgWData(oldp+613,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[13]),1024);
        bufp->chgWData(oldp+645,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[14]),1024);
        bufp->chgWData(oldp+677,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[15]),1024);
        bufp->chgWData(oldp+709,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[16]),1024);
        bufp->chgWData(oldp+741,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[17]),1024);
        bufp->chgWData(oldp+773,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[18]),1024);
        bufp->chgWData(oldp+805,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[19]),1024);
        bufp->chgWData(oldp+837,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[20]),1024);
        bufp->chgWData(oldp+869,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[21]),1024);
        bufp->chgWData(oldp+901,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[22]),1024);
        bufp->chgWData(oldp+933,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[23]),1024);
        bufp->chgWData(oldp+965,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[24]),1024);
        bufp->chgWData(oldp+997,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[25]),1024);
        bufp->chgWData(oldp+1029,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[26]),1024);
        bufp->chgWData(oldp+1061,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[27]),1024);
        bufp->chgWData(oldp+1093,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[28]),1024);
        bufp->chgWData(oldp+1125,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[29]),1024);
        bufp->chgWData(oldp+1157,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[30]),1024);
        bufp->chgWData(oldp+1189,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[31]),1024);
        bufp->chgCData(oldp+1221,((0x1fU & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                             << 1U) 
                                            + (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN)))),5);
        bufp->chgBit(oldp+1222,(((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                 & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                    & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8))));
        bufp->chgCData(oldp+1223,((0x1fU & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                             << 1U) 
                                            + (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim)))),5);
        bufp->chgBit(oldp+1224,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8854f984__0) 
                                 & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))));
        bufp->chgBit(oldp+1225,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8ecd23a9__0) 
                                 & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                    & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8))));
        bufp->chgBit(oldp+1226,(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca93995__0) 
                                 & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))));
        bufp->chgCData(oldp+1227,((0x1eU & ((IData)(
                                                    (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                     >> 7U)) 
                                            << 1U))),5);
        bufp->chgCData(oldp+1228,((0x1fU & ((IData)(1U) 
                                            + (0x1eU 
                                               & ((IData)(
                                                          (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                           >> 7U)) 
                                                  << 1U))))),5);
        bufp->chgIData(oldp+1229,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                    & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                       & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8))
                                    ? vlSelf->__VdfgTmp_h10ac77a7__0
                                    : 0U)),21);
        bufp->chgIData(oldp+1230,((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8854f984__0) 
                                    & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))
                                    ? vlSelf->__VdfgTmp_h4fb76d38__0
                                    : 0U)),21);
        bufp->chgIData(oldp+1231,((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8ecd23a9__0) 
                                    & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                       & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8))
                                    ? vlSelf->__VdfgTmp_h10ac77a7__0
                                    : 0U)),21);
        bufp->chgIData(oldp+1232,((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca93995__0) 
                                    & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))
                                    ? vlSelf->__VdfgTmp_h4fb76d38__0
                                    : 0U)),21);
        bufp->chgIData(oldp+1233,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                                  [(0x1eU & ((IData)(
                                                     (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                      >> 7U)) 
                                             << 1U))]),21);
        bufp->chgIData(oldp+1234,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
                                  [(0x1fU & ((IData)(1U) 
                                             + (0x1eU 
                                                & ((IData)(
                                                           (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                            >> 7U)) 
                                                   << 1U))))]),21);
        bufp->chgIData(oldp+1235,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[0]),21);
        bufp->chgIData(oldp+1236,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[1]),21);
        bufp->chgIData(oldp+1237,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[2]),21);
        bufp->chgIData(oldp+1238,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[3]),21);
        bufp->chgIData(oldp+1239,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[4]),21);
        bufp->chgIData(oldp+1240,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[5]),21);
        bufp->chgIData(oldp+1241,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[6]),21);
        bufp->chgIData(oldp+1242,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[7]),21);
        bufp->chgIData(oldp+1243,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[8]),21);
        bufp->chgIData(oldp+1244,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[9]),21);
        bufp->chgIData(oldp+1245,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[10]),21);
        bufp->chgIData(oldp+1246,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[11]),21);
        bufp->chgIData(oldp+1247,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[12]),21);
        bufp->chgIData(oldp+1248,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[13]),21);
        bufp->chgIData(oldp+1249,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[14]),21);
        bufp->chgIData(oldp+1250,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[15]),21);
        bufp->chgIData(oldp+1251,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[16]),21);
        bufp->chgIData(oldp+1252,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[17]),21);
        bufp->chgIData(oldp+1253,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[18]),21);
        bufp->chgIData(oldp+1254,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[19]),21);
        bufp->chgIData(oldp+1255,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[20]),21);
        bufp->chgIData(oldp+1256,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[21]),21);
        bufp->chgIData(oldp+1257,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[22]),21);
        bufp->chgIData(oldp+1258,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[23]),21);
        bufp->chgIData(oldp+1259,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[24]),21);
        bufp->chgIData(oldp+1260,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[25]),21);
        bufp->chgIData(oldp+1261,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[26]),21);
        bufp->chgIData(oldp+1262,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[27]),21);
        bufp->chgIData(oldp+1263,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[28]),21);
        bufp->chgIData(oldp+1264,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[29]),21);
        bufp->chgIData(oldp+1265,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[30]),21);
        bufp->chgIData(oldp+1266,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[31]),21);
        bufp->chgBit(oldp+1267,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid));
        bufp->chgQData(oldp+1268,(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data),64);
        bufp->chgBit(oldp+1270,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_valid));
        bufp->chgBit(oldp+1271,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw));
        bufp->chgIData(oldp+1272,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr),32);
        if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray) {
            if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN) {
                __Vtemp_h881a344c__0[0U] = vlSelf->__VdfgTmp_hc4d32ff7__0[0U];
                __Vtemp_h881a344c__0[1U] = vlSelf->__VdfgTmp_hc4d32ff7__0[1U];
                __Vtemp_h881a344c__0[2U] = vlSelf->__VdfgTmp_hc4d32ff7__0[2U];
                __Vtemp_h881a344c__0[3U] = vlSelf->__VdfgTmp_hc4d32ff7__0[3U];
                __Vtemp_h881a344c__0[4U] = vlSelf->__VdfgTmp_hc4d32ff7__0[4U];
                __Vtemp_h881a344c__0[5U] = vlSelf->__VdfgTmp_hc4d32ff7__0[5U];
                __Vtemp_h881a344c__0[6U] = vlSelf->__VdfgTmp_hc4d32ff7__0[6U];
                __Vtemp_h881a344c__0[7U] = vlSelf->__VdfgTmp_hc4d32ff7__0[7U];
                __Vtemp_h881a344c__0[8U] = vlSelf->__VdfgTmp_hc4d32ff7__0[8U];
                __Vtemp_h881a344c__0[9U] = vlSelf->__VdfgTmp_hc4d32ff7__0[9U];
                __Vtemp_h881a344c__0[0xaU] = vlSelf->__VdfgTmp_hc4d32ff7__0[0xaU];
                __Vtemp_h881a344c__0[0xbU] = vlSelf->__VdfgTmp_hc4d32ff7__0[0xbU];
                __Vtemp_h881a344c__0[0xcU] = vlSelf->__VdfgTmp_hc4d32ff7__0[0xcU];
                __Vtemp_h881a344c__0[0xdU] = vlSelf->__VdfgTmp_hc4d32ff7__0[0xdU];
                __Vtemp_h881a344c__0[0xeU] = vlSelf->__VdfgTmp_hc4d32ff7__0[0xeU];
                __Vtemp_h881a344c__0[0xfU] = vlSelf->__VdfgTmp_hc4d32ff7__0[0xfU];
                __Vtemp_h881a344c__0[0x10U] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x10U];
                __Vtemp_h881a344c__0[0x11U] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x11U];
                __Vtemp_h881a344c__0[0x12U] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x12U];
                __Vtemp_h881a344c__0[0x13U] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x13U];
                __Vtemp_h881a344c__0[0x14U] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x14U];
                __Vtemp_h881a344c__0[0x15U] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x15U];
                __Vtemp_h881a344c__0[0x16U] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x16U];
                __Vtemp_h881a344c__0[0x17U] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x17U];
                __Vtemp_h881a344c__0[0x18U] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x18U];
                __Vtemp_h881a344c__0[0x19U] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x19U];
                __Vtemp_h881a344c__0[0x1aU] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x1aU];
                __Vtemp_h881a344c__0[0x1bU] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x1bU];
                __Vtemp_h881a344c__0[0x1cU] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x1cU];
                __Vtemp_h881a344c__0[0x1dU] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x1dU];
                __Vtemp_h881a344c__0[0x1eU] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x1eU];
                __Vtemp_h881a344c__0[0x1fU] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x1fU];
            } else {
                __Vtemp_h881a344c__0[0U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
                __Vtemp_h881a344c__0[1U] = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
                __Vtemp_h881a344c__0[2U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
                __Vtemp_h881a344c__0[3U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
                __Vtemp_h881a344c__0[4U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
                __Vtemp_h881a344c__0[5U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
                __Vtemp_h881a344c__0[6U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
                __Vtemp_h881a344c__0[7U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
                __Vtemp_h881a344c__0[8U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
                __Vtemp_h881a344c__0[9U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
                __Vtemp_h881a344c__0[0xaU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
                __Vtemp_h881a344c__0[0xbU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
                __Vtemp_h881a344c__0[0xcU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
                __Vtemp_h881a344c__0[0xdU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
                __Vtemp_h881a344c__0[0xeU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
                __Vtemp_h881a344c__0[0xfU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
                __Vtemp_h881a344c__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
                __Vtemp_h881a344c__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
                __Vtemp_h881a344c__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
                __Vtemp_h881a344c__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
                __Vtemp_h881a344c__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
                __Vtemp_h881a344c__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
                __Vtemp_h881a344c__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
                __Vtemp_h881a344c__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
                __Vtemp_h881a344c__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
                __Vtemp_h881a344c__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
                __Vtemp_h881a344c__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
                __Vtemp_h881a344c__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
                __Vtemp_h881a344c__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
                __Vtemp_h881a344c__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
                __Vtemp_h881a344c__0[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
                __Vtemp_h881a344c__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
            }
        } else {
            __Vtemp_h881a344c__0[0U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
            __Vtemp_h881a344c__0[1U] = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
            __Vtemp_h881a344c__0[2U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
            __Vtemp_h881a344c__0[3U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
            __Vtemp_h881a344c__0[4U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
            __Vtemp_h881a344c__0[5U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
            __Vtemp_h881a344c__0[6U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
            __Vtemp_h881a344c__0[7U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
            __Vtemp_h881a344c__0[8U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
            __Vtemp_h881a344c__0[9U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
            __Vtemp_h881a344c__0[0xaU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
            __Vtemp_h881a344c__0[0xbU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
            __Vtemp_h881a344c__0[0xcU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
            __Vtemp_h881a344c__0[0xdU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
            __Vtemp_h881a344c__0[0xeU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
            __Vtemp_h881a344c__0[0xfU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
            __Vtemp_h881a344c__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
            __Vtemp_h881a344c__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
            __Vtemp_h881a344c__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
            __Vtemp_h881a344c__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
            __Vtemp_h881a344c__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
            __Vtemp_h881a344c__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
            __Vtemp_h881a344c__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
            __Vtemp_h881a344c__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
            __Vtemp_h881a344c__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
            __Vtemp_h881a344c__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
            __Vtemp_h881a344c__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
            __Vtemp_h881a344c__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
            __Vtemp_h881a344c__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
            __Vtemp_h881a344c__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
            __Vtemp_h881a344c__0[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
            __Vtemp_h881a344c__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        }
        bufp->chgWData(oldp+1273,(__Vtemp_h881a344c__0),1024);
        bufp->chgCData(oldp+1305,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask),8);
        bufp->chgCData(oldp+1306,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state),3);
        bufp->chgIData(oldp+1307,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__tag),21);
        bufp->chgCData(oldp+1308,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index),4);
        bufp->chgCData(oldp+1309,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset),7);
        bufp->chgIData(oldp+1310,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid),32);
        bufp->chgIData(oldp+1311,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty),32);
        bufp->chgIData(oldp+1312,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace),32);
        if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN) {
            __Vtemp_h62aaa50d__1[0U] = vlSelf->__VdfgTmp_hc4d32ff7__0[0U];
            __Vtemp_h62aaa50d__1[1U] = vlSelf->__VdfgTmp_hc4d32ff7__0[1U];
            __Vtemp_h62aaa50d__1[2U] = vlSelf->__VdfgTmp_hc4d32ff7__0[2U];
            __Vtemp_h62aaa50d__1[3U] = vlSelf->__VdfgTmp_hc4d32ff7__0[3U];
            __Vtemp_h62aaa50d__1[4U] = vlSelf->__VdfgTmp_hc4d32ff7__0[4U];
            __Vtemp_h62aaa50d__1[5U] = vlSelf->__VdfgTmp_hc4d32ff7__0[5U];
            __Vtemp_h62aaa50d__1[6U] = vlSelf->__VdfgTmp_hc4d32ff7__0[6U];
            __Vtemp_h62aaa50d__1[7U] = vlSelf->__VdfgTmp_hc4d32ff7__0[7U];
            __Vtemp_h62aaa50d__1[8U] = vlSelf->__VdfgTmp_hc4d32ff7__0[8U];
            __Vtemp_h62aaa50d__1[9U] = vlSelf->__VdfgTmp_hc4d32ff7__0[9U];
            __Vtemp_h62aaa50d__1[0xaU] = vlSelf->__VdfgTmp_hc4d32ff7__0[0xaU];
            __Vtemp_h62aaa50d__1[0xbU] = vlSelf->__VdfgTmp_hc4d32ff7__0[0xbU];
            __Vtemp_h62aaa50d__1[0xcU] = vlSelf->__VdfgTmp_hc4d32ff7__0[0xcU];
            __Vtemp_h62aaa50d__1[0xdU] = vlSelf->__VdfgTmp_hc4d32ff7__0[0xdU];
            __Vtemp_h62aaa50d__1[0xeU] = vlSelf->__VdfgTmp_hc4d32ff7__0[0xeU];
            __Vtemp_h62aaa50d__1[0xfU] = vlSelf->__VdfgTmp_hc4d32ff7__0[0xfU];
            __Vtemp_h62aaa50d__1[0x10U] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x10U];
            __Vtemp_h62aaa50d__1[0x11U] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x11U];
            __Vtemp_h62aaa50d__1[0x12U] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x12U];
            __Vtemp_h62aaa50d__1[0x13U] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x13U];
            __Vtemp_h62aaa50d__1[0x14U] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x14U];
            __Vtemp_h62aaa50d__1[0x15U] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x15U];
            __Vtemp_h62aaa50d__1[0x16U] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x16U];
            __Vtemp_h62aaa50d__1[0x17U] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x17U];
            __Vtemp_h62aaa50d__1[0x18U] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x18U];
            __Vtemp_h62aaa50d__1[0x19U] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x19U];
            __Vtemp_h62aaa50d__1[0x1aU] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x1aU];
            __Vtemp_h62aaa50d__1[0x1bU] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x1bU];
            __Vtemp_h62aaa50d__1[0x1cU] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x1cU];
            __Vtemp_h62aaa50d__1[0x1dU] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x1dU];
            __Vtemp_h62aaa50d__1[0x1eU] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x1eU];
            __Vtemp_h62aaa50d__1[0x1fU] = vlSelf->__VdfgTmp_hc4d32ff7__0[0x1fU];
        } else {
            __Vtemp_h62aaa50d__1[0U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
            __Vtemp_h62aaa50d__1[1U] = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
            __Vtemp_h62aaa50d__1[2U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
            __Vtemp_h62aaa50d__1[3U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
            __Vtemp_h62aaa50d__1[4U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
            __Vtemp_h62aaa50d__1[5U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
            __Vtemp_h62aaa50d__1[6U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
            __Vtemp_h62aaa50d__1[7U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
            __Vtemp_h62aaa50d__1[8U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
            __Vtemp_h62aaa50d__1[9U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
            __Vtemp_h62aaa50d__1[0xaU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
            __Vtemp_h62aaa50d__1[0xbU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
            __Vtemp_h62aaa50d__1[0xcU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
            __Vtemp_h62aaa50d__1[0xdU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
            __Vtemp_h62aaa50d__1[0xeU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
            __Vtemp_h62aaa50d__1[0xfU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
            __Vtemp_h62aaa50d__1[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
            __Vtemp_h62aaa50d__1[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
            __Vtemp_h62aaa50d__1[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
            __Vtemp_h62aaa50d__1[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
            __Vtemp_h62aaa50d__1[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
            __Vtemp_h62aaa50d__1[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
            __Vtemp_h62aaa50d__1[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
            __Vtemp_h62aaa50d__1[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
            __Vtemp_h62aaa50d__1[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
            __Vtemp_h62aaa50d__1[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
            __Vtemp_h62aaa50d__1[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
            __Vtemp_h62aaa50d__1[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
            __Vtemp_h62aaa50d__1[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
            __Vtemp_h62aaa50d__1[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
            __Vtemp_h62aaa50d__1[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
            __Vtemp_h62aaa50d__1[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        }
        bufp->chgWData(oldp+1313,(__Vtemp_h62aaa50d__1),1024);
        bufp->chgBit(oldp+1345,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray));
        bufp->chgBit(oldp+1346,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim));
        bufp->chgIData(oldp+1347,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr),32);
        bufp->chgQData(oldp+1348,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data),64);
        bufp->chgCData(oldp+1350,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask),8);
        bufp->chgBit(oldp+1351,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inst_type));
        bufp->chgBit(oldp+1352,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum));
        bufp->chgQData(oldp+1353,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data),64);
        bufp->chgCData(oldp+1355,((0x1fU & ((IData)(1U) 
                                            + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                               << 1U)))),5);
        bufp->chgCData(oldp+1356,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                   << 1U)),5);
        bufp->chgBit(oldp+1357,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0) 
                                 & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum))));
        bufp->chgWData(oldp+1358,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data),1024);
        bufp->chgBit(oldp+1390,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum)) 
                                 & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0))));
        bufp->chgWData(oldp+1391,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[0]),1024);
        bufp->chgWData(oldp+1423,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[1]),1024);
        bufp->chgWData(oldp+1455,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[2]),1024);
        bufp->chgWData(oldp+1487,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[3]),1024);
        bufp->chgWData(oldp+1519,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[4]),1024);
        bufp->chgWData(oldp+1551,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[5]),1024);
        bufp->chgWData(oldp+1583,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[6]),1024);
        bufp->chgWData(oldp+1615,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[7]),1024);
        bufp->chgWData(oldp+1647,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[8]),1024);
        bufp->chgWData(oldp+1679,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[9]),1024);
        bufp->chgWData(oldp+1711,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[10]),1024);
        bufp->chgWData(oldp+1743,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[11]),1024);
        bufp->chgWData(oldp+1775,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[12]),1024);
        bufp->chgWData(oldp+1807,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[13]),1024);
        bufp->chgWData(oldp+1839,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[14]),1024);
        bufp->chgWData(oldp+1871,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[15]),1024);
        bufp->chgWData(oldp+1903,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[16]),1024);
        bufp->chgWData(oldp+1935,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[17]),1024);
        bufp->chgWData(oldp+1967,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[18]),1024);
        bufp->chgWData(oldp+1999,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[19]),1024);
        bufp->chgWData(oldp+2031,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[20]),1024);
        bufp->chgWData(oldp+2063,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[21]),1024);
        bufp->chgWData(oldp+2095,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[22]),1024);
        bufp->chgWData(oldp+2127,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[23]),1024);
        bufp->chgWData(oldp+2159,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[24]),1024);
        bufp->chgWData(oldp+2191,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[25]),1024);
        bufp->chgWData(oldp+2223,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[26]),1024);
        bufp->chgWData(oldp+2255,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[27]),1024);
        bufp->chgWData(oldp+2287,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[28]),1024);
        bufp->chgWData(oldp+2319,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[29]),1024);
        bufp->chgWData(oldp+2351,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[30]),1024);
        bufp->chgWData(oldp+2383,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[31]),1024);
        bufp->chgCData(oldp+2415,((0x1fU & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                             << 1U) 
                                            + (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN)))),5);
        bufp->chgBit(oldp+2416,(((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                 & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                    & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8))));
        bufp->chgCData(oldp+2417,((0x1fU & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                             << 1U) 
                                            + (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim)))),5);
        bufp->chgBit(oldp+2418,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8854f984__0) 
                                 & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))));
        bufp->chgBit(oldp+2419,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8ecd23a9__0) 
                                 & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                    & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8))));
        bufp->chgBit(oldp+2420,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca93995__0) 
                                 & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))));
        bufp->chgIData(oldp+2421,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                    & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                       & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8))
                                    ? vlSelf->__VdfgTmp_h2a73f274__0
                                    : 0U)),21);
        bufp->chgIData(oldp+2422,((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8854f984__0) 
                                    & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))
                                    ? vlSelf->__VdfgTmp_ha81e39ce__0
                                    : 0U)),21);
        bufp->chgIData(oldp+2423,((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8ecd23a9__0) 
                                    & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                       & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8))
                                    ? vlSelf->__VdfgTmp_h2a73f274__0
                                    : 0U)),21);
        bufp->chgIData(oldp+2424,((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca93995__0) 
                                    & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))
                                    ? vlSelf->__VdfgTmp_ha81e39ce__0
                                    : 0U)),21);
        bufp->chgIData(oldp+2425,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[0]),21);
        bufp->chgIData(oldp+2426,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[1]),21);
        bufp->chgIData(oldp+2427,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[2]),21);
        bufp->chgIData(oldp+2428,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[3]),21);
        bufp->chgIData(oldp+2429,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[4]),21);
        bufp->chgIData(oldp+2430,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[5]),21);
        bufp->chgIData(oldp+2431,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[6]),21);
        bufp->chgIData(oldp+2432,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[7]),21);
        bufp->chgIData(oldp+2433,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[8]),21);
        bufp->chgIData(oldp+2434,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[9]),21);
        bufp->chgIData(oldp+2435,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[10]),21);
        bufp->chgIData(oldp+2436,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[11]),21);
        bufp->chgIData(oldp+2437,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[12]),21);
        bufp->chgIData(oldp+2438,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[13]),21);
        bufp->chgIData(oldp+2439,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[14]),21);
        bufp->chgIData(oldp+2440,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[15]),21);
        bufp->chgIData(oldp+2441,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[16]),21);
        bufp->chgIData(oldp+2442,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[17]),21);
        bufp->chgIData(oldp+2443,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[18]),21);
        bufp->chgIData(oldp+2444,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[19]),21);
        bufp->chgIData(oldp+2445,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[20]),21);
        bufp->chgIData(oldp+2446,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[21]),21);
        bufp->chgIData(oldp+2447,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[22]),21);
        bufp->chgIData(oldp+2448,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[23]),21);
        bufp->chgIData(oldp+2449,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[24]),21);
        bufp->chgIData(oldp+2450,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[25]),21);
        bufp->chgIData(oldp+2451,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[26]),21);
        bufp->chgIData(oldp+2452,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[27]),21);
        bufp->chgIData(oldp+2453,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[28]),21);
        bufp->chgIData(oldp+2454,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[29]),21);
        bufp->chgIData(oldp+2455,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[30]),21);
        bufp->chgIData(oldp+2456,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[31]),21);
        bufp->chgBit(oldp+2457,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_rw));
        bufp->chgIData(oldp+2458,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_addr),32);
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
        bufp->chgWData(oldp+2459,(__Vtemp_h758ec451__0),1024);
        bufp->chgCData(oldp+2491,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_mask),8);
        bufp->chgCData(oldp+2492,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer),4);
        bufp->chgCData(oldp+2493,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__mask),8);
        bufp->chgCData(oldp+2494,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state),2);
        bufp->chgBit(oldp+2495,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp));
        bufp->chgBit(oldp+2496,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp));
        bufp->chgCData(oldp+2497,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_count),4);
        bufp->chgWData(oldp+2498,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer),1024);
        bufp->chgBit(oldp+2530,(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6));
        bufp->chgQData(oldp+2531,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result),64);
        bufp->chgBit(oldp+2533,(vlSelf->Soc__DOT__core__DOT__clint__DOT__valid_buf));
        bufp->chgQData(oldp+2534,(vlSelf->Soc__DOT__core__DOT__clint__DOT__rvalue_buf),64);
        bufp->chgBit(oldp+2536,((vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME 
                                 >= vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP)));
        bufp->chgIData(oldp+2537,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MSIP),32);
        bufp->chgQData(oldp+2538,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP),64);
        bufp->chgQData(oldp+2540,(vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME),64);
        bufp->chgSData(oldp+2542,(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr),12);
        __Vtemp_h5ee83ed9__0[0U] = 0x41000000U;
        __Vtemp_h5ee83ed9__0[1U] = 0x3003423U;
        __Vtemp_h5ee83ed9__0[2U] = (0x30000000U | (
                                                   ((0x8000000000000007ULL 
                                                     == vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE)
                                                     ? 0x344U
                                                     : 0U) 
                                                   << 8U));
        bufp->chgSData(oldp+2543,(((0x5fU >= (0x7fU 
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
        bufp->chgBit(oldp+2544,(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen));
        bufp->chgQData(oldp+2545,(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata),64);
        bufp->chgQData(oldp+2547,(((0x340U == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
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
                                                : (
                                                   (0x342U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
                                                    ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE
                                                    : 
                                                   ((0x305U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
                                                     ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC
                                                     : 0ULL))))))),64);
        bufp->chgQData(oldp+2549,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC),64);
        bufp->chgQData(oldp+2551,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE),64);
        bufp->chgQData(oldp+2553,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC),64);
        bufp->chgQData(oldp+2555,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE),64);
        bufp->chgQData(oldp+2557,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP),64);
        bufp->chgQData(oldp+2559,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS),64);
        bufp->chgQData(oldp+2561,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH),64);
        bufp->chgQData(oldp+2563,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0)
                                    ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                   [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]
                                    : 0ULL)),64);
        bufp->chgQData(oldp+2565,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0)
                                    ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                   [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]
                                    : 0ULL)),64);
        bufp->chgBit(oldp+2567,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard) 
                                 | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard) 
                                    | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)))));
        bufp->chgBit(oldp+2568,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
                                 | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
                                    | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))));
        bufp->chgQData(oldp+2569,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard)
                                    ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard)
                                        ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                        : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)
                                            ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                            : 0ULL)))),64);
        bufp->chgQData(oldp+2571,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                                    ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                                        ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                        : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                                            ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                            : 0ULL)))),64);
        bufp->chgBit(oldp+2573,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard) 
                                 | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard) 
                                    | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)))));
        bufp->chgQData(oldp+2574,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard)
                                    ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard)
                                        ? vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata
                                        : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)
                                            ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                                            : 0ULL)))),64);
        bufp->chgCData(oldp+2576,(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr),5);
        bufp->chgCData(oldp+2577,(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr),5);
        bufp->chgQData(oldp+2578,((((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
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
        bufp->chgQData(oldp+2580,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
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
        bufp->chgCData(oldp+2582,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_reg_waddr),5);
        bufp->chgBit(oldp+2583,(((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                                 & ((0x17U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                    & ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                       & ((0x6fU != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                          & ((0x67U 
                                              != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                             & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5))))))));
        bufp->chgQData(oldp+2584,(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__fdreg_pc)) 
                                   + (((- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  (((IData)(vlSelf->__VdfgTmp_h51515078__0) 
                                                                    << 0xbU) 
                                                                   | (((IData)(vlSelf->__VdfgTmp_h0bbd64f5__0) 
                                                                       << 5U) 
                                                                      | ((IData)(vlSelf->__VdfgTmp_h0564c6e1__0) 
                                                                         << 1U)))))))),64);
        bufp->chgCData(oldp+2586,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op),6);
        bufp->chgCData(oldp+2587,(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
                                    ? (0x3fU & (IData)(
                                                       (vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                                        >> 0x14U)))
                                    : 0U)),6);
        bufp->chgCData(oldp+2588,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                    ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_10)
                                             ? 1U : 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                              ? 0U : 
                                             ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0)
                                               ? 2U
                                               : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
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
        bufp->chgCData(oldp+2589,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0)
                                    ? 0U : ((0x23U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                             ? 1U : 
                                            ((0xa3U 
                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                              ? 2U : 
                                             ((0x123U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                               ? 3U
                                               : ((0x1a3U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                  << 2U)))))),3);
        bufp->chgQData(oldp+2590,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T),64);
        bufp->chgCData(oldp+2592,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type),3);
        bufp->chgQData(oldp+2593,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T),64);
        bufp->chgSData(oldp+2595,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen)
                                    ? (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr)
                                    : 0U)),12);
        bufp->chgBit(oldp+2596,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen));
        bufp->chgBit(oldp+2597,(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag));
        bufp->chgIData(oldp+2598,(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                    ? (vlSelf->Soc__DOT__core__DOT__fdreg_pc 
                                       + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm))
                                    : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                        ? (0xfffffffeU 
                                           & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4) 
                                              + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm)))
                                        : 0x80000000U))),32);
        bufp->chgCData(oldp+2599,(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd),5);
        bufp->chgCData(oldp+2600,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type),2);
        bufp->chgCData(oldp+2601,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type),2);
        bufp->chgCData(oldp+2602,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type),3);
        bufp->chgCData(oldp+2603,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
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
                                               ? 0U
                                               : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
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
        bufp->chgCData(oldp+2604,(((((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0) 
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
                                    ? 0U : ((0xf3U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                             ? 1U : 
                                            ((0x173U 
                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                              ? 2U : 
                                             ((0x1f3U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                               ? 3U
                                               : ((0x2f3U 
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
        bufp->chgQData(oldp+2605,(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm),64);
        bufp->chgCData(oldp+2607,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                    ? (7U & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result))
                                    : 0U)),3);
        bufp->chgIData(oldp+2608,((IData)(vlSelf->Soc__DOT__core__DOT__dereg_branch_addr)),32);
        bufp->chgBit(oldp+2609,(vlSelf->Soc__DOT__core__DOT__excute__DOT___mul_div_type_T_16));
        bufp->chgBit(oldp+2610,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_mul_div_outvalid));
        bufp->chgQData(oldp+2611,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                    ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                    : 0ULL)),64);
        bufp->chgQData(oldp+2613,(((IData)(vlSelf->__VdfgTmp_h9d5684c6__0)
                                    ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                    : 0ULL)),64);
        bufp->chgQData(oldp+2615,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata),64);
        bufp->chgBit(oldp+2617,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we));
        bufp->chgBit(oldp+2618,(vlSelf->Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer));
        bufp->chgQData(oldp+2619,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu_buffer),64);
        bufp->chgBit(oldp+2621,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8));
        bufp->chgBit(oldp+2622,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8) 
                                 & (0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)))));
        bufp->chgCData(oldp+2623,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8)
                                    ? (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_h60d3cac5__0) 
                                        | (0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)))
                                        ? 3U : ((0x14U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
                                                << 1U))
                                    : 0U)),2);
        bufp->chgQData(oldp+2624,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand),64);
        bufp->chgQData(oldp+2626,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier),64);
        bufp->chgBit(oldp+2628,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid));
        bufp->chgQData(oldp+2629,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_hi),64);
        bufp->chgQData(oldp+2631,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_lo),64);
        bufp->chgWData(oldp+2633,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg),67);
        bufp->chgWData(oldp+2636,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg),132);
        bufp->chgWData(oldp+2641,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg),132);
        bufp->chgBit(oldp+2646,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state));
        bufp->chgCData(oldp+2647,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter),6);
        bufp->chgCData(oldp+2648,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total),6);
        bufp->chgBit(oldp+2649,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_15));
        bufp->chgBit(oldp+2650,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divw));
        bufp->chgBit(oldp+2651,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_div_signed));
        bufp->chgQData(oldp+2652,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend),64);
        bufp->chgQData(oldp+2654,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor),64);
        bufp->chgBit(oldp+2656,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid));
        bufp->chgQData(oldp+2657,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient),64);
        bufp->chgWData(oldp+2659,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder),128);
        bufp->chgWData(oldp+2663,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65),65);
        bufp->chgQData(oldp+2666,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub33),33);
        bufp->chgBit(oldp+2668,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo));
        bufp->chgBit(oldp+2669,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem));
        bufp->chgCData(oldp+2670,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state),2);
        bufp->chgCData(oldp+2671,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter),7);
        bufp->chgQData(oldp+2672,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34),34);
        bufp->chgWData(oldp+2674,(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66),66);
        bufp->chgBit(oldp+2677,(((0U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2) 
                                    | ((0x30200073U 
                                        == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                                       | (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7))))));
        bufp->chgBit(oldp+2678,(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3));
        bufp->chgIData(oldp+2679,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                    ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC)
                                    : ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                        ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC)
                                        : 0U))),32);
        bufp->chgBit(oldp+2680,(((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_1) 
                                 & (0x9fffffffU < vlSelf->Soc__DOT__core__DOT__ioformem__DOT___axi_req_bits_addr_T))));
        bufp->chgCData(oldp+2681,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state),2);
        bufp->chgBit(oldp+2682,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                                 | ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag) 
                                    | (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)))));
        bufp->chgIData(oldp+2683,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc),32);
        bufp->chgBit(oldp+2684,(vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall));
        bufp->chgBit(oldp+2685,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_mul_div_outvalid)) 
                                 & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___mul_div_type_T_16))));
        bufp->chgIData(oldp+2686,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),32);
        bufp->chgIData(oldp+2687,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc),32);
        bufp->chgQData(oldp+2688,(vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata),64);
        bufp->chgBit(oldp+2690,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))));
        bufp->chgBit(oldp+2691,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))));
        bufp->chgBit(oldp+2692,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard));
        bufp->chgBit(oldp+2693,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard));
        bufp->chgBit(oldp+2694,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard));
        bufp->chgBit(oldp+2695,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard));
        bufp->chgBit(oldp+2696,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard));
        bufp->chgBit(oldp+2697,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard));
        bufp->chgBit(oldp+2698,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard));
        bufp->chgBit(oldp+2699,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard));
        bufp->chgBit(oldp+2700,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard));
        bufp->chgBit(oldp+2701,(vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag));
        bufp->chgCData(oldp+2702,(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count),6);
        bufp->chgIData(oldp+2703,(((IData)(vlSelf->__VdfgTmp_h9d5684c6__0)
                                    ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)
                                    : 0U)),32);
        bufp->chgIData(oldp+2704,(((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                    ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)
                                    : 0U)),32);
        bufp->chgBit(oldp+2705,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type))));
        bufp->chgBit(oldp+2706,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))));
        bufp->chgBit(oldp+2707,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid));
        bufp->chgQData(oldp+2708,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_bits),64);
        bufp->chgBit(oldp+2710,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_valid));
        bufp->chgQData(oldp+2711,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_data),64);
        bufp->chgBit(oldp+2713,(vlSelf->Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer));
        bufp->chgBit(oldp+2714,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer));
        bufp->chgBit(oldp+2715,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer));
        bufp->chgQData(oldp+2716,(vlSelf->Soc__DOT__core__DOT__mem__DOT__clmem_buffer),64);
        bufp->chgQData(oldp+2718,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdata_buffer),64);
        bufp->chgQData(oldp+2720,(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataio_buffer),64);
        bufp->chgQData(oldp+2722,(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value),64);
        bufp->chgQData(oldp+2724,((((QData)((IData)(
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
                                         ? 0x20U : 
                                        ((IData)(0x40U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
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
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                << 6U)))))),64);
        bufp->chgQData(oldp+2726,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                  [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr]),64);
        bufp->chgQData(oldp+2728,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                  [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]),64);
        bufp->chgQData(oldp+2730,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                  [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]),64);
        bufp->chgQData(oldp+2732,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
        bufp->chgQData(oldp+2734,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
        bufp->chgQData(oldp+2736,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
        bufp->chgQData(oldp+2738,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
        bufp->chgQData(oldp+2740,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
        bufp->chgQData(oldp+2742,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
        bufp->chgQData(oldp+2744,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
        bufp->chgQData(oldp+2746,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
        bufp->chgQData(oldp+2748,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
        bufp->chgQData(oldp+2750,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
        bufp->chgQData(oldp+2752,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
        bufp->chgQData(oldp+2754,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
        bufp->chgQData(oldp+2756,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
        bufp->chgQData(oldp+2758,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
        bufp->chgQData(oldp+2760,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
        bufp->chgQData(oldp+2762,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
        bufp->chgQData(oldp+2764,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
        bufp->chgQData(oldp+2766,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
        bufp->chgQData(oldp+2768,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
        bufp->chgQData(oldp+2770,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
        bufp->chgQData(oldp+2772,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
        bufp->chgQData(oldp+2774,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
        bufp->chgQData(oldp+2776,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
        bufp->chgQData(oldp+2778,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
        bufp->chgQData(oldp+2780,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
        bufp->chgQData(oldp+2782,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
        bufp->chgQData(oldp+2784,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
        bufp->chgQData(oldp+2786,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
        bufp->chgQData(oldp+2788,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
        bufp->chgQData(oldp+2790,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
        bufp->chgQData(oldp+2792,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
        bufp->chgQData(oldp+2794,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
        bufp->chgQData(oldp+2796,(vlSelf->Soc__DOT__core__DOT__trap__DOT__cause),64);
        bufp->chgIData(oldp+2798,(vlSelf->Soc__DOT__core__DOT__trap__DOT__pc),32);
        bufp->chgBit(oldp+2799,(vlSelf->Soc__DOT__sram__DOT__need_resp));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+2800,(((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                                 & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid))));
        bufp->chgBit(oldp+2801,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
                                 & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)))));
        bufp->chgBit(oldp+2802,(((vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                                  [(0x1fU & ((IData)(1U) 
                                             + (0x1eU 
                                                & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                   >> 6U))))] 
                                  == (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                      >> 0xbU)) & (
                                                   (0x1fU 
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
        bufp->chgBit(oldp+2803,((1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))
                                        ? ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started) 
                                           & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3))
                                        : ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))
                                            ? vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8
                                            : ((6U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
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
        bufp->chgIData(oldp+2804,((((0U == (0x1fU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                             << 5U)))
                                     ? 0U : (__Vtemp_h78afa619__0[
                                             (((IData)(0x1fU) 
                                               + (0xffU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
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
        bufp->chgCData(oldp+2805,((0x1fU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                  << 5U)))
                                              ? 0U : 
                                             (__Vtemp_h3953c90b__0[
                                              (((IData)(4U) 
                                                + (0xffU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 5U))))) 
                                            | (__Vtemp_h3953c90b__0[
                                               (7U 
                                                & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))] 
                                               >> (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 5U)))))),5);
        bufp->chgIData(oldp+2806,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                                  [(0x1eU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                             >> 6U))]),21);
        bufp->chgIData(oldp+2807,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
                                  [(0x1fU & ((IData)(1U) 
                                             + (0x1eU 
                                                & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                   >> 6U))))]),21);
        bufp->chgBit(oldp+2808,((((~ ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
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
        __Vtemp_h65d5a9df__0[0U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_hf48eb399__0[
                                              ((IData)(1U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_hf48eb399__0[
                                       (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 0xaU))));
        __Vtemp_h65d5a9df__0[1U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_hf48eb399__0[
                                              ((IData)(2U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_hf48eb399__0[
                                       ((IData)(1U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 0xaU))));
        __Vtemp_h65d5a9df__0[2U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_hf48eb399__0[
                                              ((IData)(3U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_hf48eb399__0[
                                       ((IData)(2U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 0xaU))));
        __Vtemp_h65d5a9df__0[3U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_hf48eb399__0[
                                              ((IData)(4U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_hf48eb399__0[
                                       ((IData)(3U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 0xaU))));
        __Vtemp_h65d5a9df__0[4U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_hf48eb399__0[
                                              ((IData)(5U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_hf48eb399__0[
                                       ((IData)(4U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 0xaU))));
        __Vtemp_h65d5a9df__0[5U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_hf48eb399__0[
                                              ((IData)(6U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_hf48eb399__0[
                                       ((IData)(5U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 0xaU))));
        __Vtemp_h65d5a9df__0[6U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_hf48eb399__0[
                                              ((IData)(7U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_hf48eb399__0[
                                       ((IData)(6U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 0xaU))));
        __Vtemp_h65d5a9df__0[7U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_hf48eb399__0[
                                              ((IData)(8U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_hf48eb399__0[
                                       ((IData)(7U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 0xaU))));
        __Vtemp_h65d5a9df__0[8U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_hf48eb399__0[
                                              ((IData)(9U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_hf48eb399__0[
                                       ((IData)(8U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 0xaU))));
        __Vtemp_h65d5a9df__0[9U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_hf48eb399__0[
                                              ((IData)(0xaU) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_hf48eb399__0[
                                       ((IData)(9U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 0xaU))));
        __Vtemp_h65d5a9df__0[0xaU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 0xaU)))
                                        ? 0U : (__Vtemp_hf48eb399__0[
                                                ((IData)(0xbU) 
                                                 + 
                                                 (0x60U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 0xaU))))) 
                                      | (__Vtemp_hf48eb399__0[
                                         ((IData)(0xaU) 
                                          + (0x60U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))));
        __Vtemp_h65d5a9df__0[0xbU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 0xaU)))
                                        ? 0U : (__Vtemp_hf48eb399__0[
                                                ((IData)(0xcU) 
                                                 + 
                                                 (0x60U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 0xaU))))) 
                                      | (__Vtemp_hf48eb399__0[
                                         ((IData)(0xbU) 
                                          + (0x60U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))));
        __Vtemp_h65d5a9df__0[0xcU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 0xaU)))
                                        ? 0U : (__Vtemp_hf48eb399__0[
                                                ((IData)(0xdU) 
                                                 + 
                                                 (0x60U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 0xaU))))) 
                                      | (__Vtemp_hf48eb399__0[
                                         ((IData)(0xcU) 
                                          + (0x60U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))));
        __Vtemp_h65d5a9df__0[0xdU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 0xaU)))
                                        ? 0U : (__Vtemp_hf48eb399__0[
                                                ((IData)(0xeU) 
                                                 + 
                                                 (0x60U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 0xaU))))) 
                                      | (__Vtemp_hf48eb399__0[
                                         ((IData)(0xdU) 
                                          + (0x60U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))));
        __Vtemp_h65d5a9df__0[0xeU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 0xaU)))
                                        ? 0U : (__Vtemp_hf48eb399__0[
                                                ((IData)(0xfU) 
                                                 + 
                                                 (0x60U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 0xaU))))) 
                                      | (__Vtemp_hf48eb399__0[
                                         ((IData)(0xeU) 
                                          + (0x60U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))));
        __Vtemp_h65d5a9df__0[0xfU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 0xaU)))
                                        ? 0U : (__Vtemp_hf48eb399__0[
                                                ((IData)(0x10U) 
                                                 + 
                                                 (0x60U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 0xaU))))) 
                                      | (__Vtemp_hf48eb399__0[
                                         ((IData)(0xfU) 
                                          + (0x60U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))));
        __Vtemp_h65d5a9df__0[0x10U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hf48eb399__0[
                                                 ((IData)(0x11U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hf48eb399__0[
                                          ((IData)(0x10U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 0xaU))));
        __Vtemp_h65d5a9df__0[0x11U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hf48eb399__0[
                                                 ((IData)(0x12U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hf48eb399__0[
                                          ((IData)(0x11U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 0xaU))));
        __Vtemp_h65d5a9df__0[0x12U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hf48eb399__0[
                                                 ((IData)(0x13U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hf48eb399__0[
                                          ((IData)(0x12U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 0xaU))));
        __Vtemp_h65d5a9df__0[0x13U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hf48eb399__0[
                                                 ((IData)(0x14U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hf48eb399__0[
                                          ((IData)(0x13U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 0xaU))));
        __Vtemp_h65d5a9df__0[0x14U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hf48eb399__0[
                                                 ((IData)(0x15U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hf48eb399__0[
                                          ((IData)(0x14U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 0xaU))));
        __Vtemp_h65d5a9df__0[0x15U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hf48eb399__0[
                                                 ((IData)(0x16U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hf48eb399__0[
                                          ((IData)(0x15U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 0xaU))));
        __Vtemp_h65d5a9df__0[0x16U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hf48eb399__0[
                                                 ((IData)(0x17U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hf48eb399__0[
                                          ((IData)(0x16U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 0xaU))));
        __Vtemp_h65d5a9df__0[0x17U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hf48eb399__0[
                                                 ((IData)(0x18U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hf48eb399__0[
                                          ((IData)(0x17U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 0xaU))));
        __Vtemp_h65d5a9df__0[0x18U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hf48eb399__0[
                                                 ((IData)(0x19U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hf48eb399__0[
                                          ((IData)(0x18U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 0xaU))));
        __Vtemp_h65d5a9df__0[0x19U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hf48eb399__0[
                                                 ((IData)(0x1aU) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hf48eb399__0[
                                          ((IData)(0x19U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 0xaU))));
        __Vtemp_h65d5a9df__0[0x1aU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hf48eb399__0[
                                                 ((IData)(0x1bU) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hf48eb399__0[
                                          ((IData)(0x1aU) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 0xaU))));
        __Vtemp_h65d5a9df__0[0x1bU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hf48eb399__0[
                                                 ((IData)(0x1cU) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hf48eb399__0[
                                          ((IData)(0x1bU) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 0xaU))));
        __Vtemp_h65d5a9df__0[0x1cU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hf48eb399__0[
                                                 ((IData)(0x1dU) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hf48eb399__0[
                                          ((IData)(0x1cU) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 0xaU))));
        __Vtemp_h65d5a9df__0[0x1dU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hf48eb399__0[
                                                 ((IData)(0x1eU) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hf48eb399__0[
                                          ((IData)(0x1dU) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 0xaU))));
        __Vtemp_h65d5a9df__0[0x1eU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hf48eb399__0[
                                                 ((IData)(0x1fU) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hf48eb399__0[
                                          ((IData)(0x1eU) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 0xaU))));
        __Vtemp_h65d5a9df__0[0x1fU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hf48eb399__0[
                                                 ((IData)(0x20U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hf48eb399__0[
                                          ((IData)(0x1fU) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 0xaU))));
        bufp->chgWData(oldp+2809,(__Vtemp_h65d5a9df__0),1024);
        bufp->chgBit(oldp+2841,((1U & (~ ((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                                          | (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush))))));
        bufp->chgBit(oldp+2842,(((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hd527f3ac__0) 
                                 & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                                       | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14)) 
                                          & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                                             | ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                                                | (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag)))))))));
        bufp->chgBit(oldp+2843,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)) 
                                 & ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                    & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_18)) 
                                       & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                          | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)) 
                                             & ((0U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                                & (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)))))))));
        bufp->chgBit(oldp+2844,(((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                 & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_18)) 
                                    & ((~ ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                           & (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid))) 
                                       & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                          | (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                              & (IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)) 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h02ae5b32__0) 
                                                | (~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3))))))))));
        bufp->chgIData(oldp+2845,(((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2)
                                    ? ((IData)(4U) 
                                       + vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc)
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                                        ? ((IData)(4U) 
                                           + vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)
                                        : vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc))),32);
        bufp->chgIData(oldp+2846,((((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                                    & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid))
                                    ? (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)
                                    : 0U)),32);
        bufp->chgQData(oldp+2847,(((((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
                                     & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))) 
                                    & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr)))
                                    ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                    : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                   [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr])),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+2849,(vlSelf->Soc__DOT__sram__DOT__rvalid));
        bufp->chgQData(oldp+2850,(vlSelf->Soc__DOT__sram__DOT__rdata),64);
        bufp->chgBit(oldp+2852,(vlSelf->Soc__DOT__sram__DOT__rlast));
        bufp->chgCData(oldp+2853,(vlSelf->Soc__DOT__sram__DOT__rresp),2);
        bufp->chgCData(oldp+2854,(vlSelf->Soc__DOT__sram__DOT__r_count),4);
        bufp->chgIData(oldp+2855,(vlSelf->Soc__DOT__sram__DOT__araddr),32);
        bufp->chgBit(oldp+2856,(vlSelf->Soc__DOT__sram__DOT__need_read));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+2857,(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc),32);
        bufp->chgBit(oldp+2858,(vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen));
        bufp->chgBit(oldp+2859,(((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0) 
                                 & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1))));
        bufp->chgBit(oldp+2860,(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid));
        bufp->chgWData(oldp+2861,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data),1024);
        bufp->chgBit(oldp+2893,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_12));
        bufp->chgBit(oldp+2894,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_14));
        bufp->chgBit(oldp+2895,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_19));
        bufp->chgWData(oldp+2896,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data),1024);
        bufp->chgBit(oldp+2928,(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_26));
        bufp->chgBit(oldp+2929,(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid));
        bufp->chgWData(oldp+2930,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data),1024);
        bufp->chgBit(oldp+2962,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3));
        bufp->chgBit(oldp+2963,(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0));
        bufp->chgBit(oldp+2964,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_12));
        bufp->chgBit(oldp+2965,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_14));
        bufp->chgBit(oldp+2966,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_19));
        bufp->chgWData(oldp+2967,(vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data),1024);
        bufp->chgBit(oldp+2999,(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_26));
        bufp->chgCData(oldp+3000,((0x1eU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                            >> 6U))),5);
        bufp->chgCData(oldp+3001,((0x1fU & ((IData)(1U) 
                                            + (0x1eU 
                                               & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                  >> 6U))))),5);
        bufp->chgBit(oldp+3002,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_valid));
        bufp->chgCData(oldp+3003,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose),4);
        bufp->chgBit(oldp+3004,(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1));
        bufp->chgBit(oldp+3005,(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush));
        bufp->chgBit(oldp+3006,(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0));
        bufp->chgIData(oldp+3007,(vlSelf->Soc__DOT__sram__DOT__awaddr),32);
    }
    bufp->chgBit(oldp+3008,(vlSelf->clock));
    bufp->chgBit(oldp+3009,(vlSelf->reset));
    bufp->chgBit(oldp+3010,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_8));
    bufp->chgIData(oldp+3011,(vlSelf->Soc__DOT___core_io_AXI_Interface_ar_bits_addr),32);
    bufp->chgBit(oldp+3012,(vlSelf->Soc__DOT____Vcellinp__sram__ARESETn));
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
