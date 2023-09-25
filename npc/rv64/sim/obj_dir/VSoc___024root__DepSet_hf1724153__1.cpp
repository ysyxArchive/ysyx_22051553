// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSoc__Syms.h"
#include "VSoc___024root.h"

void VSoc___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, QData/*63:0*/ &pmem_read__Vfuncrtn);
void VSoc___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__1(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__1\n"); );
    // Init
    QData/*63:0*/ __Vfunc_pmem_read__2__Vfuncout;
    __Vfunc_pmem_read__2__Vfuncout = 0;
    // Body
    if (vlSelf->Soc__DOT____Vcellinp__sram__ARESETn) {
        if (vlSelf->Soc__DOT__sram__DOT__need_resp) {
            vlSelf->Soc__DOT__sram__DOT__bresp = 0U;
            vlSelf->Soc__DOT__sram__DOT__bvalid = 1U;
        } else if (vlSelf->Soc__DOT___sram_S_AXI_BVALID) {
            vlSelf->Soc__DOT__sram__DOT__bvalid = 0U;
        }
    } else {
        vlSelf->Soc__DOT__sram__DOT__bvalid = 0U;
    }
    if (vlSelf->Soc__DOT____Vcellinp__sram__ARESETn) {
        if (vlSelf->Soc__DOT__sram__DOT__need_read) {
            VSoc___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->Soc__DOT__sram__DOT__araddr, __Vfunc_pmem_read__2__Vfuncout);
            vlSelf->Soc__DOT__sram__DOT__rvalid = 1U;
            vlSelf->Soc__DOT__sram__DOT__rdata = __Vfunc_pmem_read__2__Vfuncout;
            vlSelf->Soc__DOT__sram__DOT__rresp = 0U;
        } else {
            vlSelf->Soc__DOT__sram__DOT__rvalid = 0U;
        }
    } else {
        vlSelf->Soc__DOT__sram__DOT__rvalid = 0U;
        vlSelf->Soc__DOT__sram__DOT__rdata = 0ULL;
        vlSelf->Soc__DOT__sram__DOT__rresp = 0U;
    }
    vlSelf->Soc__DOT___sram_S_AXI_BVALID = vlSelf->Soc__DOT__sram__DOT__bvalid;
    if (vlSelf->Soc__DOT____Vcellinp__sram__ARESETn) {
        if (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1) 
             & (IData)(vlSelf->Soc__DOT__sram__DOT__wready))) {
            VSoc___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                   (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1) 
                                                                     & ((IData)(vlSelf->Soc__DOT__sram__DOT__wready) 
                                                                        & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN) 
                                                                           & (IData)(vlSelf->Soc__DOT__sram__DOT__awready))))
                                                                     ? vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr
                                                                     : vlSelf->Soc__DOT__sram__DOT__awaddr_buffer), 
                                                                   ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0)
                                                                     ? 0ULL
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                                                      ? vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_data
                                                                      : 
                                                                     ((2U 
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
                                                                        : 0ULL)))), 
                                                                   ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0)
                                                                     ? 0U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                                                      ? (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_mask)
                                                                      : 
                                                                     ((2U 
                                                                       & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                                                       ? (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask)
                                                                       : 
                                                                      ((4U 
                                                                        & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                                                        ? (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask)
                                                                        : 0U)))));
            vlSelf->Soc__DOT__sram__DOT__need_resp = 1U;
        } else {
            vlSelf->Soc__DOT__sram__DOT__need_resp = 0U;
        }
    } else {
        vlSelf->Soc__DOT__sram__DOT__need_resp = 0U;
    }
    if (vlSelf->Soc__DOT____Vcellinp__sram__ARESETn) {
        if (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4) 
             & (IData)(vlSelf->Soc__DOT__sram__DOT__arready))) {
            vlSelf->Soc__DOT__sram__DOT__araddr = (
                                                   (1U 
                                                    & ((0U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                                       | ((~ 
                                                           ((2U 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                                            & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                               >> 3U))) 
                                                          | (1U 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)))))
                                                    ? 0U
                                                    : vlSelf->Soc__DOT__core__DOT__arbitor__DOT___addr_T_6);
        }
        if (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN) 
             & (IData)(vlSelf->Soc__DOT__sram__DOT__awready))) {
            vlSelf->Soc__DOT__sram__DOT__awaddr_buffer 
                = vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr;
        }
        vlSelf->Soc__DOT__sram__DOT__need_read = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4) 
                                                  & (IData)(vlSelf->Soc__DOT__sram__DOT__arready));
        vlSelf->Soc__DOT__sram__DOT__wready = vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1;
        vlSelf->Soc__DOT__sram__DOT__arready = vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4;
        vlSelf->Soc__DOT__sram__DOT__awready = vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN;
    } else {
        vlSelf->Soc__DOT__sram__DOT__araddr = 0U;
        vlSelf->Soc__DOT__sram__DOT__awaddr_buffer = 0U;
        vlSelf->Soc__DOT__sram__DOT__need_read = 0U;
        vlSelf->Soc__DOT__sram__DOT__wready = 0U;
        vlSelf->Soc__DOT__sram__DOT__arready = 0U;
        vlSelf->Soc__DOT__sram__DOT__awready = 0U;
    }
}
