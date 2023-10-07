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

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__7__PROF__Soc__l4899(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__7__PROF__Soc__l4899\n"); );
    // Body
    if (vlSelf->Soc__DOT____Vcellinp__sram__ARESETn) {
        if (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_6) 
             & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_5))) {
            VSoc___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                   (vlSelf->Soc__DOT__sram__DOT__awaddr 
                                                                    + 
                                                                    ((IData)(vlSelf->Soc__DOT__sram__DOT__w_count) 
                                                                     << 3U)), vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data, (IData)(vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb));
            vlSelf->__Vdly__Soc__DOT__sram__DOT__w_count = 0U;
        } else if (vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_6) {
            vlSelf->__Vdly__Soc__DOT__sram__DOT__w_count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__sram__DOT__w_count)));
            VSoc___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                   (vlSelf->Soc__DOT__sram__DOT__awaddr 
                                                                    + 
                                                                    ((IData)(vlSelf->Soc__DOT__sram__DOT__w_count) 
                                                                     << 3U)), vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data, (IData)(vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb));
        } else {
            vlSelf->__Vdly__Soc__DOT__sram__DOT__w_count 
                = vlSelf->Soc__DOT__sram__DOT__w_count;
        }
    } else {
        vlSelf->__Vdly__Soc__DOT__sram__DOT__w_count = 0U;
    }
}

void VSoc___024unit____Vdpiimwrap_update_debuginfo_TOP____024unit(IData/*31:0*/ pc, CData/*0:0*/ pc_req, IData/*31:0*/ inst, CData/*0:0*/ inst_valid, CData/*0:0*/ load_use, QData/*63:0*/ op_a, QData/*63:0*/ op_b, QData/*63:0*/ result, CData/*0:0*/ br_yes, CData/*0:0*/ mem_access, QData/*63:0*/ mem_addr, CData/*4:0*/ rd, QData/*63:0*/ reg_wdata, CData/*0:0*/ reg_wen, CData/*0:0*/ csr_wen, QData/*63:0*/ csr_wdata, SData/*11:0*/ csr_waddr, CData/*0:0*/ sdb_stall, CData/*2:0*/ trap_state);

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__78__PROF__Soc__l4743(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__78__PROF__Soc__l4743\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        VSoc___024unit____Vdpiimwrap_update_debuginfo_TOP____024unit(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc, (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started), vlSelf->Soc__DOT__core__DOT__decode__DOT__inst, 
                                                                     ((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                                                                      & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)), (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16), vlSelf->Soc__DOT__core__DOT__dereg_op_a, vlSelf->Soc__DOT__core__DOT__dereg_op_b, 
                                                                     ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen)
                                                                       ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                                                                       : vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_h7d5adbc1__0), (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag), 
                                                                     (0U 
                                                                      != 
                                                                      ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type) 
                                                                       | (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))), vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T, (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr), vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata, 
                                                                     ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
                                                                      & (0U 
                                                                         != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))), (IData)(vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen), vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata, (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr), 
                                                                     ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0) 
                                                                      & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)), (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state));
    }
}

void VSoc___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, QData/*63:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__869__PROF__Soc__l4959(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__869__PROF__Soc__l4959\n"); );
    // Init
    QData/*63:0*/ __Vfunc_pmem_read__3__Vfuncout;
    __Vfunc_pmem_read__3__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_pmem_read__4__Vfuncout;
    __Vfunc_pmem_read__4__Vfuncout = 0;
    // Body
    if (vlSelf->Soc__DOT____Vcellinp__sram__ARESETn) {
        if (((IData)(vlSelf->Soc__DOT__sram__DOT__need_read) 
             | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_9))) {
            vlSelf->Soc__DOT__sram__DOT__rvalid = 1U;
            vlSelf->Soc__DOT__sram__DOT__rresp = 0U;
            if (vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_9) {
                VSoc___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->Soc__DOT___core_io_AXI_Interface_ar_bits_addr, __Vfunc_pmem_read__3__Vfuncout);
                vlSelf->Soc__DOT__sram__DOT__rdata 
                    = __Vfunc_pmem_read__3__Vfuncout;
            } else {
                VSoc___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                                      (vlSelf->Soc__DOT__sram__DOT__araddr 
                                                                       + 
                                                                       ((IData)(vlSelf->Soc__DOT__sram__DOT__r_count) 
                                                                        << 3U)), __Vfunc_pmem_read__4__Vfuncout);
                vlSelf->Soc__DOT__sram__DOT__rdata 
                    = __Vfunc_pmem_read__4__Vfuncout;
            }
            vlSelf->__Vdly__Soc__DOT__sram__DOT__r_count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__sram__DOT__r_count)));
            vlSelf->__Vdly__Soc__DOT__sram__DOT__rlast 
                = (0xfU == (IData)(vlSelf->Soc__DOT__sram__DOT__r_count));
            if (vlSelf->Soc__DOT__sram__DOT__rlast) {
                vlSelf->Soc__DOT__sram__DOT__rvalid = 0U;
                vlSelf->__Vdly__Soc__DOT__sram__DOT__r_count = 0U;
            }
        }
    } else {
        vlSelf->Soc__DOT__sram__DOT__rvalid = 0U;
        vlSelf->Soc__DOT__sram__DOT__rdata = 0ULL;
        vlSelf->Soc__DOT__sram__DOT__rresp = 0U;
        vlSelf->__Vdly__Soc__DOT__sram__DOT__rlast = 0U;
        vlSelf->__Vdly__Soc__DOT__sram__DOT__r_count = 0U;
    }
}
