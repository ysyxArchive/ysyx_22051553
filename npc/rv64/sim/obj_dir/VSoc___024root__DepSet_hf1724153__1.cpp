// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSoc__Syms.h"
#include "VSoc___024root.h"

void VSoc___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, QData/*63:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__3(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__3\n"); );
    // Init
    QData/*63:0*/ __Vfunc_pmem_read__3__Vfuncout;
    __Vfunc_pmem_read__3__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_pmem_read__4__Vfuncout;
    __Vfunc_pmem_read__4__Vfuncout = 0;
    // Body
    if (vlSelf->Soc__DOT____Vcellinp__sram__ARESETn) {
        if (((IData)(vlSelf->Soc__DOT__sram__DOT__need_read) 
             | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_8))) {
            vlSelf->Soc__DOT__sram__DOT__rvalid = 1U;
            vlSelf->Soc__DOT__sram__DOT__rresp = 0U;
            if (vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_8) {
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
    if (vlSelf->Soc__DOT____Vcellinp__sram__ARESETn) {
        if (vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_8) {
            vlSelf->Soc__DOT__sram__DOT__araddr = vlSelf->Soc__DOT___core_io_AXI_Interface_ar_bits_addr;
            vlSelf->Soc__DOT__sram__DOT__need_read = 1U;
        } else if (vlSelf->Soc__DOT__sram__DOT__rlast) {
            vlSelf->Soc__DOT__sram__DOT__need_read = 0U;
        }
    } else {
        vlSelf->Soc__DOT__sram__DOT__araddr = 0U;
        vlSelf->Soc__DOT__sram__DOT__need_read = 0U;
    }
    vlSelf->Soc__DOT__sram__DOT__r_count = vlSelf->__Vdly__Soc__DOT__sram__DOT__r_count;
    vlSelf->Soc__DOT__sram__DOT__rlast = vlSelf->__Vdly__Soc__DOT__sram__DOT__rlast;
}
