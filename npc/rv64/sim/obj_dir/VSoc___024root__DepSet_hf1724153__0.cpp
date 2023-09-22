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

void VSoc___024unit____Vdpiimwrap_update_debuginfo_TOP____024unit(IData/*31:0*/ pc, CData/*0:0*/ pc_req, IData/*31:0*/ inst, CData/*0:0*/ inst_valid, CData/*0:0*/ load_use, QData/*63:0*/ op_a, QData/*63:0*/ op_b, QData/*63:0*/ result, CData/*0:0*/ br_yes, CData/*0:0*/ mem_access, QData/*63:0*/ mem_addr, CData/*4:0*/ rd, QData/*63:0*/ reg_wdata, CData/*0:0*/ reg_wen, CData/*0:0*/ csr_wen, QData/*63:0*/ csr_wdata, SData/*11:0*/ csr_waddr, CData/*0:0*/ sdb_stall);
extern const VlWide<32>/*1023:0*/ VSoc__ConstPool__CONST_h2ae7f32a_0;
extern const VlWide<16>/*511:0*/ VSoc__ConstPool__CONST_h1c449781_0;

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__0(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_26;
    Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_26 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_26;
    Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_26 = 0;
    IData/*31:0*/ __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc;
    __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc = 0;
    IData/*31:0*/ __Vdly__Soc__DOT__core__DOT__fetch__DOT__old_pc;
    __Vdly__Soc__DOT__core__DOT__fetch__DOT__old_pc = 0;
    IData/*31:0*/ __Vdly__Soc__DOT__core__DOT__clint__DOT__MSIP;
    __Vdly__Soc__DOT__core__DOT__clint__DOT__MSIP = 0;
    QData/*63:0*/ __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIMECMP;
    __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIMECMP = 0;
    QData/*63:0*/ __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIME;
    __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIME = 0;
    CData/*4:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1;
    __Vdlyvdim0__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1 = 0;
    QData/*63:0*/ __Vdlyvval__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1;
    __Vdlyvval__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1 = 0;
    QData/*63:0*/ __Vdly__Soc__DOT__core__DOT__csrs__DOT__MIP;
    __Vdly__Soc__DOT__core__DOT__csrs__DOT__MIP = 0;
    CData/*2:0*/ __Vdly__Soc__DOT__core__DOT__trap__DOT__state;
    __Vdly__Soc__DOT__core__DOT__trap__DOT__state = 0;
    CData/*0:0*/ __Vdly__Soc__DOT__core__DOT__arbitor__DOT__aw_comp;
    __Vdly__Soc__DOT__core__DOT__arbitor__DOT__aw_comp = 0;
    CData/*0:0*/ __Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_comp;
    __Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_comp = 0;
    CData/*2:0*/ __Vdly__Soc__DOT__core__DOT__Icache__DOT__state;
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__state = 0;
    VlWide<16>/*511:0*/ __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid;
    VL_ZERO_W(512, __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid);
    VlWide<16>/*511:0*/ __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty;
    VL_ZERO_W(512, __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty);
    VlWide<16>/*511:0*/ __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace;
    VL_ZERO_W(512, __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace);
    CData/*0:0*/ __Vdly__Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw;
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw = 0;
    IData/*31:0*/ __Vdly__Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr;
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr = 0;
    SData/*8:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v0;
    __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v0 = 0;
    IData/*20:0*/ __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v0;
    __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v0;
    __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v0 = 0;
    SData/*8:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v1;
    __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v1 = 0;
    IData/*20:0*/ __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v1;
    __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v1;
    __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v1 = 0;
    SData/*8:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v2;
    __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v2 = 0;
    IData/*20:0*/ __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v2;
    __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v2;
    __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v2 = 0;
    SData/*8:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v3;
    __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v3 = 0;
    IData/*20:0*/ __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v3;
    __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v3;
    __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v3 = 0;
    SData/*8:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0;
    __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0 = 0;
    QData/*63:0*/ __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0;
    __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0;
    __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0 = 0;
    SData/*8:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1;
    __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1 = 0;
    QData/*63:0*/ __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1;
    __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1;
    __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1 = 0;
    SData/*8:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2;
    __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2 = 0;
    QData/*63:0*/ __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2;
    __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2;
    __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2 = 0;
    SData/*8:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3;
    __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3 = 0;
    QData/*63:0*/ __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3;
    __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3;
    __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3 = 0;
    SData/*8:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4;
    __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4 = 0;
    QData/*63:0*/ __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4;
    __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4;
    __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4 = 0;
    SData/*8:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5;
    __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5 = 0;
    QData/*63:0*/ __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5;
    __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5;
    __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5 = 0;
    CData/*2:0*/ __Vdly__Soc__DOT__core__DOT__Dcache__DOT__state;
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__state = 0;
    VlWide<16>/*511:0*/ __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid;
    VL_ZERO_W(512, __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid);
    VlWide<16>/*511:0*/ __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty;
    VL_ZERO_W(512, __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty);
    VlWide<16>/*511:0*/ __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace;
    VL_ZERO_W(512, __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace);
    CData/*0:0*/ __Vdly__Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw;
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw = 0;
    IData/*31:0*/ __Vdly__Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr;
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr = 0;
    SData/*8:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v0;
    __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v0 = 0;
    IData/*20:0*/ __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v0;
    __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v0;
    __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v0 = 0;
    SData/*8:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v1;
    __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v1 = 0;
    IData/*20:0*/ __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v1;
    __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v1;
    __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v1 = 0;
    SData/*8:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v2;
    __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v2 = 0;
    IData/*20:0*/ __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v2;
    __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v2;
    __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v2 = 0;
    SData/*8:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v3;
    __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v3 = 0;
    IData/*20:0*/ __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v3;
    __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v3;
    __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v3 = 0;
    SData/*8:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0;
    __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0 = 0;
    QData/*63:0*/ __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0;
    __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0;
    __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0 = 0;
    SData/*8:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1;
    __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1 = 0;
    QData/*63:0*/ __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1;
    __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1;
    __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1 = 0;
    SData/*8:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2;
    __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2 = 0;
    QData/*63:0*/ __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2;
    __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2;
    __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2 = 0;
    SData/*8:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3;
    __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3 = 0;
    QData/*63:0*/ __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3;
    __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3;
    __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3 = 0;
    SData/*8:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4;
    __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4 = 0;
    QData/*63:0*/ __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4;
    __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4;
    __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4 = 0;
    SData/*8:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5;
    __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5 = 0;
    QData/*63:0*/ __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5;
    __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5;
    __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5 = 0;
    CData/*2:0*/ __Vdly__Soc__DOT__core__DOT__interact__DOT__over_count;
    __Vdly__Soc__DOT__core__DOT__interact__DOT__over_count = 0;
    VlWide<8>/*255:0*/ __Vtemp_hb99da695__0;
    VlWide<32>/*1023:0*/ __Vtemp_h3df9875f__0;
    VlWide<32>/*1023:0*/ __Vtemp_h71f667b3__0;
    VlWide<32>/*1023:0*/ __Vtemp_h4e4eaee5__0;
    VlWide<32>/*1023:0*/ __Vtemp_h3df9875f__1;
    VlWide<32>/*1023:0*/ __Vtemp_h735fa511__0;
    VlWide<32>/*1023:0*/ __Vtemp_h4e4eaee5__1;
    VlWide<32>/*1023:0*/ __Vtemp_h3df9875f__2;
    VlWide<32>/*1023:0*/ __Vtemp_h2f662ca0__0;
    VlWide<32>/*1023:0*/ __Vtemp_h4e4eaee5__2;
    VlWide<32>/*1023:0*/ __Vtemp_h3df9875f__3;
    VlWide<32>/*1023:0*/ __Vtemp_h105247de__0;
    VlWide<32>/*1023:0*/ __Vtemp_h4e4eaee5__3;
    VlWide<32>/*1023:0*/ __Vtemp_h3df9875f__4;
    VlWide<32>/*1023:0*/ __Vtemp_h1682514b__0;
    VlWide<32>/*1023:0*/ __Vtemp_h4e4eaee5__4;
    VlWide<64>/*2047:0*/ __Vtemp_h6701084d__0;
    VlWide<80>/*2559:0*/ __Vtemp_h7405d7f5__0;
    VlWide<96>/*3071:0*/ __Vtemp_hd27148e7__0;
    VlWide<112>/*3583:0*/ __Vtemp_h2984ea2a__0;
    VlWide<128>/*4095:0*/ __Vtemp_h175d5fc5__0;
    VlWide<64>/*2047:0*/ __Vtemp_h7e9e7a2e__0;
    VlWide<80>/*2559:0*/ __Vtemp_h0ec5e9aa__0;
    VlWide<96>/*3071:0*/ __Vtemp_h8dc182d4__0;
    VlWide<16>/*511:0*/ __Vtemp_h4b7be7f8__0;
    VlWide<112>/*3583:0*/ __Vtemp_hb2fb5620__0;
    VlWide<128>/*4095:0*/ __Vtemp_hfe46040b__0;
    VlWide<64>/*2047:0*/ __Vtemp_h206422cb__0;
    VlWide<80>/*2559:0*/ __Vtemp_haaea05ac__0;
    VlWide<96>/*3071:0*/ __Vtemp_h44b4b5df__0;
    VlWide<16>/*511:0*/ __Vtemp_h615ab0b6__0;
    VlWide<112>/*3583:0*/ __Vtemp_h027cde53__0;
    VlWide<16>/*511:0*/ __Vtemp_h7fa0707d__0;
    VlWide<128>/*4095:0*/ __Vtemp_ha2797c92__0;
    VlWide<8>/*255:0*/ __Vtemp_h1d13a2da__0;
    VlWide<3>/*95:0*/ __Vtemp_h5ee83ed9__0;
    VlWide<16>/*511:0*/ __Vtemp_h11a82919__0;
    VlWide<3>/*95:0*/ __Vtemp_h7ce0e83e__0;
    VlWide<3>/*95:0*/ __Vtemp_h6eeb50c9__0;
    VlWide<3>/*95:0*/ __Vtemp_h238ea762__0;
    VlWide<4>/*127:0*/ __Vtemp_h7cb4ecaa__0;
    VlWide<4>/*127:0*/ __Vtemp_hb46e09a5__0;
    VlWide<4>/*127:0*/ __Vtemp_h7cb4ecaa__1;
    VlWide<4>/*127:0*/ __Vtemp_he3381e13__0;
    VlWide<32>/*1023:0*/ __Vtemp_h9c122d25__0;
    VlWide<32>/*1023:0*/ __Vtemp_ha2eb1b90__0;
    VlWide<32>/*1023:0*/ __Vtemp_hb1354e33__0;
    VlWide<32>/*1023:0*/ __Vtemp_h9c122d25__1;
    VlWide<32>/*1023:0*/ __Vtemp_h0e8ec2c2__0;
    VlWide<32>/*1023:0*/ __Vtemp_hb1354e33__1;
    VlWide<32>/*1023:0*/ __Vtemp_h9c122d25__2;
    VlWide<32>/*1023:0*/ __Vtemp_h556919cf__0;
    VlWide<32>/*1023:0*/ __Vtemp_hb1354e33__2;
    VlWide<32>/*1023:0*/ __Vtemp_h9c122d25__3;
    VlWide<32>/*1023:0*/ __Vtemp_h6d823649__0;
    VlWide<32>/*1023:0*/ __Vtemp_hb1354e33__3;
    VlWide<32>/*1023:0*/ __Vtemp_h9c122d25__4;
    VlWide<32>/*1023:0*/ __Vtemp_h86ee8f6d__0;
    VlWide<32>/*1023:0*/ __Vtemp_hb1354e33__4;
    VlWide<64>/*2047:0*/ __Vtemp_h50550c2a__0;
    VlWide<80>/*2559:0*/ __Vtemp_hbcde5723__0;
    VlWide<96>/*3071:0*/ __Vtemp_h437685a4__0;
    VlWide<112>/*3583:0*/ __Vtemp_h6a985253__0;
    VlWide<128>/*4095:0*/ __Vtemp_h282da158__0;
    VlWide<64>/*2047:0*/ __Vtemp_ha4d06dc8__0;
    VlWide<80>/*2559:0*/ __Vtemp_h1049b742__0;
    VlWide<96>/*3071:0*/ __Vtemp_h28d96592__0;
    VlWide<16>/*511:0*/ __Vtemp_hdab541ed__0;
    VlWide<112>/*3583:0*/ __Vtemp_h70572cb2__0;
    VlWide<128>/*4095:0*/ __Vtemp_haa7ad584__0;
    VlWide<64>/*2047:0*/ __Vtemp_h627808f2__0;
    VlWide<80>/*2559:0*/ __Vtemp_hcd13e9ea__0;
    VlWide<96>/*3071:0*/ __Vtemp_hc6410a0c__0;
    VlWide<16>/*511:0*/ __Vtemp_h59866724__0;
    VlWide<112>/*3583:0*/ __Vtemp_ha333d23e__0;
    VlWide<16>/*511:0*/ __Vtemp_ha349f764__0;
    VlWide<128>/*4095:0*/ __Vtemp_h11e7517e__0;
    VlWide<4>/*127:0*/ __Vtemp_hde8f545e__0;
    VlWide<4>/*127:0*/ __Vtemp_h31e9c9ac__0;
    VlWide<16>/*511:0*/ __Vtemp_h5e8385be__0;
    VlWide<16>/*511:0*/ __Vtemp_h5e8385be__1;
    VlWide<16>/*511:0*/ __Vtemp_hb792bbf6__0;
    VlWide<16>/*511:0*/ __Vtemp_hb792bbf6__1;
    VlWide<16>/*511:0*/ __Vtemp_hb201d805__0;
    VlWide<16>/*511:0*/ __Vtemp_hb201d805__1;
    VlWide<4>/*127:0*/ __Vtemp_h40386c7d__0;
    VlWide<4>/*127:0*/ __Vtemp_hbf25ab7a__0;
    VlWide<4>/*127:0*/ __Vtemp_h5f9be4f4__0;
    VlWide<16>/*511:0*/ __Vtemp_hd1f243a7__0;
    VlWide<4>/*127:0*/ __Vtemp_h7cb4ecaa__2;
    VlWide<4>/*127:0*/ __Vtemp_h197b5ff8__0;
    VlWide<4>/*127:0*/ __Vtemp_h2b127288__0;
    VlWide<4>/*127:0*/ __Vtemp_h197b5ff8__1;
    VlWide<4>/*127:0*/ __Vtemp_hd8984f98__0;
    VlWide<16>/*511:0*/ __Vtemp_h408f0c7c__0;
    VlWide<16>/*511:0*/ __Vtemp_h408f0c7c__1;
    VlWide<16>/*511:0*/ __Vtemp_h95d85a84__0;
    VlWide<16>/*511:0*/ __Vtemp_h95d85a84__1;
    VlWide<16>/*511:0*/ __Vtemp_he1218dcc__0;
    VlWide<16>/*511:0*/ __Vtemp_he1218dcc__1;
    VlWide<16>/*511:0*/ __Vtemp_h236e7446__0;
    VlWide<16>/*511:0*/ __Vtemp_ha26fe365__0;
    VlWide<16>/*511:0*/ __Vtemp_h773c399d__0;
    // Body
    __Vdly__Soc__DOT__core__DOT__fetch__DOT__old_pc 
        = vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc;
    __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc = vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc;
    __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v2 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v3 = 0U;
    __Vdly__Soc__DOT__core__DOT__csrs__DOT__MIP = vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP;
    __Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_comp 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp;
    __Vdly__Soc__DOT__core__DOT__arbitor__DOT__aw_comp 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp;
    __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v2 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v3 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5 = 0U;
    vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask;
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw;
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr;
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[1U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[1U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[2U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[2U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[3U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[3U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[4U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[4U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[5U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[5U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[6U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[6U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[7U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[7U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[8U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[8U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[9U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[9U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0xaU] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xaU];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0xbU] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xbU];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0xcU] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xcU];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0xdU] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xdU];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0xeU] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xeU];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0xfU] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xfU];
    vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray;
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[1U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[1U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[2U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[2U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[3U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[3U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[4U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[4U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[5U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[5U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[6U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[6U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[7U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[7U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[8U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[8U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[9U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[9U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[1U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[1U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[2U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[2U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[3U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[3U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[4U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[4U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[5U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[5U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[6U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[6U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[7U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[7U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[8U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[8U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[9U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[9U];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0xaU] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xaU];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0xbU] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xbU];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0xcU] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xcU];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0xdU] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xdU];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0xeU] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xeU];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0xfU] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xfU];
    __Vdly__Soc__DOT__core__DOT__Dcache__DOT__state 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state;
    __Vdly__Soc__DOT__core__DOT__trap__DOT__state = vlSelf->Soc__DOT__core__DOT__trap__DOT__state;
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__state 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state;
    __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIME 
        = vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME;
    __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIMECMP 
        = vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP;
    __Vdly__Soc__DOT__core__DOT__clint__DOT__MSIP = vlSelf->Soc__DOT__core__DOT__clint__DOT__MSIP;
    vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask;
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw;
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr;
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[1U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[1U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[2U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[2U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[3U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[3U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[4U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[4U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[5U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[5U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[6U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[6U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[7U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[7U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[8U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[8U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[9U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[9U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0xaU] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xaU];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0xbU] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xbU];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0xcU] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xcU];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0xdU] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xdU];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0xeU] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xeU];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0xfU] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xfU];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[1U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[1U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[2U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[2U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[3U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[3U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[4U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[4U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[5U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[5U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[6U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[6U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[7U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[7U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[8U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[8U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[9U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[9U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0xaU] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xaU];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0xbU] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xbU];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0xcU] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xcU];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0xdU] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xdU];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0xeU] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xeU];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0xfU] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xfU];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[1U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[1U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[2U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[2U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[3U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[3U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[4U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[4U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[5U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[5U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[6U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[6U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[7U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[7U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[8U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[8U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[9U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[9U];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0xaU] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xaU];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0xbU] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xbU];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0xcU] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xcU];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0xdU] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xdU];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0xeU] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xeU];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0xfU] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xfU];
    __Vdly__Soc__DOT__core__DOT__Icache__DOT__state 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__state;
    vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__inDataOneArray 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray;
    __Vdly__Soc__DOT__core__DOT__interact__DOT__over_count 
        = vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        VSoc___024unit____Vdpiimwrap_update_debuginfo_TOP____024unit(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc, (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started), (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data), 
                                                                     ((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                                                                      & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)), (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16), vlSelf->Soc__DOT__core__DOT__dereg_op_a, vlSelf->Soc__DOT__core__DOT__dereg_op_b, 
                                                                     ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen)
                                                                       ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                                                                       : vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result), (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag), vlSelf->Soc__DOT__core__DOT____Vcellinp__DI__mem_access, vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T, (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr), vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata, 
                                                                     ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
                                                                      & (0U 
                                                                         != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))), (IData)(vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen), vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata, (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr), 
                                                                     ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0) 
                                                                      & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)));
    }
    __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5 = 0U;
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_14) {
        __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__tag;
        __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v0 
            = (0x1ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                        << 1U)));
        __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data;
        __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0 
            = (0x1ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                        << 1U)));
    }
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16) {
        __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__tag;
        __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v1 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v1 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
               << 1U);
        __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data;
        __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
               << 1U);
    }
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_19) {
        __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__tag;
        __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v2 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v2 
            = (0x1ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                        << 1U)));
        __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data;
        __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4 
            = (0x1ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                        << 1U)));
    }
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_25) {
        __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v3 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__tag;
        __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v3 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v3 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
               << 1U);
        __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data;
        __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
               << 1U);
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0) 
         & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum))) {
        __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data;
        __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2 
            = (0x1ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                        << 1U)));
    }
    if (((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum)) 
         & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0))) {
        __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data;
        __Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
               << 1U);
    }
    __Vdlyvval__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1 
        = ((((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
             & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))) 
            & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr)))
            ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
            : vlSelf->Soc__DOT__core__DOT__regfile__DOT___regs_ext_R0_data);
    __Vdlyvdim0__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1 
        = vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr;
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_14) {
        __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT__tag;
        __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v0 
            = (0x1ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                        << 1U)));
    }
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16) {
        __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT__tag;
        __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v1 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v1 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
               << 1U);
    }
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_19) {
        __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT__tag;
        __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v2 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v2 
            = (0x1ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                        << 1U)));
    }
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_25) {
        __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v3 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT__tag;
        __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v3 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v3 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
               << 1U);
    }
    if (vlSelf->reset) {
        __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc = 0x80000000U;
        __Vdly__Soc__DOT__core__DOT__fetch__DOT__old_pc = 0U;
        __Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_comp = 0U;
        __Vdly__Soc__DOT__core__DOT__arbitor__DOT__aw_comp = 0U;
        __Vdly__Soc__DOT__core__DOT__trap__DOT__state = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__state = 0U;
    } else {
        if (vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0) {
            __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc 
                = vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc;
        } else if (vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2) {
            __Vdly__Soc__DOT__core__DOT__fetch__DOT__old_pc 
                = vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc;
            __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc 
                = ((IData)(4U) + vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc);
        } else {
            __Vdly__Soc__DOT__core__DOT__fetch__DOT__old_pc 
                = ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___io_pc_bits_T_3)
                    ? ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2)
                        ? ((IData)(4U) + vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc)
                        : ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                            ? vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_7
                            : vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc))
                    : vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc);
            if (vlSelf->Soc__DOT__core__DOT__fetch__DOT__started) {
                __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc 
                    = vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_7;
            }
        }
        if ((1U & (~ ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                      | (1U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)))))) {
            __Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_comp 
                = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4)) 
                   & (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1) 
                       & (IData)(vlSelf->Soc__DOT__sram__DOT__wready)) 
                      | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp)));
            __Vdly__Soc__DOT__core__DOT__arbitor__DOT__aw_comp 
                = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4)) 
                   & (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN) 
                       & (IData)(vlSelf->Soc__DOT__sram__DOT__awready)) 
                      | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp)));
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
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data))
                                                      ? 5U
                                                      : 
                                                     ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7)
                                                       ? 1U
                                                       : (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)))))));
        __Vdly__Soc__DOT__core__DOT__trap__DOT__state 
            = ((0x17U >= (0x1fU & ((IData)(3U) * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))))
                ? (7U & (vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_3 
                         >> (0x1fU & ((IData)(3U) * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)))))
                : 0U);
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_10 
            = (((((3U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_6))
                  ? 0U : (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                << 6U) | ((((((((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T)) 
                                & (~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_2))) 
                               & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_7)) 
                              & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4)) 
                             & (IData)(vlSelf->Soc__DOT__sram__DOT__arready))
                             ? 3U : (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                           << 4U) | ((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4)
                                        ? 0U : (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                      << 2U) | ((8U 
                                                 & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose))
                                                 ? 
                                                ((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose) 
                                                   >> 3U) 
                                                  & ((1U 
                                                      & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose))
                                                      ? 
                                                     (0U 
                                                      != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose))
                                                       ? (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw)
                                                       : 
                                                      (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose) 
                                                        >> 2U) 
                                                       & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw)))))
                                                  ? 2U
                                                  : 1U)
                                                 : (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__state 
            = (3U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_10) 
                     >> (7U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 1U))));
    }
    if (vlSelf->reset) {
        __Vdly__Soc__DOT__core__DOT__interact__DOT__over_count = 0U;
    } else if (vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag) {
        __Vdly__Soc__DOT__core__DOT__interact__DOT__over_count 
            = (7U & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count)));
        if (VL_UNLIKELY((2U == (IData)(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count)))) {
            VL_WRITEF("ebreak!\n");
            VL_FINISH_MT("vsrc/Soc.v", 3109, "");
        }
    }
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_25) {
        __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data;
        __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
               << 1U);
    }
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_19) {
        __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data;
        __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4 
            = (0x1ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                        << 1U)));
    }
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16) {
        __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data;
        __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
               << 1U);
    }
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_14) {
        __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data;
        __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0 
            = (0x1ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                        << 1U)));
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0) 
         & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum))) {
        __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data;
        __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2 
            = (0x1ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                        << 1U)));
    }
    if (((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum)) 
         & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0))) {
        __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data;
        __Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
               << 1U);
    }
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN 
        = (1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))
                  ? ((IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid) 
                     & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3))
                  : ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))
                      ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]
                      : ((6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                         | ((~ (IData)((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))) 
                            & ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                               & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))
                                   ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]
                                   : (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))))))));
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_branch_addr = 0ULL;
        vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd = 0U;
        vlSelf->Soc__DOT__core__DOT__emreg_reg_wdata = 0ULL;
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC = 0ULL;
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE = 0ULL;
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC = 0ULL;
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE = 0ULL;
        __Vdly__Soc__DOT__core__DOT__csrs__DOT__MIP = 0ULL;
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS = 0ULL;
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH = 0ULL;
        vlSelf->Soc__DOT__core__DOT__emreg_ld_type = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__state = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[1U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[2U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[3U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[4U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[5U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[6U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[7U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[8U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[9U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0xaU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0xbU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0xcU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0xdU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0xeU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0xfU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[1U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[2U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[3U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[4U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[5U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[6U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[7U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[8U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[9U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0xaU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0xbU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0xcU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0xdU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0xeU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0xfU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[1U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[2U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[3U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[4U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[5U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[6U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[7U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[8U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[9U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray = 0U;
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_valid = 0U;
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_bits_data = 0ULL;
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_valid = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw = 0U;
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
            vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen 
                = vlSelf->Soc__DOT__core__DOT__emreg_csr_wen;
            vlSelf->Soc__DOT__core__DOT__dereg_branch_addr 
                = ((IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)
                    ? 0ULL : ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__fdreg_pc)) 
                              + (((- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))) 
                                  << 0xcU) | (QData)((IData)(
                                                             (((IData)(vlSelf->__VdfgTmp_h315738f9__0) 
                                                               << 0xbU) 
                                                              | (((IData)(vlSelf->__VdfgTmp_h722d7b58__0) 
                                                                  << 5U) 
                                                                 | ((IData)(vlSelf->__VdfgTmp_h6dbd61c0__0) 
                                                                    << 1U))))))));
            vlSelf->Soc__DOT__core__DOT__emreg_reg_wdata 
                = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen)
                    ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                    : vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result);
            vlSelf->Soc__DOT__core__DOT__emreg_ld_type 
                = vlSelf->Soc__DOT__core__DOT__dereg_ld_type;
        }
        if (vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag) {
            vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd = 0U;
        } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
            vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd 
                = (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16) 
                    | (0U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type)))
                    ? 0U : (0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                     >> 7U)));
        }
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr) 
               | (IData)(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_rd));
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_1 
            = (0x305U == (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T));
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_2 
            = (0x342U == (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T));
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_3 
            = (0x341U == (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T));
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_4 
            = (0x304U == (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T));
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_5 
            = (0x344U == (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T));
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_6 
            = (0x300U == (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T));
        if (vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_1) {
            vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC 
                = ((IData)(vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen)
                    ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                    : ((IData)(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen)
                        ? vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata
                        : 0ULL));
        }
        if ((1U & (~ ((IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_1) 
                      | (~ (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_2)))))) {
            vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE 
                = ((IData)(vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen)
                    ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                    : ((IData)(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen)
                        ? vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata
                        : 0ULL));
        }
        if ((1U & (~ (((IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_1) 
                       | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_2)) 
                      | (~ (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_3)))))) {
            vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC 
                = ((IData)(vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen)
                    ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                    : ((IData)(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen)
                        ? vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata
                        : 0ULL));
        }
        if ((1U & (~ ((((IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_1) 
                        | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_2)) 
                       | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_3)) 
                      | (~ (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_4)))))) {
            vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE 
                = ((IData)(vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen)
                    ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                    : ((IData)(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen)
                        ? vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata
                        : 0ULL));
        }
        if ((1U & (((((IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_1) 
                      | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_2)) 
                     | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_3)) 
                    | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_4)) 
                   | (~ (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_5))))) {
            if ((vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME 
                 >= vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP)) {
                __Vdly__Soc__DOT__core__DOT__csrs__DOT__MIP 
                    = ((0xffffffffffffff00ULL & vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP) 
                       | (QData)((IData)((0x80U | (0x7fU 
                                                   & (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP))))));
            }
        } else {
            __Vdly__Soc__DOT__core__DOT__csrs__DOT__MIP 
                = ((IData)(vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen)
                    ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                    : ((IData)(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen)
                        ? vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata
                        : 0ULL));
        }
        if ((1U & (~ ((((((IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_1) 
                          | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_2)) 
                         | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_3)) 
                        | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_4)) 
                       | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_5)) 
                      | (~ (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_6)))))) {
            vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                = ((IData)(vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen)
                    ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                    : ((IData)(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen)
                        ? vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata
                        : 0ULL));
        }
        if ((1U & (~ (((((((IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_1) 
                           | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_2)) 
                          | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_3)) 
                         | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_4)) 
                        | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_5)) 
                       | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_6)) 
                      | (0x340U != (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T)))))) {
            vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH 
                = ((IData)(vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen)
                    ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                    : ((IData)(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen)
                        ? vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata
                        : 0ULL));
        }
        __Vtemp_h3df9875f__0[0U] = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                    << 1U);
        __Vtemp_h3df9875f__0[1U] = 0U;
        __Vtemp_h3df9875f__0[2U] = 0U;
        __Vtemp_h3df9875f__0[3U] = 0U;
        __Vtemp_h3df9875f__0[4U] = 0U;
        __Vtemp_h3df9875f__0[5U] = 0U;
        __Vtemp_h3df9875f__0[6U] = 0U;
        __Vtemp_h3df9875f__0[7U] = 0U;
        __Vtemp_h3df9875f__0[8U] = 0U;
        __Vtemp_h3df9875f__0[9U] = 0U;
        __Vtemp_h3df9875f__0[0xaU] = 0U;
        __Vtemp_h3df9875f__0[0xbU] = 0U;
        __Vtemp_h3df9875f__0[0xcU] = 0U;
        __Vtemp_h3df9875f__0[0xdU] = 0U;
        __Vtemp_h3df9875f__0[0xeU] = 0U;
        __Vtemp_h3df9875f__0[0xfU] = 0U;
        __Vtemp_h3df9875f__0[0x10U] = 0U;
        __Vtemp_h3df9875f__0[0x11U] = 0U;
        __Vtemp_h3df9875f__0[0x12U] = 0U;
        __Vtemp_h3df9875f__0[0x13U] = 0U;
        __Vtemp_h3df9875f__0[0x14U] = 0U;
        __Vtemp_h3df9875f__0[0x15U] = 0U;
        __Vtemp_h3df9875f__0[0x16U] = 0U;
        __Vtemp_h3df9875f__0[0x17U] = 0U;
        __Vtemp_h3df9875f__0[0x18U] = 0U;
        __Vtemp_h3df9875f__0[0x19U] = 0U;
        __Vtemp_h3df9875f__0[0x1aU] = 0U;
        __Vtemp_h3df9875f__0[0x1bU] = 0U;
        __Vtemp_h3df9875f__0[0x1cU] = 0U;
        __Vtemp_h3df9875f__0[0x1dU] = 0U;
        __Vtemp_h3df9875f__0[0x1eU] = 0U;
        __Vtemp_h3df9875f__0[0x1fU] = 0U;
        VL_SHIFTL_WWW(1024,1024,1024, __Vtemp_h71f667b3__0, VSoc__ConstPool__CONST_h2ae7f32a_0, __Vtemp_h3df9875f__0);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0U] 
            = __Vtemp_h71f667b3__0[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[1U] 
            = __Vtemp_h71f667b3__0[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[2U] 
            = __Vtemp_h71f667b3__0[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[3U] 
            = __Vtemp_h71f667b3__0[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[4U] 
            = __Vtemp_h71f667b3__0[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[5U] 
            = __Vtemp_h71f667b3__0[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[6U] 
            = __Vtemp_h71f667b3__0[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[7U] 
            = __Vtemp_h71f667b3__0[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[8U] 
            = __Vtemp_h71f667b3__0[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[9U] 
            = __Vtemp_h71f667b3__0[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0xaU] 
            = __Vtemp_h71f667b3__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0xbU] 
            = __Vtemp_h71f667b3__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0xcU] 
            = __Vtemp_h71f667b3__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0xdU] 
            = __Vtemp_h71f667b3__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0xeU] 
            = __Vtemp_h71f667b3__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0xfU] 
            = __Vtemp_h71f667b3__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x10U] 
            = __Vtemp_h71f667b3__0[0x10U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x11U] 
            = __Vtemp_h71f667b3__0[0x11U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x12U] 
            = __Vtemp_h71f667b3__0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x13U] 
            = __Vtemp_h71f667b3__0[0x13U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x14U] 
            = __Vtemp_h71f667b3__0[0x14U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x15U] 
            = __Vtemp_h71f667b3__0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x16U] 
            = __Vtemp_h71f667b3__0[0x16U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x17U] 
            = __Vtemp_h71f667b3__0[0x17U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x18U] 
            = __Vtemp_h71f667b3__0[0x18U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x19U] 
            = __Vtemp_h71f667b3__0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x1aU] 
            = __Vtemp_h71f667b3__0[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x1bU] 
            = __Vtemp_h71f667b3__0[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x1cU] 
            = __Vtemp_h71f667b3__0[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x1dU] 
            = __Vtemp_h71f667b3__0[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x1eU] 
            = __Vtemp_h71f667b3__0[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x1fU] 
            = __Vtemp_h71f667b3__0[0x1fU];
        VL_SHIFTL_WWI(1024,1024,10, __Vtemp_h4e4eaee5__0, VSoc__ConstPool__CONST_h2ae7f32a_0, 
                      (0x3ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                                << 1U))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0U] 
            = __Vtemp_h4e4eaee5__0[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[1U] 
            = __Vtemp_h4e4eaee5__0[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[2U] 
            = __Vtemp_h4e4eaee5__0[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[3U] 
            = __Vtemp_h4e4eaee5__0[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[4U] 
            = __Vtemp_h4e4eaee5__0[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[5U] 
            = __Vtemp_h4e4eaee5__0[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[6U] 
            = __Vtemp_h4e4eaee5__0[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[7U] 
            = __Vtemp_h4e4eaee5__0[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[8U] 
            = __Vtemp_h4e4eaee5__0[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[9U] 
            = __Vtemp_h4e4eaee5__0[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0xaU] 
            = __Vtemp_h4e4eaee5__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0xbU] 
            = __Vtemp_h4e4eaee5__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0xcU] 
            = __Vtemp_h4e4eaee5__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0xdU] 
            = __Vtemp_h4e4eaee5__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0xeU] 
            = __Vtemp_h4e4eaee5__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0xfU] 
            = __Vtemp_h4e4eaee5__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x10U] 
            = __Vtemp_h4e4eaee5__0[0x10U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x11U] 
            = __Vtemp_h4e4eaee5__0[0x11U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x12U] 
            = __Vtemp_h4e4eaee5__0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x13U] 
            = __Vtemp_h4e4eaee5__0[0x13U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x14U] 
            = __Vtemp_h4e4eaee5__0[0x14U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x15U] 
            = __Vtemp_h4e4eaee5__0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x16U] 
            = __Vtemp_h4e4eaee5__0[0x16U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x17U] 
            = __Vtemp_h4e4eaee5__0[0x17U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x18U] 
            = __Vtemp_h4e4eaee5__0[0x18U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x19U] 
            = __Vtemp_h4e4eaee5__0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x1aU] 
            = __Vtemp_h4e4eaee5__0[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x1bU] 
            = __Vtemp_h4e4eaee5__0[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x1cU] 
            = __Vtemp_h4e4eaee5__0[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x1dU] 
            = __Vtemp_h4e4eaee5__0[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x1eU] 
            = __Vtemp_h4e4eaee5__0[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x1fU] 
            = __Vtemp_h4e4eaee5__0[0x1fU];
        __Vtemp_h3df9875f__1[0U] = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                    << 1U);
        __Vtemp_h3df9875f__1[1U] = 0U;
        __Vtemp_h3df9875f__1[2U] = 0U;
        __Vtemp_h3df9875f__1[3U] = 0U;
        __Vtemp_h3df9875f__1[4U] = 0U;
        __Vtemp_h3df9875f__1[5U] = 0U;
        __Vtemp_h3df9875f__1[6U] = 0U;
        __Vtemp_h3df9875f__1[7U] = 0U;
        __Vtemp_h3df9875f__1[8U] = 0U;
        __Vtemp_h3df9875f__1[9U] = 0U;
        __Vtemp_h3df9875f__1[0xaU] = 0U;
        __Vtemp_h3df9875f__1[0xbU] = 0U;
        __Vtemp_h3df9875f__1[0xcU] = 0U;
        __Vtemp_h3df9875f__1[0xdU] = 0U;
        __Vtemp_h3df9875f__1[0xeU] = 0U;
        __Vtemp_h3df9875f__1[0xfU] = 0U;
        __Vtemp_h3df9875f__1[0x10U] = 0U;
        __Vtemp_h3df9875f__1[0x11U] = 0U;
        __Vtemp_h3df9875f__1[0x12U] = 0U;
        __Vtemp_h3df9875f__1[0x13U] = 0U;
        __Vtemp_h3df9875f__1[0x14U] = 0U;
        __Vtemp_h3df9875f__1[0x15U] = 0U;
        __Vtemp_h3df9875f__1[0x16U] = 0U;
        __Vtemp_h3df9875f__1[0x17U] = 0U;
        __Vtemp_h3df9875f__1[0x18U] = 0U;
        __Vtemp_h3df9875f__1[0x19U] = 0U;
        __Vtemp_h3df9875f__1[0x1aU] = 0U;
        __Vtemp_h3df9875f__1[0x1bU] = 0U;
        __Vtemp_h3df9875f__1[0x1cU] = 0U;
        __Vtemp_h3df9875f__1[0x1dU] = 0U;
        __Vtemp_h3df9875f__1[0x1eU] = 0U;
        __Vtemp_h3df9875f__1[0x1fU] = 0U;
        VL_SHIFTL_WWW(1024,1024,1024, __Vtemp_h735fa511__0, VSoc__ConstPool__CONST_h2ae7f32a_0, __Vtemp_h3df9875f__1);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0U] 
            = __Vtemp_h735fa511__0[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[1U] 
            = __Vtemp_h735fa511__0[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[2U] 
            = __Vtemp_h735fa511__0[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[3U] 
            = __Vtemp_h735fa511__0[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[4U] 
            = __Vtemp_h735fa511__0[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[5U] 
            = __Vtemp_h735fa511__0[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[6U] 
            = __Vtemp_h735fa511__0[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[7U] 
            = __Vtemp_h735fa511__0[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[8U] 
            = __Vtemp_h735fa511__0[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[9U] 
            = __Vtemp_h735fa511__0[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0xaU] 
            = __Vtemp_h735fa511__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0xbU] 
            = __Vtemp_h735fa511__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0xcU] 
            = __Vtemp_h735fa511__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0xdU] 
            = __Vtemp_h735fa511__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0xeU] 
            = __Vtemp_h735fa511__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0xfU] 
            = __Vtemp_h735fa511__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x10U] 
            = __Vtemp_h735fa511__0[0x10U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x11U] 
            = __Vtemp_h735fa511__0[0x11U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x12U] 
            = __Vtemp_h735fa511__0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x13U] 
            = __Vtemp_h735fa511__0[0x13U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x14U] 
            = __Vtemp_h735fa511__0[0x14U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x15U] 
            = __Vtemp_h735fa511__0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x16U] 
            = __Vtemp_h735fa511__0[0x16U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x17U] 
            = __Vtemp_h735fa511__0[0x17U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x18U] 
            = __Vtemp_h735fa511__0[0x18U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x19U] 
            = __Vtemp_h735fa511__0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x1aU] 
            = __Vtemp_h735fa511__0[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x1bU] 
            = __Vtemp_h735fa511__0[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x1cU] 
            = __Vtemp_h735fa511__0[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x1dU] 
            = __Vtemp_h735fa511__0[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x1eU] 
            = __Vtemp_h735fa511__0[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x1fU] 
            = __Vtemp_h735fa511__0[0x1fU];
        VL_SHIFTL_WWI(1024,1024,10, __Vtemp_h4e4eaee5__1, VSoc__ConstPool__CONST_h2ae7f32a_0, 
                      (0x3ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                                << 1U))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0U] 
            = __Vtemp_h4e4eaee5__1[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[1U] 
            = __Vtemp_h4e4eaee5__1[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[2U] 
            = __Vtemp_h4e4eaee5__1[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[3U] 
            = __Vtemp_h4e4eaee5__1[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[4U] 
            = __Vtemp_h4e4eaee5__1[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[5U] 
            = __Vtemp_h4e4eaee5__1[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[6U] 
            = __Vtemp_h4e4eaee5__1[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[7U] 
            = __Vtemp_h4e4eaee5__1[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[8U] 
            = __Vtemp_h4e4eaee5__1[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[9U] 
            = __Vtemp_h4e4eaee5__1[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0xaU] 
            = __Vtemp_h4e4eaee5__1[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0xbU] 
            = __Vtemp_h4e4eaee5__1[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0xcU] 
            = __Vtemp_h4e4eaee5__1[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0xdU] 
            = __Vtemp_h4e4eaee5__1[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0xeU] 
            = __Vtemp_h4e4eaee5__1[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0xfU] 
            = __Vtemp_h4e4eaee5__1[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x10U] 
            = __Vtemp_h4e4eaee5__1[0x10U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x11U] 
            = __Vtemp_h4e4eaee5__1[0x11U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x12U] 
            = __Vtemp_h4e4eaee5__1[0x12U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x13U] 
            = __Vtemp_h4e4eaee5__1[0x13U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x14U] 
            = __Vtemp_h4e4eaee5__1[0x14U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x15U] 
            = __Vtemp_h4e4eaee5__1[0x15U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x16U] 
            = __Vtemp_h4e4eaee5__1[0x16U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x17U] 
            = __Vtemp_h4e4eaee5__1[0x17U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x18U] 
            = __Vtemp_h4e4eaee5__1[0x18U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x19U] 
            = __Vtemp_h4e4eaee5__1[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x1aU] 
            = __Vtemp_h4e4eaee5__1[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x1bU] 
            = __Vtemp_h4e4eaee5__1[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x1cU] 
            = __Vtemp_h4e4eaee5__1[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x1dU] 
            = __Vtemp_h4e4eaee5__1[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x1eU] 
            = __Vtemp_h4e4eaee5__1[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x1fU] 
            = __Vtemp_h4e4eaee5__1[0x1fU];
        __Vtemp_h3df9875f__2[0U] = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                    << 1U);
        __Vtemp_h3df9875f__2[1U] = 0U;
        __Vtemp_h3df9875f__2[2U] = 0U;
        __Vtemp_h3df9875f__2[3U] = 0U;
        __Vtemp_h3df9875f__2[4U] = 0U;
        __Vtemp_h3df9875f__2[5U] = 0U;
        __Vtemp_h3df9875f__2[6U] = 0U;
        __Vtemp_h3df9875f__2[7U] = 0U;
        __Vtemp_h3df9875f__2[8U] = 0U;
        __Vtemp_h3df9875f__2[9U] = 0U;
        __Vtemp_h3df9875f__2[0xaU] = 0U;
        __Vtemp_h3df9875f__2[0xbU] = 0U;
        __Vtemp_h3df9875f__2[0xcU] = 0U;
        __Vtemp_h3df9875f__2[0xdU] = 0U;
        __Vtemp_h3df9875f__2[0xeU] = 0U;
        __Vtemp_h3df9875f__2[0xfU] = 0U;
        __Vtemp_h3df9875f__2[0x10U] = 0U;
        __Vtemp_h3df9875f__2[0x11U] = 0U;
        __Vtemp_h3df9875f__2[0x12U] = 0U;
        __Vtemp_h3df9875f__2[0x13U] = 0U;
        __Vtemp_h3df9875f__2[0x14U] = 0U;
        __Vtemp_h3df9875f__2[0x15U] = 0U;
        __Vtemp_h3df9875f__2[0x16U] = 0U;
        __Vtemp_h3df9875f__2[0x17U] = 0U;
        __Vtemp_h3df9875f__2[0x18U] = 0U;
        __Vtemp_h3df9875f__2[0x19U] = 0U;
        __Vtemp_h3df9875f__2[0x1aU] = 0U;
        __Vtemp_h3df9875f__2[0x1bU] = 0U;
        __Vtemp_h3df9875f__2[0x1cU] = 0U;
        __Vtemp_h3df9875f__2[0x1dU] = 0U;
        __Vtemp_h3df9875f__2[0x1eU] = 0U;
        __Vtemp_h3df9875f__2[0x1fU] = 0U;
        VL_SHIFTL_WWW(1024,1024,1024, __Vtemp_h2f662ca0__0, VSoc__ConstPool__CONST_h2ae7f32a_0, __Vtemp_h3df9875f__2);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0U] 
            = __Vtemp_h2f662ca0__0[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[1U] 
            = __Vtemp_h2f662ca0__0[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[2U] 
            = __Vtemp_h2f662ca0__0[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[3U] 
            = __Vtemp_h2f662ca0__0[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[4U] 
            = __Vtemp_h2f662ca0__0[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[5U] 
            = __Vtemp_h2f662ca0__0[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[6U] 
            = __Vtemp_h2f662ca0__0[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[7U] 
            = __Vtemp_h2f662ca0__0[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[8U] 
            = __Vtemp_h2f662ca0__0[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[9U] 
            = __Vtemp_h2f662ca0__0[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0xaU] 
            = __Vtemp_h2f662ca0__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0xbU] 
            = __Vtemp_h2f662ca0__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0xcU] 
            = __Vtemp_h2f662ca0__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0xdU] 
            = __Vtemp_h2f662ca0__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0xeU] 
            = __Vtemp_h2f662ca0__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0xfU] 
            = __Vtemp_h2f662ca0__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x10U] 
            = __Vtemp_h2f662ca0__0[0x10U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x11U] 
            = __Vtemp_h2f662ca0__0[0x11U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x12U] 
            = __Vtemp_h2f662ca0__0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x13U] 
            = __Vtemp_h2f662ca0__0[0x13U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x14U] 
            = __Vtemp_h2f662ca0__0[0x14U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x15U] 
            = __Vtemp_h2f662ca0__0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x16U] 
            = __Vtemp_h2f662ca0__0[0x16U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x17U] 
            = __Vtemp_h2f662ca0__0[0x17U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x18U] 
            = __Vtemp_h2f662ca0__0[0x18U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x19U] 
            = __Vtemp_h2f662ca0__0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x1aU] 
            = __Vtemp_h2f662ca0__0[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x1bU] 
            = __Vtemp_h2f662ca0__0[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x1cU] 
            = __Vtemp_h2f662ca0__0[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x1dU] 
            = __Vtemp_h2f662ca0__0[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x1eU] 
            = __Vtemp_h2f662ca0__0[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x1fU] 
            = __Vtemp_h2f662ca0__0[0x1fU];
        VL_SHIFTL_WWI(1024,1024,10, __Vtemp_h4e4eaee5__2, VSoc__ConstPool__CONST_h2ae7f32a_0, 
                      (0x3ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                                << 1U))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0U] 
            = __Vtemp_h4e4eaee5__2[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[1U] 
            = __Vtemp_h4e4eaee5__2[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[2U] 
            = __Vtemp_h4e4eaee5__2[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[3U] 
            = __Vtemp_h4e4eaee5__2[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[4U] 
            = __Vtemp_h4e4eaee5__2[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[5U] 
            = __Vtemp_h4e4eaee5__2[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[6U] 
            = __Vtemp_h4e4eaee5__2[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[7U] 
            = __Vtemp_h4e4eaee5__2[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[8U] 
            = __Vtemp_h4e4eaee5__2[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[9U] 
            = __Vtemp_h4e4eaee5__2[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0xaU] 
            = __Vtemp_h4e4eaee5__2[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0xbU] 
            = __Vtemp_h4e4eaee5__2[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0xcU] 
            = __Vtemp_h4e4eaee5__2[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0xdU] 
            = __Vtemp_h4e4eaee5__2[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0xeU] 
            = __Vtemp_h4e4eaee5__2[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0xfU] 
            = __Vtemp_h4e4eaee5__2[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x10U] 
            = __Vtemp_h4e4eaee5__2[0x10U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x11U] 
            = __Vtemp_h4e4eaee5__2[0x11U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x12U] 
            = __Vtemp_h4e4eaee5__2[0x12U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x13U] 
            = __Vtemp_h4e4eaee5__2[0x13U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x14U] 
            = __Vtemp_h4e4eaee5__2[0x14U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x15U] 
            = __Vtemp_h4e4eaee5__2[0x15U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x16U] 
            = __Vtemp_h4e4eaee5__2[0x16U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x17U] 
            = __Vtemp_h4e4eaee5__2[0x17U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x18U] 
            = __Vtemp_h4e4eaee5__2[0x18U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x19U] 
            = __Vtemp_h4e4eaee5__2[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x1aU] 
            = __Vtemp_h4e4eaee5__2[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x1bU] 
            = __Vtemp_h4e4eaee5__2[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x1cU] 
            = __Vtemp_h4e4eaee5__2[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x1dU] 
            = __Vtemp_h4e4eaee5__2[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x1eU] 
            = __Vtemp_h4e4eaee5__2[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x1fU] 
            = __Vtemp_h4e4eaee5__2[0x1fU];
        __Vtemp_h3df9875f__3[0U] = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                    << 1U);
        __Vtemp_h3df9875f__3[1U] = 0U;
        __Vtemp_h3df9875f__3[2U] = 0U;
        __Vtemp_h3df9875f__3[3U] = 0U;
        __Vtemp_h3df9875f__3[4U] = 0U;
        __Vtemp_h3df9875f__3[5U] = 0U;
        __Vtemp_h3df9875f__3[6U] = 0U;
        __Vtemp_h3df9875f__3[7U] = 0U;
        __Vtemp_h3df9875f__3[8U] = 0U;
        __Vtemp_h3df9875f__3[9U] = 0U;
        __Vtemp_h3df9875f__3[0xaU] = 0U;
        __Vtemp_h3df9875f__3[0xbU] = 0U;
        __Vtemp_h3df9875f__3[0xcU] = 0U;
        __Vtemp_h3df9875f__3[0xdU] = 0U;
        __Vtemp_h3df9875f__3[0xeU] = 0U;
        __Vtemp_h3df9875f__3[0xfU] = 0U;
        __Vtemp_h3df9875f__3[0x10U] = 0U;
        __Vtemp_h3df9875f__3[0x11U] = 0U;
        __Vtemp_h3df9875f__3[0x12U] = 0U;
        __Vtemp_h3df9875f__3[0x13U] = 0U;
        __Vtemp_h3df9875f__3[0x14U] = 0U;
        __Vtemp_h3df9875f__3[0x15U] = 0U;
        __Vtemp_h3df9875f__3[0x16U] = 0U;
        __Vtemp_h3df9875f__3[0x17U] = 0U;
        __Vtemp_h3df9875f__3[0x18U] = 0U;
        __Vtemp_h3df9875f__3[0x19U] = 0U;
        __Vtemp_h3df9875f__3[0x1aU] = 0U;
        __Vtemp_h3df9875f__3[0x1bU] = 0U;
        __Vtemp_h3df9875f__3[0x1cU] = 0U;
        __Vtemp_h3df9875f__3[0x1dU] = 0U;
        __Vtemp_h3df9875f__3[0x1eU] = 0U;
        __Vtemp_h3df9875f__3[0x1fU] = 0U;
        VL_SHIFTL_WWW(1024,1024,1024, __Vtemp_h105247de__0, VSoc__ConstPool__CONST_h2ae7f32a_0, __Vtemp_h3df9875f__3);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0U] 
            = __Vtemp_h105247de__0[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[1U] 
            = __Vtemp_h105247de__0[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[2U] 
            = __Vtemp_h105247de__0[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[3U] 
            = __Vtemp_h105247de__0[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[4U] 
            = __Vtemp_h105247de__0[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[5U] 
            = __Vtemp_h105247de__0[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[6U] 
            = __Vtemp_h105247de__0[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[7U] 
            = __Vtemp_h105247de__0[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[8U] 
            = __Vtemp_h105247de__0[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[9U] 
            = __Vtemp_h105247de__0[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0xaU] 
            = __Vtemp_h105247de__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0xbU] 
            = __Vtemp_h105247de__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0xcU] 
            = __Vtemp_h105247de__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0xdU] 
            = __Vtemp_h105247de__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0xeU] 
            = __Vtemp_h105247de__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0xfU] 
            = __Vtemp_h105247de__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x10U] 
            = __Vtemp_h105247de__0[0x10U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x11U] 
            = __Vtemp_h105247de__0[0x11U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x12U] 
            = __Vtemp_h105247de__0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x13U] 
            = __Vtemp_h105247de__0[0x13U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x14U] 
            = __Vtemp_h105247de__0[0x14U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x15U] 
            = __Vtemp_h105247de__0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x16U] 
            = __Vtemp_h105247de__0[0x16U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x17U] 
            = __Vtemp_h105247de__0[0x17U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x18U] 
            = __Vtemp_h105247de__0[0x18U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x19U] 
            = __Vtemp_h105247de__0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x1aU] 
            = __Vtemp_h105247de__0[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x1bU] 
            = __Vtemp_h105247de__0[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x1cU] 
            = __Vtemp_h105247de__0[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x1dU] 
            = __Vtemp_h105247de__0[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x1eU] 
            = __Vtemp_h105247de__0[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x1fU] 
            = __Vtemp_h105247de__0[0x1fU];
        VL_SHIFTL_WWI(1024,1024,10, __Vtemp_h4e4eaee5__3, VSoc__ConstPool__CONST_h2ae7f32a_0, 
                      (0x3ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                                << 1U))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0U] 
            = __Vtemp_h4e4eaee5__3[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[1U] 
            = __Vtemp_h4e4eaee5__3[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[2U] 
            = __Vtemp_h4e4eaee5__3[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[3U] 
            = __Vtemp_h4e4eaee5__3[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[4U] 
            = __Vtemp_h4e4eaee5__3[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[5U] 
            = __Vtemp_h4e4eaee5__3[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[6U] 
            = __Vtemp_h4e4eaee5__3[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[7U] 
            = __Vtemp_h4e4eaee5__3[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[8U] 
            = __Vtemp_h4e4eaee5__3[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[9U] 
            = __Vtemp_h4e4eaee5__3[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0xaU] 
            = __Vtemp_h4e4eaee5__3[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0xbU] 
            = __Vtemp_h4e4eaee5__3[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0xcU] 
            = __Vtemp_h4e4eaee5__3[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0xdU] 
            = __Vtemp_h4e4eaee5__3[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0xeU] 
            = __Vtemp_h4e4eaee5__3[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0xfU] 
            = __Vtemp_h4e4eaee5__3[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x10U] 
            = __Vtemp_h4e4eaee5__3[0x10U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x11U] 
            = __Vtemp_h4e4eaee5__3[0x11U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x12U] 
            = __Vtemp_h4e4eaee5__3[0x12U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x13U] 
            = __Vtemp_h4e4eaee5__3[0x13U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x14U] 
            = __Vtemp_h4e4eaee5__3[0x14U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x15U] 
            = __Vtemp_h4e4eaee5__3[0x15U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x16U] 
            = __Vtemp_h4e4eaee5__3[0x16U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x17U] 
            = __Vtemp_h4e4eaee5__3[0x17U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x18U] 
            = __Vtemp_h4e4eaee5__3[0x18U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x19U] 
            = __Vtemp_h4e4eaee5__3[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x1aU] 
            = __Vtemp_h4e4eaee5__3[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x1bU] 
            = __Vtemp_h4e4eaee5__3[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x1cU] 
            = __Vtemp_h4e4eaee5__3[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x1dU] 
            = __Vtemp_h4e4eaee5__3[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x1eU] 
            = __Vtemp_h4e4eaee5__3[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x1fU] 
            = __Vtemp_h4e4eaee5__3[0x1fU];
        __Vtemp_h3df9875f__4[0U] = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                    << 1U);
        __Vtemp_h3df9875f__4[1U] = 0U;
        __Vtemp_h3df9875f__4[2U] = 0U;
        __Vtemp_h3df9875f__4[3U] = 0U;
        __Vtemp_h3df9875f__4[4U] = 0U;
        __Vtemp_h3df9875f__4[5U] = 0U;
        __Vtemp_h3df9875f__4[6U] = 0U;
        __Vtemp_h3df9875f__4[7U] = 0U;
        __Vtemp_h3df9875f__4[8U] = 0U;
        __Vtemp_h3df9875f__4[9U] = 0U;
        __Vtemp_h3df9875f__4[0xaU] = 0U;
        __Vtemp_h3df9875f__4[0xbU] = 0U;
        __Vtemp_h3df9875f__4[0xcU] = 0U;
        __Vtemp_h3df9875f__4[0xdU] = 0U;
        __Vtemp_h3df9875f__4[0xeU] = 0U;
        __Vtemp_h3df9875f__4[0xfU] = 0U;
        __Vtemp_h3df9875f__4[0x10U] = 0U;
        __Vtemp_h3df9875f__4[0x11U] = 0U;
        __Vtemp_h3df9875f__4[0x12U] = 0U;
        __Vtemp_h3df9875f__4[0x13U] = 0U;
        __Vtemp_h3df9875f__4[0x14U] = 0U;
        __Vtemp_h3df9875f__4[0x15U] = 0U;
        __Vtemp_h3df9875f__4[0x16U] = 0U;
        __Vtemp_h3df9875f__4[0x17U] = 0U;
        __Vtemp_h3df9875f__4[0x18U] = 0U;
        __Vtemp_h3df9875f__4[0x19U] = 0U;
        __Vtemp_h3df9875f__4[0x1aU] = 0U;
        __Vtemp_h3df9875f__4[0x1bU] = 0U;
        __Vtemp_h3df9875f__4[0x1cU] = 0U;
        __Vtemp_h3df9875f__4[0x1dU] = 0U;
        __Vtemp_h3df9875f__4[0x1eU] = 0U;
        __Vtemp_h3df9875f__4[0x1fU] = 0U;
        VL_SHIFTL_WWW(1024,1024,1024, __Vtemp_h1682514b__0, VSoc__ConstPool__CONST_h2ae7f32a_0, __Vtemp_h3df9875f__4);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0U] 
            = __Vtemp_h1682514b__0[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[1U] 
            = __Vtemp_h1682514b__0[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[2U] 
            = __Vtemp_h1682514b__0[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[3U] 
            = __Vtemp_h1682514b__0[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[4U] 
            = __Vtemp_h1682514b__0[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[5U] 
            = __Vtemp_h1682514b__0[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[6U] 
            = __Vtemp_h1682514b__0[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[7U] 
            = __Vtemp_h1682514b__0[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[8U] 
            = __Vtemp_h1682514b__0[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[9U] 
            = __Vtemp_h1682514b__0[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0xaU] 
            = __Vtemp_h1682514b__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0xbU] 
            = __Vtemp_h1682514b__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0xcU] 
            = __Vtemp_h1682514b__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0xdU] 
            = __Vtemp_h1682514b__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0xeU] 
            = __Vtemp_h1682514b__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0xfU] 
            = __Vtemp_h1682514b__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x10U] 
            = __Vtemp_h1682514b__0[0x10U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x11U] 
            = __Vtemp_h1682514b__0[0x11U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x12U] 
            = __Vtemp_h1682514b__0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x13U] 
            = __Vtemp_h1682514b__0[0x13U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x14U] 
            = __Vtemp_h1682514b__0[0x14U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x15U] 
            = __Vtemp_h1682514b__0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x16U] 
            = __Vtemp_h1682514b__0[0x16U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x17U] 
            = __Vtemp_h1682514b__0[0x17U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x18U] 
            = __Vtemp_h1682514b__0[0x18U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x19U] 
            = __Vtemp_h1682514b__0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x1aU] 
            = __Vtemp_h1682514b__0[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x1bU] 
            = __Vtemp_h1682514b__0[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x1cU] 
            = __Vtemp_h1682514b__0[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x1dU] 
            = __Vtemp_h1682514b__0[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x1eU] 
            = __Vtemp_h1682514b__0[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x1fU] 
            = __Vtemp_h1682514b__0[0x1fU];
        VL_SHIFTL_WWI(1024,1024,10, __Vtemp_h4e4eaee5__4, VSoc__ConstPool__CONST_h2ae7f32a_0, 
                      (0x3ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                                << 1U))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0U] 
            = __Vtemp_h4e4eaee5__4[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[1U] 
            = __Vtemp_h4e4eaee5__4[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[2U] 
            = __Vtemp_h4e4eaee5__4[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[3U] 
            = __Vtemp_h4e4eaee5__4[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[4U] 
            = __Vtemp_h4e4eaee5__4[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[5U] 
            = __Vtemp_h4e4eaee5__4[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[6U] 
            = __Vtemp_h4e4eaee5__4[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[7U] 
            = __Vtemp_h4e4eaee5__4[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[8U] 
            = __Vtemp_h4e4eaee5__4[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[9U] 
            = __Vtemp_h4e4eaee5__4[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0xaU] 
            = __Vtemp_h4e4eaee5__4[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0xbU] 
            = __Vtemp_h4e4eaee5__4[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0xcU] 
            = __Vtemp_h4e4eaee5__4[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0xdU] 
            = __Vtemp_h4e4eaee5__4[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0xeU] 
            = __Vtemp_h4e4eaee5__4[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0xfU] 
            = __Vtemp_h4e4eaee5__4[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x10U] 
            = __Vtemp_h4e4eaee5__4[0x10U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x11U] 
            = __Vtemp_h4e4eaee5__4[0x11U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x12U] 
            = __Vtemp_h4e4eaee5__4[0x12U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x13U] 
            = __Vtemp_h4e4eaee5__4[0x13U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x14U] 
            = __Vtemp_h4e4eaee5__4[0x14U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x15U] 
            = __Vtemp_h4e4eaee5__4[0x15U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x16U] 
            = __Vtemp_h4e4eaee5__4[0x16U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x17U] 
            = __Vtemp_h4e4eaee5__4[0x17U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x18U] 
            = __Vtemp_h4e4eaee5__4[0x18U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x19U] 
            = __Vtemp_h4e4eaee5__4[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x1aU] 
            = __Vtemp_h4e4eaee5__4[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x1bU] 
            = __Vtemp_h4e4eaee5__4[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x1cU] 
            = __Vtemp_h4e4eaee5__4[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x1dU] 
            = __Vtemp_h4e4eaee5__4[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x1eU] 
            = __Vtemp_h4e4eaee5__4[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x1fU] 
            = __Vtemp_h4e4eaee5__4[0x1fU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_27 
            = (((IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid) 
                & (~ (IData)((0U != (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask))))) 
               & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28 
            = (0x30000U | (((((IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid)
                               ? 0U : (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                             << 0x15U) | (((IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid)
                                            ? 7U : (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                          << 0x12U)) 
                           | ((0x8000U & ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]) 
                                          << 0xfU)) 
                              | ((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_18)
                                    ? 0U : (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                  << 0xcU) | ((((IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid)
                                                 ? 4U
                                                 : (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                               << 9U) 
                                              | ((((1U 
                                                    & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U])
                                                    ? 3U
                                                    : 4U) 
                                                  << 6U) 
                                                 | ((IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)
                                                     ? 
                                                    ((0U 
                                                      != (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask))
                                                      ? 
                                                     ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)
                                                       ? 1U
                                                       : 2U)
                                                      : 
                                                     ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)
                                                       ? 0U
                                                       : 5U))
                                                     : (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))))))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__state 
            = ((0x17U >= (0x1fU & ((IData)(3U) * (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))))
                ? (7U & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28 
                         >> (0x1fU & ((IData)(3U) * (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))))
                : 0U);
        if ((1U & ((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_25) 
                     | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_66)) 
                    | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_72)) 
                   | (~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_18))))) {
            __Vtemp_h6701084d__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0U];
            __Vtemp_h6701084d__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[1U];
            __Vtemp_h6701084d__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[2U];
            __Vtemp_h6701084d__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[3U];
            __Vtemp_h6701084d__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[4U];
            __Vtemp_h6701084d__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[5U];
            __Vtemp_h6701084d__0[6U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[6U];
            __Vtemp_h6701084d__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[7U];
            __Vtemp_h6701084d__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[8U];
            __Vtemp_h6701084d__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[9U];
            __Vtemp_h6701084d__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xaU];
            __Vtemp_h6701084d__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xbU];
            __Vtemp_h6701084d__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xcU];
            __Vtemp_h6701084d__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xdU];
            __Vtemp_h6701084d__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xeU];
            __Vtemp_h6701084d__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xfU];
        } else if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim) {
            __Vtemp_h6701084d__0[0U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0U]);
            __Vtemp_h6701084d__0[1U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[1U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[1U]);
            __Vtemp_h6701084d__0[2U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[2U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[2U]);
            __Vtemp_h6701084d__0[3U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[3U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[3U]);
            __Vtemp_h6701084d__0[4U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[4U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[4U]);
            __Vtemp_h6701084d__0[5U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[5U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[5U]);
            __Vtemp_h6701084d__0[6U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[6U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[6U]);
            __Vtemp_h6701084d__0[7U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[7U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[7U]);
            __Vtemp_h6701084d__0[8U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[8U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[8U]);
            __Vtemp_h6701084d__0[9U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[9U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[9U]);
            __Vtemp_h6701084d__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xaU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0xaU]);
            __Vtemp_h6701084d__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xbU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0xbU]);
            __Vtemp_h6701084d__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xcU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0xcU]);
            __Vtemp_h6701084d__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xdU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0xdU]);
            __Vtemp_h6701084d__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xeU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0xeU]);
            __Vtemp_h6701084d__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xfU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0xfU]);
        } else {
            __Vtemp_h6701084d__0[0U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0U]);
            __Vtemp_h6701084d__0[1U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[1U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[1U]);
            __Vtemp_h6701084d__0[2U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[2U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[2U]);
            __Vtemp_h6701084d__0[3U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[3U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[3U]);
            __Vtemp_h6701084d__0[4U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[4U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[4U]);
            __Vtemp_h6701084d__0[5U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[5U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[5U]);
            __Vtemp_h6701084d__0[6U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[6U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[6U]);
            __Vtemp_h6701084d__0[7U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[7U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[7U]);
            __Vtemp_h6701084d__0[8U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[8U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[8U]);
            __Vtemp_h6701084d__0[9U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[9U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[9U]);
            __Vtemp_h6701084d__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xaU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0xaU]);
            __Vtemp_h6701084d__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xbU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0xbU]);
            __Vtemp_h6701084d__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xcU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0xcU]);
            __Vtemp_h6701084d__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xdU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0xdU]);
            __Vtemp_h6701084d__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xeU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0xeU]);
            __Vtemp_h6701084d__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xfU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0xfU]);
        }
        __Vtemp_h6701084d__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0U];
        __Vtemp_h6701084d__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[1U];
        __Vtemp_h6701084d__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[2U];
        __Vtemp_h6701084d__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[3U];
        __Vtemp_h6701084d__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[4U];
        __Vtemp_h6701084d__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[5U];
        __Vtemp_h6701084d__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[6U];
        __Vtemp_h6701084d__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[7U];
        __Vtemp_h6701084d__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[8U];
        __Vtemp_h6701084d__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[9U];
        __Vtemp_h6701084d__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xaU];
        __Vtemp_h6701084d__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xbU];
        __Vtemp_h6701084d__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xcU];
        __Vtemp_h6701084d__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xdU];
        __Vtemp_h6701084d__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xeU];
        __Vtemp_h6701084d__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xfU];
        __Vtemp_h6701084d__0[0x20U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0U];
        __Vtemp_h6701084d__0[0x21U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[1U];
        __Vtemp_h6701084d__0[0x22U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[2U];
        __Vtemp_h6701084d__0[0x23U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[3U];
        __Vtemp_h6701084d__0[0x24U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[4U];
        __Vtemp_h6701084d__0[0x25U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[5U];
        __Vtemp_h6701084d__0[0x26U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[6U];
        __Vtemp_h6701084d__0[0x27U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[7U];
        __Vtemp_h6701084d__0[0x28U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[8U];
        __Vtemp_h6701084d__0[0x29U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[9U];
        __Vtemp_h6701084d__0[0x2aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xaU];
        __Vtemp_h6701084d__0[0x2bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xbU];
        __Vtemp_h6701084d__0[0x2cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xcU];
        __Vtemp_h6701084d__0[0x2dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xdU];
        __Vtemp_h6701084d__0[0x2eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xeU];
        __Vtemp_h6701084d__0[0x2fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xfU];
        if (vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid) {
            if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim) {
                __Vtemp_h6701084d__0[0x30U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0U]);
                __Vtemp_h6701084d__0[0x31U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[1U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[1U]);
                __Vtemp_h6701084d__0[0x32U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[2U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[2U]);
                __Vtemp_h6701084d__0[0x33U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[3U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[3U]);
                __Vtemp_h6701084d__0[0x34U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[4U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[4U]);
                __Vtemp_h6701084d__0[0x35U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[5U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[5U]);
                __Vtemp_h6701084d__0[0x36U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[6U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[6U]);
                __Vtemp_h6701084d__0[0x37U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[7U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[7U]);
                __Vtemp_h6701084d__0[0x38U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[8U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[8U]);
                __Vtemp_h6701084d__0[0x39U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[9U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[9U]);
                __Vtemp_h6701084d__0[0x3aU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xaU] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0xaU]);
                __Vtemp_h6701084d__0[0x3bU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xbU] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0xbU]);
                __Vtemp_h6701084d__0[0x3cU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xcU] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0xcU]);
                __Vtemp_h6701084d__0[0x3dU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xdU] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0xdU]);
                __Vtemp_h6701084d__0[0x3eU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xeU] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0xeU]);
                __Vtemp_h6701084d__0[0x3fU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xfU] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0xfU]);
            } else {
                __Vtemp_h6701084d__0[0x30U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0U]);
                __Vtemp_h6701084d__0[0x31U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[1U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[1U]);
                __Vtemp_h6701084d__0[0x32U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[2U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[2U]);
                __Vtemp_h6701084d__0[0x33U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[3U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[3U]);
                __Vtemp_h6701084d__0[0x34U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[4U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[4U]);
                __Vtemp_h6701084d__0[0x35U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[5U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[5U]);
                __Vtemp_h6701084d__0[0x36U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[6U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[6U]);
                __Vtemp_h6701084d__0[0x37U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[7U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[7U]);
                __Vtemp_h6701084d__0[0x38U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[8U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[8U]);
                __Vtemp_h6701084d__0[0x39U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[9U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[9U]);
                __Vtemp_h6701084d__0[0x3aU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xaU] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0xaU]);
                __Vtemp_h6701084d__0[0x3bU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xbU] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0xbU]);
                __Vtemp_h6701084d__0[0x3cU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xcU] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0xcU]);
                __Vtemp_h6701084d__0[0x3dU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xdU] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0xdU]);
                __Vtemp_h6701084d__0[0x3eU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xeU] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0xeU]);
                __Vtemp_h6701084d__0[0x3fU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xfU] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0xfU]);
            }
        } else {
            __Vtemp_h6701084d__0[0x30U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0U];
            __Vtemp_h6701084d__0[0x31U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[1U];
            __Vtemp_h6701084d__0[0x32U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[2U];
            __Vtemp_h6701084d__0[0x33U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[3U];
            __Vtemp_h6701084d__0[0x34U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[4U];
            __Vtemp_h6701084d__0[0x35U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[5U];
            __Vtemp_h6701084d__0[0x36U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[6U];
            __Vtemp_h6701084d__0[0x37U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[7U];
            __Vtemp_h6701084d__0[0x38U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[8U];
            __Vtemp_h6701084d__0[0x39U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[9U];
            __Vtemp_h6701084d__0[0x3aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xaU];
            __Vtemp_h6701084d__0[0x3bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xbU];
            __Vtemp_h6701084d__0[0x3cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xcU];
            __Vtemp_h6701084d__0[0x3dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xdU];
            __Vtemp_h6701084d__0[0x3eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xeU];
            __Vtemp_h6701084d__0[0x3fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xfU];
        }
        VL_CONCAT_WWW(2560,2048,512, __Vtemp_h7405d7f5__0, __Vtemp_h6701084d__0, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid);
        VL_CONCAT_WWW(3072,2560,512, __Vtemp_hd27148e7__0, __Vtemp_h7405d7f5__0, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid);
        VL_CONCAT_WWW(3584,3072,512, __Vtemp_h2984ea2a__0, __Vtemp_hd27148e7__0, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid);
        VL_CONCAT_WWW(4096,3584,512, __Vtemp_h175d5fc5__0, __Vtemp_h2984ea2a__0, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid);
        VL_ASSIGN_W(4096,vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29, __Vtemp_h175d5fc5__0);
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                            << 4U))] >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                  << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[1U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(2U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(1U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[2U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(3U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(2U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[3U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(4U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(3U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[4U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(5U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(4U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[5U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(6U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(5U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[6U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(7U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(6U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[7U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(8U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(7U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[8U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(9U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(8U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[9U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(0xaU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(9U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0xaU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(0xbU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(0xaU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0xbU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(0xcU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(0xbU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0xcU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(0xdU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(0xcU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0xdU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(0xeU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(0xdU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0xeU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(0xfU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(0xeU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0xfU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(0x10U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(0xfU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20) {
            __Vtemp_h7e9e7a2e__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0U];
            __Vtemp_h7e9e7a2e__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[1U];
            __Vtemp_h7e9e7a2e__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[2U];
            __Vtemp_h7e9e7a2e__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[3U];
            __Vtemp_h7e9e7a2e__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[4U];
            __Vtemp_h7e9e7a2e__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[5U];
            __Vtemp_h7e9e7a2e__0[6U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[6U];
            __Vtemp_h7e9e7a2e__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[7U];
            __Vtemp_h7e9e7a2e__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[8U];
            __Vtemp_h7e9e7a2e__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[9U];
            __Vtemp_h7e9e7a2e__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xaU];
            __Vtemp_h7e9e7a2e__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xbU];
            __Vtemp_h7e9e7a2e__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xcU];
            __Vtemp_h7e9e7a2e__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xdU];
            __Vtemp_h7e9e7a2e__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xeU];
            __Vtemp_h7e9e7a2e__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xfU];
            __Vtemp_h206422cb__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0U];
            __Vtemp_h206422cb__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[1U];
            __Vtemp_h206422cb__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[2U];
            __Vtemp_h206422cb__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[3U];
            __Vtemp_h206422cb__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[4U];
            __Vtemp_h206422cb__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[5U];
            __Vtemp_h206422cb__0[6U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[6U];
            __Vtemp_h206422cb__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[7U];
            __Vtemp_h206422cb__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[8U];
            __Vtemp_h206422cb__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[9U];
            __Vtemp_h206422cb__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU];
            __Vtemp_h206422cb__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU];
            __Vtemp_h206422cb__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU];
            __Vtemp_h206422cb__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU];
            __Vtemp_h206422cb__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU];
            __Vtemp_h206422cb__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU];
        } else if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim) {
            __Vtemp_h7e9e7a2e__0[0U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0U]);
            __Vtemp_h7e9e7a2e__0[1U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[1U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[1U]);
            __Vtemp_h7e9e7a2e__0[2U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[2U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[2U]);
            __Vtemp_h7e9e7a2e__0[3U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[3U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[3U]);
            __Vtemp_h7e9e7a2e__0[4U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[4U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[4U]);
            __Vtemp_h7e9e7a2e__0[5U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[5U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[5U]);
            __Vtemp_h7e9e7a2e__0[6U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[6U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[6U]);
            __Vtemp_h7e9e7a2e__0[7U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[7U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[7U]);
            __Vtemp_h7e9e7a2e__0[8U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[8U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[8U]);
            __Vtemp_h7e9e7a2e__0[9U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[9U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[9U]);
            __Vtemp_h7e9e7a2e__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xaU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0xaU]);
            __Vtemp_h7e9e7a2e__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xbU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0xbU]);
            __Vtemp_h7e9e7a2e__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xcU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0xcU]);
            __Vtemp_h7e9e7a2e__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xdU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0xdU]);
            __Vtemp_h7e9e7a2e__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xeU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0xeU]);
            __Vtemp_h7e9e7a2e__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xfU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0xfU]);
            __Vtemp_h206422cb__0[0U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0U]);
            __Vtemp_h206422cb__0[1U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[1U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[1U]);
            __Vtemp_h206422cb__0[2U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[2U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[2U]);
            __Vtemp_h206422cb__0[3U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[3U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[3U]);
            __Vtemp_h206422cb__0[4U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[4U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[4U]);
            __Vtemp_h206422cb__0[5U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[5U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[5U]);
            __Vtemp_h206422cb__0[6U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[6U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[6U]);
            __Vtemp_h206422cb__0[7U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[7U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[7U]);
            __Vtemp_h206422cb__0[8U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[8U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[8U]);
            __Vtemp_h206422cb__0[9U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[9U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[9U]);
            __Vtemp_h206422cb__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xaU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xaU]);
            __Vtemp_h206422cb__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xbU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xbU]);
            __Vtemp_h206422cb__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xcU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xcU]);
            __Vtemp_h206422cb__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xdU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xdU]);
            __Vtemp_h206422cb__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xeU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xeU]);
            __Vtemp_h206422cb__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xfU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xfU]);
        } else {
            __Vtemp_h7e9e7a2e__0[0U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0U]);
            __Vtemp_h7e9e7a2e__0[1U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[1U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[1U]);
            __Vtemp_h7e9e7a2e__0[2U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[2U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[2U]);
            __Vtemp_h7e9e7a2e__0[3U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[3U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[3U]);
            __Vtemp_h7e9e7a2e__0[4U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[4U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[4U]);
            __Vtemp_h7e9e7a2e__0[5U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[5U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[5U]);
            __Vtemp_h7e9e7a2e__0[6U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[6U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[6U]);
            __Vtemp_h7e9e7a2e__0[7U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[7U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[7U]);
            __Vtemp_h7e9e7a2e__0[8U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[8U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[8U]);
            __Vtemp_h7e9e7a2e__0[9U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[9U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[9U]);
            __Vtemp_h7e9e7a2e__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xaU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0xaU]);
            __Vtemp_h7e9e7a2e__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xbU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0xbU]);
            __Vtemp_h7e9e7a2e__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xcU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0xcU]);
            __Vtemp_h7e9e7a2e__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xdU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0xdU]);
            __Vtemp_h7e9e7a2e__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xeU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0xeU]);
            __Vtemp_h7e9e7a2e__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xfU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0xfU]);
            __Vtemp_h206422cb__0[0U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0U]);
            __Vtemp_h206422cb__0[1U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[1U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[1U]);
            __Vtemp_h206422cb__0[2U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[2U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[2U]);
            __Vtemp_h206422cb__0[3U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[3U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[3U]);
            __Vtemp_h206422cb__0[4U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[4U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[4U]);
            __Vtemp_h206422cb__0[5U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[5U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[5U]);
            __Vtemp_h206422cb__0[6U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[6U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[6U]);
            __Vtemp_h206422cb__0[7U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[7U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[7U]);
            __Vtemp_h206422cb__0[8U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[8U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[8U]);
            __Vtemp_h206422cb__0[9U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[9U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[9U]);
            __Vtemp_h206422cb__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xaU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xaU]);
            __Vtemp_h206422cb__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xbU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xbU]);
            __Vtemp_h206422cb__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xcU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xcU]);
            __Vtemp_h206422cb__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xdU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xdU]);
            __Vtemp_h206422cb__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xeU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xeU]);
            __Vtemp_h206422cb__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xfU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xfU]);
        }
        __Vtemp_h7e9e7a2e__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0U];
        __Vtemp_h7e9e7a2e__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[1U];
        __Vtemp_h7e9e7a2e__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[2U];
        __Vtemp_h7e9e7a2e__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[3U];
        __Vtemp_h7e9e7a2e__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[4U];
        __Vtemp_h7e9e7a2e__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[5U];
        __Vtemp_h7e9e7a2e__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[6U];
        __Vtemp_h7e9e7a2e__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[7U];
        __Vtemp_h7e9e7a2e__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[8U];
        __Vtemp_h7e9e7a2e__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[9U];
        __Vtemp_h7e9e7a2e__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xaU];
        __Vtemp_h7e9e7a2e__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xbU];
        __Vtemp_h7e9e7a2e__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xcU];
        __Vtemp_h7e9e7a2e__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xdU];
        __Vtemp_h7e9e7a2e__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xeU];
        __Vtemp_h7e9e7a2e__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xfU];
        __Vtemp_h7e9e7a2e__0[0x20U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0U];
        __Vtemp_h7e9e7a2e__0[0x21U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[1U];
        __Vtemp_h7e9e7a2e__0[0x22U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[2U];
        __Vtemp_h7e9e7a2e__0[0x23U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[3U];
        __Vtemp_h7e9e7a2e__0[0x24U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[4U];
        __Vtemp_h7e9e7a2e__0[0x25U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[5U];
        __Vtemp_h7e9e7a2e__0[0x26U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[6U];
        __Vtemp_h7e9e7a2e__0[0x27U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[7U];
        __Vtemp_h7e9e7a2e__0[0x28U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[8U];
        __Vtemp_h7e9e7a2e__0[0x29U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[9U];
        __Vtemp_h7e9e7a2e__0[0x2aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xaU];
        __Vtemp_h7e9e7a2e__0[0x2bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xbU];
        __Vtemp_h7e9e7a2e__0[0x2cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xcU];
        __Vtemp_h7e9e7a2e__0[0x2dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xdU];
        __Vtemp_h7e9e7a2e__0[0x2eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xeU];
        __Vtemp_h7e9e7a2e__0[0x2fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xfU];
        if (vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid) {
            if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim) {
                __Vtemp_h7e9e7a2e__0[0x30U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0U]));
                __Vtemp_h7e9e7a2e__0[0x31U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[1U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[1U]));
                __Vtemp_h7e9e7a2e__0[0x32U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[2U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[2U]));
                __Vtemp_h7e9e7a2e__0[0x33U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[3U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[3U]));
                __Vtemp_h7e9e7a2e__0[0x34U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[4U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[4U]));
                __Vtemp_h7e9e7a2e__0[0x35U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[5U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[5U]));
                __Vtemp_h7e9e7a2e__0[0x36U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[6U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[6U]));
                __Vtemp_h7e9e7a2e__0[0x37U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[7U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[7U]));
                __Vtemp_h7e9e7a2e__0[0x38U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[8U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[8U]));
                __Vtemp_h7e9e7a2e__0[0x39U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[9U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[9U]));
                __Vtemp_h7e9e7a2e__0[0x3aU] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xaU]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0xaU]));
                __Vtemp_h7e9e7a2e__0[0x3bU] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xbU]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0xbU]));
                __Vtemp_h7e9e7a2e__0[0x3cU] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xcU]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0xcU]));
                __Vtemp_h7e9e7a2e__0[0x3dU] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xdU]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0xdU]));
                __Vtemp_h7e9e7a2e__0[0x3eU] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xeU]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0xeU]));
                __Vtemp_h7e9e7a2e__0[0x3fU] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xfU]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0xfU]));
            } else {
                __Vtemp_h7e9e7a2e__0[0x30U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0U]));
                __Vtemp_h7e9e7a2e__0[0x31U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[1U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[1U]));
                __Vtemp_h7e9e7a2e__0[0x32U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[2U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[2U]));
                __Vtemp_h7e9e7a2e__0[0x33U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[3U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[3U]));
                __Vtemp_h7e9e7a2e__0[0x34U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[4U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[4U]));
                __Vtemp_h7e9e7a2e__0[0x35U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[5U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[5U]));
                __Vtemp_h7e9e7a2e__0[0x36U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[6U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[6U]));
                __Vtemp_h7e9e7a2e__0[0x37U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[7U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[7U]));
                __Vtemp_h7e9e7a2e__0[0x38U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[8U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[8U]));
                __Vtemp_h7e9e7a2e__0[0x39U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[9U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[9U]));
                __Vtemp_h7e9e7a2e__0[0x3aU] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xaU]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0xaU]));
                __Vtemp_h7e9e7a2e__0[0x3bU] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xbU]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0xbU]));
                __Vtemp_h7e9e7a2e__0[0x3cU] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xcU]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0xcU]));
                __Vtemp_h7e9e7a2e__0[0x3dU] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xdU]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0xdU]));
                __Vtemp_h7e9e7a2e__0[0x3eU] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xeU]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0xeU]));
                __Vtemp_h7e9e7a2e__0[0x3fU] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xfU]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0xfU]));
            }
        } else {
            __Vtemp_h7e9e7a2e__0[0x30U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0U];
            __Vtemp_h7e9e7a2e__0[0x31U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[1U];
            __Vtemp_h7e9e7a2e__0[0x32U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[2U];
            __Vtemp_h7e9e7a2e__0[0x33U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[3U];
            __Vtemp_h7e9e7a2e__0[0x34U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[4U];
            __Vtemp_h7e9e7a2e__0[0x35U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[5U];
            __Vtemp_h7e9e7a2e__0[0x36U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[6U];
            __Vtemp_h7e9e7a2e__0[0x37U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[7U];
            __Vtemp_h7e9e7a2e__0[0x38U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[8U];
            __Vtemp_h7e9e7a2e__0[0x39U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[9U];
            __Vtemp_h7e9e7a2e__0[0x3aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xaU];
            __Vtemp_h7e9e7a2e__0[0x3bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xbU];
            __Vtemp_h7e9e7a2e__0[0x3cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xcU];
            __Vtemp_h7e9e7a2e__0[0x3dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xdU];
            __Vtemp_h7e9e7a2e__0[0x3eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xeU];
            __Vtemp_h7e9e7a2e__0[0x3fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xfU];
        }
        VL_CONCAT_WWW(2560,2048,512, __Vtemp_h0ec5e9aa__0, __Vtemp_h7e9e7a2e__0, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty);
        VL_CONCAT_WWW(3072,2560,512, __Vtemp_h8dc182d4__0, __Vtemp_h0ec5e9aa__0, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty);
        if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum) {
            __Vtemp_h4b7be7f8__0[0U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0U]);
            __Vtemp_h4b7be7f8__0[1U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[1U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[1U]);
            __Vtemp_h4b7be7f8__0[2U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[2U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[2U]);
            __Vtemp_h4b7be7f8__0[3U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[3U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[3U]);
            __Vtemp_h4b7be7f8__0[4U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[4U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[4U]);
            __Vtemp_h4b7be7f8__0[5U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[5U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[5U]);
            __Vtemp_h4b7be7f8__0[6U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[6U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[6U]);
            __Vtemp_h4b7be7f8__0[7U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[7U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[7U]);
            __Vtemp_h4b7be7f8__0[8U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[8U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[8U]);
            __Vtemp_h4b7be7f8__0[9U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[9U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[9U]);
            __Vtemp_h4b7be7f8__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xaU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0xaU]);
            __Vtemp_h4b7be7f8__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xbU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0xbU]);
            __Vtemp_h4b7be7f8__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xcU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0xcU]);
            __Vtemp_h4b7be7f8__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xdU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0xdU]);
            __Vtemp_h4b7be7f8__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xeU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0xeU]);
            __Vtemp_h4b7be7f8__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xfU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0xfU]);
            __Vtemp_h615ab0b6__0[0U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0U]);
            __Vtemp_h615ab0b6__0[1U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[1U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[1U]);
            __Vtemp_h615ab0b6__0[2U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[2U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[2U]);
            __Vtemp_h615ab0b6__0[3U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[3U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[3U]);
            __Vtemp_h615ab0b6__0[4U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[4U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[4U]);
            __Vtemp_h615ab0b6__0[5U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[5U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[5U]);
            __Vtemp_h615ab0b6__0[6U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[6U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[6U]);
            __Vtemp_h615ab0b6__0[7U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[7U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[7U]);
            __Vtemp_h615ab0b6__0[8U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[8U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[8U]);
            __Vtemp_h615ab0b6__0[9U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[9U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[9U]);
            __Vtemp_h615ab0b6__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xaU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xaU]);
            __Vtemp_h615ab0b6__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xbU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xbU]);
            __Vtemp_h615ab0b6__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xcU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xcU]);
            __Vtemp_h615ab0b6__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xdU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xdU]);
            __Vtemp_h615ab0b6__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xeU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xeU]);
            __Vtemp_h615ab0b6__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xfU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xfU]);
        } else {
            __Vtemp_h4b7be7f8__0[0U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0U]);
            __Vtemp_h4b7be7f8__0[1U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[1U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[1U]);
            __Vtemp_h4b7be7f8__0[2U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[2U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[2U]);
            __Vtemp_h4b7be7f8__0[3U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[3U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[3U]);
            __Vtemp_h4b7be7f8__0[4U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[4U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[4U]);
            __Vtemp_h4b7be7f8__0[5U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[5U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[5U]);
            __Vtemp_h4b7be7f8__0[6U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[6U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[6U]);
            __Vtemp_h4b7be7f8__0[7U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[7U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[7U]);
            __Vtemp_h4b7be7f8__0[8U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[8U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[8U]);
            __Vtemp_h4b7be7f8__0[9U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[9U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[9U]);
            __Vtemp_h4b7be7f8__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xaU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0xaU]);
            __Vtemp_h4b7be7f8__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xbU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0xbU]);
            __Vtemp_h4b7be7f8__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xcU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0xcU]);
            __Vtemp_h4b7be7f8__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xdU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0xdU]);
            __Vtemp_h4b7be7f8__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xeU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0xeU]);
            __Vtemp_h4b7be7f8__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xfU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0xfU]);
            __Vtemp_h615ab0b6__0[0U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0U]);
            __Vtemp_h615ab0b6__0[1U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[1U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[1U]);
            __Vtemp_h615ab0b6__0[2U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[2U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[2U]);
            __Vtemp_h615ab0b6__0[3U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[3U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[3U]);
            __Vtemp_h615ab0b6__0[4U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[4U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[4U]);
            __Vtemp_h615ab0b6__0[5U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[5U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[5U]);
            __Vtemp_h615ab0b6__0[6U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[6U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[6U]);
            __Vtemp_h615ab0b6__0[7U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[7U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[7U]);
            __Vtemp_h615ab0b6__0[8U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[8U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[8U]);
            __Vtemp_h615ab0b6__0[9U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[9U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[9U]);
            __Vtemp_h615ab0b6__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xaU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xaU]);
            __Vtemp_h615ab0b6__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xbU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xbU]);
            __Vtemp_h615ab0b6__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xcU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xcU]);
            __Vtemp_h615ab0b6__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xdU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xdU]);
            __Vtemp_h615ab0b6__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xeU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xeU]);
            __Vtemp_h615ab0b6__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xfU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xfU]);
        }
        VL_CONCAT_WWW(3584,3072,512, __Vtemp_hb2fb5620__0, __Vtemp_h8dc182d4__0, __Vtemp_h4b7be7f8__0);
        VL_CONCAT_WWW(4096,3584,512, __Vtemp_hfe46040b__0, __Vtemp_hb2fb5620__0, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty);
        VL_ASSIGN_W(4096,vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30, __Vtemp_hfe46040b__0);
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                            << 4U))] >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                  << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[1U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(2U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(1U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[2U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(3U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(2U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[3U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(4U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(3U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[4U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(5U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(4U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[5U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(6U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(5U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[6U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(7U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(6U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[7U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(8U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(7U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[8U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(9U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(8U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[9U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(0xaU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(9U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0xaU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(0xbU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(0xaU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0xbU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(0xcU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(0xbU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0xcU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(0xdU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(0xcU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0xdU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(0xeU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(0xdU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0xeU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(0xfU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(0xeU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0xfU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(0x10U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(0xfU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vtemp_h206422cb__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0U];
        __Vtemp_h206422cb__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[1U];
        __Vtemp_h206422cb__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[2U];
        __Vtemp_h206422cb__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[3U];
        __Vtemp_h206422cb__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[4U];
        __Vtemp_h206422cb__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[5U];
        __Vtemp_h206422cb__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[6U];
        __Vtemp_h206422cb__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[7U];
        __Vtemp_h206422cb__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[8U];
        __Vtemp_h206422cb__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[9U];
        __Vtemp_h206422cb__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU];
        __Vtemp_h206422cb__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU];
        __Vtemp_h206422cb__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU];
        __Vtemp_h206422cb__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU];
        __Vtemp_h206422cb__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU];
        __Vtemp_h206422cb__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU];
        __Vtemp_h206422cb__0[0x20U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0U];
        __Vtemp_h206422cb__0[0x21U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[1U];
        __Vtemp_h206422cb__0[0x22U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[2U];
        __Vtemp_h206422cb__0[0x23U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[3U];
        __Vtemp_h206422cb__0[0x24U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[4U];
        __Vtemp_h206422cb__0[0x25U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[5U];
        __Vtemp_h206422cb__0[0x26U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[6U];
        __Vtemp_h206422cb__0[0x27U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[7U];
        __Vtemp_h206422cb__0[0x28U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[8U];
        __Vtemp_h206422cb__0[0x29U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[9U];
        __Vtemp_h206422cb__0[0x2aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU];
        __Vtemp_h206422cb__0[0x2bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU];
        __Vtemp_h206422cb__0[0x2cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU];
        __Vtemp_h206422cb__0[0x2dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU];
        __Vtemp_h206422cb__0[0x2eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU];
        __Vtemp_h206422cb__0[0x2fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU];
        if (vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid) {
            if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim) {
                __Vtemp_h206422cb__0[0x30U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0U]);
                __Vtemp_h206422cb__0[0x31U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[1U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[1U]);
                __Vtemp_h206422cb__0[0x32U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[2U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[2U]);
                __Vtemp_h206422cb__0[0x33U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[3U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[3U]);
                __Vtemp_h206422cb__0[0x34U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[4U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[4U]);
                __Vtemp_h206422cb__0[0x35U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[5U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[5U]);
                __Vtemp_h206422cb__0[0x36U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[6U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[6U]);
                __Vtemp_h206422cb__0[0x37U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[7U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[7U]);
                __Vtemp_h206422cb__0[0x38U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[8U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[8U]);
                __Vtemp_h206422cb__0[0x39U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[9U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[9U]);
                __Vtemp_h206422cb__0[0x3aU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xaU] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xaU]);
                __Vtemp_h206422cb__0[0x3bU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xbU] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xbU]);
                __Vtemp_h206422cb__0[0x3cU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xcU] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xcU]);
                __Vtemp_h206422cb__0[0x3dU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xdU] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xdU]);
                __Vtemp_h206422cb__0[0x3eU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xeU] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xeU]);
                __Vtemp_h206422cb__0[0x3fU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xfU] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xfU]);
            } else {
                __Vtemp_h206422cb__0[0x30U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0U]);
                __Vtemp_h206422cb__0[0x31U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[1U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[1U]);
                __Vtemp_h206422cb__0[0x32U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[2U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[2U]);
                __Vtemp_h206422cb__0[0x33U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[3U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[3U]);
                __Vtemp_h206422cb__0[0x34U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[4U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[4U]);
                __Vtemp_h206422cb__0[0x35U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[5U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[5U]);
                __Vtemp_h206422cb__0[0x36U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[6U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[6U]);
                __Vtemp_h206422cb__0[0x37U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[7U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[7U]);
                __Vtemp_h206422cb__0[0x38U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[8U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[8U]);
                __Vtemp_h206422cb__0[0x39U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[9U] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[9U]);
                __Vtemp_h206422cb__0[0x3aU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xaU] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xaU]);
                __Vtemp_h206422cb__0[0x3bU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xbU] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xbU]);
                __Vtemp_h206422cb__0[0x3cU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xcU] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xcU]);
                __Vtemp_h206422cb__0[0x3dU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xdU] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xdU]);
                __Vtemp_h206422cb__0[0x3eU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xeU] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xeU]);
                __Vtemp_h206422cb__0[0x3fU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xfU] 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xfU]);
            }
        } else {
            __Vtemp_h206422cb__0[0x30U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0U];
            __Vtemp_h206422cb__0[0x31U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[1U];
            __Vtemp_h206422cb__0[0x32U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[2U];
            __Vtemp_h206422cb__0[0x33U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[3U];
            __Vtemp_h206422cb__0[0x34U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[4U];
            __Vtemp_h206422cb__0[0x35U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[5U];
            __Vtemp_h206422cb__0[0x36U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[6U];
            __Vtemp_h206422cb__0[0x37U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[7U];
            __Vtemp_h206422cb__0[0x38U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[8U];
            __Vtemp_h206422cb__0[0x39U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[9U];
            __Vtemp_h206422cb__0[0x3aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU];
            __Vtemp_h206422cb__0[0x3bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU];
            __Vtemp_h206422cb__0[0x3cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU];
            __Vtemp_h206422cb__0[0x3dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU];
            __Vtemp_h206422cb__0[0x3eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU];
            __Vtemp_h206422cb__0[0x3fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU];
        }
        VL_CONCAT_WWW(2560,2048,512, __Vtemp_haaea05ac__0, __Vtemp_h206422cb__0, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace);
        VL_CONCAT_WWW(3072,2560,512, __Vtemp_h44b4b5df__0, __Vtemp_haaea05ac__0, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace);
        VL_CONCAT_WWW(3584,3072,512, __Vtemp_h027cde53__0, __Vtemp_h44b4b5df__0, __Vtemp_h615ab0b6__0);
        if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_4) {
            __Vtemp_h7fa0707d__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0U];
            __Vtemp_h7fa0707d__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[1U];
            __Vtemp_h7fa0707d__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[2U];
            __Vtemp_h7fa0707d__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[3U];
            __Vtemp_h7fa0707d__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[4U];
            __Vtemp_h7fa0707d__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[5U];
            __Vtemp_h7fa0707d__0[6U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[6U];
            __Vtemp_h7fa0707d__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[7U];
            __Vtemp_h7fa0707d__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[8U];
            __Vtemp_h7fa0707d__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[9U];
            __Vtemp_h7fa0707d__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU];
            __Vtemp_h7fa0707d__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU];
            __Vtemp_h7fa0707d__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU];
            __Vtemp_h7fa0707d__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU];
            __Vtemp_h7fa0707d__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU];
            __Vtemp_h7fa0707d__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU];
        } else if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0) {
            __Vtemp_h7fa0707d__0[0U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0U]);
            __Vtemp_h7fa0707d__0[1U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[1U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[1U]);
            __Vtemp_h7fa0707d__0[2U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[2U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[2U]);
            __Vtemp_h7fa0707d__0[3U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[3U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[3U]);
            __Vtemp_h7fa0707d__0[4U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[4U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[4U]);
            __Vtemp_h7fa0707d__0[5U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[5U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[5U]);
            __Vtemp_h7fa0707d__0[6U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[6U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[6U]);
            __Vtemp_h7fa0707d__0[7U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[7U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[7U]);
            __Vtemp_h7fa0707d__0[8U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[8U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[8U]);
            __Vtemp_h7fa0707d__0[9U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[9U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[9U]);
            __Vtemp_h7fa0707d__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xaU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xaU]);
            __Vtemp_h7fa0707d__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xbU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xbU]);
            __Vtemp_h7fa0707d__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xcU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xcU]);
            __Vtemp_h7fa0707d__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xdU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xdU]);
            __Vtemp_h7fa0707d__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xeU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xeU]);
            __Vtemp_h7fa0707d__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xfU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xfU]);
        } else {
            __Vtemp_h7fa0707d__0[0U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0U]);
            __Vtemp_h7fa0707d__0[1U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[1U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[1U]);
            __Vtemp_h7fa0707d__0[2U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[2U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[2U]);
            __Vtemp_h7fa0707d__0[3U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[3U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[3U]);
            __Vtemp_h7fa0707d__0[4U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[4U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[4U]);
            __Vtemp_h7fa0707d__0[5U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[5U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[5U]);
            __Vtemp_h7fa0707d__0[6U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[6U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[6U]);
            __Vtemp_h7fa0707d__0[7U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[7U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[7U]);
            __Vtemp_h7fa0707d__0[8U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[8U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[8U]);
            __Vtemp_h7fa0707d__0[9U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[9U] 
                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[9U]);
            __Vtemp_h7fa0707d__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xaU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xaU]);
            __Vtemp_h7fa0707d__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xbU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xbU]);
            __Vtemp_h7fa0707d__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xcU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xcU]);
            __Vtemp_h7fa0707d__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xdU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xdU]);
            __Vtemp_h7fa0707d__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xeU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xeU]);
            __Vtemp_h7fa0707d__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22[0xfU] 
                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xfU]);
        }
        VL_CONCAT_WWW(4096,3584,512, __Vtemp_ha2797c92__0, __Vtemp_h027cde53__0, __Vtemp_h7fa0707d__0);
        VL_ASSIGN_W(4096,vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31, __Vtemp_ha2797c92__0);
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                            << 4U))] >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                  << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[1U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(2U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(1U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[2U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(3U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(2U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[3U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(4U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(3U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[4U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(5U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(4U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[5U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(6U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(5U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[6U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(7U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(6U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[7U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(8U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(7U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[8U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(9U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(8U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[9U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(0xaU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(9U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(0xbU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(0xaU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(0xcU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(0xbU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(0xdU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(0xcU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(0xeU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(0xdU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(0xfU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(0xeU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(0x10U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(0xfU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 9U))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32 
            = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray) 
                << 7U) | ((0x40U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid)) 
                                    << 6U)) | ((0x20U 
                                                & ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U] 
                                                    | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray)) 
                                                   << 5U)) 
                                               | (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray) 
                                                   << 4U) 
                                                  | ((8U 
                                                      & ((~ (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid)) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U] 
                                                             | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray)) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_27))))))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray 
            = (1U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32) 
                     >> (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)));
        if (vlSelf->Soc__DOT__core__DOT__fc__DOT___T_25) {
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_valid 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_27;
        } else {
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_valid 
                = (((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4)) 
                    & (~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_10))) 
                   & ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))
                       ? (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid)
                       : ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_25) 
                          | ((((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_66)) 
                               & (~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_72))) 
                              & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_73)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid)))));
            __Vdly__Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw 
                = (1U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4)
                          ? (~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U])
                          : ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_10)
                              ? (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid)
                              : ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                 | ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_25)
                                     ? (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw)
                                     : ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_66)
                                         ? (~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U])
                                         : ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_72)
                                             ? (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid)
                                             : ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_73) 
                                                | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw)))))))));
        }
        if ((1U & (~ ((((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___T_25) 
                        | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4)) 
                       | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_10)) 
                      | (~ ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                            & (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid))))))) {
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_bits_data 
                = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inst_type)
                    ? (QData)((IData)(((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                        ? (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data)
                                        : (IData)((vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                                   >> 0x20U)))))
                    : vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data);
        }
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_valid 
            = (1U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___T_25)) 
                     & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4) 
                         | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_10)) 
                        | ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))
                            ? (~ (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid))
                            : ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_25)) 
                               & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_66) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_72)) 
                                  | ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_73) 
                                     & (~ (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid)))))))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33[0U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr;
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33[1U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr;
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33[2U] 
            = (((1U & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U])
                 ? ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT___TagArray_ext_R2_data 
                     << 8U) | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index))
                 : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr 
                    >> 3U)) << 3U);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33[3U] 
            = (((IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid)
                 ? (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr 
                    >> 3U) : ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT___TagArray_ext_R3_data 
                               << 8U) | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index))) 
               << 3U);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33[4U] 
            = (0xfffffff8U & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33[5U] 
            = (((1U & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U])
                 ? ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT___TagArray_ext_R0_data 
                     << 8U) | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index))
                 : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr 
                    >> 3U)) << 3U);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33[6U] 
            = (IData)((((QData)((IData)((0xfffffff8U 
                                         & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr))) 
                        << 0x20U) | (QData)((IData)(
                                                    (((IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid)
                                                       ? 
                                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr 
                                                       >> 3U)
                                                       : 
                                                      ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT___TagArray_ext_R1_data 
                                                        << 8U) 
                                                       | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index))) 
                                                     << 3U)))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33[7U] 
            = (IData)(((((QData)((IData)((0xfffffff8U 
                                          & vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr))) 
                         << 0x20U) | (QData)((IData)(
                                                     (((IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid)
                                                        ? 
                                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr 
                                                        >> 3U)
                                                        : 
                                                       ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT___TagArray_ext_R1_data 
                                                         << 8U) 
                                                        | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index))) 
                                                      << 3U)))) 
                       >> 0x20U));
        __Vdly__Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                 << 5U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33[
                                                  (((IData)(0x1fU) 
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
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33[
                  (7U & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                               << 5U))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_34 
            = (((QData)((IData)((0xff0000U | (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask) 
                                               << 0x18U) 
                                              | ((((1U 
                                                    & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U])
                                                    ? 0xffU
                                                    : (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask)) 
                                                  << 8U) 
                                                 | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask)))))) 
                << 0x20U) | (QData)((IData)((0xff000000U 
                                             | ((((1U 
                                                   & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U])
                                                   ? 0xffU
                                                   : (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask)) 
                                                 << 0x10U) 
                                                | (0xffffU 
                                                   & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask))))))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_34 
                                >> (0x3fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                             << 3U)))));
    }
    if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset 
            = ((IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)
                ? (7U & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask))
                          ? ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)
                              ? (IData)(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T)
                              : (IData)(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T))
                          : ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)
                              ? (IData)(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T)
                              : (IData)(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T))))
                : 0U);
    }
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
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_0 
        = (0x1ffU & (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                       << 5U))) ? 0U
                       : (__Vtemp_hb99da695__0[(((IData)(8U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 5U))) 
                                                >> 5U)] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                   << 5U))))) 
                     | (__Vtemp_hb99da695__0[(7U & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))] 
                        >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                     << 5U)))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___T_25)) 
           & ((1U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4) 
                     | (~ ((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_10) 
                             | (7U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))) 
                            | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_25)) 
                           | (~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_66))))))
               ? (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0)
               : (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim)));
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
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_0 
        = (0x1ffU & (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                       << 5U))) ? 0U
                       : (__Vtemp_h1d13a2da__0[(((IData)(8U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 5U))) 
                                                >> 5U)] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                   << 5U))))) 
                     | (__Vtemp_h1d13a2da__0[(7U & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))] 
                        >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                     << 5U)))));
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc 
        = __Vdly__Soc__DOT__core__DOT__fetch__DOT__old_pc;
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc = __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc;
    if (__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v0) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v0] 
            = __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v1) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v1] 
            = __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v1;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v2) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v2] 
            = __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v2;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v3) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v3] 
            = __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v3;
    }
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp 
        = __Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_comp;
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp 
        = __Vdly__Soc__DOT__core__DOT__arbitor__DOT__aw_comp;
    if (__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v0) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v0] 
            = __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v1) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v1] 
            = __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v1;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v2) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v2] 
            = __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v2;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v3) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v3] 
            = __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v3;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0] 
            = __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1] 
            = __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2] 
            = __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3] 
            = __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4] 
            = __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5] 
            = __Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5;
    }
    vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0U] = 0ULL;
    vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1] 
        = __Vdlyvval__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1;
    vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count 
        = __Vdly__Soc__DOT__core__DOT__interact__DOT__over_count;
    if (__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0] 
            = __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1] 
            = __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2] 
            = __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3] 
            = __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4] 
            = __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5] 
            = __Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5;
    }
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP = __Vdly__Soc__DOT__core__DOT__csrs__DOT__MIP;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[1U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[1U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[2U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[2U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[3U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[3U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[4U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[4U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[5U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[5U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[6U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[6U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[7U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[7U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[8U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[8U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[9U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[9U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xaU] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0xaU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xbU] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0xbU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xcU] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0xcU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xdU] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0xdU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xeU] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0xeU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty[0xfU] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty[0xfU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[1U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[1U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[2U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[2U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[3U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[3U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[4U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[4U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[5U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[5U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[6U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[6U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[7U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[7U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[8U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[8U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[9U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[9U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[1U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[1U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[2U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[2U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[3U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[3U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[4U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[4U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[5U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[5U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[6U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[6U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[7U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[7U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[8U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[8U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[9U] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[9U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xaU] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0xaU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xbU] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0xbU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xcU] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0xcU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xdU] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0xdU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xeU] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0xeU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid[0xfU] 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid[0xfU];
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__dereg_branch_type = 0U;
        vlSelf->Soc__DOT__core__DOT__trap__DOT__cause = 0ULL;
        vlSelf->Soc__DOT__core__DOT__trap__DOT__pc = 0U;
        vlSelf->Soc__DOT__core__DOT__trap__DOT__state 
            = __Vdly__Soc__DOT__core__DOT__trap__DOT__state;
        __Vdly__Soc__DOT__core__DOT__clint__DOT__MSIP = 0U;
        __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIMECMP = 0ULL;
        __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIME = 0ULL;
        vlSelf->Soc__DOT__core__DOT__clint__DOT__rvalue_buf = 0ULL;
        vlSelf->Soc__DOT__core__DOT__clint__DOT__valid_buf = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
            vlSelf->Soc__DOT__core__DOT__dereg_branch_type 
                = ((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                   & ((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                      & ((0x17U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                         & ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                            & ((0x6fU != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                               & ((0x67U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                  & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)))))));
        }
        vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_1 
            = (1U & ((0x30200073U == (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)) 
                     | (~ (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7))));
        if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))) {
            if (vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2) {
                vlSelf->Soc__DOT__core__DOT__trap__DOT__cause = 0xbULL;
            } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_1)))) {
                vlSelf->Soc__DOT__core__DOT__trap__DOT__cause = 0x8000000000000007ULL;
            }
        }
        if (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
             & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2) 
                | (~ (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_1))))) {
            vlSelf->Soc__DOT__core__DOT__trap__DOT__pc 
                = vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc;
        }
        vlSelf->Soc__DOT__core__DOT__trap__DOT__state 
            = __Vdly__Soc__DOT__core__DOT__trap__DOT__state;
        vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_5 
            = (0x2000000ULL == vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result);
        vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_10 
            = (0x2004000ULL == vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result);
        vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_1 
            = (0x2000000ULL == vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result);
        vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_2 
            = (0x2004000ULL == vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result);
        vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_3 
            = (0x200bff8ULL == vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result);
        if ((1U & (~ (((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6)) 
                       | (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type))) 
                      | (~ ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)) 
                            & (IData)(vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_5))))))) {
            if ((0xffU == (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask))) {
                __Vdly__Soc__DOT__core__DOT__clint__DOT__MSIP 
                    = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata);
            } else if ((0xfU == (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask))) {
                __Vdly__Soc__DOT__core__DOT__clint__DOT__MSIP 
                    = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata);
            } else if ((3U == (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask))) {
                __Vdly__Soc__DOT__core__DOT__clint__DOT__MSIP 
                    = ((0xffff0000U & vlSelf->Soc__DOT__core__DOT__clint__DOT__MSIP) 
                       | (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata)));
            } else if ((1U == (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask))) {
                __Vdly__Soc__DOT__core__DOT__clint__DOT__MSIP 
                    = ((0xffffff00U & vlSelf->Soc__DOT__core__DOT__clint__DOT__MSIP) 
                       | (0xffU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata)));
            }
        }
        if ((1U & (~ (((((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6)) 
                         | (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type))) 
                        | (~ (IData)((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))))) 
                       | (IData)(vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_5)) 
                      | (~ (IData)(vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_10)))))) {
            if ((0xffU == (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask))) {
                __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIMECMP 
                    = vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata;
            } else if ((0xfU == (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask))) {
                __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIMECMP 
                    = (((QData)((IData)((vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP 
                                         >> 0x20U))) 
                        << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata)));
            } else if ((3U == (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask))) {
                __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIMECMP 
                    = ((0xffffffffffff0000ULL & vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP) 
                       | (QData)((IData)((0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata)))));
            } else if ((1U == (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask))) {
                __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIMECMP 
                    = ((0xffffffffffffff00ULL & vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP) 
                       | (QData)((IData)((0xffU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata)))));
            }
        }
        if ((1U & ((((((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6)) 
                       | (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type))) 
                      | (~ (IData)((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))))) 
                     | (IData)(vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_5)) 
                    | (IData)(vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_10)) 
                   | (0x200bff8ULL != vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)))) {
            __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIME 
                = (1ULL + vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME);
        } else if ((0xffU == (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask))) {
            __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIME 
                = vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata;
        } else if ((0xfU == (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask))) {
            __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIME 
                = (((QData)((IData)((vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME 
                                     >> 0x20U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata)));
        } else if ((3U == (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask))) {
            __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIME 
                = ((0xffffffffffff0000ULL & vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME) 
                   | (QData)((IData)((0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata)))));
        } else if ((1U == (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask))) {
            __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIME 
                = ((0xffffffffffffff00ULL & vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME) 
                   | (QData)((IData)((0xffU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata)))));
        }
        if (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6) 
             & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type)))) {
            vlSelf->Soc__DOT__core__DOT__clint__DOT__rvalue_buf 
                = ((IData)(vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_1)
                    ? (QData)((IData)(vlSelf->Soc__DOT__core__DOT__clint__DOT__MSIP))
                    : ((IData)(vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_2)
                        ? vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP
                        : ((IData)(vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_3)
                            ? vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME
                            : 0ULL)));
            vlSelf->Soc__DOT__core__DOT__clint__DOT__valid_buf 
                = (((IData)(vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_1) 
                    | (IData)(vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_2)) 
                   | (IData)(vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_3));
        } else {
            vlSelf->Soc__DOT__core__DOT__clint__DOT__rvalue_buf = 0ULL;
            vlSelf->Soc__DOT__core__DOT__clint__DOT__valid_buf = 0U;
        }
    }
    vlSelf->Soc__DOT__core__DOT__clint__DOT__MSIP = __Vdly__Soc__DOT__core__DOT__clint__DOT__MSIP;
    vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP 
        = __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIMECMP;
    vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME 
        = __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIME;
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_7 
        = ((IData)(4U) + vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___io_pc_bits_T_3 
        = (vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc 
           == vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc);
    if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
        vlSelf->Soc__DOT__core__DOT__mwreg_has_inst 
            = vlSelf->Soc__DOT__core__DOT__emreg_has_inst;
        vlSelf->Soc__DOT__core__DOT__emreg_has_inst 
            = vlSelf->Soc__DOT__core__DOT__dereg_has_inst;
        vlSelf->Soc__DOT__core__DOT__dereg_has_inst 
            = (1U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                     & (~ ((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                           | (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)))));
    }
    vlSelf->__VdfgTmp_h02e5796b__0 = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
        [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_0];
    vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7 = 
        (1U & ((IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP 
                        >> 7U)) & ((IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                            >> 3U)) 
                                   & (IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE 
                                              >> 7U)))));
    Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_26 
        = (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
            & (IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)) 
           & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask)) 
              | (~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3))));
    if (Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_26) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__tag 
            = (0x1fffffU & (IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                    >> 0xbU)));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                >> 3U)));
    }
    __Vtemp_h5ee83ed9__0[0U] = 0x41000000U;
    __Vtemp_h5ee83ed9__0[1U] = 0x3003423U;
    __Vtemp_h5ee83ed9__0[2U] = (0x30000000U | (((0x8000000000000007ULL 
                                                 == vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE)
                                                 ? 0x344U
                                                 : 0U) 
                                               << 8U));
    vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_rd 
        = ((0x5fU >= (0x7fU & ((IData)(0xcU) * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))))
            ? (0xfffU & (((0U == (0x1fU & ((IData)(0xcU) 
                                           * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))))
                           ? 0U : (__Vtemp_h5ee83ed9__0[
                                   (((IData)(0xbU) 
                                     + (0x7fU & ((IData)(0xcU) 
                                                 * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xcU) 
                                                      * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)))))) 
                         | (__Vtemp_h5ee83ed9__0[(3U 
                                                  & (((IData)(0xcU) 
                                                      * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                                                     >> 5U))] 
                            >> (0x1fU & ((IData)(0xcU) 
                                         * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))))))
            : 0U);
    vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
           & ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
              & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                 | ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                    | ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                       | ((5U != (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                          & ((6U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                              ? (0x8000000000000007ULL 
                                 == vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE)
                              : (7U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)))))))));
    __Vtemp_h11a82919__0[0U] = 0U;
    __Vtemp_h11a82919__0[1U] = 0U;
    __Vtemp_h11a82919__0[2U] = 0U;
    __Vtemp_h11a82919__0[3U] = 0U;
    __Vtemp_h11a82919__0[4U] = vlSelf->Soc__DOT__core__DOT__trap__DOT__pc;
    __Vtemp_h11a82919__0[5U] = 0U;
    __Vtemp_h11a82919__0[6U] = (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__cause);
    __Vtemp_h11a82919__0[7U] = (IData)((vlSelf->Soc__DOT__core__DOT__trap__DOT__cause 
                                        >> 0x20U));
    __Vtemp_h11a82919__0[8U] = (((IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                          >> 8U)) << 8U) 
                                | ((0x80U & ((IData)(
                                                     (vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                                      >> 3U)) 
                                             << 7U)) 
                                   | ((0x70U & ((IData)(
                                                        (vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                                         >> 4U)) 
                                                << 4U)) 
                                      | (7U & (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS)))));
    __Vtemp_h11a82919__0[9U] = (((IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                          >> 8U)) >> 0x18U) 
                                | ((IData)(((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                             >> 8U) 
                                            >> 0x20U)) 
                                   << 8U));
    __Vtemp_h11a82919__0[0xaU] = 0U;
    __Vtemp_h11a82919__0[0xbU] = 0U;
    __Vtemp_h11a82919__0[0xcU] = (IData)(((0x8000000000000007ULL 
                                           == vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE)
                                           ? ((0xffffffffffffff00ULL 
                                               & vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP) 
                                              | (QData)((IData)(
                                                                (0x7fU 
                                                                 & (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP)))))
                                           : 0ULL));
    __Vtemp_h11a82919__0[0xdU] = (IData)((((0x8000000000000007ULL 
                                            == vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE)
                                            ? ((0xffffffffffffff00ULL 
                                                & vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP) 
                                               | (QData)((IData)(
                                                                 (0x7fU 
                                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP)))))
                                            : 0ULL) 
                                          >> 0x20U));
    __Vtemp_h11a82919__0[0xeU] = (((IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                            >> 4U)) 
                                   << 4U) | ((8U & 
                                              ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                                        >> 7U)) 
                                               << 3U)) 
                                             | (7U 
                                                & (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS))));
    __Vtemp_h11a82919__0[0xfU] = (((IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                            >> 4U)) 
                                   >> 0x1cU) | ((IData)(
                                                        ((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                                          >> 4U) 
                                                         >> 0x20U)) 
                                                << 4U));
    vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata 
        = (((QData)((IData)(__Vtemp_h11a82919__0[(((IData)(0x3fU) 
                                                   + 
                                                   (0x1ffU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state) 
                                                       << 6U))) 
                                                  >> 5U)])) 
            << ((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state) 
                                 << 6U))) ? 0x20U : 
                ((IData)(0x40U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state) 
                                            << 6U))))) 
           | (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state) 
                                << 6U))) ? 0ULL : ((QData)((IData)(
                                                                   __Vtemp_h11a82919__0[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0x1ffU 
                                                                      & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state) 
                                                        << 6U))))) 
              | ((QData)((IData)(__Vtemp_h11a82919__0[
                                 (0xeU & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state) 
                                          << 1U))])) 
                 >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state) 
                              << 6U)))));
    vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3 
        = ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
           | (7U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)));
    vlSelf->__VdfgTmp_hc520a55b__0 = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
        [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_0];
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_shamt = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_op_b = 0ULL;
        vlSelf->Soc__DOT__core__DOT__dereg_op_a = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
        vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                ? ((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                    ? 0U : (7U & (IData)(vlSelf->__VdfgTmp_h6a80e86b__0)))
                : 0U);
        if (vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush) {
            vlSelf->Soc__DOT__core__DOT__dereg_shamt = 0U;
            vlSelf->Soc__DOT__core__DOT__dereg_op_b = 0ULL;
            vlSelf->Soc__DOT__core__DOT__dereg_op_a = 0ULL;
        } else {
            vlSelf->Soc__DOT__core__DOT__dereg_shamt 
                = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
                    ? (0x3fU & (IData)((vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                        >> 0x14U)))
                    : 0U);
            vlSelf->Soc__DOT__core__DOT__dereg_op_b 
                = ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                    ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T
                    : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                        ? 4ULL : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                   ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T
                                   : ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                       ? vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm
                                       : 0ULL))));
            vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                = (((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                    & ((0x17U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                       & ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                          & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4)) 
                             & ((~ (IData)(vlSelf->__VdfgTmp_ha3b20136__0)) 
                                & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0) 
                                   | (3U == (3U & (- (IData)(
                                                             (0x3f3U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))))
                    ? vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm
                    : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type))
                        ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4
                        : (QData)((IData)(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type))
                                            ? vlSelf->Soc__DOT__core__DOT__fdreg_pc
                                            : 0U)))));
        }
    }
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_131 
        = VL_MODDIV_QQQ(64, vlSelf->Soc__DOT__core__DOT__dereg_op_a, vlSelf->Soc__DOT__core__DOT__dereg_op_b);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_128 
        = VL_MODDIVS_QQQ(64, vlSelf->Soc__DOT__core__DOT__dereg_op_a, vlSelf->Soc__DOT__core__DOT__dereg_op_b);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_123 
        = VL_DIV_QQQ(64, vlSelf->Soc__DOT__core__DOT__dereg_op_a, vlSelf->Soc__DOT__core__DOT__dereg_op_b);
    __Vtemp_h7ce0e83e__0[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a);
    __Vtemp_h7ce0e83e__0[1U] = (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                        >> 0x20U));
    __Vtemp_h7ce0e83e__0[2U] = (1U & (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                              >> 0x3fU)));
    __Vtemp_h6eeb50c9__0[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b);
    __Vtemp_h6eeb50c9__0[1U] = (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_b 
                                        >> 0x20U));
    __Vtemp_h6eeb50c9__0[2U] = (1U & (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_b 
                                              >> 0x3fU)));
    VL_DIVS_WWW(65, __Vtemp_h238ea762__0, __Vtemp_h7ce0e83e__0, __Vtemp_h6eeb50c9__0);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_68[0U] 
        = __Vtemp_h238ea762__0[0U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_68[1U] 
        = __Vtemp_h238ea762__0[1U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_68[2U] 
        = (1U & __Vtemp_h238ea762__0[2U]);
    if ((0x1fU >= (0x3fU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)))) {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_112 
            = VL_SHIFTRS_III(32,32,6, (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a), 
                             (0x3fU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_107 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
               >> (0x3fU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)));
    } else {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_112 
            = (- ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
                  >> 0x1fU));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_107 = 0U;
    }
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_98 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
           - (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b));
    if ((0x1fU >= (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt))) {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_89 
            = VL_SHIFTRS_III(32,32,6, (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a), (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_85 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
               >> (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt));
    } else {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_89 
            = (- ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
                  >> 0x1fU));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_85 = 0U;
    }
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_78 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
           + (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_34 
        = (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
           >> (0x3fU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_38 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->Soc__DOT__core__DOT__dereg_op_a, 
                         (0x3fU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_41 
        = (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
           >> (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_44 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->Soc__DOT__core__DOT__dereg_op_a, (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47 
        = (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
           & vlSelf->Soc__DOT__core__DOT__dereg_op_b);
    __Vtemp_h7cb4ecaa__0[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a);
    __Vtemp_h7cb4ecaa__0[1U] = (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                        >> 0x20U));
    __Vtemp_h7cb4ecaa__0[2U] = 0U;
    __Vtemp_h7cb4ecaa__0[3U] = 0U;
    VL_SHIFTL_WWI(127,127,6, __Vtemp_hb46e09a5__0, __Vtemp_h7cb4ecaa__0, 
                  (0x3fU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_101[0U] 
        = __Vtemp_hb46e09a5__0[0U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_101[1U] 
        = __Vtemp_hb46e09a5__0[1U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_101[2U] 
        = __Vtemp_hb46e09a5__0[2U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_101[3U] 
        = (0x7fffffffU & __Vtemp_hb46e09a5__0[3U]);
    __Vtemp_h7cb4ecaa__1[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a);
    __Vtemp_h7cb4ecaa__1[1U] = (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                        >> 0x20U));
    __Vtemp_h7cb4ecaa__1[2U] = 0U;
    __Vtemp_h7cb4ecaa__1[3U] = 0U;
    VL_SHIFTL_WWI(127,127,6, __Vtemp_he3381e13__0, __Vtemp_h7cb4ecaa__1, (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_80[0U] 
        = __Vtemp_he3381e13__0[0U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_80[1U] 
        = __Vtemp_he3381e13__0[1U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_80[2U] 
        = __Vtemp_he3381e13__0[2U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_80[3U] 
        = (0x7fffffffU & __Vtemp_he3381e13__0[3U]);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5[0U] 
        = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5[1U] 
        = (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                   >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                                    >> 0x3fU)))))));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hdd9fa219__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
            ? (IData)((vlSelf->__VdfgTmp_h02e5796b__0 
                       >> 0x20U)) : 0U);
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata = 0ULL;
        vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr = 0U;
        vlSelf->Soc__DOT__core__DOT__mwreg_wb_type = 0U;
        vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag = 0U;
        vlSelf->Soc__DOT__core__DOT__emreg_csr_wen = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_csr_t = 0ULL;
        vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr = 0U;
        vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata = 0ULL;
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inst_type = 0U;
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
            vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata 
                = vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata;
            vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr 
                = vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr;
            vlSelf->Soc__DOT__core__DOT__mwreg_wb_type 
                = vlSelf->Soc__DOT__core__DOT__emreg_wb_type;
            vlSelf->Soc__DOT__core__DOT__emreg_csr_wen 
                = vlSelf->Soc__DOT__core__DOT__dereg_csr_wen;
            vlSelf->Soc__DOT__core__DOT__dereg_csr_t 
                = ((IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)
                    ? 0ULL : vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T);
            vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr 
                = vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr;
            vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata 
                = vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata;
        }
        if ((0x100073U == (((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                            & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid))
                            ? (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)
                            : 0U))) {
            vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag = 1U;
        }
        if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))) {
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inst_type = 0U;
        }
        if (((((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
               & (IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)) 
              & (0U != (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask))) 
             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3))) {
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum 
                = (1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0)));
        }
    }
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state 
        = __Vdly__Soc__DOT__core__DOT__Dcache__DOT__state;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN 
        = (1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))
                  ? ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started) 
                     & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3))
                  : ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))
                      ? vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]
                      : ((6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                         | ((~ (IData)((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))) 
                            & ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                               & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))
                                   ? vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]
                                   : (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))))))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hdd9fa219__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
            ? (IData)((vlSelf->__VdfgTmp_hc520a55b__0 
                       >> 0x20U)) : 0U);
    vlSelf->Soc__DOT__core__DOT__regfile__DOT___regs_ext_R0_data 
        = vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
        [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr];
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr = 0U;
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data = 0ULL;
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_ld_type = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_sd_type = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_alu_op = 0x3fU;
        vlSelf->Soc__DOT__core__DOT__fdreg_pc = 0x80000000U;
        vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr = 0U;
        vlSelf->Soc__DOT__core__DOT__emreg_wb_type = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__state = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[1U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[2U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[3U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[4U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[5U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[6U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[7U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[8U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[9U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0xaU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0xbU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0xcU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0xdU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0xeU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0xfU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[1U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[2U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[3U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[4U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[5U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[6U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[7U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[8U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[9U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0xaU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0xbU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0xcU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0xdU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0xeU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0xfU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[1U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[2U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[3U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[4U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[5U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[6U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[7U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[8U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[9U] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0xaU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0xbU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0xcU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0xdU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0xeU] = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0xfU] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__inDataOneArray = 0U;
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid = 0U;
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data = 0ULL;
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_valid = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw = 0U;
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask = 0U;
    } else {
        if (Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_26) {
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr 
                = (IData)(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T);
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data 
                = vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata;
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask 
                = vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask;
        }
        if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
            if (vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush) {
                vlSelf->Soc__DOT__core__DOT__dereg_ld_type = 0U;
                vlSelf->Soc__DOT__core__DOT__dereg_sd_type = 0U;
                vlSelf->Soc__DOT__core__DOT__dereg_alu_op = 0U;
            } else {
                vlSelf->Soc__DOT__core__DOT__dereg_ld_type 
                    = vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type;
                vlSelf->Soc__DOT__core__DOT__dereg_sd_type 
                    = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0)
                        ? 0U : ((0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                 ? 1U : ((0xa3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                          ? 2U : ((0x123U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                   ? 3U
                                                   : 
                                                  ((0x1a3U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                   << 2U)))));
                vlSelf->Soc__DOT__core__DOT__dereg_alu_op 
                    = vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op;
            }
            vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr 
                = vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr;
            vlSelf->Soc__DOT__core__DOT__emreg_wb_type 
                = vlSelf->Soc__DOT__core__DOT__dereg_wb_type;
        }
        vlSelf->Soc__DOT__core__DOT__fdreg_pc = vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc;
        __Vtemp_h9c122d25__0[0U] = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                    << 1U);
        __Vtemp_h9c122d25__0[1U] = 0U;
        __Vtemp_h9c122d25__0[2U] = 0U;
        __Vtemp_h9c122d25__0[3U] = 0U;
        __Vtemp_h9c122d25__0[4U] = 0U;
        __Vtemp_h9c122d25__0[5U] = 0U;
        __Vtemp_h9c122d25__0[6U] = 0U;
        __Vtemp_h9c122d25__0[7U] = 0U;
        __Vtemp_h9c122d25__0[8U] = 0U;
        __Vtemp_h9c122d25__0[9U] = 0U;
        __Vtemp_h9c122d25__0[0xaU] = 0U;
        __Vtemp_h9c122d25__0[0xbU] = 0U;
        __Vtemp_h9c122d25__0[0xcU] = 0U;
        __Vtemp_h9c122d25__0[0xdU] = 0U;
        __Vtemp_h9c122d25__0[0xeU] = 0U;
        __Vtemp_h9c122d25__0[0xfU] = 0U;
        __Vtemp_h9c122d25__0[0x10U] = 0U;
        __Vtemp_h9c122d25__0[0x11U] = 0U;
        __Vtemp_h9c122d25__0[0x12U] = 0U;
        __Vtemp_h9c122d25__0[0x13U] = 0U;
        __Vtemp_h9c122d25__0[0x14U] = 0U;
        __Vtemp_h9c122d25__0[0x15U] = 0U;
        __Vtemp_h9c122d25__0[0x16U] = 0U;
        __Vtemp_h9c122d25__0[0x17U] = 0U;
        __Vtemp_h9c122d25__0[0x18U] = 0U;
        __Vtemp_h9c122d25__0[0x19U] = 0U;
        __Vtemp_h9c122d25__0[0x1aU] = 0U;
        __Vtemp_h9c122d25__0[0x1bU] = 0U;
        __Vtemp_h9c122d25__0[0x1cU] = 0U;
        __Vtemp_h9c122d25__0[0x1dU] = 0U;
        __Vtemp_h9c122d25__0[0x1eU] = 0U;
        __Vtemp_h9c122d25__0[0x1fU] = 0U;
        VL_SHIFTL_WWW(1024,1024,1024, __Vtemp_ha2eb1b90__0, VSoc__ConstPool__CONST_h2ae7f32a_0, __Vtemp_h9c122d25__0);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0U] 
            = __Vtemp_ha2eb1b90__0[0U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[1U] 
            = __Vtemp_ha2eb1b90__0[1U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[2U] 
            = __Vtemp_ha2eb1b90__0[2U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[3U] 
            = __Vtemp_ha2eb1b90__0[3U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[4U] 
            = __Vtemp_ha2eb1b90__0[4U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[5U] 
            = __Vtemp_ha2eb1b90__0[5U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[6U] 
            = __Vtemp_ha2eb1b90__0[6U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[7U] 
            = __Vtemp_ha2eb1b90__0[7U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[8U] 
            = __Vtemp_ha2eb1b90__0[8U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[9U] 
            = __Vtemp_ha2eb1b90__0[9U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0xaU] 
            = __Vtemp_ha2eb1b90__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0xbU] 
            = __Vtemp_ha2eb1b90__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0xcU] 
            = __Vtemp_ha2eb1b90__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0xdU] 
            = __Vtemp_ha2eb1b90__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0xeU] 
            = __Vtemp_ha2eb1b90__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0xfU] 
            = __Vtemp_ha2eb1b90__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x10U] 
            = __Vtemp_ha2eb1b90__0[0x10U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x11U] 
            = __Vtemp_ha2eb1b90__0[0x11U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x12U] 
            = __Vtemp_ha2eb1b90__0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x13U] 
            = __Vtemp_ha2eb1b90__0[0x13U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x14U] 
            = __Vtemp_ha2eb1b90__0[0x14U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x15U] 
            = __Vtemp_ha2eb1b90__0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x16U] 
            = __Vtemp_ha2eb1b90__0[0x16U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x17U] 
            = __Vtemp_ha2eb1b90__0[0x17U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x18U] 
            = __Vtemp_ha2eb1b90__0[0x18U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x19U] 
            = __Vtemp_ha2eb1b90__0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x1aU] 
            = __Vtemp_ha2eb1b90__0[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x1bU] 
            = __Vtemp_ha2eb1b90__0[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x1cU] 
            = __Vtemp_ha2eb1b90__0[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x1dU] 
            = __Vtemp_ha2eb1b90__0[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x1eU] 
            = __Vtemp_ha2eb1b90__0[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0x1fU] 
            = __Vtemp_ha2eb1b90__0[0x1fU];
        VL_SHIFTL_WWI(1024,1024,10, __Vtemp_hb1354e33__0, VSoc__ConstPool__CONST_h2ae7f32a_0, 
                      (0x3ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                                << 1U))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0U] 
            = __Vtemp_hb1354e33__0[0U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[1U] 
            = __Vtemp_hb1354e33__0[1U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[2U] 
            = __Vtemp_hb1354e33__0[2U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[3U] 
            = __Vtemp_hb1354e33__0[3U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[4U] 
            = __Vtemp_hb1354e33__0[4U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[5U] 
            = __Vtemp_hb1354e33__0[5U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[6U] 
            = __Vtemp_hb1354e33__0[6U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[7U] 
            = __Vtemp_hb1354e33__0[7U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[8U] 
            = __Vtemp_hb1354e33__0[8U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[9U] 
            = __Vtemp_hb1354e33__0[9U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0xaU] 
            = __Vtemp_hb1354e33__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0xbU] 
            = __Vtemp_hb1354e33__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0xcU] 
            = __Vtemp_hb1354e33__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0xdU] 
            = __Vtemp_hb1354e33__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0xeU] 
            = __Vtemp_hb1354e33__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0xfU] 
            = __Vtemp_hb1354e33__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x10U] 
            = __Vtemp_hb1354e33__0[0x10U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x11U] 
            = __Vtemp_hb1354e33__0[0x11U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x12U] 
            = __Vtemp_hb1354e33__0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x13U] 
            = __Vtemp_hb1354e33__0[0x13U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x14U] 
            = __Vtemp_hb1354e33__0[0x14U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x15U] 
            = __Vtemp_hb1354e33__0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x16U] 
            = __Vtemp_hb1354e33__0[0x16U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x17U] 
            = __Vtemp_hb1354e33__0[0x17U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x18U] 
            = __Vtemp_hb1354e33__0[0x18U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x19U] 
            = __Vtemp_hb1354e33__0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x1aU] 
            = __Vtemp_hb1354e33__0[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x1bU] 
            = __Vtemp_hb1354e33__0[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x1cU] 
            = __Vtemp_hb1354e33__0[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x1dU] 
            = __Vtemp_hb1354e33__0[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x1eU] 
            = __Vtemp_hb1354e33__0[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0x1fU] 
            = __Vtemp_hb1354e33__0[0x1fU];
        __Vtemp_h9c122d25__1[0U] = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                    << 1U);
        __Vtemp_h9c122d25__1[1U] = 0U;
        __Vtemp_h9c122d25__1[2U] = 0U;
        __Vtemp_h9c122d25__1[3U] = 0U;
        __Vtemp_h9c122d25__1[4U] = 0U;
        __Vtemp_h9c122d25__1[5U] = 0U;
        __Vtemp_h9c122d25__1[6U] = 0U;
        __Vtemp_h9c122d25__1[7U] = 0U;
        __Vtemp_h9c122d25__1[8U] = 0U;
        __Vtemp_h9c122d25__1[9U] = 0U;
        __Vtemp_h9c122d25__1[0xaU] = 0U;
        __Vtemp_h9c122d25__1[0xbU] = 0U;
        __Vtemp_h9c122d25__1[0xcU] = 0U;
        __Vtemp_h9c122d25__1[0xdU] = 0U;
        __Vtemp_h9c122d25__1[0xeU] = 0U;
        __Vtemp_h9c122d25__1[0xfU] = 0U;
        __Vtemp_h9c122d25__1[0x10U] = 0U;
        __Vtemp_h9c122d25__1[0x11U] = 0U;
        __Vtemp_h9c122d25__1[0x12U] = 0U;
        __Vtemp_h9c122d25__1[0x13U] = 0U;
        __Vtemp_h9c122d25__1[0x14U] = 0U;
        __Vtemp_h9c122d25__1[0x15U] = 0U;
        __Vtemp_h9c122d25__1[0x16U] = 0U;
        __Vtemp_h9c122d25__1[0x17U] = 0U;
        __Vtemp_h9c122d25__1[0x18U] = 0U;
        __Vtemp_h9c122d25__1[0x19U] = 0U;
        __Vtemp_h9c122d25__1[0x1aU] = 0U;
        __Vtemp_h9c122d25__1[0x1bU] = 0U;
        __Vtemp_h9c122d25__1[0x1cU] = 0U;
        __Vtemp_h9c122d25__1[0x1dU] = 0U;
        __Vtemp_h9c122d25__1[0x1eU] = 0U;
        __Vtemp_h9c122d25__1[0x1fU] = 0U;
        VL_SHIFTL_WWW(1024,1024,1024, __Vtemp_h0e8ec2c2__0, VSoc__ConstPool__CONST_h2ae7f32a_0, __Vtemp_h9c122d25__1);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0U] 
            = __Vtemp_h0e8ec2c2__0[0U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[1U] 
            = __Vtemp_h0e8ec2c2__0[1U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[2U] 
            = __Vtemp_h0e8ec2c2__0[2U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[3U] 
            = __Vtemp_h0e8ec2c2__0[3U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[4U] 
            = __Vtemp_h0e8ec2c2__0[4U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[5U] 
            = __Vtemp_h0e8ec2c2__0[5U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[6U] 
            = __Vtemp_h0e8ec2c2__0[6U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[7U] 
            = __Vtemp_h0e8ec2c2__0[7U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[8U] 
            = __Vtemp_h0e8ec2c2__0[8U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[9U] 
            = __Vtemp_h0e8ec2c2__0[9U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0xaU] 
            = __Vtemp_h0e8ec2c2__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0xbU] 
            = __Vtemp_h0e8ec2c2__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0xcU] 
            = __Vtemp_h0e8ec2c2__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0xdU] 
            = __Vtemp_h0e8ec2c2__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0xeU] 
            = __Vtemp_h0e8ec2c2__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0xfU] 
            = __Vtemp_h0e8ec2c2__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x10U] 
            = __Vtemp_h0e8ec2c2__0[0x10U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x11U] 
            = __Vtemp_h0e8ec2c2__0[0x11U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x12U] 
            = __Vtemp_h0e8ec2c2__0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x13U] 
            = __Vtemp_h0e8ec2c2__0[0x13U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x14U] 
            = __Vtemp_h0e8ec2c2__0[0x14U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x15U] 
            = __Vtemp_h0e8ec2c2__0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x16U] 
            = __Vtemp_h0e8ec2c2__0[0x16U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x17U] 
            = __Vtemp_h0e8ec2c2__0[0x17U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x18U] 
            = __Vtemp_h0e8ec2c2__0[0x18U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x19U] 
            = __Vtemp_h0e8ec2c2__0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x1aU] 
            = __Vtemp_h0e8ec2c2__0[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x1bU] 
            = __Vtemp_h0e8ec2c2__0[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x1cU] 
            = __Vtemp_h0e8ec2c2__0[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x1dU] 
            = __Vtemp_h0e8ec2c2__0[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x1eU] 
            = __Vtemp_h0e8ec2c2__0[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0x1fU] 
            = __Vtemp_h0e8ec2c2__0[0x1fU];
        VL_SHIFTL_WWI(1024,1024,10, __Vtemp_hb1354e33__1, VSoc__ConstPool__CONST_h2ae7f32a_0, 
                      (0x3ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                                << 1U))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0U] 
            = __Vtemp_hb1354e33__1[0U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[1U] 
            = __Vtemp_hb1354e33__1[1U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[2U] 
            = __Vtemp_hb1354e33__1[2U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[3U] 
            = __Vtemp_hb1354e33__1[3U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[4U] 
            = __Vtemp_hb1354e33__1[4U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[5U] 
            = __Vtemp_hb1354e33__1[5U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[6U] 
            = __Vtemp_hb1354e33__1[6U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[7U] 
            = __Vtemp_hb1354e33__1[7U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[8U] 
            = __Vtemp_hb1354e33__1[8U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[9U] 
            = __Vtemp_hb1354e33__1[9U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0xaU] 
            = __Vtemp_hb1354e33__1[0xaU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0xbU] 
            = __Vtemp_hb1354e33__1[0xbU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0xcU] 
            = __Vtemp_hb1354e33__1[0xcU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0xdU] 
            = __Vtemp_hb1354e33__1[0xdU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0xeU] 
            = __Vtemp_hb1354e33__1[0xeU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0xfU] 
            = __Vtemp_hb1354e33__1[0xfU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x10U] 
            = __Vtemp_hb1354e33__1[0x10U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x11U] 
            = __Vtemp_hb1354e33__1[0x11U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x12U] 
            = __Vtemp_hb1354e33__1[0x12U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x13U] 
            = __Vtemp_hb1354e33__1[0x13U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x14U] 
            = __Vtemp_hb1354e33__1[0x14U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x15U] 
            = __Vtemp_hb1354e33__1[0x15U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x16U] 
            = __Vtemp_hb1354e33__1[0x16U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x17U] 
            = __Vtemp_hb1354e33__1[0x17U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x18U] 
            = __Vtemp_hb1354e33__1[0x18U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x19U] 
            = __Vtemp_hb1354e33__1[0x19U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x1aU] 
            = __Vtemp_hb1354e33__1[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x1bU] 
            = __Vtemp_hb1354e33__1[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x1cU] 
            = __Vtemp_hb1354e33__1[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x1dU] 
            = __Vtemp_hb1354e33__1[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x1eU] 
            = __Vtemp_hb1354e33__1[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0x1fU] 
            = __Vtemp_hb1354e33__1[0x1fU];
        __Vtemp_h9c122d25__2[0U] = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                    << 1U);
        __Vtemp_h9c122d25__2[1U] = 0U;
        __Vtemp_h9c122d25__2[2U] = 0U;
        __Vtemp_h9c122d25__2[3U] = 0U;
        __Vtemp_h9c122d25__2[4U] = 0U;
        __Vtemp_h9c122d25__2[5U] = 0U;
        __Vtemp_h9c122d25__2[6U] = 0U;
        __Vtemp_h9c122d25__2[7U] = 0U;
        __Vtemp_h9c122d25__2[8U] = 0U;
        __Vtemp_h9c122d25__2[9U] = 0U;
        __Vtemp_h9c122d25__2[0xaU] = 0U;
        __Vtemp_h9c122d25__2[0xbU] = 0U;
        __Vtemp_h9c122d25__2[0xcU] = 0U;
        __Vtemp_h9c122d25__2[0xdU] = 0U;
        __Vtemp_h9c122d25__2[0xeU] = 0U;
        __Vtemp_h9c122d25__2[0xfU] = 0U;
        __Vtemp_h9c122d25__2[0x10U] = 0U;
        __Vtemp_h9c122d25__2[0x11U] = 0U;
        __Vtemp_h9c122d25__2[0x12U] = 0U;
        __Vtemp_h9c122d25__2[0x13U] = 0U;
        __Vtemp_h9c122d25__2[0x14U] = 0U;
        __Vtemp_h9c122d25__2[0x15U] = 0U;
        __Vtemp_h9c122d25__2[0x16U] = 0U;
        __Vtemp_h9c122d25__2[0x17U] = 0U;
        __Vtemp_h9c122d25__2[0x18U] = 0U;
        __Vtemp_h9c122d25__2[0x19U] = 0U;
        __Vtemp_h9c122d25__2[0x1aU] = 0U;
        __Vtemp_h9c122d25__2[0x1bU] = 0U;
        __Vtemp_h9c122d25__2[0x1cU] = 0U;
        __Vtemp_h9c122d25__2[0x1dU] = 0U;
        __Vtemp_h9c122d25__2[0x1eU] = 0U;
        __Vtemp_h9c122d25__2[0x1fU] = 0U;
        VL_SHIFTL_WWW(1024,1024,1024, __Vtemp_h556919cf__0, VSoc__ConstPool__CONST_h2ae7f32a_0, __Vtemp_h9c122d25__2);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0U] 
            = __Vtemp_h556919cf__0[0U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[1U] 
            = __Vtemp_h556919cf__0[1U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[2U] 
            = __Vtemp_h556919cf__0[2U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[3U] 
            = __Vtemp_h556919cf__0[3U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[4U] 
            = __Vtemp_h556919cf__0[4U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[5U] 
            = __Vtemp_h556919cf__0[5U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[6U] 
            = __Vtemp_h556919cf__0[6U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[7U] 
            = __Vtemp_h556919cf__0[7U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[8U] 
            = __Vtemp_h556919cf__0[8U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[9U] 
            = __Vtemp_h556919cf__0[9U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0xaU] 
            = __Vtemp_h556919cf__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0xbU] 
            = __Vtemp_h556919cf__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0xcU] 
            = __Vtemp_h556919cf__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0xdU] 
            = __Vtemp_h556919cf__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0xeU] 
            = __Vtemp_h556919cf__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0xfU] 
            = __Vtemp_h556919cf__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x10U] 
            = __Vtemp_h556919cf__0[0x10U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x11U] 
            = __Vtemp_h556919cf__0[0x11U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x12U] 
            = __Vtemp_h556919cf__0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x13U] 
            = __Vtemp_h556919cf__0[0x13U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x14U] 
            = __Vtemp_h556919cf__0[0x14U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x15U] 
            = __Vtemp_h556919cf__0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x16U] 
            = __Vtemp_h556919cf__0[0x16U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x17U] 
            = __Vtemp_h556919cf__0[0x17U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x18U] 
            = __Vtemp_h556919cf__0[0x18U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x19U] 
            = __Vtemp_h556919cf__0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x1aU] 
            = __Vtemp_h556919cf__0[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x1bU] 
            = __Vtemp_h556919cf__0[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x1cU] 
            = __Vtemp_h556919cf__0[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x1dU] 
            = __Vtemp_h556919cf__0[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x1eU] 
            = __Vtemp_h556919cf__0[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0x1fU] 
            = __Vtemp_h556919cf__0[0x1fU];
        VL_SHIFTL_WWI(1024,1024,10, __Vtemp_hb1354e33__2, VSoc__ConstPool__CONST_h2ae7f32a_0, 
                      (0x3ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                                << 1U))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0U] 
            = __Vtemp_hb1354e33__2[0U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[1U] 
            = __Vtemp_hb1354e33__2[1U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[2U] 
            = __Vtemp_hb1354e33__2[2U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[3U] 
            = __Vtemp_hb1354e33__2[3U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[4U] 
            = __Vtemp_hb1354e33__2[4U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[5U] 
            = __Vtemp_hb1354e33__2[5U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[6U] 
            = __Vtemp_hb1354e33__2[6U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[7U] 
            = __Vtemp_hb1354e33__2[7U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[8U] 
            = __Vtemp_hb1354e33__2[8U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[9U] 
            = __Vtemp_hb1354e33__2[9U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0xaU] 
            = __Vtemp_hb1354e33__2[0xaU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0xbU] 
            = __Vtemp_hb1354e33__2[0xbU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0xcU] 
            = __Vtemp_hb1354e33__2[0xcU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0xdU] 
            = __Vtemp_hb1354e33__2[0xdU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0xeU] 
            = __Vtemp_hb1354e33__2[0xeU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0xfU] 
            = __Vtemp_hb1354e33__2[0xfU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x10U] 
            = __Vtemp_hb1354e33__2[0x10U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x11U] 
            = __Vtemp_hb1354e33__2[0x11U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x12U] 
            = __Vtemp_hb1354e33__2[0x12U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x13U] 
            = __Vtemp_hb1354e33__2[0x13U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x14U] 
            = __Vtemp_hb1354e33__2[0x14U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x15U] 
            = __Vtemp_hb1354e33__2[0x15U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x16U] 
            = __Vtemp_hb1354e33__2[0x16U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x17U] 
            = __Vtemp_hb1354e33__2[0x17U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x18U] 
            = __Vtemp_hb1354e33__2[0x18U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x19U] 
            = __Vtemp_hb1354e33__2[0x19U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x1aU] 
            = __Vtemp_hb1354e33__2[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x1bU] 
            = __Vtemp_hb1354e33__2[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x1cU] 
            = __Vtemp_hb1354e33__2[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x1dU] 
            = __Vtemp_hb1354e33__2[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x1eU] 
            = __Vtemp_hb1354e33__2[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0x1fU] 
            = __Vtemp_hb1354e33__2[0x1fU];
        __Vtemp_h9c122d25__3[0U] = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                    << 1U);
        __Vtemp_h9c122d25__3[1U] = 0U;
        __Vtemp_h9c122d25__3[2U] = 0U;
        __Vtemp_h9c122d25__3[3U] = 0U;
        __Vtemp_h9c122d25__3[4U] = 0U;
        __Vtemp_h9c122d25__3[5U] = 0U;
        __Vtemp_h9c122d25__3[6U] = 0U;
        __Vtemp_h9c122d25__3[7U] = 0U;
        __Vtemp_h9c122d25__3[8U] = 0U;
        __Vtemp_h9c122d25__3[9U] = 0U;
        __Vtemp_h9c122d25__3[0xaU] = 0U;
        __Vtemp_h9c122d25__3[0xbU] = 0U;
        __Vtemp_h9c122d25__3[0xcU] = 0U;
        __Vtemp_h9c122d25__3[0xdU] = 0U;
        __Vtemp_h9c122d25__3[0xeU] = 0U;
        __Vtemp_h9c122d25__3[0xfU] = 0U;
        __Vtemp_h9c122d25__3[0x10U] = 0U;
        __Vtemp_h9c122d25__3[0x11U] = 0U;
        __Vtemp_h9c122d25__3[0x12U] = 0U;
        __Vtemp_h9c122d25__3[0x13U] = 0U;
        __Vtemp_h9c122d25__3[0x14U] = 0U;
        __Vtemp_h9c122d25__3[0x15U] = 0U;
        __Vtemp_h9c122d25__3[0x16U] = 0U;
        __Vtemp_h9c122d25__3[0x17U] = 0U;
        __Vtemp_h9c122d25__3[0x18U] = 0U;
        __Vtemp_h9c122d25__3[0x19U] = 0U;
        __Vtemp_h9c122d25__3[0x1aU] = 0U;
        __Vtemp_h9c122d25__3[0x1bU] = 0U;
        __Vtemp_h9c122d25__3[0x1cU] = 0U;
        __Vtemp_h9c122d25__3[0x1dU] = 0U;
        __Vtemp_h9c122d25__3[0x1eU] = 0U;
        __Vtemp_h9c122d25__3[0x1fU] = 0U;
        VL_SHIFTL_WWW(1024,1024,1024, __Vtemp_h6d823649__0, VSoc__ConstPool__CONST_h2ae7f32a_0, __Vtemp_h9c122d25__3);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0U] 
            = __Vtemp_h6d823649__0[0U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[1U] 
            = __Vtemp_h6d823649__0[1U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[2U] 
            = __Vtemp_h6d823649__0[2U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[3U] 
            = __Vtemp_h6d823649__0[3U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[4U] 
            = __Vtemp_h6d823649__0[4U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[5U] 
            = __Vtemp_h6d823649__0[5U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[6U] 
            = __Vtemp_h6d823649__0[6U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[7U] 
            = __Vtemp_h6d823649__0[7U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[8U] 
            = __Vtemp_h6d823649__0[8U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[9U] 
            = __Vtemp_h6d823649__0[9U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0xaU] 
            = __Vtemp_h6d823649__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0xbU] 
            = __Vtemp_h6d823649__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0xcU] 
            = __Vtemp_h6d823649__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0xdU] 
            = __Vtemp_h6d823649__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0xeU] 
            = __Vtemp_h6d823649__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0xfU] 
            = __Vtemp_h6d823649__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x10U] 
            = __Vtemp_h6d823649__0[0x10U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x11U] 
            = __Vtemp_h6d823649__0[0x11U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x12U] 
            = __Vtemp_h6d823649__0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x13U] 
            = __Vtemp_h6d823649__0[0x13U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x14U] 
            = __Vtemp_h6d823649__0[0x14U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x15U] 
            = __Vtemp_h6d823649__0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x16U] 
            = __Vtemp_h6d823649__0[0x16U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x17U] 
            = __Vtemp_h6d823649__0[0x17U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x18U] 
            = __Vtemp_h6d823649__0[0x18U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x19U] 
            = __Vtemp_h6d823649__0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x1aU] 
            = __Vtemp_h6d823649__0[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x1bU] 
            = __Vtemp_h6d823649__0[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x1cU] 
            = __Vtemp_h6d823649__0[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x1dU] 
            = __Vtemp_h6d823649__0[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x1eU] 
            = __Vtemp_h6d823649__0[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0x1fU] 
            = __Vtemp_h6d823649__0[0x1fU];
        VL_SHIFTL_WWI(1024,1024,10, __Vtemp_hb1354e33__3, VSoc__ConstPool__CONST_h2ae7f32a_0, 
                      (0x3ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                                << 1U))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0U] 
            = __Vtemp_hb1354e33__3[0U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[1U] 
            = __Vtemp_hb1354e33__3[1U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[2U] 
            = __Vtemp_hb1354e33__3[2U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[3U] 
            = __Vtemp_hb1354e33__3[3U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[4U] 
            = __Vtemp_hb1354e33__3[4U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[5U] 
            = __Vtemp_hb1354e33__3[5U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[6U] 
            = __Vtemp_hb1354e33__3[6U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[7U] 
            = __Vtemp_hb1354e33__3[7U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[8U] 
            = __Vtemp_hb1354e33__3[8U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[9U] 
            = __Vtemp_hb1354e33__3[9U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0xaU] 
            = __Vtemp_hb1354e33__3[0xaU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0xbU] 
            = __Vtemp_hb1354e33__3[0xbU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0xcU] 
            = __Vtemp_hb1354e33__3[0xcU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0xdU] 
            = __Vtemp_hb1354e33__3[0xdU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0xeU] 
            = __Vtemp_hb1354e33__3[0xeU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0xfU] 
            = __Vtemp_hb1354e33__3[0xfU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x10U] 
            = __Vtemp_hb1354e33__3[0x10U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x11U] 
            = __Vtemp_hb1354e33__3[0x11U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x12U] 
            = __Vtemp_hb1354e33__3[0x12U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x13U] 
            = __Vtemp_hb1354e33__3[0x13U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x14U] 
            = __Vtemp_hb1354e33__3[0x14U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x15U] 
            = __Vtemp_hb1354e33__3[0x15U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x16U] 
            = __Vtemp_hb1354e33__3[0x16U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x17U] 
            = __Vtemp_hb1354e33__3[0x17U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x18U] 
            = __Vtemp_hb1354e33__3[0x18U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x19U] 
            = __Vtemp_hb1354e33__3[0x19U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x1aU] 
            = __Vtemp_hb1354e33__3[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x1bU] 
            = __Vtemp_hb1354e33__3[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x1cU] 
            = __Vtemp_hb1354e33__3[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x1dU] 
            = __Vtemp_hb1354e33__3[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x1eU] 
            = __Vtemp_hb1354e33__3[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0x1fU] 
            = __Vtemp_hb1354e33__3[0x1fU];
        __Vtemp_h9c122d25__4[0U] = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                    << 1U);
        __Vtemp_h9c122d25__4[1U] = 0U;
        __Vtemp_h9c122d25__4[2U] = 0U;
        __Vtemp_h9c122d25__4[3U] = 0U;
        __Vtemp_h9c122d25__4[4U] = 0U;
        __Vtemp_h9c122d25__4[5U] = 0U;
        __Vtemp_h9c122d25__4[6U] = 0U;
        __Vtemp_h9c122d25__4[7U] = 0U;
        __Vtemp_h9c122d25__4[8U] = 0U;
        __Vtemp_h9c122d25__4[9U] = 0U;
        __Vtemp_h9c122d25__4[0xaU] = 0U;
        __Vtemp_h9c122d25__4[0xbU] = 0U;
        __Vtemp_h9c122d25__4[0xcU] = 0U;
        __Vtemp_h9c122d25__4[0xdU] = 0U;
        __Vtemp_h9c122d25__4[0xeU] = 0U;
        __Vtemp_h9c122d25__4[0xfU] = 0U;
        __Vtemp_h9c122d25__4[0x10U] = 0U;
        __Vtemp_h9c122d25__4[0x11U] = 0U;
        __Vtemp_h9c122d25__4[0x12U] = 0U;
        __Vtemp_h9c122d25__4[0x13U] = 0U;
        __Vtemp_h9c122d25__4[0x14U] = 0U;
        __Vtemp_h9c122d25__4[0x15U] = 0U;
        __Vtemp_h9c122d25__4[0x16U] = 0U;
        __Vtemp_h9c122d25__4[0x17U] = 0U;
        __Vtemp_h9c122d25__4[0x18U] = 0U;
        __Vtemp_h9c122d25__4[0x19U] = 0U;
        __Vtemp_h9c122d25__4[0x1aU] = 0U;
        __Vtemp_h9c122d25__4[0x1bU] = 0U;
        __Vtemp_h9c122d25__4[0x1cU] = 0U;
        __Vtemp_h9c122d25__4[0x1dU] = 0U;
        __Vtemp_h9c122d25__4[0x1eU] = 0U;
        __Vtemp_h9c122d25__4[0x1fU] = 0U;
        VL_SHIFTL_WWW(1024,1024,1024, __Vtemp_h86ee8f6d__0, VSoc__ConstPool__CONST_h2ae7f32a_0, __Vtemp_h9c122d25__4);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0U] 
            = __Vtemp_h86ee8f6d__0[0U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[1U] 
            = __Vtemp_h86ee8f6d__0[1U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[2U] 
            = __Vtemp_h86ee8f6d__0[2U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[3U] 
            = __Vtemp_h86ee8f6d__0[3U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[4U] 
            = __Vtemp_h86ee8f6d__0[4U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[5U] 
            = __Vtemp_h86ee8f6d__0[5U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[6U] 
            = __Vtemp_h86ee8f6d__0[6U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[7U] 
            = __Vtemp_h86ee8f6d__0[7U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[8U] 
            = __Vtemp_h86ee8f6d__0[8U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[9U] 
            = __Vtemp_h86ee8f6d__0[9U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0xaU] 
            = __Vtemp_h86ee8f6d__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0xbU] 
            = __Vtemp_h86ee8f6d__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0xcU] 
            = __Vtemp_h86ee8f6d__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0xdU] 
            = __Vtemp_h86ee8f6d__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0xeU] 
            = __Vtemp_h86ee8f6d__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0xfU] 
            = __Vtemp_h86ee8f6d__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x10U] 
            = __Vtemp_h86ee8f6d__0[0x10U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x11U] 
            = __Vtemp_h86ee8f6d__0[0x11U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x12U] 
            = __Vtemp_h86ee8f6d__0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x13U] 
            = __Vtemp_h86ee8f6d__0[0x13U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x14U] 
            = __Vtemp_h86ee8f6d__0[0x14U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x15U] 
            = __Vtemp_h86ee8f6d__0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x16U] 
            = __Vtemp_h86ee8f6d__0[0x16U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x17U] 
            = __Vtemp_h86ee8f6d__0[0x17U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x18U] 
            = __Vtemp_h86ee8f6d__0[0x18U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x19U] 
            = __Vtemp_h86ee8f6d__0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x1aU] 
            = __Vtemp_h86ee8f6d__0[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x1bU] 
            = __Vtemp_h86ee8f6d__0[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x1cU] 
            = __Vtemp_h86ee8f6d__0[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x1dU] 
            = __Vtemp_h86ee8f6d__0[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x1eU] 
            = __Vtemp_h86ee8f6d__0[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0x1fU] 
            = __Vtemp_h86ee8f6d__0[0x1fU];
        VL_SHIFTL_WWI(1024,1024,10, __Vtemp_hb1354e33__4, VSoc__ConstPool__CONST_h2ae7f32a_0, 
                      (0x3ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                                << 1U))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0U] 
            = __Vtemp_hb1354e33__4[0U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[1U] 
            = __Vtemp_hb1354e33__4[1U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[2U] 
            = __Vtemp_hb1354e33__4[2U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[3U] 
            = __Vtemp_hb1354e33__4[3U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[4U] 
            = __Vtemp_hb1354e33__4[4U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[5U] 
            = __Vtemp_hb1354e33__4[5U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[6U] 
            = __Vtemp_hb1354e33__4[6U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[7U] 
            = __Vtemp_hb1354e33__4[7U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[8U] 
            = __Vtemp_hb1354e33__4[8U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[9U] 
            = __Vtemp_hb1354e33__4[9U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0xaU] 
            = __Vtemp_hb1354e33__4[0xaU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0xbU] 
            = __Vtemp_hb1354e33__4[0xbU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0xcU] 
            = __Vtemp_hb1354e33__4[0xcU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0xdU] 
            = __Vtemp_hb1354e33__4[0xdU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0xeU] 
            = __Vtemp_hb1354e33__4[0xeU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0xfU] 
            = __Vtemp_hb1354e33__4[0xfU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x10U] 
            = __Vtemp_hb1354e33__4[0x10U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x11U] 
            = __Vtemp_hb1354e33__4[0x11U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x12U] 
            = __Vtemp_hb1354e33__4[0x12U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x13U] 
            = __Vtemp_hb1354e33__4[0x13U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x14U] 
            = __Vtemp_hb1354e33__4[0x14U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x15U] 
            = __Vtemp_hb1354e33__4[0x15U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x16U] 
            = __Vtemp_hb1354e33__4[0x16U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x17U] 
            = __Vtemp_hb1354e33__4[0x17U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x18U] 
            = __Vtemp_hb1354e33__4[0x18U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x19U] 
            = __Vtemp_hb1354e33__4[0x19U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x1aU] 
            = __Vtemp_hb1354e33__4[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x1bU] 
            = __Vtemp_hb1354e33__4[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x1cU] 
            = __Vtemp_hb1354e33__4[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x1dU] 
            = __Vtemp_hb1354e33__4[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x1eU] 
            = __Vtemp_hb1354e33__4[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0x1fU] 
            = __Vtemp_hb1354e33__4[0x1fU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_27 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started) 
               & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28 
            = (0x30000U | (((((IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid)
                               ? 0U : (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                             << 0x15U) | (((IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid)
                                            ? 7U : (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                          << 0x12U)) 
                           | ((0x8000U & ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]) 
                                          << 0xfU)) 
                              | ((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_18)
                                    ? 0U : (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                  << 0xcU) | ((((IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid)
                                                 ? 4U
                                                 : (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                               << 9U) 
                                              | ((((1U 
                                                    & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U])
                                                    ? 3U
                                                    : 4U) 
                                                  << 6U) 
                                                 | ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                                                     ? 
                                                    ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3)
                                                      ? 0U
                                                      : 5U)
                                                     : (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))))))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__state 
            = ((0x17U >= (0x1fU & ((IData)(3U) * (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))))
                ? (7U & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28 
                         >> (0x1fU & ((IData)(3U) * (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))))
                : 0U);
        if ((1U & ((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_25) 
                     | (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_66)) 
                    | (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_72)) 
                   | (~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_18))))) {
            __Vtemp_h50550c2a__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0U];
            __Vtemp_h50550c2a__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[1U];
            __Vtemp_h50550c2a__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[2U];
            __Vtemp_h50550c2a__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[3U];
            __Vtemp_h50550c2a__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[4U];
            __Vtemp_h50550c2a__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[5U];
            __Vtemp_h50550c2a__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[6U];
            __Vtemp_h50550c2a__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[7U];
            __Vtemp_h50550c2a__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[8U];
            __Vtemp_h50550c2a__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[9U];
            __Vtemp_h50550c2a__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xaU];
            __Vtemp_h50550c2a__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xbU];
            __Vtemp_h50550c2a__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xcU];
            __Vtemp_h50550c2a__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xdU];
            __Vtemp_h50550c2a__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xeU];
            __Vtemp_h50550c2a__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xfU];
        } else if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim) {
            __Vtemp_h50550c2a__0[0U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0U]);
            __Vtemp_h50550c2a__0[1U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[1U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[1U]);
            __Vtemp_h50550c2a__0[2U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[2U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[2U]);
            __Vtemp_h50550c2a__0[3U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[3U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[3U]);
            __Vtemp_h50550c2a__0[4U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[4U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[4U]);
            __Vtemp_h50550c2a__0[5U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[5U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[5U]);
            __Vtemp_h50550c2a__0[6U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[6U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[6U]);
            __Vtemp_h50550c2a__0[7U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[7U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[7U]);
            __Vtemp_h50550c2a__0[8U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[8U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[8U]);
            __Vtemp_h50550c2a__0[9U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[9U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[9U]);
            __Vtemp_h50550c2a__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xaU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0xaU]);
            __Vtemp_h50550c2a__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xbU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0xbU]);
            __Vtemp_h50550c2a__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xcU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0xcU]);
            __Vtemp_h50550c2a__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xdU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0xdU]);
            __Vtemp_h50550c2a__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xeU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0xeU]);
            __Vtemp_h50550c2a__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xfU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19[0xfU]);
        } else {
            __Vtemp_h50550c2a__0[0U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0U]);
            __Vtemp_h50550c2a__0[1U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[1U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[1U]);
            __Vtemp_h50550c2a__0[2U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[2U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[2U]);
            __Vtemp_h50550c2a__0[3U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[3U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[3U]);
            __Vtemp_h50550c2a__0[4U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[4U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[4U]);
            __Vtemp_h50550c2a__0[5U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[5U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[5U]);
            __Vtemp_h50550c2a__0[6U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[6U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[6U]);
            __Vtemp_h50550c2a__0[7U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[7U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[7U]);
            __Vtemp_h50550c2a__0[8U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[8U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[8U]);
            __Vtemp_h50550c2a__0[9U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[9U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[9U]);
            __Vtemp_h50550c2a__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xaU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0xaU]);
            __Vtemp_h50550c2a__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xbU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0xbU]);
            __Vtemp_h50550c2a__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xcU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0xcU]);
            __Vtemp_h50550c2a__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xdU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0xdU]);
            __Vtemp_h50550c2a__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xeU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0xeU]);
            __Vtemp_h50550c2a__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xfU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26[0xfU]);
        }
        __Vtemp_h50550c2a__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0U];
        __Vtemp_h50550c2a__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[1U];
        __Vtemp_h50550c2a__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[2U];
        __Vtemp_h50550c2a__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[3U];
        __Vtemp_h50550c2a__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[4U];
        __Vtemp_h50550c2a__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[5U];
        __Vtemp_h50550c2a__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[6U];
        __Vtemp_h50550c2a__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[7U];
        __Vtemp_h50550c2a__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[8U];
        __Vtemp_h50550c2a__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[9U];
        __Vtemp_h50550c2a__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xaU];
        __Vtemp_h50550c2a__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xbU];
        __Vtemp_h50550c2a__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xcU];
        __Vtemp_h50550c2a__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xdU];
        __Vtemp_h50550c2a__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xeU];
        __Vtemp_h50550c2a__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xfU];
        __Vtemp_h50550c2a__0[0x20U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0U];
        __Vtemp_h50550c2a__0[0x21U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[1U];
        __Vtemp_h50550c2a__0[0x22U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[2U];
        __Vtemp_h50550c2a__0[0x23U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[3U];
        __Vtemp_h50550c2a__0[0x24U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[4U];
        __Vtemp_h50550c2a__0[0x25U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[5U];
        __Vtemp_h50550c2a__0[0x26U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[6U];
        __Vtemp_h50550c2a__0[0x27U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[7U];
        __Vtemp_h50550c2a__0[0x28U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[8U];
        __Vtemp_h50550c2a__0[0x29U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[9U];
        __Vtemp_h50550c2a__0[0x2aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xaU];
        __Vtemp_h50550c2a__0[0x2bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xbU];
        __Vtemp_h50550c2a__0[0x2cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xcU];
        __Vtemp_h50550c2a__0[0x2dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xdU];
        __Vtemp_h50550c2a__0[0x2eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xeU];
        __Vtemp_h50550c2a__0[0x2fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xfU];
        if (vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid) {
            if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim) {
                __Vtemp_h50550c2a__0[0x30U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0U]);
                __Vtemp_h50550c2a__0[0x31U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[1U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[1U]);
                __Vtemp_h50550c2a__0[0x32U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[2U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[2U]);
                __Vtemp_h50550c2a__0[0x33U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[3U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[3U]);
                __Vtemp_h50550c2a__0[0x34U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[4U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[4U]);
                __Vtemp_h50550c2a__0[0x35U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[5U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[5U]);
                __Vtemp_h50550c2a__0[0x36U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[6U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[6U]);
                __Vtemp_h50550c2a__0[0x37U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[7U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[7U]);
                __Vtemp_h50550c2a__0[0x38U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[8U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[8U]);
                __Vtemp_h50550c2a__0[0x39U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[9U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[9U]);
                __Vtemp_h50550c2a__0[0x3aU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xaU] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0xaU]);
                __Vtemp_h50550c2a__0[0x3bU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xbU] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0xbU]);
                __Vtemp_h50550c2a__0[0x3cU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xcU] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0xcU]);
                __Vtemp_h50550c2a__0[0x3dU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xdU] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0xdU]);
                __Vtemp_h50550c2a__0[0x3eU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xeU] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0xeU]);
                __Vtemp_h50550c2a__0[0x3fU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xfU] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3[0xfU]);
            } else {
                __Vtemp_h50550c2a__0[0x30U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0U]);
                __Vtemp_h50550c2a__0[0x31U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[1U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[1U]);
                __Vtemp_h50550c2a__0[0x32U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[2U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[2U]);
                __Vtemp_h50550c2a__0[0x33U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[3U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[3U]);
                __Vtemp_h50550c2a__0[0x34U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[4U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[4U]);
                __Vtemp_h50550c2a__0[0x35U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[5U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[5U]);
                __Vtemp_h50550c2a__0[0x36U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[6U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[6U]);
                __Vtemp_h50550c2a__0[0x37U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[7U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[7U]);
                __Vtemp_h50550c2a__0[0x38U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[8U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[8U]);
                __Vtemp_h50550c2a__0[0x39U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[9U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[9U]);
                __Vtemp_h50550c2a__0[0x3aU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xaU] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0xaU]);
                __Vtemp_h50550c2a__0[0x3bU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xbU] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0xbU]);
                __Vtemp_h50550c2a__0[0x3cU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xcU] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0xcU]);
                __Vtemp_h50550c2a__0[0x3dU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xdU] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0xdU]);
                __Vtemp_h50550c2a__0[0x3eU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xeU] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0xeU]);
                __Vtemp_h50550c2a__0[0x3fU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xfU] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10[0xfU]);
            }
        } else {
            __Vtemp_h50550c2a__0[0x30U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0U];
            __Vtemp_h50550c2a__0[0x31U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[1U];
            __Vtemp_h50550c2a__0[0x32U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[2U];
            __Vtemp_h50550c2a__0[0x33U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[3U];
            __Vtemp_h50550c2a__0[0x34U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[4U];
            __Vtemp_h50550c2a__0[0x35U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[5U];
            __Vtemp_h50550c2a__0[0x36U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[6U];
            __Vtemp_h50550c2a__0[0x37U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[7U];
            __Vtemp_h50550c2a__0[0x38U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[8U];
            __Vtemp_h50550c2a__0[0x39U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[9U];
            __Vtemp_h50550c2a__0[0x3aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xaU];
            __Vtemp_h50550c2a__0[0x3bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xbU];
            __Vtemp_h50550c2a__0[0x3cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xcU];
            __Vtemp_h50550c2a__0[0x3dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xdU];
            __Vtemp_h50550c2a__0[0x3eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xeU];
            __Vtemp_h50550c2a__0[0x3fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xfU];
        }
        VL_CONCAT_WWW(2560,2048,512, __Vtemp_hbcde5723__0, __Vtemp_h50550c2a__0, vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid);
        VL_CONCAT_WWW(3072,2560,512, __Vtemp_h437685a4__0, __Vtemp_hbcde5723__0, vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid);
        VL_CONCAT_WWW(3584,3072,512, __Vtemp_h6a985253__0, __Vtemp_h437685a4__0, vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid);
        VL_CONCAT_WWW(4096,3584,512, __Vtemp_h282da158__0, __Vtemp_h6a985253__0, vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid);
        VL_ASSIGN_W(4096,vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29, __Vtemp_h282da158__0);
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                            << 4U))] >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                  << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[1U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(2U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(1U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[2U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(3U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(2U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[3U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(4U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(3U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[4U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(5U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(4U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[5U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(6U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(5U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[6U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(7U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(6U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[7U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(8U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(7U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[8U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(9U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(8U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[9U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(0xaU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(9U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0xaU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(0xbU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(0xaU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0xbU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(0xcU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(0xbU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0xcU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(0xdU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(0xcU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0xdU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(0xeU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(0xdU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0xeU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(0xfU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(0xeU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0xfU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                                                  ((IData)(0x10U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29[
                  ((IData)(0xfU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20) {
            __Vtemp_ha4d06dc8__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0U];
            __Vtemp_ha4d06dc8__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[1U];
            __Vtemp_ha4d06dc8__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[2U];
            __Vtemp_ha4d06dc8__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[3U];
            __Vtemp_ha4d06dc8__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[4U];
            __Vtemp_ha4d06dc8__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[5U];
            __Vtemp_ha4d06dc8__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[6U];
            __Vtemp_ha4d06dc8__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[7U];
            __Vtemp_ha4d06dc8__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[8U];
            __Vtemp_ha4d06dc8__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[9U];
            __Vtemp_ha4d06dc8__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xaU];
            __Vtemp_ha4d06dc8__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xbU];
            __Vtemp_ha4d06dc8__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xcU];
            __Vtemp_ha4d06dc8__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xdU];
            __Vtemp_ha4d06dc8__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xeU];
            __Vtemp_ha4d06dc8__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xfU];
            __Vtemp_h627808f2__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0U];
            __Vtemp_h627808f2__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[1U];
            __Vtemp_h627808f2__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[2U];
            __Vtemp_h627808f2__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[3U];
            __Vtemp_h627808f2__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[4U];
            __Vtemp_h627808f2__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[5U];
            __Vtemp_h627808f2__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[6U];
            __Vtemp_h627808f2__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[7U];
            __Vtemp_h627808f2__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[8U];
            __Vtemp_h627808f2__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[9U];
            __Vtemp_h627808f2__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xaU];
            __Vtemp_h627808f2__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xbU];
            __Vtemp_h627808f2__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xcU];
            __Vtemp_h627808f2__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xdU];
            __Vtemp_h627808f2__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xeU];
            __Vtemp_h627808f2__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xfU];
        } else if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim) {
            __Vtemp_ha4d06dc8__0[0U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0U]);
            __Vtemp_ha4d06dc8__0[1U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[1U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[1U]);
            __Vtemp_ha4d06dc8__0[2U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[2U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[2U]);
            __Vtemp_ha4d06dc8__0[3U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[3U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[3U]);
            __Vtemp_ha4d06dc8__0[4U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[4U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[4U]);
            __Vtemp_ha4d06dc8__0[5U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[5U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[5U]);
            __Vtemp_ha4d06dc8__0[6U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[6U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[6U]);
            __Vtemp_ha4d06dc8__0[7U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[7U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[7U]);
            __Vtemp_ha4d06dc8__0[8U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[8U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[8U]);
            __Vtemp_ha4d06dc8__0[9U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[9U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[9U]);
            __Vtemp_ha4d06dc8__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xaU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0xaU]);
            __Vtemp_ha4d06dc8__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xbU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0xbU]);
            __Vtemp_ha4d06dc8__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xcU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0xcU]);
            __Vtemp_ha4d06dc8__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xdU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0xdU]);
            __Vtemp_ha4d06dc8__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xeU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0xeU]);
            __Vtemp_ha4d06dc8__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xfU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35[0xfU]);
            __Vtemp_h627808f2__0[0U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0U]);
            __Vtemp_h627808f2__0[1U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[1U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[1U]);
            __Vtemp_h627808f2__0[2U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[2U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[2U]);
            __Vtemp_h627808f2__0[3U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[3U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[3U]);
            __Vtemp_h627808f2__0[4U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[4U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[4U]);
            __Vtemp_h627808f2__0[5U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[5U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[5U]);
            __Vtemp_h627808f2__0[6U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[6U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[6U]);
            __Vtemp_h627808f2__0[7U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[7U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[7U]);
            __Vtemp_h627808f2__0[8U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[8U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[8U]);
            __Vtemp_h627808f2__0[9U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[9U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[9U]);
            __Vtemp_h627808f2__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xaU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xaU]);
            __Vtemp_h627808f2__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xbU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xbU]);
            __Vtemp_h627808f2__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xcU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xcU]);
            __Vtemp_h627808f2__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xdU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xdU]);
            __Vtemp_h627808f2__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xeU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xeU]);
            __Vtemp_h627808f2__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xfU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xfU]);
        } else {
            __Vtemp_ha4d06dc8__0[0U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0U]);
            __Vtemp_ha4d06dc8__0[1U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[1U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[1U]);
            __Vtemp_ha4d06dc8__0[2U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[2U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[2U]);
            __Vtemp_ha4d06dc8__0[3U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[3U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[3U]);
            __Vtemp_ha4d06dc8__0[4U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[4U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[4U]);
            __Vtemp_ha4d06dc8__0[5U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[5U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[5U]);
            __Vtemp_ha4d06dc8__0[6U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[6U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[6U]);
            __Vtemp_ha4d06dc8__0[7U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[7U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[7U]);
            __Vtemp_ha4d06dc8__0[8U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[8U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[8U]);
            __Vtemp_ha4d06dc8__0[9U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[9U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[9U]);
            __Vtemp_ha4d06dc8__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xaU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0xaU]);
            __Vtemp_ha4d06dc8__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xbU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0xbU]);
            __Vtemp_ha4d06dc8__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xcU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0xcU]);
            __Vtemp_ha4d06dc8__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xdU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0xdU]);
            __Vtemp_ha4d06dc8__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xeU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0xeU]);
            __Vtemp_ha4d06dc8__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xfU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42[0xfU]);
            __Vtemp_h627808f2__0[0U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0U]);
            __Vtemp_h627808f2__0[1U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[1U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[1U]);
            __Vtemp_h627808f2__0[2U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[2U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[2U]);
            __Vtemp_h627808f2__0[3U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[3U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[3U]);
            __Vtemp_h627808f2__0[4U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[4U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[4U]);
            __Vtemp_h627808f2__0[5U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[5U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[5U]);
            __Vtemp_h627808f2__0[6U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[6U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[6U]);
            __Vtemp_h627808f2__0[7U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[7U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[7U]);
            __Vtemp_h627808f2__0[8U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[8U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[8U]);
            __Vtemp_h627808f2__0[9U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[9U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[9U]);
            __Vtemp_h627808f2__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xaU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xaU]);
            __Vtemp_h627808f2__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xbU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xbU]);
            __Vtemp_h627808f2__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xcU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xcU]);
            __Vtemp_h627808f2__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xdU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xdU]);
            __Vtemp_h627808f2__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xeU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xeU]);
            __Vtemp_h627808f2__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xfU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xfU]);
        }
        __Vtemp_ha4d06dc8__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0U];
        __Vtemp_ha4d06dc8__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[1U];
        __Vtemp_ha4d06dc8__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[2U];
        __Vtemp_ha4d06dc8__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[3U];
        __Vtemp_ha4d06dc8__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[4U];
        __Vtemp_ha4d06dc8__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[5U];
        __Vtemp_ha4d06dc8__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[6U];
        __Vtemp_ha4d06dc8__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[7U];
        __Vtemp_ha4d06dc8__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[8U];
        __Vtemp_ha4d06dc8__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[9U];
        __Vtemp_ha4d06dc8__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xaU];
        __Vtemp_ha4d06dc8__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xbU];
        __Vtemp_ha4d06dc8__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xcU];
        __Vtemp_ha4d06dc8__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xdU];
        __Vtemp_ha4d06dc8__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xeU];
        __Vtemp_ha4d06dc8__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xfU];
        __Vtemp_ha4d06dc8__0[0x20U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0U];
        __Vtemp_ha4d06dc8__0[0x21U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[1U];
        __Vtemp_ha4d06dc8__0[0x22U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[2U];
        __Vtemp_ha4d06dc8__0[0x23U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[3U];
        __Vtemp_ha4d06dc8__0[0x24U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[4U];
        __Vtemp_ha4d06dc8__0[0x25U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[5U];
        __Vtemp_ha4d06dc8__0[0x26U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[6U];
        __Vtemp_ha4d06dc8__0[0x27U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[7U];
        __Vtemp_ha4d06dc8__0[0x28U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[8U];
        __Vtemp_ha4d06dc8__0[0x29U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[9U];
        __Vtemp_ha4d06dc8__0[0x2aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xaU];
        __Vtemp_ha4d06dc8__0[0x2bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xbU];
        __Vtemp_ha4d06dc8__0[0x2cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xcU];
        __Vtemp_ha4d06dc8__0[0x2dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xdU];
        __Vtemp_ha4d06dc8__0[0x2eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xeU];
        __Vtemp_ha4d06dc8__0[0x2fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xfU];
        if (vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid) {
            if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim) {
                __Vtemp_ha4d06dc8__0[0x30U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0U]));
                __Vtemp_ha4d06dc8__0[0x31U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[1U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[1U]));
                __Vtemp_ha4d06dc8__0[0x32U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[2U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[2U]));
                __Vtemp_ha4d06dc8__0[0x33U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[3U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[3U]));
                __Vtemp_ha4d06dc8__0[0x34U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[4U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[4U]));
                __Vtemp_ha4d06dc8__0[0x35U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[5U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[5U]));
                __Vtemp_ha4d06dc8__0[0x36U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[6U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[6U]));
                __Vtemp_ha4d06dc8__0[0x37U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[7U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[7U]));
                __Vtemp_ha4d06dc8__0[0x38U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[8U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[8U]));
                __Vtemp_ha4d06dc8__0[0x39U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[9U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[9U]));
                __Vtemp_ha4d06dc8__0[0x3aU] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xaU]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0xaU]));
                __Vtemp_ha4d06dc8__0[0x3bU] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xbU]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0xbU]));
                __Vtemp_ha4d06dc8__0[0x3cU] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xcU]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0xcU]));
                __Vtemp_ha4d06dc8__0[0x3dU] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xdU]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0xdU]));
                __Vtemp_ha4d06dc8__0[0x3eU] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xeU]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0xeU]));
                __Vtemp_ha4d06dc8__0[0x3fU] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xfU]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3[0xfU]));
            } else {
                __Vtemp_ha4d06dc8__0[0x30U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0U]));
                __Vtemp_ha4d06dc8__0[0x31U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[1U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[1U]));
                __Vtemp_ha4d06dc8__0[0x32U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[2U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[2U]));
                __Vtemp_ha4d06dc8__0[0x33U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[3U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[3U]));
                __Vtemp_ha4d06dc8__0[0x34U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[4U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[4U]));
                __Vtemp_ha4d06dc8__0[0x35U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[5U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[5U]));
                __Vtemp_ha4d06dc8__0[0x36U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[6U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[6U]));
                __Vtemp_ha4d06dc8__0[0x37U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[7U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[7U]));
                __Vtemp_ha4d06dc8__0[0x38U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[8U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[8U]));
                __Vtemp_ha4d06dc8__0[0x39U] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[9U]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[9U]));
                __Vtemp_ha4d06dc8__0[0x3aU] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xaU]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0xaU]));
                __Vtemp_ha4d06dc8__0[0x3bU] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xbU]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0xbU]));
                __Vtemp_ha4d06dc8__0[0x3cU] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xcU]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0xcU]));
                __Vtemp_ha4d06dc8__0[0x3dU] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xdU]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0xdU]));
                __Vtemp_ha4d06dc8__0[0x3eU] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xeU]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0xeU]));
                __Vtemp_ha4d06dc8__0[0x3fU] = (~ ((~ 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xfU]) 
                                                  | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10[0xfU]));
            }
        } else {
            __Vtemp_ha4d06dc8__0[0x30U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0U];
            __Vtemp_ha4d06dc8__0[0x31U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[1U];
            __Vtemp_ha4d06dc8__0[0x32U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[2U];
            __Vtemp_ha4d06dc8__0[0x33U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[3U];
            __Vtemp_ha4d06dc8__0[0x34U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[4U];
            __Vtemp_ha4d06dc8__0[0x35U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[5U];
            __Vtemp_ha4d06dc8__0[0x36U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[6U];
            __Vtemp_ha4d06dc8__0[0x37U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[7U];
            __Vtemp_ha4d06dc8__0[0x38U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[8U];
            __Vtemp_ha4d06dc8__0[0x39U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[9U];
            __Vtemp_ha4d06dc8__0[0x3aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xaU];
            __Vtemp_ha4d06dc8__0[0x3bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xbU];
            __Vtemp_ha4d06dc8__0[0x3cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xcU];
            __Vtemp_ha4d06dc8__0[0x3dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xdU];
            __Vtemp_ha4d06dc8__0[0x3eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xeU];
            __Vtemp_ha4d06dc8__0[0x3fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xfU];
        }
        VL_CONCAT_WWW(2560,2048,512, __Vtemp_h1049b742__0, __Vtemp_ha4d06dc8__0, vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty);
        VL_CONCAT_WWW(3072,2560,512, __Vtemp_h28d96592__0, __Vtemp_h1049b742__0, vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty);
        if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum) {
            __Vtemp_hdab541ed__0[0U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0U]);
            __Vtemp_hdab541ed__0[1U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[1U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[1U]);
            __Vtemp_hdab541ed__0[2U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[2U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[2U]);
            __Vtemp_hdab541ed__0[3U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[3U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[3U]);
            __Vtemp_hdab541ed__0[4U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[4U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[4U]);
            __Vtemp_hdab541ed__0[5U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[5U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[5U]);
            __Vtemp_hdab541ed__0[6U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[6U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[6U]);
            __Vtemp_hdab541ed__0[7U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[7U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[7U]);
            __Vtemp_hdab541ed__0[8U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[8U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[8U]);
            __Vtemp_hdab541ed__0[9U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[9U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[9U]);
            __Vtemp_hdab541ed__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xaU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0xaU]);
            __Vtemp_hdab541ed__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xbU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0xbU]);
            __Vtemp_hdab541ed__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xcU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0xcU]);
            __Vtemp_hdab541ed__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xdU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0xdU]);
            __Vtemp_hdab541ed__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xeU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0xeU]);
            __Vtemp_hdab541ed__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xfU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19[0xfU]);
            __Vtemp_h59866724__0[0U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0U]);
            __Vtemp_h59866724__0[1U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[1U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[1U]);
            __Vtemp_h59866724__0[2U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[2U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[2U]);
            __Vtemp_h59866724__0[3U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[3U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[3U]);
            __Vtemp_h59866724__0[4U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[4U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[4U]);
            __Vtemp_h59866724__0[5U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[5U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[5U]);
            __Vtemp_h59866724__0[6U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[6U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[6U]);
            __Vtemp_h59866724__0[7U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[7U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[7U]);
            __Vtemp_h59866724__0[8U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[8U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[8U]);
            __Vtemp_h59866724__0[9U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[9U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[9U]);
            __Vtemp_h59866724__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xaU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xaU]);
            __Vtemp_h59866724__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xbU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xbU]);
            __Vtemp_h59866724__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xcU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xcU]);
            __Vtemp_h59866724__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xdU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xdU]);
            __Vtemp_h59866724__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xeU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xeU]);
            __Vtemp_h59866724__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xfU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xfU]);
        } else {
            __Vtemp_hdab541ed__0[0U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0U]);
            __Vtemp_hdab541ed__0[1U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[1U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[1U]);
            __Vtemp_hdab541ed__0[2U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[2U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[2U]);
            __Vtemp_hdab541ed__0[3U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[3U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[3U]);
            __Vtemp_hdab541ed__0[4U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[4U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[4U]);
            __Vtemp_hdab541ed__0[5U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[5U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[5U]);
            __Vtemp_hdab541ed__0[6U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[6U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[6U]);
            __Vtemp_hdab541ed__0[7U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[7U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[7U]);
            __Vtemp_hdab541ed__0[8U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[8U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[8U]);
            __Vtemp_hdab541ed__0[9U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[9U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[9U]);
            __Vtemp_hdab541ed__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xaU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0xaU]);
            __Vtemp_hdab541ed__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xbU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0xbU]);
            __Vtemp_hdab541ed__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xcU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0xcU]);
            __Vtemp_hdab541ed__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xdU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0xdU]);
            __Vtemp_hdab541ed__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xeU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0xeU]);
            __Vtemp_hdab541ed__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xfU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26[0xfU]);
            __Vtemp_h59866724__0[0U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0U]);
            __Vtemp_h59866724__0[1U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[1U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[1U]);
            __Vtemp_h59866724__0[2U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[2U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[2U]);
            __Vtemp_h59866724__0[3U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[3U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[3U]);
            __Vtemp_h59866724__0[4U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[4U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[4U]);
            __Vtemp_h59866724__0[5U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[5U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[5U]);
            __Vtemp_h59866724__0[6U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[6U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[6U]);
            __Vtemp_h59866724__0[7U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[7U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[7U]);
            __Vtemp_h59866724__0[8U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[8U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[8U]);
            __Vtemp_h59866724__0[9U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[9U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[9U]);
            __Vtemp_h59866724__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xaU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xaU]);
            __Vtemp_h59866724__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xbU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xbU]);
            __Vtemp_h59866724__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xcU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xcU]);
            __Vtemp_h59866724__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xdU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xdU]);
            __Vtemp_h59866724__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xeU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xeU]);
            __Vtemp_h59866724__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xfU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xfU]);
        }
        VL_CONCAT_WWW(3584,3072,512, __Vtemp_h70572cb2__0, __Vtemp_h28d96592__0, __Vtemp_hdab541ed__0);
        VL_CONCAT_WWW(4096,3584,512, __Vtemp_haa7ad584__0, __Vtemp_h70572cb2__0, vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty);
        VL_ASSIGN_W(4096,vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30, __Vtemp_haa7ad584__0);
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                            << 4U))] >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                  << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[1U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(2U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(1U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[2U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(3U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(2U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[3U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(4U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(3U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[4U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(5U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(4U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[5U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(6U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(5U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[6U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(7U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(6U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[7U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(8U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(7U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[8U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(9U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(8U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[9U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(0xaU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(9U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0xaU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(0xbU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(0xaU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0xbU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(0xcU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(0xbU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0xcU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(0xdU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(0xcU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0xdU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(0xeU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(0xdU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0xeU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(0xfU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(0xeU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0xfU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                                                  ((IData)(0x10U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30[
                  ((IData)(0xfU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vtemp_h627808f2__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0U];
        __Vtemp_h627808f2__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[1U];
        __Vtemp_h627808f2__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[2U];
        __Vtemp_h627808f2__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[3U];
        __Vtemp_h627808f2__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[4U];
        __Vtemp_h627808f2__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[5U];
        __Vtemp_h627808f2__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[6U];
        __Vtemp_h627808f2__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[7U];
        __Vtemp_h627808f2__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[8U];
        __Vtemp_h627808f2__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[9U];
        __Vtemp_h627808f2__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xaU];
        __Vtemp_h627808f2__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xbU];
        __Vtemp_h627808f2__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xcU];
        __Vtemp_h627808f2__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xdU];
        __Vtemp_h627808f2__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xeU];
        __Vtemp_h627808f2__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xfU];
        __Vtemp_h627808f2__0[0x20U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0U];
        __Vtemp_h627808f2__0[0x21U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[1U];
        __Vtemp_h627808f2__0[0x22U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[2U];
        __Vtemp_h627808f2__0[0x23U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[3U];
        __Vtemp_h627808f2__0[0x24U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[4U];
        __Vtemp_h627808f2__0[0x25U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[5U];
        __Vtemp_h627808f2__0[0x26U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[6U];
        __Vtemp_h627808f2__0[0x27U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[7U];
        __Vtemp_h627808f2__0[0x28U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[8U];
        __Vtemp_h627808f2__0[0x29U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[9U];
        __Vtemp_h627808f2__0[0x2aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xaU];
        __Vtemp_h627808f2__0[0x2bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xbU];
        __Vtemp_h627808f2__0[0x2cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xcU];
        __Vtemp_h627808f2__0[0x2dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xdU];
        __Vtemp_h627808f2__0[0x2eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xeU];
        __Vtemp_h627808f2__0[0x2fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xfU];
        if (vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid) {
            if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim) {
                __Vtemp_h627808f2__0[0x30U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0U]);
                __Vtemp_h627808f2__0[0x31U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[1U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[1U]);
                __Vtemp_h627808f2__0[0x32U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[2U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[2U]);
                __Vtemp_h627808f2__0[0x33U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[3U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[3U]);
                __Vtemp_h627808f2__0[0x34U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[4U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[4U]);
                __Vtemp_h627808f2__0[0x35U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[5U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[5U]);
                __Vtemp_h627808f2__0[0x36U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[6U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[6U]);
                __Vtemp_h627808f2__0[0x37U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[7U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[7U]);
                __Vtemp_h627808f2__0[0x38U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[8U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[8U]);
                __Vtemp_h627808f2__0[0x39U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[9U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[9U]);
                __Vtemp_h627808f2__0[0x3aU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xaU] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xaU]);
                __Vtemp_h627808f2__0[0x3bU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xbU] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xbU]);
                __Vtemp_h627808f2__0[0x3cU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xcU] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xcU]);
                __Vtemp_h627808f2__0[0x3dU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xdU] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xdU]);
                __Vtemp_h627808f2__0[0x3eU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xeU] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xeU]);
                __Vtemp_h627808f2__0[0x3fU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xfU] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xfU]);
            } else {
                __Vtemp_h627808f2__0[0x30U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0U]);
                __Vtemp_h627808f2__0[0x31U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[1U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[1U]);
                __Vtemp_h627808f2__0[0x32U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[2U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[2U]);
                __Vtemp_h627808f2__0[0x33U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[3U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[3U]);
                __Vtemp_h627808f2__0[0x34U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[4U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[4U]);
                __Vtemp_h627808f2__0[0x35U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[5U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[5U]);
                __Vtemp_h627808f2__0[0x36U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[6U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[6U]);
                __Vtemp_h627808f2__0[0x37U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[7U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[7U]);
                __Vtemp_h627808f2__0[0x38U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[8U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[8U]);
                __Vtemp_h627808f2__0[0x39U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[9U] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[9U]);
                __Vtemp_h627808f2__0[0x3aU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xaU] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xaU]);
                __Vtemp_h627808f2__0[0x3bU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xbU] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xbU]);
                __Vtemp_h627808f2__0[0x3cU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xcU] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xcU]);
                __Vtemp_h627808f2__0[0x3dU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xdU] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xdU]);
                __Vtemp_h627808f2__0[0x3eU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xeU] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xeU]);
                __Vtemp_h627808f2__0[0x3fU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xfU] 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xfU]);
            }
        } else {
            __Vtemp_h627808f2__0[0x30U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0U];
            __Vtemp_h627808f2__0[0x31U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[1U];
            __Vtemp_h627808f2__0[0x32U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[2U];
            __Vtemp_h627808f2__0[0x33U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[3U];
            __Vtemp_h627808f2__0[0x34U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[4U];
            __Vtemp_h627808f2__0[0x35U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[5U];
            __Vtemp_h627808f2__0[0x36U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[6U];
            __Vtemp_h627808f2__0[0x37U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[7U];
            __Vtemp_h627808f2__0[0x38U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[8U];
            __Vtemp_h627808f2__0[0x39U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[9U];
            __Vtemp_h627808f2__0[0x3aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xaU];
            __Vtemp_h627808f2__0[0x3bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xbU];
            __Vtemp_h627808f2__0[0x3cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xcU];
            __Vtemp_h627808f2__0[0x3dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xdU];
            __Vtemp_h627808f2__0[0x3eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xeU];
            __Vtemp_h627808f2__0[0x3fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xfU];
        }
        VL_CONCAT_WWW(2560,2048,512, __Vtemp_hcd13e9ea__0, __Vtemp_h627808f2__0, vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace);
        VL_CONCAT_WWW(3072,2560,512, __Vtemp_hc6410a0c__0, __Vtemp_hcd13e9ea__0, vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace);
        VL_CONCAT_WWW(3584,3072,512, __Vtemp_ha333d23e__0, __Vtemp_hc6410a0c__0, __Vtemp_h59866724__0);
        if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_4) {
            __Vtemp_ha349f764__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0U];
            __Vtemp_ha349f764__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[1U];
            __Vtemp_ha349f764__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[2U];
            __Vtemp_ha349f764__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[3U];
            __Vtemp_ha349f764__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[4U];
            __Vtemp_ha349f764__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[5U];
            __Vtemp_ha349f764__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[6U];
            __Vtemp_ha349f764__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[7U];
            __Vtemp_ha349f764__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[8U];
            __Vtemp_ha349f764__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[9U];
            __Vtemp_ha349f764__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xaU];
            __Vtemp_ha349f764__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xbU];
            __Vtemp_ha349f764__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xcU];
            __Vtemp_ha349f764__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xdU];
            __Vtemp_ha349f764__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xeU];
            __Vtemp_ha349f764__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xfU];
        } else if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0) {
            __Vtemp_ha349f764__0[0U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0U]);
            __Vtemp_ha349f764__0[1U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[1U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[1U]);
            __Vtemp_ha349f764__0[2U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[2U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[2U]);
            __Vtemp_ha349f764__0[3U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[3U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[3U]);
            __Vtemp_ha349f764__0[4U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[4U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[4U]);
            __Vtemp_ha349f764__0[5U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[5U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[5U]);
            __Vtemp_ha349f764__0[6U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[6U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[6U]);
            __Vtemp_ha349f764__0[7U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[7U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[7U]);
            __Vtemp_ha349f764__0[8U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[8U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[8U]);
            __Vtemp_ha349f764__0[9U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[9U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[9U]);
            __Vtemp_ha349f764__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xaU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xaU]);
            __Vtemp_ha349f764__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xbU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xbU]);
            __Vtemp_ha349f764__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xcU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xcU]);
            __Vtemp_ha349f764__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xdU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xdU]);
            __Vtemp_ha349f764__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xeU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xeU]);
            __Vtemp_ha349f764__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xfU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xfU]);
        } else {
            __Vtemp_ha349f764__0[0U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0U]);
            __Vtemp_ha349f764__0[1U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[1U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[1U]);
            __Vtemp_ha349f764__0[2U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[2U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[2U]);
            __Vtemp_ha349f764__0[3U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[3U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[3U]);
            __Vtemp_ha349f764__0[4U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[4U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[4U]);
            __Vtemp_ha349f764__0[5U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[5U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[5U]);
            __Vtemp_ha349f764__0[6U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[6U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[6U]);
            __Vtemp_ha349f764__0[7U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[7U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[7U]);
            __Vtemp_ha349f764__0[8U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[8U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[8U]);
            __Vtemp_ha349f764__0[9U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[9U] 
                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[9U]);
            __Vtemp_ha349f764__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xaU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xaU]);
            __Vtemp_ha349f764__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xbU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xbU]);
            __Vtemp_ha349f764__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xcU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xcU]);
            __Vtemp_ha349f764__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xdU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xdU]);
            __Vtemp_ha349f764__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xeU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xeU]);
            __Vtemp_ha349f764__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22[0xfU] 
                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xfU]);
        }
        VL_CONCAT_WWW(4096,3584,512, __Vtemp_h11e7517e__0, __Vtemp_ha333d23e__0, __Vtemp_ha349f764__0);
        VL_ASSIGN_W(4096,vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31, __Vtemp_h11e7517e__0);
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                            << 4U))] >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                  << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[1U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(2U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(1U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[2U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(3U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(2U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[3U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(4U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(3U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[4U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(5U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(4U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[5U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(6U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(5U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[6U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(7U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(6U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[7U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(8U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(7U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[8U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(9U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(8U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[9U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(0xaU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(9U) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                           << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0xaU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(0xbU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(0xaU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0xbU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(0xcU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(0xbU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0xcU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(0xdU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(0xcU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0xdU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(0xeU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(0xdU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0xeU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(0xfU) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(0xeU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0xfU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 9U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                                                  ((IData)(0x10U) 
                                                   + 
                                                   (0x70U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 4U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                       << 9U))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                  ((IData)(0xfU) + (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                             << 4U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 9U))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32 
            = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray) 
                << 7U) | ((0x40U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid)) 
                                    << 6U)) | ((0x20U 
                                                & ((vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U] 
                                                    | (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray)) 
                                                   << 5U)) 
                                               | (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray) 
                                                   << 4U) 
                                                  | ((8U 
                                                      & ((~ (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid)) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U] 
                                                             | (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray)) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_27))))))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__inDataOneArray 
            = (1U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32) 
                     >> (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)));
        if (vlSelf->Soc__DOT__core__DOT__fc__DOT___T_8) {
            vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_27;
        } else {
            vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid 
                = (((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4)) 
                    & (~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_10))) 
                   & ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))
                       ? (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid)
                       : ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_25) 
                          | ((((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_66)) 
                               & (~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_72))) 
                              & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_73)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid)))));
            __Vdly__Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw 
                = (1U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4)
                          ? (~ vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U])
                          : ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_10)
                              ? (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid)
                              : ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                 | ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_25)
                                     ? (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw)
                                     : ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_66)
                                         ? (~ vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U])
                                         : ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_72)
                                             ? (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid)
                                             : ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_73) 
                                                | (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw)))))))));
        }
        if ((1U & (~ ((((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___T_8) 
                        | (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4)) 
                       | (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_10)) 
                      | (~ ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                            & (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid))))))) {
            vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data 
                = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inst_type)
                    ? (QData)((IData)(((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                        ? (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data)
                                        : (IData)((vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                                   >> 0x20U)))))
                    : vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data);
        }
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_valid 
            = (1U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___T_8)) 
                     & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4) 
                         | (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_10)) 
                        | ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))
                            ? (~ (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid))
                            : ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_25)) 
                               & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_66) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_72)) 
                                  | ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_73) 
                                     & (~ (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid)))))))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33[0U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr;
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33[1U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr;
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33[2U] 
            = (((1U & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U])
                 ? ((vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R2_data 
                     << 8U) | (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index))
                 : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr 
                    >> 3U)) << 3U);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33[3U] 
            = (((IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid)
                 ? (vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr 
                    >> 3U) : ((vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R3_data 
                               << 8U) | (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index))) 
               << 3U);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33[4U] 
            = (0xfffffff8U & vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33[5U] 
            = (((1U & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U])
                 ? ((vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R0_data 
                     << 8U) | (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index))
                 : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr 
                    >> 3U)) << 3U);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33[6U] 
            = (IData)((((QData)((IData)((0xfffffff8U 
                                         & vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr))) 
                        << 0x20U) | (QData)((IData)(
                                                    (((IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid)
                                                       ? 
                                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr 
                                                       >> 3U)
                                                       : 
                                                      ((vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R1_data 
                                                        << 8U) 
                                                       | (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index))) 
                                                     << 3U)))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33[7U] 
            = (IData)(((((QData)((IData)((0xfffffff8U 
                                          & vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr))) 
                         << 0x20U) | (QData)((IData)(
                                                     (((IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid)
                                                        ? 
                                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr 
                                                        >> 3U)
                                                        : 
                                                       ((vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R1_data 
                                                         << 8U) 
                                                        | (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index))) 
                                                      << 3U)))) 
                       >> 0x20U));
        __Vdly__Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                 << 5U))) ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33[
                                                  (((IData)(0x1fU) 
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
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33[
                  (7U & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                               << 5U))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_34 
            = (((QData)((IData)((0xff0000U | (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask) 
                                               << 0x18U) 
                                              | ((((1U 
                                                    & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U])
                                                    ? 0xffU
                                                    : (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask)) 
                                                  << 8U) 
                                                 | (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask)))))) 
                << 0x20U) | (QData)((IData)((0xff000000U 
                                             | ((((1U 
                                                   & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U])
                                                   ? 0xffU
                                                   : (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask)) 
                                                 << 0x10U) 
                                                | (0xffffU 
                                                   & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask))))))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_34 
                                >> (0x3fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                             << 3U)))));
    }
    if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                ? (7U & vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc)
                : 0U);
    }
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___T_8)) 
           & ((1U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4) 
                     | (~ ((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_10) 
                             | (7U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))) 
                            | (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_25)) 
                           | (~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_66))))))
               ? (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_0)
               : (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_12 
        = (((QData)((IData)((- (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_78 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_78)));
    __Vtemp_hde8f545e__0[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b);
    __Vtemp_hde8f545e__0[1U] = (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_b 
                                        >> 0x20U));
    __Vtemp_hde8f545e__0[2U] = (IData)((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->Soc__DOT__core__DOT__dereg_op_b 
                                                                      >> 0x3fU)))))));
    __Vtemp_hde8f545e__0[3U] = (IData)(((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__dereg_op_b 
                                                                       >> 0x3fU)))))) 
                                        >> 0x20U));
    VL_MUL_W(4, __Vtemp_h31e9c9ac__0, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5, __Vtemp_hde8f545e__0);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[0U] 
        = __Vtemp_h31e9c9ac__0[0U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[1U] 
        = __Vtemp_h31e9c9ac__0[1U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[2U] 
        = __Vtemp_h31e9c9ac__0[2U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[3U] 
        = __Vtemp_h31e9c9ac__0[3U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27deda75__0 
        = ((0xffU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask))
            ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data
            : 0ULL);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h56b90ebc__0 
        = (0x3ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                      << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim)));
    vlSelf->__VdfgTmp_h5f294843__0 = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
        [(0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                     << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim)))];
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h5e8385be__0, VSoc__ConstPool__CONST_h1c449781_0, 
                  ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                   << 1U));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0U] 
           | __Vtemp_h5e8385be__0[0U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[1U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[1U] 
           | __Vtemp_h5e8385be__0[1U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[2U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[2U] 
           | __Vtemp_h5e8385be__0[2U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[3U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[3U] 
           | __Vtemp_h5e8385be__0[3U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[4U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[4U] 
           | __Vtemp_h5e8385be__0[4U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[5U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[5U] 
           | __Vtemp_h5e8385be__0[5U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[6U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[6U] 
           | __Vtemp_h5e8385be__0[6U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[7U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[7U] 
           | __Vtemp_h5e8385be__0[7U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[8U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[8U] 
           | __Vtemp_h5e8385be__0[8U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[9U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[9U] 
           | __Vtemp_h5e8385be__0[9U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xaU] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU] 
           | __Vtemp_h5e8385be__0[0xaU]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xbU] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU] 
           | __Vtemp_h5e8385be__0[0xbU]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xcU] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU] 
           | __Vtemp_h5e8385be__0[0xcU]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xdU] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU] 
           | __Vtemp_h5e8385be__0[0xdU]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xeU] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU] 
           | __Vtemp_h5e8385be__0[0xeU]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xfU] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU] 
           | __Vtemp_h5e8385be__0[0xfU]);
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h5e8385be__1, VSoc__ConstPool__CONST_h1c449781_0, 
                  ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                   << 1U));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0U]) 
              | __Vtemp_h5e8385be__1[0U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[1U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[1U]) 
              | __Vtemp_h5e8385be__1[1U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[2U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[2U]) 
              | __Vtemp_h5e8385be__1[2U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[3U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[3U]) 
              | __Vtemp_h5e8385be__1[3U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[4U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[4U]) 
              | __Vtemp_h5e8385be__1[4U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[5U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[5U]) 
              | __Vtemp_h5e8385be__1[5U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[6U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[6U]) 
              | __Vtemp_h5e8385be__1[6U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[7U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[7U]) 
              | __Vtemp_h5e8385be__1[7U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[8U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[8U]) 
              | __Vtemp_h5e8385be__1[8U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[9U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[9U]) 
              | __Vtemp_h5e8385be__1[9U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xaU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU]) 
              | __Vtemp_h5e8385be__1[0xaU]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xbU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU]) 
              | __Vtemp_h5e8385be__1[0xbU]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xcU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU]) 
              | __Vtemp_h5e8385be__1[0xcU]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xdU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU]) 
              | __Vtemp_h5e8385be__1[0xdU]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xeU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU]) 
              | __Vtemp_h5e8385be__1[0xeU]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xfU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU]) 
              | __Vtemp_h5e8385be__1[0xfU]));
    VL_SHIFTL_WWI(512,512,10, __Vtemp_hb792bbf6__0, VSoc__ConstPool__CONST_h1c449781_0, 
                  (0x3ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                            << 1U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0U]) 
              | __Vtemp_hb792bbf6__0[0U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[1U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[1U]) 
              | __Vtemp_hb792bbf6__0[1U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[2U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[2U]) 
              | __Vtemp_hb792bbf6__0[2U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[3U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[3U]) 
              | __Vtemp_hb792bbf6__0[3U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[4U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[4U]) 
              | __Vtemp_hb792bbf6__0[4U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[5U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[5U]) 
              | __Vtemp_hb792bbf6__0[5U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[6U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[6U]) 
              | __Vtemp_hb792bbf6__0[6U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[7U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[7U]) 
              | __Vtemp_hb792bbf6__0[7U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[8U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[8U]) 
              | __Vtemp_hb792bbf6__0[8U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[9U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[9U]) 
              | __Vtemp_hb792bbf6__0[9U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xaU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU]) 
              | __Vtemp_hb792bbf6__0[0xaU]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xbU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU]) 
              | __Vtemp_hb792bbf6__0[0xbU]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xcU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU]) 
              | __Vtemp_hb792bbf6__0[0xcU]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xdU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU]) 
              | __Vtemp_hb792bbf6__0[0xdU]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xeU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU]) 
              | __Vtemp_hb792bbf6__0[0xeU]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xfU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU]) 
              | __Vtemp_hb792bbf6__0[0xfU]));
    VL_SHIFTL_WWI(512,512,10, __Vtemp_hb792bbf6__1, VSoc__ConstPool__CONST_h1c449781_0, 
                  (0x3ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                            << 1U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0U] 
           | __Vtemp_hb792bbf6__1[0U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[1U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[1U] 
           | __Vtemp_hb792bbf6__1[1U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[2U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[2U] 
           | __Vtemp_hb792bbf6__1[2U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[3U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[3U] 
           | __Vtemp_hb792bbf6__1[3U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[4U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[4U] 
           | __Vtemp_hb792bbf6__1[4U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[5U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[5U] 
           | __Vtemp_hb792bbf6__1[5U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[6U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[6U] 
           | __Vtemp_hb792bbf6__1[6U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[7U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[7U] 
           | __Vtemp_hb792bbf6__1[7U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[8U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[8U] 
           | __Vtemp_hb792bbf6__1[8U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[9U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[9U] 
           | __Vtemp_hb792bbf6__1[9U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xaU] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU] 
           | __Vtemp_hb792bbf6__1[0xaU]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xbU] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU] 
           | __Vtemp_hb792bbf6__1[0xbU]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xcU] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU] 
           | __Vtemp_hb792bbf6__1[0xcU]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xdU] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU] 
           | __Vtemp_hb792bbf6__1[0xdU]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xeU] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU] 
           | __Vtemp_hb792bbf6__1[0xeU]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xfU] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU] 
           | __Vtemp_hb792bbf6__1[0xfU]);
    vlSelf->Soc__DOT__core__DOT__fc__DOT___T_25 = (0U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_25 
        = (1U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_66 
        = (2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_72 
        = (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4 
        = (5U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_10 
        = (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_73 
        = (4U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_hb201d805__0, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace, 
                  ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                   << 1U));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_hb201d805__1, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace, 
                  ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                   << 1U));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
           & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))
               ? __Vtemp_hb201d805__0[0U] : ((6U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                             & ((~ (IData)(
                                                           (7U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))) 
                                                & ((1U 
                                                    != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                                   & ((2U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                                      & __Vtemp_hb201d805__1[0U]))))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8854f984__0 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
           & (5U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h02ae5b32__0 
        = ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)) 
           | ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)) 
              | ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)) 
                 | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))));
    vlSelf->Soc__DOT__core__DOT____Vcellinp__DI__mem_access 
        = (0U != ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type) 
                  | (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_157 
        = ((9U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
            ? (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
               | vlSelf->Soc__DOT__core__DOT__dereg_op_b)
            : ((8U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                ? (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                   ^ vlSelf->Soc__DOT__core__DOT__dereg_op_b)
                : ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                    ? (QData)((IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                       >= vlSelf->Soc__DOT__core__DOT__dereg_op_b)))
                    : ((6U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                        ? (QData)((IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                           < vlSelf->Soc__DOT__core__DOT__dereg_op_b)))
                        : ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                            ? (QData)((IData)(VL_GTES_IQQ(64, vlSelf->Soc__DOT__core__DOT__dereg_op_a, vlSelf->Soc__DOT__core__DOT__dereg_op_b)))
                            : ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                ? (QData)((IData)(VL_LTS_IQQ(64, vlSelf->Soc__DOT__core__DOT__dereg_op_a, vlSelf->Soc__DOT__core__DOT__dereg_op_b)))
                                : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                    ? (QData)((IData)(
                                                      (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                                       != vlSelf->Soc__DOT__core__DOT__dereg_op_b)))
                                    : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                        ? (QData)((IData)(
                                                          (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                                           == vlSelf->Soc__DOT__core__DOT__dereg_op_b)))
                                        : ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                            ? (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                               - vlSelf->Soc__DOT__core__DOT__dereg_op_b)
                                            : ((0U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                ? (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                                   + vlSelf->Soc__DOT__core__DOT__dereg_op_b)
                                                : 0ULL))))))))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[1U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[1U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[2U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[2U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[3U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[3U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[4U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[4U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[5U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[5U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[6U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[6U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[7U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[7U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[8U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[8U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[9U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[9U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xaU] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0xaU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xbU] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0xbU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xcU] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0xcU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xdU] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0xdU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xeU] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0xeU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty[0xfU] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty[0xfU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[1U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[1U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[2U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[2U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[3U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[3U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[4U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[4U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[5U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[5U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[6U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[6U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[7U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[7U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[8U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[8U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[9U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[9U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xaU] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0xaU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xbU] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0xbU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xcU] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0xcU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xdU] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0xdU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xeU] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0xeU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid[0xfU] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__valid[0xfU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[1U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[1U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[2U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[2U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[3U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[3U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[4U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[4U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[5U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[5U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[6U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[6U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[7U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[7U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[8U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[8U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[9U] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[9U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xaU] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0xaU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xbU] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0xbU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xcU] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0xcU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xdU] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0xdU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xeU] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0xeU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xfU] 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__replace[0xfU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask))
            ? ((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                  ? (vlSelf->__VdfgTmp_h02e5796b__0 
                     >> 8U) : 0ULL) << 8U) | (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)))))
            : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask))
                ? ((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                      ? (vlSelf->__VdfgTmp_h02e5796b__0 
                         >> 0x10U) : 0ULL) << 0x10U) 
                   | (QData)((IData)((0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)))))
                : ((0xfU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask))
                    ? (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hdd9fa219__0)) 
                        << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)))
                    : vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27deda75__0)));
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[1U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[2U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[3U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[4U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[5U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[6U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[7U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[8U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[9U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[1U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[2U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[3U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[4U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[5U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[6U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[7U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[8U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[9U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xfU];
    } else {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[1U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[2U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[3U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[4U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[5U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[6U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[7U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[8U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[9U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[1U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[2U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[3U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[4U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[5U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[6U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[7U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[8U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[9U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xfU];
    }
    vlSelf->__VdfgTmp_h2fe899d6__0 = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
        [(0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                     << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0)))];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h1b552381__0 
        = (0x3ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                      << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_0)));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___TagArray_ext_R1_data 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8854f984__0) 
            & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))
            ? vlSelf->__VdfgTmp_h5f294843__0 : 0U);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h94cbbc53__0 
        = ((6U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8854f984__0));
    if ((0xeU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))) {
        __Vtemp_h40386c7d__0[2U] = (IData)((0x7fffffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_41 
                                                                             >> 0x3fU))))))));
        __Vtemp_h40386c7d__0[3U] = (IData)(((0x7fffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_41 
                                                                              >> 0x3fU))))))) 
                                            >> 0x20U));
    } else if ((0xdU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))) {
        __Vtemp_h40386c7d__0[2U] = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_80[2U];
        __Vtemp_h40386c7d__0[3U] = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_80[3U];
    } else if ((0xcU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))) {
        __Vtemp_h40386c7d__0[2U] = (IData)((0x7fffffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_38 
                                                                             >> 0x3fU))))))));
        __Vtemp_h40386c7d__0[3U] = (IData)(((0x7fffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_38 
                                                                              >> 0x3fU))))))) 
                                            >> 0x20U));
    } else if ((0xbU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))) {
        __Vtemp_h40386c7d__0[2U] = (IData)((0x7fffffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_34 
                                                                             >> 0x3fU))))))));
        __Vtemp_h40386c7d__0[3U] = (IData)(((0x7fffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_34 
                                                                              >> 0x3fU))))))) 
                                            >> 0x20U));
    } else if ((0xaU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))) {
        __Vtemp_h40386c7d__0[2U] = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_101[2U];
        __Vtemp_h40386c7d__0[3U] = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_101[3U];
    } else {
        __Vtemp_h40386c7d__0[2U] = (IData)((0x7fffffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_157 
                                                                             >> 0x3fU))))))));
        __Vtemp_h40386c7d__0[3U] = (IData)(((0x7fffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_157 
                                                                              >> 0x3fU))))))) 
                                            >> 0x20U));
    }
    __Vtemp_hbf25ab7a__0[1U] = ((0x11U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                 ? (IData)(((~ vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47) 
                                            >> 0x20U))
                                 : ((0x10U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                     ? (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47 
                                                >> 0x20U))
                                     : ((0xfU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                         ? (IData)(
                                                   (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_44 
                                                    >> 0x20U))
                                         : ((0xeU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                             ? (IData)(
                                                       (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_41 
                                                        >> 0x20U))
                                             : ((0xdU 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_80[1U]
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                  ? (IData)(
                                                            (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_38 
                                                             >> 0x20U))
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                   ? (IData)(
                                                             (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_34 
                                                              >> 0x20U))
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_101[1U]
                                                    : (IData)(
                                                              (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_157 
                                                               >> 0x20U))))))))));
    if ((0x12U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))) {
        __Vtemp_h5f9be4f4__0[0U] = (IData)((((QData)((IData)(
                                                             vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[0U]))));
        __Vtemp_h5f9be4f4__0[2U] = (IData)((0x7fffffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[1U] 
                                                                  >> 0x1fU))))));
        __Vtemp_h5f9be4f4__0[3U] = (IData)(((0x7fffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[1U] 
                                                                   >> 0x1fU))))) 
                                            >> 0x20U));
    } else if ((0x11U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))) {
        __Vtemp_h5f9be4f4__0[0U] = (IData)((~ vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47));
        __Vtemp_h5f9be4f4__0[2U] = (IData)((0x7fffffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47 
                                                                                >> 0x3fU)))))))));
        __Vtemp_h5f9be4f4__0[3U] = (IData)(((0x7fffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (~ (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47 
                                                                                >> 0x3fU)))))))) 
                                            >> 0x20U));
    } else if ((0x10U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))) {
        __Vtemp_h5f9be4f4__0[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47);
        __Vtemp_h5f9be4f4__0[2U] = (IData)((0x7fffffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47 
                                                                             >> 0x3fU))))))));
        __Vtemp_h5f9be4f4__0[3U] = (IData)(((0x7fffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47 
                                                                              >> 0x3fU))))))) 
                                            >> 0x20U));
    } else if ((0xfU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))) {
        __Vtemp_h5f9be4f4__0[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_44);
        __Vtemp_h5f9be4f4__0[2U] = (IData)((0x7fffffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_44 
                                                                             >> 0x3fU))))))));
        __Vtemp_h5f9be4f4__0[3U] = (IData)(((0x7fffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_44 
                                                                              >> 0x3fU))))))) 
                                            >> 0x20U));
    } else {
        __Vtemp_h5f9be4f4__0[0U] = ((0xeU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                     ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_41)
                                     : ((0xdU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                         ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_80[0U]
                                         : ((0xcU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                             ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_38)
                                             : ((0xbU 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                 ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_34)
                                                 : 
                                                ((0xaU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_101[0U]
                                                  : (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_157))))));
        __Vtemp_h5f9be4f4__0[2U] = __Vtemp_h40386c7d__0[2U];
        __Vtemp_h5f9be4f4__0[3U] = __Vtemp_h40386c7d__0[3U];
    }
    if ((0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))) {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_177[0U] 
            = (IData)((((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[2U]))));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_177[1U] 
            = (IData)(((((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[2U]))) 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_177[2U] 
            = (IData)((0x7fffffffffffffffULL & (- (QData)((IData)(
                                                                  (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[3U] 
                                                                   >> 0x1fU))))));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_177[3U] 
            = (IData)(((0x7fffffffffffffffULL & (- (QData)((IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[3U] 
                                                                    >> 0x1fU))))) 
                       >> 0x20U));
    } else {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_177[0U] 
            = __Vtemp_h5f9be4f4__0[0U];
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_177[1U] 
            = ((0x12U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                ? (IData)(((((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[0U]))) 
                           >> 0x20U)) : __Vtemp_hbf25ab7a__0[1U]);
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_177[2U] 
            = __Vtemp_h5f9be4f4__0[2U];
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_177[3U] 
            = __Vtemp_h5f9be4f4__0[3U];
    }
    Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_26 
        = (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
            & (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)) 
           & (~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3)));
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__dereg_csr_wen = 0U;
        vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr = 0U;
        vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata = 0ULL;
        vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_wb_type = 0U;
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum = 0U;
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr = 0U;
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__data = 0ULL;
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask = 0U;
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__inst_type = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
            vlSelf->Soc__DOT__core__DOT__dereg_csr_wen 
                = ((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                   & (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen));
            vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr 
                = vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr;
            vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata 
                = vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result;
            if (vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush) {
                vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr = 0U;
                vlSelf->Soc__DOT__core__DOT__dereg_wb_type = 0U;
                vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr = 0U;
            } else {
                vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr 
                    = vlSelf->Soc__DOT__core__DOT___decode_io_deio_reg_waddr;
                vlSelf->Soc__DOT__core__DOT__dereg_wb_type 
                    = ((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                        ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_10)
                                 ? 1U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                          ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0)
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
                                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))));
                vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr 
                    = ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen)
                        ? (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr)
                        : 0U);
            }
        }
        if (Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_26) {
            vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr 
                = vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc;
            vlSelf->Soc__DOT__core__DOT__Icache__DOT__data = 0ULL;
            vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask = 0U;
        }
        if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))) {
            vlSelf->Soc__DOT__core__DOT__Icache__DOT__inst_type 
                = vlSelf->Soc__DOT__core__DOT__fetch__DOT__started;
        }
    }
    if (Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_26) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__tag 
            = (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
               >> 0xbU);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__index 
            = (0xffU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                        >> 3U));
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp_hd1f243a7__0, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty, (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h1b552381__0));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U] 
        = __Vtemp_hd1f243a7__0[0U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[1U] 
        = __Vtemp_hd1f243a7__0[1U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[2U] 
        = __Vtemp_hd1f243a7__0[2U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[3U] 
        = __Vtemp_hd1f243a7__0[3U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[4U] 
        = __Vtemp_hd1f243a7__0[4U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[5U] 
        = __Vtemp_hd1f243a7__0[5U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[6U] 
        = __Vtemp_hd1f243a7__0[6U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[7U] 
        = __Vtemp_hd1f243a7__0[7U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[8U] 
        = __Vtemp_hd1f243a7__0[8U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[9U] 
        = __Vtemp_hd1f243a7__0[9U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0xaU] 
        = __Vtemp_hd1f243a7__0[0xaU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0xbU] 
        = __Vtemp_hd1f243a7__0[0xbU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0xcU] 
        = __Vtemp_hd1f243a7__0[0xcU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0xdU] 
        = __Vtemp_hd1f243a7__0[0xdU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0xeU] 
        = __Vtemp_hd1f243a7__0[0xeU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0xfU] 
        = __Vtemp_hd1f243a7__0[0xfU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h05ff0e1a__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h94cbbc53__0) 
           & (7U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4b92e988__0 
        = ((~ (IData)((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h94cbbc53__0));
    __Vtemp_h7cb4ecaa__2[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a);
    __Vtemp_h7cb4ecaa__2[1U] = (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                        >> 0x20U));
    __Vtemp_h7cb4ecaa__2[2U] = 0U;
    __Vtemp_h7cb4ecaa__2[3U] = 0U;
    __Vtemp_h197b5ff8__0[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b);
    __Vtemp_h197b5ff8__0[1U] = (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_b 
                                        >> 0x20U));
    __Vtemp_h197b5ff8__0[2U] = 0U;
    __Vtemp_h197b5ff8__0[3U] = 0U;
    VL_MUL_W(4, __Vtemp_h2b127288__0, __Vtemp_h7cb4ecaa__2, __Vtemp_h197b5ff8__0);
    __Vtemp_h197b5ff8__1[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b);
    __Vtemp_h197b5ff8__1[1U] = (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_b 
                                        >> 0x20U));
    __Vtemp_h197b5ff8__1[2U] = 0U;
    __Vtemp_h197b5ff8__1[3U] = 0U;
    VL_MUL_W(4, __Vtemp_hd8984f98__0, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5, __Vtemp_h197b5ff8__1);
    vlSelf->__VdfgTmp_h6a80e86b__0 = ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                       ? ((~ vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
                                          & vlSelf->Soc__DOT__core__DOT__dereg_op_b)
                                       : ((0x27U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                           ? (((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_131 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_131)))
                                           : ((0x26U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                               ? (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_128 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_128)))
                                               : ((0x25U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_123 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_123)))
                                                   : 
                                                  ((0x24U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_68[0U] 
                                                                                >> 0x1fU))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_68[0U])))
                                                    : 
                                                   ((0x23U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[0U] 
                                                                                >> 0x1fU))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[0U])))
                                                     : 
                                                    ((0x22U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_112 
                                                                                >> 0x1fU))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_112)))
                                                      : 
                                                     ((0x21U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_107 
                                                                                >> 0x1fU))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_107)))
                                                       : 
                                                      ((0x20U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_101[0U] 
                                                                                >> 0x1fU))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((0x1fU 
                                                                            >= 
                                                                            (0x3fU 
                                                                             & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)))
                                                                            ? 
                                                                           ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
                                                                            << 
                                                                            (0x3fU 
                                                                             & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)))
                                                                            : 0U))))
                                                        : 
                                                       ((0x1fU 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_98 
                                                                                >> 0x1fU))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_98)))
                                                         : 
                                                        ((0x1eU 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                          ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_12
                                                          : 
                                                         ((0x1dU 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                           ? 
                                                          (((QData)((IData)(
                                                                            (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_89 
                                                                                >> 0x1fU))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_89)))
                                                           : 
                                                          ((0x1cU 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                            ? 
                                                           (((QData)((IData)(
                                                                             (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_85 
                                                                                >> 0x1fU))))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_85)))
                                                            : 
                                                           ((0x1bU 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                             ? 
                                                            (((QData)((IData)(
                                                                              (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_80[0U] 
                                                                                >> 0x1fU))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((0x1fU 
                                                                                >= (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt))
                                                                                 ? 
                                                                                ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
                                                                                << (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt))
                                                                                 : 0U))))
                                                             : 
                                                            ((0x1aU 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                              ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_12
                                                              : 
                                                             ((0x19U 
                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                               ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_131
                                                               : 
                                                              ((0x18U 
                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_131
                                                                : 
                                                               ((0x17U 
                                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                 ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_123
                                                                 : 
                                                                ((0x16U 
                                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                  ? 
                                                                 (((QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_68[1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_68[0U])))
                                                                  : 
                                                                 ((0x15U 
                                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                   ? 
                                                                  (((QData)((IData)(
                                                                                __Vtemp_h2b127288__0[3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                __Vtemp_h2b127288__0[2U])))
                                                                   : 
                                                                  ((0x14U 
                                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                    ? 
                                                                   (((QData)((IData)(
                                                                                __Vtemp_hd8984f98__0[3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                __Vtemp_hd8984f98__0[2U])))
                                                                    : 
                                                                   (((QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_177[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_177[0U]))))))))))))))))))))))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__state 
        = __Vdly__Soc__DOT__core__DOT__Icache__DOT__state;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7326076__0 
        = ((1U & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U])
            ? (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h1b552381__0)
            : 0U);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___TagArray_ext_R0_data 
        = (((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
            & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
               & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]))
            ? vlSelf->__VdfgTmp_h2fe899d6__0 : 0U);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4b92e988__0) 
           & (1U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8ecd23a9__0 
        = ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4b92e988__0));
    vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_branch_type) 
           & ((~ (IData)((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)))) 
              & (0U != vlSelf->__VdfgTmp_h6a80e86b__0)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result 
        = ((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
            ? 0ULL : vlSelf->__VdfgTmp_h6a80e86b__0);
    vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type)) 
           | (3U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type)));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27deda75__0 
        = ((0xffU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))
            ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__data
            : 0ULL);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h56b90ebc__0 
        = (0x3ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                      << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim)));
    vlSelf->__VdfgTmp_hb3a84c04__0 = vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
        [(0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                     << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim)))];
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h408f0c7c__0, VSoc__ConstPool__CONST_h1c449781_0, 
                  ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                   << 1U));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0U] 
           | __Vtemp_h408f0c7c__0[0U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[1U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[1U] 
           | __Vtemp_h408f0c7c__0[1U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[2U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[2U] 
           | __Vtemp_h408f0c7c__0[2U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[3U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[3U] 
           | __Vtemp_h408f0c7c__0[3U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[4U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[4U] 
           | __Vtemp_h408f0c7c__0[4U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[5U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[5U] 
           | __Vtemp_h408f0c7c__0[5U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[6U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[6U] 
           | __Vtemp_h408f0c7c__0[6U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[7U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[7U] 
           | __Vtemp_h408f0c7c__0[7U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[8U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[8U] 
           | __Vtemp_h408f0c7c__0[8U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[9U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[9U] 
           | __Vtemp_h408f0c7c__0[9U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xaU] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xaU] 
           | __Vtemp_h408f0c7c__0[0xaU]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xbU] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xbU] 
           | __Vtemp_h408f0c7c__0[0xbU]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xcU] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xcU] 
           | __Vtemp_h408f0c7c__0[0xcU]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xdU] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xdU] 
           | __Vtemp_h408f0c7c__0[0xdU]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xeU] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xeU] 
           | __Vtemp_h408f0c7c__0[0xeU]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xfU] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xfU] 
           | __Vtemp_h408f0c7c__0[0xfU]);
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h408f0c7c__1, VSoc__ConstPool__CONST_h1c449781_0, 
                  ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                   << 1U));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0U]) 
              | __Vtemp_h408f0c7c__1[0U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[1U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[1U]) 
              | __Vtemp_h408f0c7c__1[1U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[2U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[2U]) 
              | __Vtemp_h408f0c7c__1[2U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[3U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[3U]) 
              | __Vtemp_h408f0c7c__1[3U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[4U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[4U]) 
              | __Vtemp_h408f0c7c__1[4U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[5U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[5U]) 
              | __Vtemp_h408f0c7c__1[5U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[6U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[6U]) 
              | __Vtemp_h408f0c7c__1[6U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[7U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[7U]) 
              | __Vtemp_h408f0c7c__1[7U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[8U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[8U]) 
              | __Vtemp_h408f0c7c__1[8U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[9U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[9U]) 
              | __Vtemp_h408f0c7c__1[9U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xaU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xaU]) 
              | __Vtemp_h408f0c7c__1[0xaU]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xbU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xbU]) 
              | __Vtemp_h408f0c7c__1[0xbU]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xcU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xcU]) 
              | __Vtemp_h408f0c7c__1[0xcU]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xdU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xdU]) 
              | __Vtemp_h408f0c7c__1[0xdU]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xeU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xeU]) 
              | __Vtemp_h408f0c7c__1[0xeU]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xfU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xfU]) 
              | __Vtemp_h408f0c7c__1[0xfU]));
    VL_SHIFTL_WWI(512,512,10, __Vtemp_h95d85a84__0, VSoc__ConstPool__CONST_h1c449781_0, 
                  (0x3ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                            << 1U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0U]) 
              | __Vtemp_h95d85a84__0[0U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[1U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[1U]) 
              | __Vtemp_h95d85a84__0[1U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[2U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[2U]) 
              | __Vtemp_h95d85a84__0[2U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[3U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[3U]) 
              | __Vtemp_h95d85a84__0[3U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[4U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[4U]) 
              | __Vtemp_h95d85a84__0[4U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[5U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[5U]) 
              | __Vtemp_h95d85a84__0[5U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[6U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[6U]) 
              | __Vtemp_h95d85a84__0[6U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[7U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[7U]) 
              | __Vtemp_h95d85a84__0[7U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[8U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[8U]) 
              | __Vtemp_h95d85a84__0[8U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[9U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[9U]) 
              | __Vtemp_h95d85a84__0[9U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xaU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xaU]) 
              | __Vtemp_h95d85a84__0[0xaU]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xbU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xbU]) 
              | __Vtemp_h95d85a84__0[0xbU]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xcU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xcU]) 
              | __Vtemp_h95d85a84__0[0xcU]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xdU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xdU]) 
              | __Vtemp_h95d85a84__0[0xdU]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xeU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xeU]) 
              | __Vtemp_h95d85a84__0[0xeU]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xfU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xfU]) 
              | __Vtemp_h95d85a84__0[0xfU]));
    VL_SHIFTL_WWI(512,512,10, __Vtemp_h95d85a84__1, VSoc__ConstPool__CONST_h1c449781_0, 
                  (0x3ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                            << 1U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0U] 
           | __Vtemp_h95d85a84__1[0U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[1U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[1U] 
           | __Vtemp_h95d85a84__1[1U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[2U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[2U] 
           | __Vtemp_h95d85a84__1[2U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[3U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[3U] 
           | __Vtemp_h95d85a84__1[3U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[4U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[4U] 
           | __Vtemp_h95d85a84__1[4U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[5U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[5U] 
           | __Vtemp_h95d85a84__1[5U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[6U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[6U] 
           | __Vtemp_h95d85a84__1[6U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[7U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[7U] 
           | __Vtemp_h95d85a84__1[7U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[8U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[8U] 
           | __Vtemp_h95d85a84__1[8U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[9U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[9U] 
           | __Vtemp_h95d85a84__1[9U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xaU] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xaU] 
           | __Vtemp_h95d85a84__1[0xaU]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xbU] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xbU] 
           | __Vtemp_h95d85a84__1[0xbU]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xcU] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xcU] 
           | __Vtemp_h95d85a84__1[0xcU]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xdU] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xdU] 
           | __Vtemp_h95d85a84__1[0xdU]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xeU] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xeU] 
           | __Vtemp_h95d85a84__1[0xeU]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xfU] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xfU] 
           | __Vtemp_h95d85a84__1[0xfU]);
    vlSelf->Soc__DOT__core__DOT__fc__DOT___T_8 = (0U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_25 
        = (1U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_66 
        = (2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_72 
        = (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4 
        = (5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_10 
        = (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_73 
        = (4U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_he1218dcc__0, vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace, 
                  ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                   << 1U));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_he1218dcc__1, vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace, 
                  ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                   << 1U));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_0 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
           & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))
               ? __Vtemp_he1218dcc__0[0U] : ((6U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                             & ((~ (IData)(
                                                           (7U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))) 
                                                & ((1U 
                                                    != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                                   & ((2U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                                      & __Vtemp_he1218dcc__1[0U]))))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8854f984__0 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
           & (5U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__started 
        = (1U & (~ (IData)(vlSelf->reset)));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___TagArray_ext_R2_data 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8ecd23a9__0) 
            & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
               & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]))
            ? vlSelf->__VdfgTmp_h2fe899d6__0 : 0U);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca93995__0 
        = ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8ecd23a9__0));
    vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type))
            ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
            : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type))
                ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                : 0ULL));
    vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6 
        = (((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type)) 
            | (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))) 
           & ((0U != ((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                       ? 0ULL : (vlSelf->__VdfgTmp_h6a80e86b__0 
                                 >> 0x19U))) & (0x200c000ULL 
                                                > vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))
            ? ((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                  ? (vlSelf->__VdfgTmp_hc520a55b__0 
                     >> 8U) : 0ULL) << 8U) | (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)))))
            : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))
                ? ((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                      ? (vlSelf->__VdfgTmp_hc520a55b__0 
                         >> 0x10U) : 0ULL) << 0x10U) 
                   | (QData)((IData)((0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)))))
                : ((0xfU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))
                    ? (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hdd9fa219__0)) 
                        << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)))
                    : vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27deda75__0)));
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[1U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[1U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[2U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[2U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[3U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[3U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[4U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[4U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[5U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[5U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[6U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[6U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[7U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[7U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[8U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[8U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[9U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[9U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[1U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[1U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[2U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[2U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[3U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[3U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[4U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[4U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[5U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[5U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[6U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[6U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[7U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[7U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[8U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[8U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[9U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[9U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xfU];
    } else {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[1U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[1U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[2U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[2U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[3U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[3U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[4U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[4U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[5U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[5U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[6U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[6U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[7U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[7U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[8U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[8U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[9U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[9U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[1U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[1U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[2U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[2U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[3U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[3U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[4U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[4U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[5U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[5U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[6U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[6U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[7U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[7U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[8U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[8U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[9U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[9U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xfU];
    }
    vlSelf->__VdfgTmp_heb865217__0 = vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
        [(0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                     << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_0)))];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h1b552381__0 
        = (0x3ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                      << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_0)));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R1_data 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8854f984__0) 
            & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))
            ? vlSelf->__VdfgTmp_hb3a84c04__0 : 0U);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h94cbbc53__0 
        = ((6U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8854f984__0));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___TagArray_ext_R3_data 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca93995__0) 
            & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))
            ? vlSelf->__VdfgTmp_h5f294843__0 : 0U);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc4187582__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca93995__0) 
           & ((3U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
              & (4U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))));
    vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6)) 
           & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type)));
    VL_SHIFTR_WWI(512,512,10, __Vtemp_h236e7446__0, vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty, (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h1b552381__0));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U] 
        = __Vtemp_h236e7446__0[0U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[1U] 
        = __Vtemp_h236e7446__0[1U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[2U] 
        = __Vtemp_h236e7446__0[2U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[3U] 
        = __Vtemp_h236e7446__0[3U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[4U] 
        = __Vtemp_h236e7446__0[4U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[5U] 
        = __Vtemp_h236e7446__0[5U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[6U] 
        = __Vtemp_h236e7446__0[6U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[7U] 
        = __Vtemp_h236e7446__0[7U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[8U] 
        = __Vtemp_h236e7446__0[8U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[9U] 
        = __Vtemp_h236e7446__0[9U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0xaU] 
        = __Vtemp_h236e7446__0[0xaU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0xbU] 
        = __Vtemp_h236e7446__0[0xbU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0xcU] 
        = __Vtemp_h236e7446__0[0xcU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0xdU] 
        = __Vtemp_h236e7446__0[0xdU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0xeU] 
        = __Vtemp_h236e7446__0[0xeU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0xfU] 
        = __Vtemp_h236e7446__0[0xfU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h05ff0e1a__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h94cbbc53__0) 
           & (7U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4b92e988__0 
        = ((~ (IData)((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h94cbbc53__0));
    vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
             ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
             : 0ULL) | (((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6)) 
                         & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))
                         ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                         : 0ULL));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7326076__0 
        = ((1U & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U])
            ? (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h1b552381__0)
            : 0U);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R0_data 
        = (((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
            & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
               & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]))
            ? vlSelf->__VdfgTmp_heb865217__0 : 0U);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4b92e988__0) 
           & (1U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8ecd23a9__0 
        = ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4b92e988__0));
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_req_valid_T_5 
        = ((IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__DI__mem_access) 
           & (0x9fffffffULL < vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T));
    vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid 
        = ((IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__DI__mem_access) 
           & (0xa0000000ULL > vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_ha26fe365__0, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid, 
                  (0x1feU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                      >> 3U)) << 1U)));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0 
        = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
            [(0x1feU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                 >> 3U)) << 1U))] == 
            (0x1fffffU & (IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                  >> 0xbU)))) & __Vtemp_ha26fe365__0[0U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R2_data 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8ecd23a9__0) 
            & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
               & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]))
            ? vlSelf->__VdfgTmp_heb865217__0 : 0U);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca93995__0 
        = ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8ecd23a9__0));
    VL_SHIFTR_WWI(512,512,10, __Vtemp_h773c399d__0, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid, 
                  (0x3ffU & ((IData)(1U) + (0x1feU 
                                            & ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                        >> 3U)) 
                                               << 1U)))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0) 
           | ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
               [(0x1ffU & ((IData)(1U) + (0x1feU & 
                                          ((IData)(
                                                   (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                    >> 3U)) 
                                           << 1U))))] 
               == (0x1fffffU & (IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                        >> 0xbU)))) 
              & __Vtemp_h773c399d__0[0U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R3_data 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca93995__0) 
            & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))
            ? vlSelf->__VdfgTmp_hb3a84c04__0 : 0U);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc4187582__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca93995__0) 
           & ((3U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
              & (4U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_4 
        = (1U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)) 
                 | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)) 
                    | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h02ae5b32__0))));
}
