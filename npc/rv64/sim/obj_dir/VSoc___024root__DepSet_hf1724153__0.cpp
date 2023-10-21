// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSoc__Syms.h"
#include "VSoc___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__ico(VSoc___024root* vlSelf);
#endif  // VL_DEBUG

void VSoc___024root___eval_triggers__ico(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSoc___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__act(VSoc___024root* vlSelf);
#endif  // VL_DEBUG

void VSoc___024root___eval_triggers__act(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__VactTriggered.at(1U) = (((~ (IData)(vlSelf->Soc__DOT____Vcellinp__sram__ARESETn)) 
                                       & (IData)(vlSelf->__Vtrigrprev__TOP__Soc__DOT____Vcellinp__sram__ARESETn)) 
                                      | ((IData)(vlSelf->clock) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock))));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__Soc__DOT____Vcellinp__sram__ARESETn 
        = vlSelf->Soc__DOT____Vcellinp__sram__ARESETn;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSoc___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VSoc___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__0(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdly__Soc__DOT__sram__DOT__w_count;
    __Vdly__Soc__DOT__sram__DOT__w_count = 0;
    // Body
    vlSelf->__Vdly__Soc__DOT__sram__DOT__r_burst = vlSelf->Soc__DOT__sram__DOT__r_burst;
    __Vdly__Soc__DOT__sram__DOT__w_count = vlSelf->Soc__DOT__sram__DOT__w_count;
    vlSelf->__Vdly__Soc__DOT__sram__DOT__r_count = vlSelf->Soc__DOT__sram__DOT__r_count;
    if (vlSelf->Soc__DOT____Vcellinp__sram__ARESETn) {
        if (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4) 
             & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_3))) {
            VSoc___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                   (vlSelf->Soc__DOT__sram__DOT__awaddr 
                                                                    + 
                                                                    ((IData)(vlSelf->Soc__DOT__sram__DOT__w_count) 
                                                                     << 3U)), vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data, (IData)(vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb));
            __Vdly__Soc__DOT__sram__DOT__w_count = 0U;
        } else if (vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4) {
            __Vdly__Soc__DOT__sram__DOT__w_count = 
                (0xfU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__sram__DOT__w_count)));
            VSoc___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                   (vlSelf->Soc__DOT__sram__DOT__awaddr 
                                                                    + 
                                                                    ((IData)(vlSelf->Soc__DOT__sram__DOT__w_count) 
                                                                     << 3U)), vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data, (IData)(vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb));
        } else {
            __Vdly__Soc__DOT__sram__DOT__w_count = vlSelf->Soc__DOT__sram__DOT__w_count;
        }
    } else {
        __Vdly__Soc__DOT__sram__DOT__w_count = 0U;
    }
    if (vlSelf->Soc__DOT____Vcellinp__sram__ARESETn) {
        if (vlSelf->Soc__DOT__sram__DOT__need_resp) {
            vlSelf->Soc__DOT__sram__DOT__bresp = 0U;
            vlSelf->Soc__DOT__sram__DOT__bvalid = 1U;
        } else if (vlSelf->Soc__DOT___sram_S_AXI_BVALID) {
            vlSelf->Soc__DOT__sram__DOT__bvalid = 0U;
        }
        if (vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1) {
            vlSelf->Soc__DOT__sram__DOT__awaddr_buffer 
                = vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr;
        }
    } else {
        vlSelf->Soc__DOT__sram__DOT__awaddr_buffer = 0U;
        vlSelf->Soc__DOT__sram__DOT__bvalid = 0U;
    }
    vlSelf->Soc__DOT__sram__DOT__w_count = __Vdly__Soc__DOT__sram__DOT__w_count;
    vlSelf->Soc__DOT___sram_S_AXI_BVALID = vlSelf->Soc__DOT__sram__DOT__bvalid;
}

void VSoc___024unit____Vdpiimwrap_update_debuginfo_TOP____024unit(IData/*31:0*/ pc, CData/*0:0*/ pc_req, IData/*31:0*/ inst, CData/*0:0*/ inst_valid, CData/*0:0*/ load_use, QData/*63:0*/ op_a, QData/*63:0*/ op_b, QData/*63:0*/ result, CData/*0:0*/ br_yes, CData/*0:0*/ mem_access, QData/*63:0*/ mem_addr, CData/*4:0*/ rd, QData/*63:0*/ reg_wdata, CData/*0:0*/ reg_wen, CData/*0:0*/ csr_wen, QData/*63:0*/ csr_wdata, SData/*11:0*/ csr_waddr, CData/*0:0*/ sdb_stall, CData/*2:0*/ trap_state, CData/*0:0*/ Icache_hit, CData/*0:0*/ Icache_req, CData/*0:0*/ fcfe_stall, CData/*0:0*/ Dcache_hit, CData/*0:0*/ Dcache_req, CData/*0:0*/ fcex_stall);

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__1(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter;
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_count 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_count;
    vlSelf->__Vdly__Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer 
        = vlSelf->Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer;
    vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__w_count 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__w_count;
    vlSelf->__Vdly__Soc__DOT__core__DOT__ioformem__DOT__r_count 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__r_count;
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__aw_comp 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp;
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_comp 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__replace_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__replace_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdly__Soc__DOT__core__DOT__fetch__DOT__old_pc 
        = vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc;
    vlSelf->__Vdly__Soc__DOT__core__DOT__fetch__DOT__pc 
        = vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc;
    vlSelf->__Vdly__Soc__DOT__core__DOT__ioformem__DOT__state 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state;
    vlSelf->__Vdly__Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid;
    vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty;
    vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid;
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer;
    vlSelf->__Vdly__Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer 
        = vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer;
    vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__state 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state;
    vlSelf->__Vdly__Soc__DOT__core__DOT__ioformem__DOT__data_count 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__data_count;
    vlSelf->__Vdly__Soc__DOT__core__DOT__ioformem__DOT__wait_cycle 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__wait_cycle;
    vlSelf->__Vdly__Soc__DOT__core__DOT__ioformem__DOT__begin_flag 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__begin_flag;
    vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__r_count 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__r_count;
    vlSelf->__Vdly__Soc__DOT__core__DOT__csrs__DOT__MIP 
        = vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdly__Soc__DOT__core__DOT__trap__DOT__state 
        = vlSelf->Soc__DOT__core__DOT__trap__DOT__state;
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__choose_buffer 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer;
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__state 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state;
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem;
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo;
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state;
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient;
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v3 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v4 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v5 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v6 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v7 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v8 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v9 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v10 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v11 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v12 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v13 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v14 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v15 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v16 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v17 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v3 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v4 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v5 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v6 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v7 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v8 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v9 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v10 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v11 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v12 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v13 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v14 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v15 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v16 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v17 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v3 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v4 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v5 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v6 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v7 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v8 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v9 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v10 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v11 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v12 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v13 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v14 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v15 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v16 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v17 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v3 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v4 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v5 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v6 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v7 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v8 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v9 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v10 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v11 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v12 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v13 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v14 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v15 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v16 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v17 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v3 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v4 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v5 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v6 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v7 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v8 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v9 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v10 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v11 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v12 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v13 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v14 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v15 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v16 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v17 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v3 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v4 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v5 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v6 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v7 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v8 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v9 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v10 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v11 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v12 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v13 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v14 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v15 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v16 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v17 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v3 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v4 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v5 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v6 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v7 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v8 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v9 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v10 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v11 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v12 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v13 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v14 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v15 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v16 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v17 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v3 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v4 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v5 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v6 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v7 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v8 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v9 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v10 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v11 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v12 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v13 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v14 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v15 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v16 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v17 = 0U;
    vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__w_count 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__w_count;
    vlSelf->__Vdly__Soc__DOT__core__DOT__clint__DOT__MTIME 
        = vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME;
    vlSelf->__Vdly__Soc__DOT__core__DOT__clint__DOT__MTIMECMP 
        = vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP;
    vlSelf->__Vdly__Soc__DOT__core__DOT__clint__DOT__MSIP 
        = vlSelf->Soc__DOT__core__DOT__clint__DOT__MSIP;
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total;
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter;
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state;
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[0U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[0U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[1U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[1U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[2U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[2U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[3U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[3U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[4U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[4U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[4U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[4U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[1U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[1U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[2U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[2U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid;
    vlSelf->__Vdly__Soc__DOT__core__DOT__interact__DOT__over_count 
        = vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count;
    vlSelf->__Vdly__Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer 
        = vlSelf->Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__replace_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__replace_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty;
    vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__valid 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid;
    vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__state 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__state;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        VSoc___024unit____Vdpiimwrap_update_debuginfo_TOP____024unit(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc, (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started), vlSelf->Soc__DOT__core__DOT__decode__DOT__inst, 
                                                                     ((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                                                                      & (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_valid)), (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16), vlSelf->Soc__DOT__core__DOT__dereg_op_a, vlSelf->Soc__DOT__core__DOT__dereg_op_b, 
                                                                     ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen)
                                                                       ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                                                                       : vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_h7d5adbc1__0), (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag), vlSelf->Soc__DOT__core__DOT____Vcellinp__DI__mem_access, vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T, (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr), vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata, 
                                                                     ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
                                                                      & (0U 
                                                                         != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))), (IData)(vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen), vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata, (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr), 
                                                                     ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0) 
                                                                      & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)), (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state), vlSelf->Soc__DOT__core__DOT__Icache__DOT___hit_T_2, (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started), vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0, (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___hit_T_2), vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid, (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1));
    }
    vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__r_count 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__r_count;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_13_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_13_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_13_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_13_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_13_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_13_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_13_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_13_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_13_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_13_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_13_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_13_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_13_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_13_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_13_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_13_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_13_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_13_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_13_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_13_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_13_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_13_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_13_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_13_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_12_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_12_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_12_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_12_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_12_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_12_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_12_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_12_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_12_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_12_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_12_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_12_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_12_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_12_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_12_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_12_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_12_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_12_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_12_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_12_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_12_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_12_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_12_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_12_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_11_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_11_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_11_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_11_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_11_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_11_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_11_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_11_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_11_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_11_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_11_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_11_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_11_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_11_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_11_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_11_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_11_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_11_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_11_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_11_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_11_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_11_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_11_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_11_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_10_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_10_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_10_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_10_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_10_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_10_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_10_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_10_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_10_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_10_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_10_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_10_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_10_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_10_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_10_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_10_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_10_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_10_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_10_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_10_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_10_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_10_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_10_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_10_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_9_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_9_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_9_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_9_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_9_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_9_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_9_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_9_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_9_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_9_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_9_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_9_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_9_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_9_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_9_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_9_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_9_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_9_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_9_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_9_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_9_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_9_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_9_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_9_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_8_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_8_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_8_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_8_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_8_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_8_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_8_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_8_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_8_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_8_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_8_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_8_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_8_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_8_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_8_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_8_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_8_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_8_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_8_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_8_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_8_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_8_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_8_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_8_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_7_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_7_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_7_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_7_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_7_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_7_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_7_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_7_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_7_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_7_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_7_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_7_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_7_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_7_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_7_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_7_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_7_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_7_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_7_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_7_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_7_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_7_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_7_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_7_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_6_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_6_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_6_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_6_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_6_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_6_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_6_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_6_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_6_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_6_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_6_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_6_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_6_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_6_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_6_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_6_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_6_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_6_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_6_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_6_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_6_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_6_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_6_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_6_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_5_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_5_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_5_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_5_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_5_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_5_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_5_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_5_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_5_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_5_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_5_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_5_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_5_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_5_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_5_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_5_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_5_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_5_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_5_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_5_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_5_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_5_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_5_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_5_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_4_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_4_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_4_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_4_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_4_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_4_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_4_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_4_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_4_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_4_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_4_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_4_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_4_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_4_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_4_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_4_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_4_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_4_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_4_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_4_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_4_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_4_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_4_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_4_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_3_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_3_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_3_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_3_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_3_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_3_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_3_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_3_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_3_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_3_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_3_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_3_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_3_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_3_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_3_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_3_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_3_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_3_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_3_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_3_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_3_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_3_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_3_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_3_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_2_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_2_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_2_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_2_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_2_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_2_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_2_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_2_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_2_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_2_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_2_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_2_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_2_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_2_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_2_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_2_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_2_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_2_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_2_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_2_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_2_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_2_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_2_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_2_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_1_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_1_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_1_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_1_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_1_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_1_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_1_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_1_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_1_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_1_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_1_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_1_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_1_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_1_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_1_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_1_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_1_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_1_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_1_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_1_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_1_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_1_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_1_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_1_0_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_0_7_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_0_7_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_0_7_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_0_6_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_0_6_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_0_6_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_0_5_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_0_5_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_0_5_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_0_4_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_0_4_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_0_4_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_0_3_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_0_3_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_0_3_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_0_2_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_0_2_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_0_2_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_0_1_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_0_1_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_0_1_ext__DOT__Memory__v2 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_0_0_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_0_0_ext__DOT__Memory__v1 = 0U;
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_0_0_ext__DOT__Memory__v2 = 0U;
    if (vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_0) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT___excute_io_wmask;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__data_count;
    }
    if (vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_mask;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v1 = 1U;
    }
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr_reg 
               >> 9U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v0 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_14)
                ? 0U : (0xfU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hee43b865__0)));
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__replace_ext__DOT__Memory__v1 
            = ((0xbU >= (0xfU & ((IData)(3U) * (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim))))
                ? (7U & ((0x66U | (((IData)(vlSelf->__VdfgTmp_h5fa56f50__0) 
                                    << 0xaU) | (((IData)(vlSelf->__VdfgTmp_h5fa56f50__0) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__VdfgTmp_h5fa058d3__0) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->__VdfgTmp_h5fa058d3__0))))) 
                         >> (0xfU & ((IData)(3U) * (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim)))))
                : 0U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__replace_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__replace_ext__DOT__Memory__v1 
            = (3U & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr_reg 
                     >> 7U));
    }
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___hit_T_2) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__replace_ext__DOT__Memory__v0 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0)
                ? (6U | (IData)(vlSelf->__VdfgTmp_h4d11ebbe__0))
                : ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit1)
                    ? (4U | (IData)(vlSelf->__VdfgTmp_h4d11ebbe__0))
                    : ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit2)
                        ? (1U | ((IData)(vlSelf->__VdfgTmp_h4d165b5b__0) 
                                 << 1U)) : ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit3)
                                             ? ((IData)(vlSelf->__VdfgTmp_h4d165b5b__0) 
                                                << 1U)
                                             : 0U))));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__replace_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__replace_ext__DOT__Memory__v0 
            = (3U & (IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                             >> 7U)));
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x1fU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_7_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1fU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_7_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_7_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x1fU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_7_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1fU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_7_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_7_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x1fU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_7_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1fU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_7_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_7_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x1eU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_6_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1fU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_6_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_6_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x1eU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_6_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1fU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_6_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_6_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x1eU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_6_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1fU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_6_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_6_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x1dU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_5_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1fU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_5_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_5_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x1dU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_5_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1fU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_5_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_5_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x1dU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_5_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1fU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_5_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_5_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x1cU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_4_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1fU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_4_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_4_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x1cU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_4_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1fU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_4_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_4_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x1cU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_4_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1fU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_4_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_4_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x1bU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_3_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1eU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_3_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_3_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x1bU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_3_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1eU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_3_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_3_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x1bU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_3_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1eU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_3_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_3_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x1aU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_2_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1eU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_2_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_2_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x1aU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_2_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1eU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_2_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_2_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x1aU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_2_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1eU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_2_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_2_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x19U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_1_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1eU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_1_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_1_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x19U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_1_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1eU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_1_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_1_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x19U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_1_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1eU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_1_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_1_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x18U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_0_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1eU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_0_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_0_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x18U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_0_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1eU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_0_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_0_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x18U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_0_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1eU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_0_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_15_0_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x17U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_7_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1dU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_7_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_7_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x17U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_7_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1dU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_7_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_7_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x17U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_7_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1dU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_7_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_7_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x16U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_6_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1dU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_6_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_6_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x16U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_6_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1dU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_6_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_6_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x16U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_6_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1dU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_6_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_6_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x15U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_5_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1dU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_5_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_5_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x15U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_5_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1dU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_5_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_5_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x15U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_5_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1dU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_5_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_5_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x14U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_4_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1dU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_4_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_4_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x14U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_4_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1dU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_4_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_4_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x14U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_4_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1dU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_4_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_4_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x13U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_3_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1cU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_3_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_3_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x13U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_3_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1cU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_3_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_3_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x13U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_3_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1cU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_3_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_3_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x12U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_2_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1cU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_2_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_2_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x12U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_2_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1cU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_2_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_2_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x12U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_2_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1cU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_2_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_2_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x11U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_1_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1cU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_1_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_1_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x11U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_1_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1cU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_1_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_1_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x11U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_1_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1cU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_1_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_1_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x10U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_0_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1cU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_0_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_0_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x10U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_0_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1cU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_0_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_0_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0x10U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_0_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1cU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_0_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_14_0_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0xfU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_7_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1bU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_7_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_7_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0xfU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_7_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1bU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_7_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_7_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0xfU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_7_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1bU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_7_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_7_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0xeU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_6_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1bU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_6_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_6_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0xeU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_6_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1bU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_6_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_6_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0xeU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_6_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1bU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_6_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_6_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0xdU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_5_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1bU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_5_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_5_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0xdU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_5_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1bU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_5_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_5_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0xdU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_5_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1bU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_5_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_5_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0xcU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_4_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1bU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_4_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_4_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0xcU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_4_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1bU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_4_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_4_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0xcU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_4_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1bU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_4_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_4_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0xbU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_3_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1aU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_3_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_3_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0xbU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_3_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1aU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_3_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_3_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0xbU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_3_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1aU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_3_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_3_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0xaU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_2_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1aU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_2_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_2_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0xaU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_2_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1aU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_2_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_2_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 0xaU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_2_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1aU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_2_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_2_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 9U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_1_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1aU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_1_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_1_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 9U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_1_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1aU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_1_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_1_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 9U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_1_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1aU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_1_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_1_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 8U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_0_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1aU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_0_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_0_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 8U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_0_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1aU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_0_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_0_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 8U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_0_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1aU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_0_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_13_0_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 7U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_7_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x19U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_7_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_7_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 7U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_7_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x19U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_7_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_7_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 7U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_7_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x19U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_7_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_7_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 6U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_6_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x19U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_6_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_6_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 6U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_6_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x19U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_6_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_6_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 6U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_6_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x19U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_6_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_6_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 5U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_5_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x19U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_5_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_5_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 5U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_5_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x19U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_5_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_5_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 5U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_5_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x19U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_5_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_5_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 4U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_4_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x19U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_4_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_4_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 4U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_4_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x19U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_4_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_4_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 4U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_4_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x19U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_4_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_4_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 3U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_3_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x18U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_3_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_3_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 3U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_3_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x18U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_3_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_3_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 3U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_3_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x18U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_3_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_3_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 2U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_2_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x18U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_2_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_2_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 2U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_2_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x18U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_2_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_2_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 2U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_2_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x18U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_2_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_2_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 1U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_1_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x18U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_1_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_1_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 1U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_1_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x18U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_1_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_1_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U] 
            >> 1U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_1_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x18U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_1_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_1_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U])) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_0_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x18U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_0_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_0_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U])) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_0_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x18U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_0_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_0_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[3U])) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_0_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x18U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_0_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_12_0_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x1fU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_7_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x17U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_7_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_7_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x1fU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_7_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x17U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_7_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_7_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x1fU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_7_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x17U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_7_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_7_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x1eU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_6_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x17U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_6_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_6_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x1eU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_6_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x17U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_6_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_6_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x1eU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_6_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x17U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_6_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_6_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x1dU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_5_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x17U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_5_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_5_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x1dU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_5_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x17U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_5_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_5_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x1dU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_5_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x17U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_5_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_5_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x1cU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_4_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x17U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_4_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_4_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x1cU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_4_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x17U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_4_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_4_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x1cU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_4_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x17U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_4_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_4_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x1bU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_3_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x16U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_3_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_3_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x1bU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_3_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x16U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_3_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_3_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x1bU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_3_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x16U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_3_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_3_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x1aU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_2_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x16U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_2_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_2_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x1aU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_2_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x16U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_2_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_2_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x1aU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_2_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x16U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_2_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_2_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x19U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_1_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x16U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_1_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_1_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x19U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_1_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x16U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_1_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_1_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x19U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_1_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x16U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_1_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_1_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x18U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_0_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x16U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_0_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_0_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x18U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_0_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x16U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_0_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_0_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x18U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_0_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x16U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_0_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_11_0_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x17U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_7_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x15U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_7_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_7_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x17U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_7_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x15U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_7_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_7_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x17U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_7_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x15U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_7_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_7_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x16U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_6_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x15U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_6_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_6_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x16U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_6_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x15U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_6_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_6_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x16U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_6_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x15U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_6_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_6_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x15U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_5_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x15U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_5_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_5_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x15U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_5_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x15U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_5_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_5_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x15U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_5_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x15U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_5_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_5_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x14U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_4_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x15U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_4_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_4_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x14U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_4_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x15U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_4_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_4_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x14U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_4_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x15U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_4_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_4_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x13U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_3_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x14U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_3_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_3_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x13U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_3_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x14U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_3_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_3_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x13U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_3_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x14U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_3_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_3_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x12U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_2_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x14U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_2_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_2_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x12U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_2_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x14U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_2_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_2_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x12U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_2_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x14U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_2_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_2_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x11U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_1_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x14U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_1_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_1_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x11U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_1_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x14U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_1_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_1_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x11U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_1_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x14U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_1_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_1_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x10U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_0_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x14U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_0_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_0_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x10U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_0_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x14U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_0_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_0_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0x10U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_0_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x14U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_0_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_10_0_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0xfU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_7_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x13U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_7_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_7_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0xfU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_7_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x13U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_7_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_7_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0xfU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_7_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x13U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_7_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_7_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0xeU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_6_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x13U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_6_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_6_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0xeU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_6_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x13U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_6_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_6_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0xeU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_6_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x13U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_6_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_6_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0xdU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_5_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x13U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_5_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_5_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0xdU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_5_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x13U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_5_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_5_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0xdU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_5_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x13U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_5_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_5_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0xcU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_4_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x13U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_4_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_4_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0xcU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_4_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x13U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_4_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_4_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0xcU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_4_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x13U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_4_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_4_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0xbU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_3_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x12U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_3_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_3_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0xbU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_3_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x12U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_3_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_3_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0xbU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_3_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x12U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_3_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_3_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0xaU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_2_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x12U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_2_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_2_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0xaU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_2_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x12U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_2_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_2_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 0xaU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_2_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x12U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_2_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_2_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 9U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_1_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x12U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_1_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_1_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 9U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_1_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x12U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_1_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_1_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 9U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_1_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x12U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_1_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_1_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 8U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_0_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x12U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_0_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_0_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 8U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_0_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x12U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_0_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_0_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 8U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_0_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x12U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_0_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_9_0_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 7U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_7_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x11U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_7_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_7_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 7U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_7_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x11U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_7_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_7_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 7U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_7_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x11U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_7_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_7_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 6U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_6_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x11U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_6_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_6_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 6U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_6_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x11U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_6_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_6_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 6U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_6_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x11U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_6_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_6_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 5U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_5_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x11U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_5_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_5_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 5U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_5_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x11U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_5_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_5_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 5U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_5_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x11U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_5_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_5_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 4U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_4_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x11U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_4_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_4_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 4U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_4_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x11U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_4_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_4_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 4U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_4_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x11U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_4_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_4_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 3U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_3_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x10U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_3_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_3_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 3U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_3_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x10U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_3_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_3_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 3U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_3_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x10U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_3_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_3_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 2U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_2_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x10U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_2_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_2_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 2U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_2_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x10U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_2_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_2_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 2U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_2_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x10U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_2_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_2_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 1U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_1_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x10U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_1_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_1_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 1U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_1_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x10U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_1_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_1_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U] 
            >> 1U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_1_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x10U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_1_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_1_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U])) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_0_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x10U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_0_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_0_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U])) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_0_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x10U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_0_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_0_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[2U])) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_0_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x10U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_0_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_8_0_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x1fU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_7_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xfU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_7_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_7_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x1fU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_7_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xfU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_7_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_7_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x1fU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_7_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xfU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_7_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_7_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x1eU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_6_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xfU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_6_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_6_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x1eU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_6_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xfU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_6_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_6_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x1eU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_6_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xfU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_6_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_6_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x1dU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_5_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xfU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_5_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_5_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x1dU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_5_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xfU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_5_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_5_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x1dU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_5_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xfU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_5_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_5_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x1cU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_4_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xfU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_4_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_4_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x1cU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_4_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xfU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_4_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_4_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x1cU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_4_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xfU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_4_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_4_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x1bU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_3_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xeU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_3_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_3_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x1bU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_3_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xeU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_3_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_3_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x1bU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_3_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xeU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_3_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_3_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x1aU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_2_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xeU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_2_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_2_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x1aU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_2_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xeU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_2_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_2_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x1aU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_2_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xeU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_2_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_2_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x19U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_1_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xeU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_1_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_1_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x19U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_1_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xeU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_1_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_1_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x19U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_1_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xeU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_1_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_1_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x18U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_0_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xeU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_0_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_0_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x18U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_0_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xeU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_0_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_0_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x18U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_0_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xeU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_0_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_7_0_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x17U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_7_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xdU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_7_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_7_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x17U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_7_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xdU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_7_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_7_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x17U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_7_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xdU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_7_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_7_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x16U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_6_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xdU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_6_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_6_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x16U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_6_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xdU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_6_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_6_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x16U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_6_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xdU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_6_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_6_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x15U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_5_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xdU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_5_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_5_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x15U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_5_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xdU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_5_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_5_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x15U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_5_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xdU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_5_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_5_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x14U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_4_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xdU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_4_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_4_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x14U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_4_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xdU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_4_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_4_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x14U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_4_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xdU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_4_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_4_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x13U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_3_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xcU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_3_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_3_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x13U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_3_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xcU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_3_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_3_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x13U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_3_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xcU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_3_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_3_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x12U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_2_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xcU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_2_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_2_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x12U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_2_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xcU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_2_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_2_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x12U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_2_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xcU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_2_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_2_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x11U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_1_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xcU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_1_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_1_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x11U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_1_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xcU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_1_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_1_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x11U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_1_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xcU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_1_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_1_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x10U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_0_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xcU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_0_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_0_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x10U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_0_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xcU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_0_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_0_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0x10U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_0_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xcU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_0_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_6_0_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0xfU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_7_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xbU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_7_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_7_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0xfU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_7_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xbU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_7_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_7_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0xfU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_7_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xbU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_7_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_7_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0xeU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_6_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xbU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_6_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_6_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0xeU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_6_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xbU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_6_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_6_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0xeU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_6_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xbU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_6_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_6_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0xdU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_5_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xbU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_5_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_5_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0xdU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_5_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xbU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_5_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_5_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0xdU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_5_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xbU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_5_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_5_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0xcU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_4_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xbU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_4_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_4_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0xcU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_4_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xbU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_4_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_4_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0xcU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_4_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xbU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_4_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_4_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0xbU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_3_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xaU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_3_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_3_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0xbU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_3_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xaU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_3_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_3_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0xbU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_3_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xaU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_3_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_3_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0xaU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_2_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xaU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_2_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_2_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0xaU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_2_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xaU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_2_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_2_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 0xaU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_2_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xaU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_2_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_2_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 9U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_1_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xaU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_1_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_1_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 9U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_1_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xaU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_1_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_1_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 9U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_1_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xaU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_1_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_1_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 8U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_0_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xaU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_0_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_0_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 8U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_0_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xaU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_0_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_0_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 8U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_0_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xaU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_0_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_5_0_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 7U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_7_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[9U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_7_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_7_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 7U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_7_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[9U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_7_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_7_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 7U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_7_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[9U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_7_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_7_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 6U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_6_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[9U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_6_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_6_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 6U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_6_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[9U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_6_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_6_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 6U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_6_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[9U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_6_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_6_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 5U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_5_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[9U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_5_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_5_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 5U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_5_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[9U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_5_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_5_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 5U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_5_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[9U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_5_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_5_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 4U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_4_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[9U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_4_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_4_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 4U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_4_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[9U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_4_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_4_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 4U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_4_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[9U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_4_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_4_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 3U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_3_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[8U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_3_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_3_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 3U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_3_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[8U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_3_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_3_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 3U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_3_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[8U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_3_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_3_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 2U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_2_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[8U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_2_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_2_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 2U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_2_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[8U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_2_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_2_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 2U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_2_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[8U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_2_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_2_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 1U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_1_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[8U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_1_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_1_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 1U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_1_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[8U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_1_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_1_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U] 
            >> 1U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_1_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[8U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_1_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_1_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U])) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_0_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[8U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_0_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_0_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U])) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_0_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[8U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_0_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_0_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[1U])) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_0_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[8U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_0_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_4_0_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x1fU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_7_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[7U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_7_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_7_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x1fU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_7_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[7U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_7_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_7_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x1fU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_7_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[7U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_7_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_7_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x1eU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_6_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[7U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_6_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_6_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x1eU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_6_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[7U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_6_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_6_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x1eU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_6_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[7U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_6_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_6_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x1dU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_5_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[7U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_5_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_5_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x1dU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_5_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[7U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_5_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_5_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x1dU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_5_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[7U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_5_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_5_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x1cU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_4_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[7U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_4_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_4_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x1cU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_4_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[7U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_4_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_4_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x1cU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_4_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[7U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_4_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_4_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x1bU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_3_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[6U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_3_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_3_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x1bU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_3_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[6U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_3_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_3_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x1bU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_3_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[6U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_3_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_3_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x1aU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_2_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[6U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_2_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_2_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x1aU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_2_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[6U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_2_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_2_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x1aU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_2_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[6U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_2_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_2_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x19U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_1_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[6U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_1_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_1_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x19U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_1_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[6U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_1_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_1_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x19U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_1_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[6U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_1_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_1_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x18U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_0_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[6U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_0_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_0_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x18U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_0_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[6U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_0_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_0_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x18U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_0_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[6U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_0_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_3_0_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x17U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_7_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[5U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_7_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_7_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x17U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_7_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[5U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_7_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_7_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x17U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_7_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[5U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_7_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_7_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x16U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_6_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[5U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_6_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_6_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x16U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_6_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[5U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_6_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_6_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x16U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_6_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[5U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_6_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_6_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x15U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_5_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[5U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_5_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_5_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x15U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_5_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[5U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_5_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_5_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x15U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_5_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[5U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_5_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_5_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x14U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_4_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[5U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_4_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_4_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x14U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_4_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[5U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_4_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_4_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x14U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_4_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[5U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_4_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_4_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x13U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_3_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[4U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_3_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_3_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x13U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_3_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[4U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_3_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_3_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x13U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_3_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[4U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_3_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_3_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x12U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_2_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[4U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_2_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_2_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x12U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_2_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[4U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_2_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_2_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x12U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_2_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[4U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_2_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_2_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x11U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_1_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[4U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_1_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_1_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x11U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_1_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[4U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_1_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_1_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x11U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_1_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[4U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_1_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_1_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x10U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_0_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[4U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_0_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_0_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x10U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_0_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[4U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_0_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_0_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0x10U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_0_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[4U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_0_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_2_0_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0xfU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_7_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[3U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_7_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_7_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0xfU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_7_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[3U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_7_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_7_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0xfU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_7_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[3U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_7_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_7_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0xeU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_6_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[3U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_6_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_6_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0xeU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_6_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[3U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_6_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_6_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0xeU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_6_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[3U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_6_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_6_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0xdU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_5_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[3U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_5_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_5_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0xdU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_5_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[3U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_5_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_5_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0xdU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_5_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[3U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_5_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_5_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0xcU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_4_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[3U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_4_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_4_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0xcU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_4_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[3U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_4_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_4_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0xcU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_4_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[3U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_4_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_4_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0xbU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_3_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[2U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_3_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_3_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0xbU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_3_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[2U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_3_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_3_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0xbU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_3_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[2U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_3_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_3_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0xaU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_2_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[2U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_2_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_2_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0xaU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_2_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[2U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_2_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_2_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 0xaU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_2_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[2U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_2_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_2_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 9U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_1_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[2U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_1_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_1_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 9U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_1_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[2U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_1_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_1_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 9U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_1_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[2U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_1_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_1_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 8U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_0_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[2U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_0_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_0_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 8U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_0_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[2U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_0_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_0_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 8U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_0_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[2U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_0_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_1_0_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 7U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_7_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[1U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_7_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_7_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 7U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_7_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[1U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_7_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_7_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 7U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_7_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[1U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_7_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_7_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 6U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_6_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[1U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_6_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_6_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 6U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_6_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[1U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_6_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_6_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 6U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_6_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[1U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_6_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_6_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 5U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_5_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[1U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_5_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_5_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 5U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_5_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[1U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_5_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_5_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 5U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_5_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[1U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_5_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_5_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 4U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_4_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[1U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_4_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_4_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 4U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_4_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[1U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_4_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_4_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 4U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_4_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[1U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_4_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_4_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 3U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_3_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_3_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_3_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 3U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_3_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_3_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_3_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 3U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_3_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_3_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_3_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 2U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_2_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_2_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_2_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 2U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_2_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_2_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_2_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 2U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_2_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_2_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_2_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 1U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_1_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_1_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_1_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 1U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_1_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_1_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_1_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U] 
            >> 1U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_1_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0U] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_1_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_1_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0) 
         & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U])) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_0_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_0_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_0_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN) 
         & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U])) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_0_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_0_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_0_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_1) 
         & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wmask[0U])) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_0_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0U]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_0_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_0_0_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    vlSelf->__Vdlyvval__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1 
        = ((((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
             & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))) 
            & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr)))
            ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
            : vlSelf->Soc__DOT__core__DOT__regfile__DOT___regs_ext_R0_data);
    vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1 
        = vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr;
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_0) 
         & ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)) 
            | ((IData)(vlSelf->__VdfgTmp_hf6b87a09__0) 
               >> 7U)))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v0 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                                >> 0x38U)));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__data_count;
    }
    if (vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_7) {
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v3 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v4 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v5 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v6 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v7 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v8 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v9 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v10 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v12 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v13 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v14 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v15 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v16 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v17 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v3 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v4 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v5 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v6 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v7 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v8 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v9 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v10 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v12 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v13 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v14 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v15 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v16 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v17 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v3 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v4 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v5 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v6 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v7 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v8 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v9 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v10 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v12 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v13 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v14 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v15 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v16 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v17 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v3 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v4 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v5 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v6 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v7 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v8 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v9 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v10 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v12 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v13 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v14 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v15 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v16 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v17 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v3 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v4 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v5 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v6 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v7 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v8 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v9 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v10 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v12 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v13 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v14 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v15 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v16 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v17 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v3 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v4 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v5 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v6 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v7 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v8 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v9 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v10 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v12 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v13 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v14 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v15 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v16 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v17 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v3 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v4 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v5 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v6 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v7 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v8 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v9 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v10 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v12 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v13 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v14 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v15 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v16 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v17 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v3 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v4 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v5 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v6 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v7 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v8 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v9 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v10 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v12 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v13 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v14 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v15 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v16 = 1U;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v17 = 1U;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN) 
         & ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_mask) 
            >> 7U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v11 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_data 
                                >> 0x38U)));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v11 = 1U;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_0) 
         & ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)) 
            | ((IData)(vlSelf->__VdfgTmp_hf6b87a09__0) 
               >> 6U)))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v0 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                                >> 0x30U)));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__data_count;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN) 
         & ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_mask) 
            >> 6U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v11 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_data 
                                >> 0x30U)));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v11 = 1U;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_0) 
         & ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)) 
            | ((IData)(vlSelf->__VdfgTmp_hf6b87a09__0) 
               >> 5U)))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v0 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                                >> 0x28U)));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__data_count;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN) 
         & ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_mask) 
            >> 5U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v11 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_data 
                                >> 0x28U)));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v11 = 1U;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_0) 
         & ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)) 
            | ((IData)(vlSelf->__VdfgTmp_hf6b87a09__0) 
               >> 4U)))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v0 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                                >> 0x20U)));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__data_count;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN) 
         & ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_mask) 
            >> 4U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v11 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_data 
                                >> 0x20U)));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v11 = 1U;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_0) 
         & ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)) 
            | ((IData)(vlSelf->__VdfgTmp_hf6b87a09__0) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v0 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                                >> 0x18U)));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__data_count;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN) 
         & ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_mask) 
            >> 3U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v11 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_data 
                                >> 0x18U)));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v11 = 1U;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_0) 
         & ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)) 
            | ((IData)(vlSelf->__VdfgTmp_hf6b87a09__0) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v0 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                                >> 0x10U)));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__data_count;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN) 
         & ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_mask) 
            >> 2U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v11 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_data 
                                >> 0x10U)));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v11 = 1U;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_0) 
         & ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)) 
            | ((IData)(vlSelf->__VdfgTmp_hf6b87a09__0) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v0 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                                >> 8U)));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__data_count;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN) 
         & ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_mask) 
            >> 1U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v11 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_data 
                                >> 8U)));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v11 = 1U;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_0) 
         & ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)) 
            | (IData)(vlSelf->__VdfgTmp_hf6b87a09__0)))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v0 
            = ((7U >= (0x38U & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result) 
                                << 3U))) ? (0xffU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata) 
                                             << (0x38U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result) 
                                                    << 3U))))
                : 0U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__data_count;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_count = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__w_count = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__ioformem__DOT__r_count = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__aw_comp = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_comp = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__fetch__DOT__pc = 0x80000000U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__fetch__DOT__old_pc = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__ioformem__DOT__state = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__state = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__trap__DOT__state = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__choose_buffer = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__state = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__w_count = 0U;
    } else {
        if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state))) {
            vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter = 0U;
        } else if ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_4)))) {
                vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter 
                    = (0x7fU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter)));
            }
        } else if ((1U & (~ ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state)) 
                             | (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_10))))) {
            vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter)));
        }
        if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN)))) {
            vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_count 
                = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4)
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_count))));
            vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__aw_comp 
                = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4)) 
                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1) 
                      | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp)));
            vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_comp 
                = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4)) 
                   & (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4) 
                       & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_3)) 
                      | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp)));
        }
        if ((1U & (~ (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                       | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))) 
                      | (~ ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                            & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                               >> 1U))))))) {
            if (vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_valid) {
                vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__w_count = 0U;
            } else if ((0xfU != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__w_count))) {
                vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__w_count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__w_count)));
            }
        }
        if ((1U & (~ (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
                       | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))) 
                      | (2U != (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)))))) {
            vlSelf->__Vdly__Soc__DOT__core__DOT__ioformem__DOT__r_count 
                = ((IData)(vlSelf->Soc__DOT__core__DOT___ioformem_io_fc_valid)
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__r_count))));
        }
        if (vlSelf->Soc__DOT__core__DOT__fetch__DOT__started) {
            if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0)))) {
                vlSelf->__Vdly__Soc__DOT__core__DOT__fetch__DOT__old_pc 
                    = ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2)
                        ? vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc
                        : ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___io_pc_bits_T_3)
                            ? ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2)
                                ? ((IData)(4U) + vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc)
                                : ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                                    ? vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_7
                                    : vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc))
                            : vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc));
            }
        } else {
            vlSelf->__Vdly__Soc__DOT__core__DOT__fetch__DOT__old_pc = 0U;
        }
        if (vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0) {
            vlSelf->__Vdly__Soc__DOT__core__DOT__fetch__DOT__pc 
                = vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc;
        } else if (vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2) {
            vlSelf->__Vdly__Soc__DOT__core__DOT__fetch__DOT__pc 
                = ((IData)(4U) + vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc);
        } else if (vlSelf->Soc__DOT__core__DOT__fetch__DOT__started) {
            vlSelf->__Vdly__Soc__DOT__core__DOT__fetch__DOT__pc 
                = vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_7;
        }
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__unnamedblk1__DOT___GEN_9 
            = (((((3U != (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
                  | (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1))
                  ? (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)
                  : 0U) << 6U) | ((((IData)(vlSelf->Soc__DOT__core__DOT___ioformem_io_fc_valid)
                                     ? 0U : (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
                                   << 4U) | ((0xcU 
                                              & (((IData)(vlSelf->Soc__DOT__core__DOT___ioformem_io_fc_valid)
                                                   ? 
                                                  (- (IData)((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))
                                                   : (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
                                                 << 2U)) 
                                             | ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_9)
                                                 ? 
                                                ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_12)
                                                  ? 
                                                 ((1U 
                                                   & (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_14) 
                                                       | (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_26)) 
                                                      | (~ (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_1))))
                                                   ? 2U
                                                   : (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))
                                                  : 1U)
                                                 : 
                                                ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_1)
                                                  ? (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)
                                                  : 2U)))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__ioformem__DOT__state 
            = (3U & ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__unnamedblk1__DOT___GEN_9) 
                     >> (7U & ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state) 
                               << 1U))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_25 
            = (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                >> 1U) & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_valid));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_21 
            = (0xcU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr_reg 
                       >> 5U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_26 
            = (0x10U | (((0xfc0000U & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                        << 0x15U) | 
                                       ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                        << 0x12U))) 
                         | ((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_25)
                               ? ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_mask))
                                   ? 5U : 0U) : (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                             << 0xcU) | ((((2U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                            ? 4U : (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                          << 9U) | 
                                         (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_25)
                                            ? 3U : (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                          << 6U)))) 
                        | ((8U & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_17) 
                                   >> (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim)) 
                                  << 3U)) | ((IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)
                                              ? (1U 
                                                 & (~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___hit_T_2)))
                                              : (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_22 
            = (0x1fU & ((IData)(1U) + (0xcU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr_reg 
                                               >> 5U))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_23 
            = (0x1fU & ((IData)(2U) + (0xcU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr_reg 
                                               >> 5U))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_24 
            = (0x1fU & ((IData)(3U) + (0xcU & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr_reg 
                                               >> 5U))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__state 
            = ((0x17U >= (0x1fU & ((IData)(3U) * (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))))
                ? (7U & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_26 
                         >> (0x1fU & ((IData)(3U) * (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))))
                : 0U);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___dirty_T_58 
            = ((0x1fU >= vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_21)
                ? ((IData)(1U) << vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_21)
                : 0U);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___dirty_T_64 
            = ((0x1fU >= vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_22)
                ? ((IData)(1U) << vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_22)
                : 0U);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___dirty_T_70 
            = ((0x1fU >= vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_23)
                ? ((IData)(1U) << vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_23)
                : 0U);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___dirty_T_76 
            = ((0x1fU >= vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_24)
                ? ((IData)(1U) << vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_24)
                : 0U);
        if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_14)))) {
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_27 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid;
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28[0U] 
                = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_27 
                   | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___dirty_T_58);
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28[1U] 
                = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_27 
                   | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___dirty_T_64);
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28[2U] 
                = (IData)((((QData)((IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_27 
                                             | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___dirty_T_76))) 
                            << 0x20U) | (QData)((IData)(
                                                        (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_27 
                                                         | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___dirty_T_70)))));
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28[3U] 
                = (IData)(((((QData)((IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_27 
                                              | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___dirty_T_76))) 
                             << 0x20U) | (QData)((IData)(
                                                         (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_27 
                                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___dirty_T_70)))) 
                           >> 0x20U));
            vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid 
                = (0xffffU & (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim) 
                                                << 5U)))
                                ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28[
                                        (((IData)(0xfU) 
                                          + (0x7fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim) 
                                                << 5U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim) 
                                             << 5U))))) 
                              | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28[
                                 (3U & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim))] 
                                 >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim) 
                                              << 5U)))));
        }
        if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wen) {
            if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___hit_T_2) {
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk3__DOT___dirty_T_18 
                    = ((IData)(1U) << (0x1fU & ((IData)(3U) 
                                                + (0xcU 
                                                   & ((IData)(
                                                              (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                               >> 7U)) 
                                                      << 2U)))));
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk3__DOT___dirty_T_12 
                    = ((IData)(1U) << (0x1fU & ((IData)(2U) 
                                                + (0xcU 
                                                   & ((IData)(
                                                              (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                               >> 7U)) 
                                                      << 2U)))));
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk3__DOT___dirty_T_6 
                    = ((IData)(1U) << (0x1fU & ((IData)(1U) 
                                                + (0xcU 
                                                   & ((IData)(
                                                              (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                               >> 7U)) 
                                                      << 2U)))));
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk3__DOT___dirty_T 
                    = ((IData)(1U) << (0xcU & ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                        >> 7U)) 
                                               << 2U)));
                vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty 
                    = (0xffffU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0)
                                   ? ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty) 
                                      | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk3__DOT___dirty_T)
                                   : ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit1)
                                       ? ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty) 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk3__DOT___dirty_T_6)
                                       : ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit2)
                                           ? ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty) 
                                              | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk3__DOT___dirty_T_12)
                                           : ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit3)
                                               ? ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk3__DOT___dirty_T_18)
                                               : 0U)))));
            } else if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__is_war) {
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_29 
                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty;
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_30[0U] 
                    = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_29 
                       | ((0x1fU >= vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_21)
                           ? ((IData)(1U) << vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_21)
                           : 0U));
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_30[1U] 
                    = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_29 
                       | ((0x1fU >= vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_22)
                           ? ((IData)(1U) << vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_22)
                           : 0U));
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_30[2U] 
                    = (IData)((((QData)((IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_29 
                                                 | ((0x1fU 
                                                     >= vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_24)
                                                     ? 
                                                    ((IData)(1U) 
                                                     << vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_24)
                                                     : 0U)))) 
                                << 0x20U) | (QData)((IData)(
                                                            (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_29 
                                                             | ((0x1fU 
                                                                 >= vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_23)
                                                                 ? 
                                                                ((IData)(1U) 
                                                                 << vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_23)
                                                                 : 0U))))));
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_30[3U] 
                    = (IData)(((((QData)((IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_29 
                                                  | ((0x1fU 
                                                      >= vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_24)
                                                      ? 
                                                     ((IData)(1U) 
                                                      << vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_24)
                                                      : 0U)))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_29 
                                                              | ((0x1fU 
                                                                  >= vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_23)
                                                                  ? 
                                                                 ((IData)(1U) 
                                                                  << vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_23)
                                                                  : 0U))))) 
                               >> 0x20U));
                vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty 
                    = (0xffffU & (((0U == (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim) 
                                            << 5U)))
                                    ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_30[
                                            (((IData)(0xfU) 
                                              + (0x7fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim) 
                                                    << 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim) 
                                                      << 5U))))) 
                                  | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_30[
                                     (3U & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim))] 
                                     >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim) 
                                                  << 5U)))));
            } else {
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_31 
                    = (0xffffU & (~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty)));
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_32[0U] 
                    = (~ (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_31 
                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___dirty_T_58));
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_32[1U] 
                    = (~ (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_31 
                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___dirty_T_64));
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_32[2U] 
                    = (IData)((((QData)((IData)((~ 
                                                 (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_31 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___dirty_T_76)))) 
                                << 0x20U) | (QData)((IData)(
                                                            (~ 
                                                             (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_31 
                                                              | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___dirty_T_70))))));
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_32[3U] 
                    = (IData)(((((QData)((IData)((~ 
                                                  (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_31 
                                                   | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___dirty_T_76)))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (~ 
                                                              (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_31 
                                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___dirty_T_70))))) 
                               >> 0x20U));
                vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty 
                    = (0xffffU & (((0U == (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim) 
                                            << 5U)))
                                    ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_32[
                                            (((IData)(0xfU) 
                                              + (0x7fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim) 
                                                    << 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim) 
                                                      << 5U))))) 
                                  | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_32[
                                     (3U & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim))] 
                                     >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim) 
                                                  << 5U)))));
            }
        }
        vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_2 
            = (((IData)(vlSelf->Soc__DOT__core__DOT__dereg_has_inst) 
                | (IData)(vlSelf->Soc__DOT__core__DOT__emreg_has_inst)) 
               | (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_has_inst));
        vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_3 
            = (0x1c08c0U | ((((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_2)
                               ? (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)
                               : 6U) << 0xfU) | ((((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_2)
                                                    ? (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)
                                                    : 2U) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2)
                                                     ? 1U
                                                     : 
                                                    ((0x30200073U 
                                                      == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                                      ? 5U
                                                      : 
                                                     ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7)
                                                       ? 1U
                                                       : (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)))))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__trap__DOT__state 
            = ((0x17U >= (0x1fU & ((IData)(3U) * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))))
                ? (7U & (vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_3 
                         >> (0x1fU & ((IData)(3U) * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)))))
                : 0U);
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18 
            = ((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose) 
                 >> 3U) & ((1U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose))
                            ? ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))
                                ? ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_9) 
                                   & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_12)) 
                                      & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type))))
                                : ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
                                   & ((~ (IData)(vlSelf->Soc__DOT__core__DOT___ioformem_io_fc_valid)) 
                                      & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type)))))
                            : ((2U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose))
                                ? (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20)
                                : (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose) 
                                    >> 2U) & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20)))))
                ? 2U : 1U);
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_19 
            = ((8U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose))
                ? (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18)
                : 0U);
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_20 
            = ((((1U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_8) 
                        | (~ (((3U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                               & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_12)) 
                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose) 
                                 >> 3U))))) ? (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer)
                  : (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose)) 
                << 0xcU) | (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                             << 8U) | (((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4) 
                                          & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose) 
                                             >> 3U))
                                          ? (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose)
                                          : (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer)) 
                                        << 4U) | ((8U 
                                                   & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose))
                                                   ? (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose)
                                                   : 0U))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__choose_buffer 
            = (0xfU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_20) 
                       >> (0xfU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                   << 2U))));
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_21 
            = (((((3U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_12))
                  ? (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_19)
                  : (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                << 6U) | (((((((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T)) 
                               & (~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_2))) 
                              & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_8)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_7))
                             ? 3U : (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                           << 4U) | ((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4)
                                        ? (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_19)
                                        : (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                      << 2U) | ((8U 
                                                 & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose))
                                                 ? (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18)
                                                 : (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__state 
            = (3U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_21) 
                     >> (7U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 1U))));
        if ((1U & (~ (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                       | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))) 
                      | (~ ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                            & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                               >> 2U))))))) {
            if (vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_valid) {
                vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__w_count = 0U;
            } else if ((0xfU != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__w_count))) {
                vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__w_count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__w_count)));
            }
        }
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN) 
         & (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_mask))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v11 
            = (0xffU & (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_data));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v11 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__Soc__DOT__core__DOT__interact__DOT__over_count = 0U;
    } else if (vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag) {
        vlSelf->__Vdly__Soc__DOT__core__DOT__interact__DOT__over_count 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count)));
        if (VL_UNLIKELY((0x1eU == (IData)(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count)))) {
            VL_WRITEF("ebreak!\n");
            VL_FINISH_MT("vsrc/Soc.v", 10556, "");
        }
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__state = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__valid = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty = 0U;
    } else {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_25 
            = (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                >> 2U) & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_valid));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_21 
            = (0xcU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr_reg 
                       >> 5U));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_26 
            = (0x10U | (((0xfc0000U & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                        << 0x15U) | 
                                       ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                        << 0x12U))) 
                         | ((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_25)
                               ? ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_mask))
                                   ? 5U : 0U) : (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                             << 0xcU) | ((((4U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                            ? 4U : (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                          << 9U) | 
                                         (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_25)
                                            ? 3U : (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                          << 6U)))) 
                        | ((8U & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_17) 
                                   >> (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim)) 
                                  << 3U)) | ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                                              ? (1U 
                                                 & (~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___hit_T_2)))
                                              : (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_22 
            = (0x1fU & ((IData)(1U) + (0xcU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr_reg 
                                               >> 5U))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_23 
            = (0x1fU & ((IData)(2U) + (0xcU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr_reg 
                                               >> 5U))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_24 
            = (0x1fU & ((IData)(3U) + (0xcU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr_reg 
                                               >> 5U))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__state 
            = ((0x17U >= (0x1fU & ((IData)(3U) * (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))))
                ? (7U & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_26 
                         >> (0x1fU & ((IData)(3U) * (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))))
                : 0U);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___dirty_T_58 
            = ((0x1fU >= vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_21)
                ? ((IData)(1U) << vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_21)
                : 0U);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___dirty_T_64 
            = ((0x1fU >= vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_22)
                ? ((IData)(1U) << vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_22)
                : 0U);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___dirty_T_70 
            = ((0x1fU >= vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_23)
                ? ((IData)(1U) << vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_23)
                : 0U);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___dirty_T_76 
            = ((0x1fU >= vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_24)
                ? ((IData)(1U) << vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_24)
                : 0U);
        if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_14)))) {
            vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_27 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid;
            vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28[0U] 
                = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_27 
                   | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___dirty_T_58);
            vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28[1U] 
                = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_27 
                   | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___dirty_T_64);
            vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28[2U] 
                = (IData)((((QData)((IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_27 
                                             | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___dirty_T_76))) 
                            << 0x20U) | (QData)((IData)(
                                                        (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_27 
                                                         | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___dirty_T_70)))));
            vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28[3U] 
                = (IData)(((((QData)((IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_27 
                                              | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___dirty_T_76))) 
                             << 0x20U) | (QData)((IData)(
                                                         (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_27 
                                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___dirty_T_70)))) 
                           >> 0x20U));
            vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__valid 
                = (0xffffU & (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim) 
                                                << 5U)))
                                ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28[
                                        (((IData)(0xfU) 
                                          + (0x7fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim) 
                                                << 5U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim) 
                                             << 5U))))) 
                              | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28[
                                 (3U & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim))] 
                                 >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim) 
                                              << 5U)))));
        }
        if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wen) {
            if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___hit_T_2) {
                vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk3__DOT___dirty_T_18 
                    = ((IData)(1U) << (0x1fU & ((IData)(3U) 
                                                + (0xcU 
                                                   & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                      >> 5U)))));
                vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk3__DOT___dirty_T_12 
                    = ((IData)(1U) << (0x1fU & ((IData)(2U) 
                                                + (0xcU 
                                                   & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                      >> 5U)))));
                vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk3__DOT___dirty_T_6 
                    = ((IData)(1U) << (0x1fU & ((IData)(1U) 
                                                + (0xcU 
                                                   & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                      >> 5U)))));
                vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk3__DOT___dirty_T 
                    = ((IData)(1U) << (0xcU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                               >> 5U)));
                vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty 
                    = (0xffffU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0)
                                   ? ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty) 
                                      | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk3__DOT___dirty_T)
                                   : ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit1)
                                       ? ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty) 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk3__DOT___dirty_T_6)
                                       : ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit2)
                                           ? ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty) 
                                              | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk3__DOT___dirty_T_12)
                                           : ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit3)
                                               ? ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk3__DOT___dirty_T_18)
                                               : 0U)))));
            } else if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__is_war) {
                vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_29 
                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty;
                vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_30[0U] 
                    = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_29 
                       | ((0x1fU >= vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_21)
                           ? ((IData)(1U) << vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_21)
                           : 0U));
                vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_30[1U] 
                    = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_29 
                       | ((0x1fU >= vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_22)
                           ? ((IData)(1U) << vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_22)
                           : 0U));
                vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_30[2U] 
                    = (IData)((((QData)((IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_29 
                                                 | ((0x1fU 
                                                     >= vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_24)
                                                     ? 
                                                    ((IData)(1U) 
                                                     << vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_24)
                                                     : 0U)))) 
                                << 0x20U) | (QData)((IData)(
                                                            (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_29 
                                                             | ((0x1fU 
                                                                 >= vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_23)
                                                                 ? 
                                                                ((IData)(1U) 
                                                                 << vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_23)
                                                                 : 0U))))));
                vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_30[3U] 
                    = (IData)(((((QData)((IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_29 
                                                  | ((0x1fU 
                                                      >= vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_24)
                                                      ? 
                                                     ((IData)(1U) 
                                                      << vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_24)
                                                      : 0U)))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_29 
                                                              | ((0x1fU 
                                                                  >= vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_23)
                                                                  ? 
                                                                 ((IData)(1U) 
                                                                  << vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_23)
                                                                  : 0U))))) 
                               >> 0x20U));
                vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty 
                    = (0xffffU & (((0U == (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim) 
                                            << 5U)))
                                    ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_30[
                                            (((IData)(0xfU) 
                                              + (0x7fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim) 
                                                    << 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim) 
                                                      << 5U))))) 
                                  | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_30[
                                     (3U & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim))] 
                                     >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim) 
                                                  << 5U)))));
            } else {
                vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_31 
                    = (0xffffU & (~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty)));
                vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_32[0U] 
                    = (~ (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_31 
                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___dirty_T_58));
                vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_32[1U] 
                    = (~ (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_31 
                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___dirty_T_64));
                vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_32[2U] 
                    = (IData)((((QData)((IData)((~ 
                                                 (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_31 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___dirty_T_76)))) 
                                << 0x20U) | (QData)((IData)(
                                                            (~ 
                                                             (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_31 
                                                              | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___dirty_T_70))))));
                vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_32[3U] 
                    = (IData)(((((QData)((IData)((~ 
                                                  (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_31 
                                                   | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___dirty_T_76)))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (~ 
                                                              (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_31 
                                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___dirty_T_70))))) 
                               >> 0x20U));
                vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty 
                    = (0xffffU & (((0U == (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim) 
                                            << 5U)))
                                    ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_32[
                                            (((IData)(0xfU) 
                                              + (0x7fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim) 
                                                    << 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim) 
                                                      << 5U))))) 
                                  | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_32[
                                     (3U & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim))] 
                                     >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim) 
                                                  << 5U)))));
            }
        }
    }
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr_reg 
               >> 9U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v0 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_14)
                ? 0U : (0xfU & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hee43b865__0)));
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__replace_ext__DOT__Memory__v1 
            = ((0xbU >= (0xfU & ((IData)(3U) * (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim))))
                ? (7U & ((0x66U | (((IData)(vlSelf->__VdfgTmp_h6213b3c0__0) 
                                    << 0xaU) | (((IData)(vlSelf->__VdfgTmp_h6213b3c0__0) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__VdfgTmp_h621e0c7f__0) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->__VdfgTmp_h621e0c7f__0))))) 
                         >> (0xfU & ((IData)(3U) * (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim)))))
                : 0U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__replace_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__replace_ext__DOT__Memory__v1 
            = (3U & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr_reg 
                     >> 7U));
    }
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___hit_T_2) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__replace_ext__DOT__Memory__v0 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0)
                ? (6U | (IData)(vlSelf->__VdfgTmp_he9a20668__0))
                : ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit1)
                    ? (4U | (IData)(vlSelf->__VdfgTmp_he9a20668__0))
                    : ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit2)
                        ? (1U | ((IData)(vlSelf->__VdfgTmp_he9ded5ef__0) 
                                 << 1U)) : ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit3)
                                             ? ((IData)(vlSelf->__VdfgTmp_he9ded5ef__0) 
                                                << 1U)
                                             : 0U))));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__replace_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__replace_ext__DOT__Memory__v0 
            = (3U & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                     >> 7U));
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x1fU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_7_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1fU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_7_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_7_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x1fU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_7_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1fU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_7_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_7_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x1fU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_7_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1fU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_7_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_7_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x1eU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_6_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1fU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_6_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_6_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x1eU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_6_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1fU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_6_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_6_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x1eU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_6_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1fU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_6_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_6_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x1dU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_5_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1fU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_5_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_5_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x1dU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_5_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1fU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_5_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_5_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x1dU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_5_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1fU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_5_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_5_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x1cU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_4_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1fU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_4_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_4_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x1cU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_4_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1fU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_4_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_4_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x1cU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_4_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1fU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_4_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_4_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x1bU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_3_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1eU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_3_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_3_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x1bU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_3_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1eU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_3_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_3_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x1bU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_3_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1eU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_3_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_3_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x1aU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_2_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1eU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_2_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_2_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x1aU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_2_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1eU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_2_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_2_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x1aU))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_2_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1eU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_2_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_2_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x19U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_1_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1eU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_1_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_1_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x19U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_1_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1eU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_1_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_1_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x19U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_1_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1eU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_1_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_1_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x18U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_0_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1eU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_0_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_0_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x18U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_0_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1eU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_0_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_0_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x18U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_0_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1eU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_0_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_15_0_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x17U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_7_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1dU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_7_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_7_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x17U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_7_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1dU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_7_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_7_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x17U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_7_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1dU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_7_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_7_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x16U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_6_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1dU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_6_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_6_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x16U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_6_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1dU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_6_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_6_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x16U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_6_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1dU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_6_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_6_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x15U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_5_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1dU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_5_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_5_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x15U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_5_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1dU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_5_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_5_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x15U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_5_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1dU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_5_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_5_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x14U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_4_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1dU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_4_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_4_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x14U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_4_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1dU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_4_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_4_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x14U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_4_ext__DOT__Memory__v2 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1dU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_4_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_4_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x13U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_3_ext__DOT__Memory__v0 
            = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1cU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_3_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_3_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x13U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_3_ext__DOT__Memory__v1 
            = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1cU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_3_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_3_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x13U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_3_ext__DOT__Memory__v2 
            = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1cU] 
               >> 0x18U);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_3_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_3_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x12U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_2_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1cU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_2_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_2_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x12U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_2_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1cU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_2_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_2_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x12U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_2_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1cU] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_2_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_2_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x11U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_1_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1cU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_1_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_1_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x11U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_1_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1cU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_1_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_1_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x11U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_1_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1cU] 
                        >> 8U));
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_1_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_1_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_1) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x10U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_0_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1cU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_0_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_0_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_0) 
         & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wmask[3U] 
            >> 0x10U))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_0_ext__DOT__Memory__v1 
            = (0xffU & vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1cU]);
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_0_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_14_0_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr;
    }
}

void VSoc___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, QData/*63:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__5(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__5\n"); );
    // Init
    QData/*63:0*/ __Vfunc_pmem_read__3__Vfuncout;
    __Vfunc_pmem_read__3__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_pmem_read__4__Vfuncout;
    __Vfunc_pmem_read__4__Vfuncout = 0;
    // Body
    if (vlSelf->Soc__DOT____Vcellinp__sram__ARESETn) {
        if (((IData)(vlSelf->Soc__DOT__sram__DOT__need_read) 
             | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_7))) {
            vlSelf->Soc__DOT__sram__DOT__rvalid = 1U;
            if (vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_7) {
                VSoc___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->Soc__DOT___core_io_AXI_Interface_ar_bits_addr, __Vfunc_pmem_read__3__Vfuncout);
                vlSelf->Soc__DOT__sram__DOT__rdata 
                    = __Vfunc_pmem_read__3__Vfuncout;
                vlSelf->Soc__DOT__sram__DOT__rlast 
                    = ((IData)(vlSelf->Soc__DOT__sram__DOT__r_count) 
                       == (IData)(vlSelf->Soc__DOT___core_io_AXI_Interface_ar_bits_len));
            } else {
                VSoc___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                                      (vlSelf->Soc__DOT__sram__DOT__araddr 
                                                                       + 
                                                                       ((IData)(vlSelf->Soc__DOT__sram__DOT__r_count) 
                                                                        << 3U)), __Vfunc_pmem_read__4__Vfuncout);
                vlSelf->Soc__DOT__sram__DOT__rdata 
                    = __Vfunc_pmem_read__4__Vfuncout;
                vlSelf->Soc__DOT__sram__DOT__rlast 
                    = ((IData)(vlSelf->Soc__DOT__sram__DOT__r_count) 
                       == (IData)(vlSelf->Soc__DOT__sram__DOT__r_burst));
            }
            vlSelf->Soc__DOT__sram__DOT__rresp = 0U;
            vlSelf->__Vdly__Soc__DOT__sram__DOT__r_count 
                = (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_7) 
                    & (0U == (IData)(vlSelf->Soc__DOT___core_io_AXI_Interface_ar_bits_len)))
                    ? 0U : (0xffU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__sram__DOT__r_count))));
        } else {
            vlSelf->Soc__DOT__sram__DOT__rvalid = 0U;
            vlSelf->__Vdly__Soc__DOT__sram__DOT__r_count = 0U;
        }
    } else {
        vlSelf->Soc__DOT__sram__DOT__rvalid = 0U;
        vlSelf->Soc__DOT__sram__DOT__rdata = 0ULL;
        vlSelf->Soc__DOT__sram__DOT__rresp = 0U;
        vlSelf->Soc__DOT__sram__DOT__rlast = 0U;
        vlSelf->__Vdly__Soc__DOT__sram__DOT__r_count = 0U;
    }
    if (vlSelf->Soc__DOT____Vcellinp__sram__ARESETn) {
        if (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_7) 
             & (0U != (IData)(vlSelf->Soc__DOT___core_io_AXI_Interface_ar_bits_len)))) {
            vlSelf->Soc__DOT__sram__DOT__araddr = vlSelf->Soc__DOT___core_io_AXI_Interface_ar_bits_addr;
            vlSelf->Soc__DOT__sram__DOT__need_read = 1U;
            vlSelf->__Vdly__Soc__DOT__sram__DOT__r_burst 
                = vlSelf->Soc__DOT___core_io_AXI_Interface_ar_bits_len;
        } else if (((IData)(vlSelf->Soc__DOT__sram__DOT__r_count) 
                    == (IData)(vlSelf->Soc__DOT__sram__DOT__r_burst))) {
            vlSelf->Soc__DOT__sram__DOT__need_read = 0U;
            vlSelf->__Vdly__Soc__DOT__sram__DOT__r_burst = 0U;
        }
    } else {
        vlSelf->Soc__DOT__sram__DOT__araddr = 0U;
        vlSelf->Soc__DOT__sram__DOT__need_read = 0U;
        vlSelf->__Vdly__Soc__DOT__sram__DOT__r_burst = 0U;
    }
    vlSelf->Soc__DOT__sram__DOT__r_count = vlSelf->__Vdly__Soc__DOT__sram__DOT__r_count;
    vlSelf->Soc__DOT__sram__DOT__r_burst = vlSelf->__Vdly__Soc__DOT__sram__DOT__r_burst;
}
