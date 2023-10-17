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
extern const VlWide<13>/*415:0*/ VSoc__ConstPool__CONST_h1ab9d0d3_0;

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__1(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc;
    __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc = 0;
    IData/*31:0*/ __Vdly__Soc__DOT__core__DOT__fetch__DOT__old_pc;
    __Vdly__Soc__DOT__core__DOT__fetch__DOT__old_pc = 0;
    CData/*0:0*/ __Vdly__Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer;
    __Vdly__Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer = 0;
    CData/*0:0*/ __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid;
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid = 0;
    VlWide<3>/*66:0*/ __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg;
    VL_ZERO_W(67, __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg);
    VlWide<5>/*131:0*/ __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg;
    VL_ZERO_W(132, __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg);
    VlWide<5>/*131:0*/ __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg;
    VL_ZERO_W(132, __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg);
    CData/*0:0*/ __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state;
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state = 0;
    CData/*5:0*/ __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter;
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter = 0;
    CData/*5:0*/ __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total;
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total = 0;
    CData/*6:0*/ __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter;
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter = 0;
    CData/*0:0*/ __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid;
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid = 0;
    QData/*63:0*/ __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient;
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient = 0;
    VlWide<4>/*127:0*/ __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder;
    VL_ZERO_W(128, __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder);
    CData/*0:0*/ __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo;
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo = 0;
    CData/*0:0*/ __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem;
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem = 0;
    CData/*1:0*/ __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state;
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state = 0;
    CData/*0:0*/ __Vdly__Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer;
    __Vdly__Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer = 0;
    CData/*0:0*/ __Vdly__Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer;
    __Vdly__Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer = 0;
    CData/*0:0*/ __Vdly__Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer;
    __Vdly__Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer = 0;
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
    CData/*1:0*/ __Vdly__Soc__DOT__core__DOT__arbitor__DOT__state;
    __Vdly__Soc__DOT__core__DOT__arbitor__DOT__state = 0;
    CData/*0:0*/ __Vdly__Soc__DOT__core__DOT__arbitor__DOT__aw_comp;
    __Vdly__Soc__DOT__core__DOT__arbitor__DOT__aw_comp = 0;
    CData/*0:0*/ __Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_comp;
    __Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_comp = 0;
    CData/*3:0*/ __Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_count;
    __Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_count = 0;
    CData/*0:0*/ __Vdly__Soc__DOT__core__DOT__ioformem__DOT__begin_flag;
    __Vdly__Soc__DOT__core__DOT__ioformem__DOT__begin_flag = 0;
    CData/*3:0*/ __Vdly__Soc__DOT__core__DOT__ioformem__DOT__wait_cycle;
    __Vdly__Soc__DOT__core__DOT__ioformem__DOT__wait_cycle = 0;
    CData/*3:0*/ __Vdly__Soc__DOT__core__DOT__ioformem__DOT__data_count;
    __Vdly__Soc__DOT__core__DOT__ioformem__DOT__data_count = 0;
    CData/*3:0*/ __Vdly__Soc__DOT__core__DOT__ioformem__DOT__r_count;
    __Vdly__Soc__DOT__core__DOT__ioformem__DOT__r_count = 0;
    CData/*0:0*/ __Vdly__Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid;
    __Vdly__Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid = 0;
    CData/*1:0*/ __Vdly__Soc__DOT__core__DOT__ioformem__DOT__state;
    __Vdly__Soc__DOT__core__DOT__ioformem__DOT__state = 0;
    CData/*3:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v0;
    __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v0;
    __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v0;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v1;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v2;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v3;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v4;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v4 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v5;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v5 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v6;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v6 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v7;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v7 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v8;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v8 = 0;
    CData/*7:0*/ __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v9;
    __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v9 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v9;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v9 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v10;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v10 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v11;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v11 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v12;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v12 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v13;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v13 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v14;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v14 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v15;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v15 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v16;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v16 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v17;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v17 = 0;
    CData/*3:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v0;
    __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v0;
    __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v0;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v1;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v2;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v3;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v4;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v4 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v5;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v5 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v6;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v6 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v7;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v7 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v8;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v8 = 0;
    CData/*7:0*/ __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v9;
    __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v9 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v9;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v9 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v10;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v10 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v11;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v11 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v12;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v12 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v13;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v13 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v14;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v14 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v15;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v15 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v16;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v16 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v17;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v17 = 0;
    CData/*3:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v0;
    __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v0;
    __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v0;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v1;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v2;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v3;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v4;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v4 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v5;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v5 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v6;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v6 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v7;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v7 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v8;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v8 = 0;
    CData/*7:0*/ __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v9;
    __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v9 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v9;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v9 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v10;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v10 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v11;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v11 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v12;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v12 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v13;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v13 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v14;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v14 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v15;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v15 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v16;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v16 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v17;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v17 = 0;
    CData/*3:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v0;
    __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v0;
    __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v0;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v1;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v2;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v3;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v4;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v4 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v5;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v5 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v6;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v6 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v7;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v7 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v8;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v8 = 0;
    CData/*7:0*/ __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v9;
    __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v9 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v9;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v9 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v10;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v10 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v11;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v11 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v12;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v12 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v13;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v13 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v14;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v14 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v15;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v15 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v16;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v16 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v17;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v17 = 0;
    CData/*3:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v0;
    __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v0;
    __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v0;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v1;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v2;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v3;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v4;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v4 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v5;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v5 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v6;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v6 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v7;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v7 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v8;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v8 = 0;
    CData/*7:0*/ __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v9;
    __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v9 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v9;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v9 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v10;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v10 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v11;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v11 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v12;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v12 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v13;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v13 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v14;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v14 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v15;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v15 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v16;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v16 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v17;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v17 = 0;
    CData/*3:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v0;
    __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v0;
    __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v0;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v1;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v2;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v3;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v4;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v4 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v5;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v5 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v6;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v6 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v7;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v7 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v8;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v8 = 0;
    CData/*7:0*/ __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v9;
    __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v9 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v9;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v9 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v10;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v10 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v11;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v11 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v12;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v12 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v13;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v13 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v14;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v14 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v15;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v15 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v16;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v16 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v17;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v17 = 0;
    CData/*3:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v0;
    __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v0;
    __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v0;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v1;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v2;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v3;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v4;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v4 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v5;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v5 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v6;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v6 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v7;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v7 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v8;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v8 = 0;
    CData/*7:0*/ __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v9;
    __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v9 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v9;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v9 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v10;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v10 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v11;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v11 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v12;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v12 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v13;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v13 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v14;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v14 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v15;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v15 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v16;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v16 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v17;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v17 = 0;
    CData/*3:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v0;
    __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v0;
    __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v0;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v1;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v2;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v3;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v4;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v4 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v5;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v5 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v6;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v6 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v7;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v7 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v8;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v8 = 0;
    CData/*7:0*/ __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v9;
    __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v9 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v9;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v9 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v10;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v10 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v11;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v11 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v12;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v12 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v13;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v13 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v14;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v14 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v15;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v15 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v16;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v16 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v17;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v17 = 0;
    CData/*3:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v0;
    __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v0;
    __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v0;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v1;
    __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v1;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v1 = 0;
    CData/*5:0*/ __Vdly__Soc__DOT__core__DOT__interact__DOT__over_count;
    __Vdly__Soc__DOT__core__DOT__interact__DOT__over_count = 0;
    VlWide<4>/*127:0*/ __Vtemp_h75017c4d__0;
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__0;
    VlWide<3>/*95:0*/ __Vtemp_he18af335__0;
    VlWide<3>/*95:0*/ __Vtemp_hb2a169e7__0;
    VlWide<5>/*159:0*/ __Vtemp_hae518860__0;
    VlWide<5>/*159:0*/ __Vtemp_h6715fe3f__0;
    VlWide<5>/*159:0*/ __Vtemp_h9668e9a5__0;
    VlWide<5>/*159:0*/ __Vtemp_he3792748__0;
    VlWide<5>/*159:0*/ __Vtemp_ha285151e__0;
    VlWide<7>/*223:0*/ __Vtemp_h18181908__0;
    VlWide<9>/*287:0*/ __Vtemp_hc32c987f__0;
    VlWide<15>/*479:0*/ __Vtemp_hdb7ecb01__0;
    VlWide<17>/*543:0*/ __Vtemp_h0aaf08a3__0;
    VlWide<21>/*671:0*/ __Vtemp_h7ef64bbb__0;
    VlWide<33>/*1055:0*/ __Vtemp_h240ba972__0;
    VlWide<8>/*255:0*/ __Vtemp_h26f7ce52__0;
    VlWide<3>/*95:0*/ __Vtemp_h5ee83ed9__0;
    VlWide<16>/*511:0*/ __Vtemp_h11a82919__0;
    VlWide<3>/*95:0*/ __Vtemp_hc3c146cc__0;
    VlWide<3>/*95:0*/ __Vtemp_h68469746__0;
    VlWide<3>/*95:0*/ __Vtemp_ha2817953__0;
    VlWide<4>/*127:0*/ __Vtemp_h7cb4ecaa__0;
    VlWide<4>/*127:0*/ __Vtemp_hb46e09a5__0;
    VlWide<4>/*127:0*/ __Vtemp_h7cb4ecaa__1;
    VlWide<4>/*127:0*/ __Vtemp_he3381e13__0;
    // Body
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter;
    __Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_count 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_count;
    __Vdly__Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer 
        = vlSelf->Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer;
    __Vdly__Soc__DOT__core__DOT__arbitor__DOT__aw_comp 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp;
    __Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_comp 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v1 = 0U;
    __Vdly__Soc__DOT__core__DOT__ioformem__DOT__r_count 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__r_count;
    __Vdly__Soc__DOT__core__DOT__fetch__DOT__old_pc 
        = vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc;
    __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc = vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc;
    __Vdly__Soc__DOT__core__DOT__ioformem__DOT__wait_cycle 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__wait_cycle;
    __Vdly__Soc__DOT__core__DOT__ioformem__DOT__begin_flag 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__begin_flag;
    __Vdly__Soc__DOT__core__DOT__ioformem__DOT__state 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state;
    __Vdly__Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid;
    __Vdly__Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer;
    __Vdly__Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer 
        = vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer;
    __Vdly__Soc__DOT__core__DOT__ioformem__DOT__data_count 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__data_count;
    __Vdly__Soc__DOT__core__DOT__csrs__DOT__MIP = vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP;
    __Vdly__Soc__DOT__core__DOT__trap__DOT__state = vlSelf->Soc__DOT__core__DOT__trap__DOT__state;
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__choose_buffer 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer;
    __Vdly__Soc__DOT__core__DOT__arbitor__DOT__state 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state;
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem;
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo;
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U];
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U];
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U];
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U];
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state;
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient;
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v2 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v3 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v4 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v5 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v6 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v7 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v8 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v9 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v10 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v11 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v12 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v13 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v14 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v15 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v16 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v17 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v2 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v3 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v4 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v5 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v6 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v7 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v8 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v9 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v10 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v11 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v12 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v13 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v14 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v15 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v16 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v17 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v2 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v3 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v4 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v5 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v6 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v7 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v8 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v9 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v10 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v11 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v12 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v13 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v14 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v15 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v16 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v17 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v2 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v3 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v4 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v5 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v6 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v7 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v8 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v9 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v10 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v11 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v12 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v13 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v14 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v15 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v16 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v17 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v2 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v3 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v4 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v5 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v6 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v7 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v8 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v9 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v10 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v11 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v12 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v13 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v14 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v15 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v16 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v17 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v2 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v3 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v4 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v5 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v6 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v7 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v8 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v9 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v10 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v11 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v12 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v13 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v14 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v15 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v16 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v17 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v2 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v3 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v4 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v5 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v6 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v7 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v8 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v9 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v10 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v11 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v12 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v13 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v14 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v15 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v16 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v17 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v2 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v3 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v4 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v5 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v6 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v7 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v8 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v9 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v10 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v11 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v12 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v13 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v14 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v15 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v16 = 0U;
    __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v17 = 0U;
    __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIME 
        = vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME;
    __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIMECMP 
        = vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP;
    __Vdly__Soc__DOT__core__DOT__clint__DOT__MSIP = vlSelf->Soc__DOT__core__DOT__clint__DOT__MSIP;
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total;
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter;
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state;
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[0U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[0U];
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[1U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[1U];
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[2U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[2U];
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[3U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[3U];
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[4U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[4U];
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U];
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U];
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U];
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U];
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[4U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[4U];
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U];
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[1U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[1U];
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[2U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[2U];
    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid;
    __Vdly__Soc__DOT__core__DOT__interact__DOT__over_count 
        = vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count;
    __Vdly__Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer 
        = vlSelf->Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        VSoc___024unit____Vdpiimwrap_update_debuginfo_TOP____024unit(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc, (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started), vlSelf->Soc__DOT__core__DOT__decode__DOT__inst, 
                                                                     ((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                                                                      & (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.io_cpu_resp_valid)), (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16), vlSelf->Soc__DOT__core__DOT__dereg_op_a, vlSelf->Soc__DOT__core__DOT__dereg_op_b, 
                                                                     ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen)
                                                                       ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                                                                       : vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_h7d5adbc1__0), (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag), vlSelf->Soc__DOT__core__DOT____Vcellinp__DI__mem_access, vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T, (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr), vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata, 
                                                                     ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
                                                                      & (0U 
                                                                         != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))), (IData)(vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen), vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata, (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr), 
                                                                     ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0) 
                                                                      & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)), (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state), vlSymsp->TOP__Soc__DOT__core__DOT__Icache.io_fccache_hit, (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started), vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0, (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.io_fccache_hit), vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid, (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1));
    }
    if (vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_0) {
        __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT___excute_io_wmask;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__data_count;
    }
    if (vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN) {
        __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_mask;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v1 = 1U;
    }
    __Vdlyvval__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1 
        = ((((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
             & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))) 
            & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr)))
            ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
            : vlSelf->Soc__DOT__core__DOT__regfile__DOT___regs_ext_R0_data);
    __Vdlyvdim0__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1 
        = vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr;
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_0) 
         & ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)) 
            | ((IData)(vlSelf->__VdfgTmp_hf6b87a09__0) 
               >> 7U)))) {
        __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v0 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                                >> 0x38U)));
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__data_count;
    }
    if (vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_4) {
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v1 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v2 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v3 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v4 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v5 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v6 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v7 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v8 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v10 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v11 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v12 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v13 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v14 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v15 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v16 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v17 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v1 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v2 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v3 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v4 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v5 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v6 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v7 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v8 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v10 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v11 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v12 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v13 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v14 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v15 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v16 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v17 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v1 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v2 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v3 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v4 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v5 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v6 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v7 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v8 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v10 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v11 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v12 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v13 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v14 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v15 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v16 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v17 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v1 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v2 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v3 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v4 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v5 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v6 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v7 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v8 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v10 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v11 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v12 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v13 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v14 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v15 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v16 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v17 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v1 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v2 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v3 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v4 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v5 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v6 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v7 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v8 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v10 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v11 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v12 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v13 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v14 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v15 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v16 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v17 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v1 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v2 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v3 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v4 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v5 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v6 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v7 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v8 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v10 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v11 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v12 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v13 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v14 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v15 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v16 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v17 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v1 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v2 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v3 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v4 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v5 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v6 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v7 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v8 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v10 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v11 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v12 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v13 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v14 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v15 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v16 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v17 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v1 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v2 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v3 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v4 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v5 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v6 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v7 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v8 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v10 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v11 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v12 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v13 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v14 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v15 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v16 = 1U;
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v17 = 1U;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN) 
         & ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_mask) 
            >> 7U))) {
        __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v9 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_data 
                                >> 0x38U)));
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v9 = 1U;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_0) 
         & ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)) 
            | ((IData)(vlSelf->__VdfgTmp_hf6b87a09__0) 
               >> 6U)))) {
        __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v0 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                                >> 0x30U)));
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__data_count;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN) 
         & ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_mask) 
            >> 6U))) {
        __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v9 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_data 
                                >> 0x30U)));
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v9 = 1U;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_0) 
         & ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)) 
            | ((IData)(vlSelf->__VdfgTmp_hf6b87a09__0) 
               >> 5U)))) {
        __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v0 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                                >> 0x28U)));
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__data_count;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN) 
         & ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_mask) 
            >> 5U))) {
        __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v9 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_data 
                                >> 0x28U)));
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v9 = 1U;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_0) 
         & ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)) 
            | ((IData)(vlSelf->__VdfgTmp_hf6b87a09__0) 
               >> 4U)))) {
        __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v0 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                                >> 0x20U)));
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__data_count;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN) 
         & ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_mask) 
            >> 4U))) {
        __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v9 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_data 
                                >> 0x20U)));
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v9 = 1U;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_0) 
         & ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)) 
            | ((IData)(vlSelf->__VdfgTmp_hf6b87a09__0) 
               >> 3U)))) {
        __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v0 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                                >> 0x18U)));
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__data_count;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN) 
         & ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_mask) 
            >> 3U))) {
        __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v9 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_data 
                                >> 0x18U)));
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v9 = 1U;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_0) 
         & ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)) 
            | ((IData)(vlSelf->__VdfgTmp_hf6b87a09__0) 
               >> 2U)))) {
        __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v0 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                                >> 0x10U)));
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__data_count;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN) 
         & ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_mask) 
            >> 2U))) {
        __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v9 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_data 
                                >> 0x10U)));
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v9 = 1U;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_0) 
         & ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)) 
            | ((IData)(vlSelf->__VdfgTmp_hf6b87a09__0) 
               >> 1U)))) {
        __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v0 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                                >> 8U)));
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__data_count;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN) 
         & ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_mask) 
            >> 1U))) {
        __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v9 
            = (0xffU & (IData)((vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_data 
                                >> 8U)));
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v9 = 1U;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_0) 
         & ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)) 
            | (IData)(vlSelf->__VdfgTmp_hf6b87a09__0)))) {
        __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v0 
            = ((7U >= (0x38U & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result) 
                                << 3U))) ? (0xffU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata) 
                                             << (0x38U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result) 
                                                    << 3U))))
                : 0U);
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__data_count;
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN) 
         & (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_mask))) {
        __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v9 
            = (0xffU & (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_data));
        __Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v9 = 1U;
    }
    if (vlSelf->reset) {
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter = 0U;
        __Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_count = 0U;
        __Vdly__Soc__DOT__core__DOT__arbitor__DOT__aw_comp = 0U;
        __Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_comp = 0U;
        __Vdly__Soc__DOT__core__DOT__ioformem__DOT__r_count = 0U;
        __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc = 0x80000000U;
        __Vdly__Soc__DOT__core__DOT__fetch__DOT__old_pc = 0U;
        __Vdly__Soc__DOT__core__DOT__ioformem__DOT__state = 0U;
        __Vdly__Soc__DOT__core__DOT__trap__DOT__state = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__choose_buffer = 0U;
        __Vdly__Soc__DOT__core__DOT__arbitor__DOT__state = 0U;
    } else {
        if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state))) {
            __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter = 0U;
        } else if ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_4)))) {
                __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter 
                    = (0x7fU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter)));
            }
        } else if ((1U & (~ ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state)) 
                             | (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_10))))) {
            __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter)));
        }
        if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN)))) {
            __Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_count 
                = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4)
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_count))));
            __Vdly__Soc__DOT__core__DOT__arbitor__DOT__aw_comp 
                = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4)) 
                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1) 
                      | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp)));
            __Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_comp 
                = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4)) 
                   & (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4) 
                       & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_3)) 
                      | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp)));
        }
        if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))) {
            if (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_6) 
                 & (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_9))) {
                if (vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_11) {
                    __Vdly__Soc__DOT__core__DOT__ioformem__DOT__r_count 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__r_count)));
                } else if (vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_23) {
                    __Vdly__Soc__DOT__core__DOT__ioformem__DOT__r_count 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__r_count)));
                }
            }
        } else if ((1U & (~ ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
                             | (2U != (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)))))) {
            __Vdly__Soc__DOT__core__DOT__ioformem__DOT__r_count 
                = ((IData)(vlSelf->Soc__DOT__core__DOT___ioformem_io_fc_valid)
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__r_count))));
        }
        if (vlSelf->Soc__DOT__core__DOT__fetch__DOT__started) {
            if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0)))) {
                __Vdly__Soc__DOT__core__DOT__fetch__DOT__old_pc 
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
            __Vdly__Soc__DOT__core__DOT__fetch__DOT__old_pc = 0U;
        }
        if (vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0) {
            __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc 
                = vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc;
        } else if (vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2) {
            __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc 
                = ((IData)(4U) + vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc);
        } else if (vlSelf->Soc__DOT__core__DOT__fetch__DOT__started) {
            __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc 
                = vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_7;
        }
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__unnamedblk1__DOT___GEN_7 
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
                                             | ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_6)
                                                 ? 
                                                ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_9)
                                                  ? 
                                                 ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_2)
                                                   ? 2U
                                                   : (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))
                                                  : 1U)
                                                 : (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)))));
        __Vdly__Soc__DOT__core__DOT__ioformem__DOT__state 
            = (3U & ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__unnamedblk1__DOT___GEN_7) 
                     >> (7U & ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state) 
                               << 1U))));
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
        __Vdly__Soc__DOT__core__DOT__trap__DOT__state 
            = ((0x17U >= (0x1fU & ((IData)(3U) * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))))
                ? (7U & (vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_3 
                         >> (0x1fU & ((IData)(3U) * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)))))
                : 0U);
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18 
            = ((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose) 
                 >> 3U) & ((1U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose))
                            ? ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))
                                ? ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_6) 
                                   & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_9)) 
                                      & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type))))
                                : ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
                                   & ((~ (IData)(vlSelf->Soc__DOT__core__DOT___ioformem_io_fc_valid)) 
                                      & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type)))))
                            : ((2U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose))
                                ? (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.io_axi_req_bits_rw)
                                : (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose) 
                                    >> 2U) & (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.io_axi_req_bits_rw)))))
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
        __Vdly__Soc__DOT__core__DOT__arbitor__DOT__state 
            = (3U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_21) 
                     >> (7U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 1U))));
    }
    if (vlSelf->reset) {
        __Vdly__Soc__DOT__core__DOT__interact__DOT__over_count = 0U;
    } else if (vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag) {
        __Vdly__Soc__DOT__core__DOT__interact__DOT__over_count 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count)));
        if (VL_UNLIKELY((0x1eU == (IData)(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count)))) {
            VL_WRITEF("ebreak!\n");
            VL_FINISH_MT("vsrc/Soc.v", 9773, "");
        }
    }
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT__burst_len = 0U;
        vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen = 0U;
        __Vdly__Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer = 0U;
        vlSelf->Soc__DOT__core__DOT__mem__DOT__rdata_buffer = 0ULL;
        vlSelf->Soc__DOT__core__DOT__emreg_reg_wdata = 0ULL;
        vlSelf->Soc__DOT__core__DOT__trap__DOT__cause = 0ULL;
        vlSelf->Soc__DOT__core__DOT__trap__DOT__pc = 0U;
        vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd = 0U;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer = 0U;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu_buffer = 0ULL;
        vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit = 0U;
        __Vdly__Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer = 0U;
        vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataio_buffer = 0ULL;
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__last_addr = 0U;
        __Vdly__Soc__DOT__core__DOT__ioformem__DOT__data_count = 0U;
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC = 0ULL;
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE = 0ULL;
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC = 0ULL;
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE = 0ULL;
        __Vdly__Soc__DOT__core__DOT__csrs__DOT__MIP = 0ULL;
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS = 0ULL;
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH = 0ULL;
        vlSelf->Soc__DOT__core__DOT__emreg_ld_type = 0U;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid = 0U;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient = 0ULL;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U] = 0U;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U] = 0U;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U] = 0U;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U] = 0U;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65[0U] = 0U;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65[1U] = 0U;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65[2U] = 0U;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub33 = 0ULL;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo = 0U;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem = 0U;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_branch_type = 0U;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid = 0U;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_hi = 0ULL;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_lo = 0ULL;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U] = 0U;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[1U] = 0U;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[2U] = 0U;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U] = 0U;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U] = 0U;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U] = 0U;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U] = 0U;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[4U] = 0U;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[0U] = 0U;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[1U] = 0U;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[2U] = 0U;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[3U] = 0U;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[4U] = 0U;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state = 0U;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter = 0U;
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total = 0U;
        __Vdly__Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer = 0U;
        vlSelf->Soc__DOT__core__DOT__mem__DOT__clmem_buffer = 0ULL;
        vlSelf->Soc__DOT__core__DOT__dereg_shamt = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_branch_addr = 0ULL;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT__addr = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_op_b = 0ULL;
        vlSelf->Soc__DOT__core__DOT__dereg_op_a = 0ULL;
        vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata = 0ULL;
        vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr = 0U;
        vlSelf->Soc__DOT__core__DOT__mwreg_wb_type = 0U;
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_data = 0ULL;
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_mask = 0U;
        vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag = 0U;
        vlSelf->Soc__DOT__core__DOT__emreg_csr_wen = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_csr_t = 0ULL;
        __Vdly__Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid = 0U;
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_bits = 0ULL;
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_addr = 0U;
        vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr = 0U;
        vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata = 0ULL;
        vlSelf->Soc__DOT__core__DOT__dereg_alu_op = 0x3fU;
        __Vdly__Soc__DOT__core__DOT__clint__DOT__MSIP = 0U;
        __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIMECMP = 0ULL;
        __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIME = 0ULL;
        vlSelf->Soc__DOT__core__DOT__clint__DOT__rvalue_buf = 0ULL;
        vlSelf->Soc__DOT__core__DOT__clint__DOT__valid_buf = 0U;
        __Vdly__Soc__DOT__core__DOT__ioformem__DOT__begin_flag = 0U;
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__begin_waddr = 0U;
        __Vdly__Soc__DOT__core__DOT__ioformem__DOT__wait_cycle = 0U;
        vlSelf->Soc__DOT__core__DOT__fdreg_pc = 0x80000000U;
        vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr = 0U;
        vlSelf->Soc__DOT__core__DOT__emreg_wb_type = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_csr_wen = 0U;
        vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr = 0U;
        vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata = 0ULL;
        vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata = 0ULL;
        vlSelf->Soc__DOT__core__DOT__dereg_ld_type = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_sd_type = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_wb_type = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr = 0U;
    } else {
        if ((8U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose))) {
            if ((1U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose))) {
                vlSelf->Soc__DOT__core__DOT__arbitor__DOT__burst_len 
                    = (0xfU & (- (IData)((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__ren))));
                vlSelf->Soc__DOT__core__DOT__arbitor__DOT__addr 
                    = ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))
                        ? ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_6)
                            ? ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_9)
                                ? ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_11)
                                    ? (0xfffffff8U 
                                       & vlSelf->Soc__DOT__core__DOT__ioformem__DOT__begin_waddr)
                                    : ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_23)
                                        ? (0xfffffff8U 
                                           & vlSelf->Soc__DOT__core__DOT__ioformem__DOT__begin_waddr)
                                        : 0U)) : vlSelf->Soc__DOT__core__DOT__ioformem__DOT____VdfgTmp_he4e20366__0)
                            : 0U) : (((1U != (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
                                      | (IData)(vlSelf->Soc__DOT__core__DOT___ioformem_io_fc_valid))
                                      ? 0U : vlSelf->Soc__DOT__core__DOT__ioformem__DOT____VdfgTmp_he4e20366__0));
            } else if ((2U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose))) {
                vlSelf->Soc__DOT__core__DOT__arbitor__DOT__burst_len 
                    = (0xfU & 0xfU);
                vlSelf->Soc__DOT__core__DOT__arbitor__DOT__addr 
                    = ((0U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__state))
                        ? 0U : ((1U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__state))
                                 ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___io_axi_req_bits_addr_T_25
                                 : ((2U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__state))
                                     ? ((2U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                         ? ((IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_valid)
                                             ? (0xffffff80U 
                                                & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__addr_reg)
                                             : 0U) : vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__addr_buf)
                                     : ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT___GEN_18)
                                         ? 0U : vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__addr_buf))));
            } else {
                vlSelf->Soc__DOT__core__DOT__arbitor__DOT__burst_len 
                    = (0xfU & (- (IData)((1U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose) 
                                                >> 2U)))));
                vlSelf->Soc__DOT__core__DOT__arbitor__DOT__addr 
                    = ((4U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose))
                        ? ((0U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__state))
                            ? 0U : ((1U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__state))
                                     ? vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___io_axi_req_bits_addr_T_25
                                     : ((2U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__state))
                                         ? ((4U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                             ? ((IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_valid)
                                                 ? 
                                                (0xffffff80U 
                                                 & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__addr_reg)
                                                 : 0U)
                                             : vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__addr_buf)
                                         : ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_18)
                                             ? 0U : vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__addr_buf))))
                        : 0U);
            }
        } else {
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT__burst_len = 0U;
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT__addr = 0U;
        }
        vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_7 
            = (((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.io_cpu_resp_valid) 
                & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
               & (~ (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer)));
        __Vdly__Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_7) 
               | ((~ ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
                      & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer))) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer)));
        if (vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_7) {
            vlSelf->Soc__DOT__core__DOT__mem__DOT__rdata_buffer 
                = vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.io_cpu_resp_bits_data;
        }
        vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_1 
            = (1U & ((0x30200073U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
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
        if (vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag) {
            vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd = 0U;
        } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
            vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd 
                = (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16) 
                    | (0U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type)))
                    ? 0U : (0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                     >> 7U)));
        }
        vlSelf->Soc__DOT__core__DOT__excute__DOT__unnamedblk1__DOT___T_2 
            = (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_mul_div_outvalid) 
                & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
               & (~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer)));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__unnamedblk1__DOT___T_4 
            = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
               & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer));
        __Vdly__Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__unnamedblk1__DOT___T_2) 
               | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__unnamedblk1__DOT___T_4)) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer)));
        if (vlSelf->Soc__DOT__core__DOT__excute__DOT__unnamedblk1__DOT___T_2) {
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu_buffer 
                = vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result;
        } else if (vlSelf->Soc__DOT__core__DOT__excute__DOT__unnamedblk1__DOT___T_4) {
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu_buffer = 0ULL;
        }
        vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_12 
            = (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid) 
                & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
               & (~ (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer)));
        __Vdly__Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_12) 
               | ((~ ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
                      & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer))) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer)));
        if (vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_12) {
            vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataio_buffer 
                = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_bits;
        }
        if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))) {
            if ((1U & (~ (((~ (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_6)) 
                           | (~ (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_9))) 
                          | (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_11))))) {
                __Vdly__Soc__DOT__core__DOT__ioformem__DOT__data_count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__data_count)));
                vlSelf->Soc__DOT__core__DOT__ioformem__DOT__last_addr 
                    = ((IData)(8U) + vlSelf->Soc__DOT__core__DOT____Vcellinp__ioformem__io_excute_waddr);
            }
            if ((((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_6) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_9)) 
                 & (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_11))) {
                vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_addr 
                    = vlSelf->Soc__DOT__core__DOT____Vcellinp__ioformem__io_excute_waddr;
            }
            if ((1U & (((~ (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_6)) 
                        | (~ (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_9))) 
                       | (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_11)))) {
                if (vlSelf->Soc__DOT__core__DOT__ioformem__DOT__begin_flag) {
                    __Vdly__Soc__DOT__core__DOT__ioformem__DOT__wait_cycle 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__wait_cycle)));
                }
            } else {
                __Vdly__Soc__DOT__core__DOT__ioformem__DOT__wait_cycle = 0U;
            }
            __Vdly__Soc__DOT__core__DOT__ioformem__DOT__begin_flag 
                = ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_1) 
                   | (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__begin_flag));
        } else {
            if ((1U & (~ ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
                          | (~ (((2U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
                                 & (IData)(vlSelf->Soc__DOT__core__DOT___ioformem_io_fc_valid)) 
                                & (0U != vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_addr))))))) {
                vlSelf->Soc__DOT__core__DOT__ioformem__DOT__last_addr 
                    = ((IData)(8U) + vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_addr);
            }
            if ((1U & (~ ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
                          | (~ ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT___ioformem_io_fc_valid))))))) {
                __Vdly__Soc__DOT__core__DOT__ioformem__DOT__data_count 
                    = (0U != vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_addr);
                vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_addr = 0U;
                __Vdly__Soc__DOT__core__DOT__ioformem__DOT__wait_cycle = 0U;
            }
            __Vdly__Soc__DOT__core__DOT__ioformem__DOT__begin_flag 
                = ((((1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
                     | (2U != (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))) 
                    | (~ (IData)(vlSelf->Soc__DOT__core__DOT___ioformem_io_fc_valid))) 
                   & (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__begin_flag));
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
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___choose_T 
            = (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divw) 
                << 1U) | (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_div_signed));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_2 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_15) 
               & (~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid)));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___divisor_T_13 
            = (1U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___choose_T));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___divisor_T_15 
            = (2U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___choose_T));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T) 
               & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_2));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_7 
            = (1U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo)) 
                     & (~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem))));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_13 
            = (1U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo)) 
                     & (~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem))));
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid 
            = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T)) 
               & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_3)
                   ? (((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter)) 
                       & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_7)) 
                      | (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid))
                   : ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_9)
                       ? (((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter)) 
                           & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_13)) 
                          | (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid))
                       : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state)) 
                          | (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid)))));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_0[0U] = 0U;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_0[1U] = 0U;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_0[2U] 
            = (IData)(((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter))
                        ? (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient)))
                        : ((1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34 
                                          >> 0x21U)))
                            ? (1ULL | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient 
                                       << 1U)) : (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient 
                                                  << 1U))));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_0[3U] 
            = (IData)((((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter))
                         ? (((QData)((IData)((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient 
                                                                    >> 0x1fU))))))) 
                             << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient)))
                         : ((1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34 
                                           >> 0x21U)))
                             ? (1ULL | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient 
                                        << 1U)) : (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient 
                                                   << 1U))) 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_0[4U] 
            = (IData)(((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter))
                        ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient
                        : ((2U & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[2U])
                            ? (1ULL | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient 
                                       << 1U)) : (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient 
                                                  << 1U))));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_0[5U] 
            = (IData)((((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter))
                         ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient
                         : ((2U & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[2U])
                             ? (1ULL | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient 
                                        << 1U)) : (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient 
                                                   << 1U))) 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_0[6U] 
            = (IData)((((3U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state)) 
                        & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo))
                        ? (1ULL + (~ vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient))
                        : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_0[7U] 
            = (IData)(((((3U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state)) 
                         & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo))
                         ? (1ULL + (~ vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient))
                         : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient) 
                       >> 0x20U));
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient 
            = (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_0[
                                (((IData)(0x3fU) + 
                                  (0xffU & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state) 
                                            << 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state) 
                                                    << 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state) 
                                                       << 6U))))) 
               | (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state) 
                                    << 6U))) ? 0ULL
                    : ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_0[
                                       (((IData)(0x1fU) 
                                         + (0xffU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state) 
                                             << 6U))) 
                                        >> 5U)])) << 
                       ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state) 
                                                   << 6U))))) 
                  | ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_0[
                                     (6U & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state) 
                                            << 1U))])) 
                     >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state) 
                                  << 6U)))));
        if (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T) {
            if (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_2) {
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2 
                    = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN)
                        ? ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___choose_T))
                            ? (QData)((IData)(((1U 
                                                & (IData)(
                                                          (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend 
                                                           >> 0x1fU)))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend)))
                                                : (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend))))
                            : ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___divisor_T_15)
                                ? (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend))
                                : (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___divisor_T_13) 
                                    & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend 
                                               >> 0x3fU)))
                                    ? (1ULL + (~ vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend))
                                    : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend)))
                        : 0ULL);
                if (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divw) {
                    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U] = 0U;
                    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U] = 0U;
                    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U] 
                        = (IData)((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2)));
                    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U] 
                        = (IData)(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2)) 
                                   >> 0x20U));
                } else {
                    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U] 
                        = (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2);
                    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U] 
                        = (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2 
                                   >> 0x20U));
                    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U] = 0U;
                    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U] = 0U;
                }
            }
        } else if (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_3) {
            if ((0x20U != (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter))) {
                __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U] 
                    = (((1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34 
                                       >> 0x21U))) ? 
                        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U]
                         : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U]) 
                       << 1U);
                __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U] 
                    = ((((1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34 
                                        >> 0x21U)))
                          ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U]
                          : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U]) 
                        >> 0x1fU) | (((1U & (IData)(
                                                    (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34 
                                                     >> 0x21U)))
                                       ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U]
                                       : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U]) 
                                     << 1U));
                __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U] 
                    = ((((1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34 
                                        >> 0x21U)))
                          ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U]
                          : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U]) 
                        >> 0x1fU) | (((1U & (IData)(
                                                    (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34 
                                                     >> 0x21U)))
                                       ? (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34) 
                                           << 0x1fU) 
                                          | (0x7fffffffU 
                                             & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U]))
                                       : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U]) 
                                     << 1U));
                __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U] 
                    = ((((1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34 
                                        >> 0x21U)))
                          ? (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34) 
                              << 0x1fU) | (0x7fffffffU 
                                           & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U]))
                          : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U]) 
                        >> 0x1fU) | (((1U & (IData)(
                                                    (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34 
                                                     >> 0x21U)))
                                       ? ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34) 
                                          >> 1U) : 
                                      vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U]) 
                                     << 1U));
            }
        } else if ((1U & (~ ((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_9)) 
                             | (0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter)))))) {
            __Vtemp_h75017c4d__0[1U] = ((((2U & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[2U])
                                           ? (IData)(
                                                     (0x7fffffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U])))))
                                           : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U]) 
                                         >> 0x1fU) 
                                        | (((2U & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[2U])
                                             ? (((IData)(
                                                         (((QData)((IData)(
                                                                           vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[0U])))) 
                                                 << 0x1fU) 
                                                | (IData)(
                                                          ((0x7fffffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U])))) 
                                                           >> 0x20U)))
                                             : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U]) 
                                           << 1U));
            __Vtemp_h75017c4d__0[2U] = ((((2U & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[2U])
                                           ? (((IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[0U])))) 
                                               << 0x1fU) 
                                              | (IData)(
                                                        ((0x7fffffffffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U])))) 
                                                         >> 0x20U)))
                                           : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U]) 
                                         >> 0x1fU) 
                                        | (((2U & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[2U])
                                             ? (((IData)(
                                                         (((QData)((IData)(
                                                                           vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[0U])))) 
                                                 >> 1U) 
                                                | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[0U]))) 
                                                            >> 0x20U)) 
                                                   << 0x1fU))
                                             : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U]) 
                                           << 1U));
            __Vtemp_h75017c4d__0[3U] = ((((2U & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[2U])
                                           ? (((IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[0U])))) 
                                               >> 1U) 
                                              | ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[0U]))) 
                                                          >> 0x20U)) 
                                                 << 0x1fU))
                                           : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U]) 
                                         >> 0x1fU) 
                                        | (((2U & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[2U])
                                             ? ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[0U]))) 
                                                         >> 0x20U)) 
                                                >> 1U)
                                             : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U]) 
                                           << 1U));
            __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U] 
                = (((2U & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[2U])
                     ? (IData)((0x7fffffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U])))))
                     : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U]) 
                   << 1U);
            __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U] 
                = __Vtemp_h75017c4d__0[1U];
            __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U] 
                = __Vtemp_h75017c4d__0[2U];
            __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U] 
                = __Vtemp_h75017c4d__0[3U];
        }
        if (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN) {
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_quo_T_2 
                = ((2U & ((IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend 
                                   >> 0x1fU)) << 1U)) 
                   | (1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor 
                                    >> 0x1fU))));
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_rem_T_2 
                = ((2U & ((IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend 
                                   >> 0x1fU)) << 1U)) 
                   | (1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor 
                                    >> 0x1fU))));
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_3 
                = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN)
                    ? ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___choose_T))
                        ? (QData)((IData)(((1U & (IData)(
                                                         (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor 
                                                          >> 0x1fU)))
                                            ? ((IData)(1U) 
                                               + (~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor)))
                                            : (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor))))
                        : ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___divisor_T_15)
                            ? (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor))
                            : (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___divisor_T_13) 
                                & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor 
                                           >> 0x3fU)))
                                ? (1ULL + (~ vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor))
                                : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor)))
                    : 0ULL);
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_quo_T_11 
                = ((2U & ((IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend 
                                   >> 0x3fU)) << 1U)) 
                   | (1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor 
                                    >> 0x3fU))));
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_rem_T_11 
                = ((2U & ((IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend 
                                   >> 0x3fU)) << 1U)) 
                   | (1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor 
                                    >> 0x3fU))));
            __Vtemp_h639dda77__0[0U] = 1U;
            __Vtemp_h639dda77__0[1U] = 0U;
            __Vtemp_h639dda77__0[2U] = 0U;
            __Vtemp_he18af335__0[0U] = (IData)((~ vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_3));
            __Vtemp_he18af335__0[1U] = (IData)(((~ vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_3) 
                                                >> 0x20U));
            __Vtemp_he18af335__0[2U] = 1U;
            VL_ADD_W(3, __Vtemp_hb2a169e7__0, __Vtemp_h639dda77__0, __Vtemp_he18af335__0);
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65[0U] 
                = __Vtemp_hb2a169e7__0[0U];
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65[1U] 
                = __Vtemp_hb2a169e7__0[1U];
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65[2U] 
                = (1U & __Vtemp_hb2a169e7__0[2U]);
            __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo 
                = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_div_signed) 
                   & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divw)
                       ? ((3U != (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_quo_T_2)) 
                          & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_quo_T_2)) 
                             | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_quo_T_2))))
                       : ((3U != (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_quo_T_11)) 
                          & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_quo_T_11)) 
                             | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_quo_T_11))))));
            __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem 
                = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_div_signed) 
                   & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divw)
                       ? ((3U != (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_rem_T_2)) 
                          & (2U != (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_rem_T_2)))
                       : ((3U != (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_rem_T_11)) 
                          & (2U != (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_rem_T_11)))));
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub33 
                = (0x1ffffffffULL & (1ULL + (0x100000000ULL 
                                             | (QData)((IData)(
                                                               (~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_3)))))));
        }
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_1 
            = ((((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter))
                  ? ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_13)
                      ? 0U : 3U) : (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state)) 
                << 4U) | ((((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter))
                             ? ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_7)
                                 ? 0U : 3U) : (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state)) 
                           << 2U) | ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_2)
                                      ? ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divw)
                                          ? 1U : 2U)
                                      : (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state))));
        __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state 
            = (3U & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_1) 
                     >> (7U & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state) 
                               << 1U))));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT___T_4 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter) 
               == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total));
        if (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state) {
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT___GEN 
                = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT___T_4;
            __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid 
                = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT___GEN) 
                   | (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid));
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0 
                = (1U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state)) 
                         | (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT___T_4)));
            if (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT___GEN) {
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_hi 
                    = (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[2U])));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_lo 
                    = (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[0U])));
            }
            if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0)))) {
                if (((2U == (7U & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])) 
                     | (1U == (7U & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])))) {
                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[0U] 
                        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U];
                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[1U] 
                        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U];
                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[2U] 
                        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U];
                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[3U] 
                        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U];
                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[4U] 
                        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[4U];
                } else {
                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[0U] = 0U;
                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[1U] = 0U;
                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[2U] = 0U;
                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[3U] = 0U;
                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[4U] = 0U;
                }
                VL_NEGATE_W(5, __Vtemp_hae518860__0, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg);
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[0U] 
                    = __Vtemp_hae518860__0[0U];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[1U] 
                    = __Vtemp_hae518860__0[1U];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[2U] 
                    = __Vtemp_hae518860__0[2U];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[3U] 
                    = __Vtemp_hae518860__0[3U];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[4U] 
                    = (0xfU & __Vtemp_hae518860__0[4U]);
                __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U] 
                    = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[1U] 
                        << 0x1eU) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U] 
                                     >> 2U));
                __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[1U] 
                    = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[2U] 
                        << 0x1eU) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[1U] 
                                     >> 2U));
                __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[2U] 
                    = (1U & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[2U] 
                             >> 2U));
                __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U] 
                    = (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U] 
                       << 2U);
                __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U] 
                    = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U] 
                        >> 0x1eU) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U] 
                                     << 2U));
                __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U] 
                    = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U] 
                        >> 0x1eU) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U] 
                                     << 2U));
                __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U] 
                    = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U] 
                        >> 0x1eU) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U] 
                                     << 2U));
                __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[4U] 
                    = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U] 
                        >> 0x1eU) | (0xcU & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[4U] 
                                             << 2U)));
                __Vtemp_h6715fe3f__0[0U] = (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U] 
                                            << 1U);
                __Vtemp_h6715fe3f__0[1U] = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U] 
                                             >> 0x1fU) 
                                            | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U] 
                                               << 1U));
                __Vtemp_h6715fe3f__0[2U] = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U] 
                                             >> 0x1fU) 
                                            | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U] 
                                               << 1U));
                __Vtemp_h6715fe3f__0[3U] = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U] 
                                             >> 0x1fU) 
                                            | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U] 
                                               << 1U));
                __Vtemp_h6715fe3f__0[4U] = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U] 
                                             >> 0x1fU) 
                                            | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[4U] 
                                               << 1U));
                VL_NEGATE_W(5, __Vtemp_h9668e9a5__0, __Vtemp_h6715fe3f__0);
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0U] 
                    = (VSoc__ConstPool__CONST_h1ab9d0d3_0[0U] 
                       & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[0U]);
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[1U] 
                    = (VSoc__ConstPool__CONST_h1ab9d0d3_0[1U] 
                       & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[1U]);
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[2U] 
                    = (VSoc__ConstPool__CONST_h1ab9d0d3_0[2U] 
                       & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[2U]);
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[3U] 
                    = (VSoc__ConstPool__CONST_h1ab9d0d3_0[3U] 
                       & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[3U]);
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[4U] 
                    = (VSoc__ConstPool__CONST_h1ab9d0d3_0[4U] 
                       & ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[0U] 
                           << 5U) | vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[4U]));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[5U] 
                    = (VSoc__ConstPool__CONST_h1ab9d0d3_0[5U] 
                       & ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[0U] 
                           >> 0x1bU) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[1U] 
                                        << 5U)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[6U] 
                    = (VSoc__ConstPool__CONST_h1ab9d0d3_0[6U] 
                       & ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[1U] 
                           >> 0x1bU) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[2U] 
                                        << 5U)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[7U] 
                    = (VSoc__ConstPool__CONST_h1ab9d0d3_0[7U] 
                       & ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[2U] 
                           >> 0x1bU) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[3U] 
                                        << 5U)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[8U] 
                    = (VSoc__ConstPool__CONST_h1ab9d0d3_0[8U] 
                       & ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[0U] 
                           << 0xaU) | ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[3U] 
                                        >> 0x1bU) | 
                                       (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[4U] 
                                        << 5U))));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[9U] 
                    = (VSoc__ConstPool__CONST_h1ab9d0d3_0[9U] 
                       & (((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[0U] 
                            >> 0x16U) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[1U] 
                                         << 0xaU)) 
                          | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[4U] 
                             >> 0x1bU)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0xaU] 
                    = (VSoc__ConstPool__CONST_h1ab9d0d3_0[0xaU] 
                       & ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[1U] 
                           >> 0x16U) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[2U] 
                                        << 0xaU)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0xbU] 
                    = (VSoc__ConstPool__CONST_h1ab9d0d3_0[0xbU] 
                       & ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[2U] 
                           >> 0x16U) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[3U] 
                                        << 0xaU)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0xcU] 
                    = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U] 
                        << 0x10U) | (VSoc__ConstPool__CONST_h1ab9d0d3_0[0xcU] 
                                     & ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[3U] 
                                         >> 0x16U) 
                                        | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[4U] 
                                           << 0xaU))));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0xdU] 
                    = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U] 
                        >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U] 
                                     << 0x10U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0xeU] 
                    = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U] 
                        >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U] 
                                     << 0x10U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0xfU] 
                    = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U] 
                        >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U] 
                                     << 0x10U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x10U] 
                    = ((__Vtemp_h9668e9a5__0[0U] << 0x14U) 
                       | ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U] 
                           >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[4U] 
                                        << 0x10U)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x11U] 
                    = ((__Vtemp_h9668e9a5__0[0U] >> 0xcU) 
                       | (__Vtemp_h9668e9a5__0[1U] 
                          << 0x14U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x12U] 
                    = ((__Vtemp_h9668e9a5__0[1U] >> 0xcU) 
                       | (__Vtemp_h9668e9a5__0[2U] 
                          << 0x14U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x13U] 
                    = ((__Vtemp_h9668e9a5__0[2U] >> 0xcU) 
                       | (__Vtemp_h9668e9a5__0[3U] 
                          << 0x14U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x14U] 
                    = ((__Vtemp_h9668e9a5__0[3U] >> 0xcU) 
                       | ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[0U] 
                           << 0x19U) | (0x1f00000U 
                                        & (__Vtemp_h9668e9a5__0[4U] 
                                           << 0x14U))));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x15U] 
                    = ((0xfffffU & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[0U] 
                                    >> 7U)) | ((0x1f00000U 
                                                & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[0U] 
                                                   >> 7U)) 
                                               | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[1U] 
                                                  << 0x19U)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x16U] 
                    = ((0xfffffU & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[1U] 
                                    >> 7U)) | ((0x1f00000U 
                                                & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[1U] 
                                                   >> 7U)) 
                                               | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[2U] 
                                                  << 0x19U)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x17U] 
                    = ((0xfffffU & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[2U] 
                                    >> 7U)) | ((0x1f00000U 
                                                & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[2U] 
                                                   >> 7U)) 
                                               | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[3U] 
                                                  << 0x19U)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x18U] 
                    = ((0xfffffU & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[3U] 
                                    >> 7U)) | ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[0U] 
                                                << 0x1eU) 
                                               | ((0x1f00000U 
                                                   & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[3U] 
                                                      >> 7U)) 
                                                  | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[4U] 
                                                     << 0x19U))));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x19U] 
                    = ((0xfffffU & ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[0U] 
                                     >> 2U) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[4U] 
                                               >> 7U))) 
                       | ((0x3ff00000U & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[0U] 
                                          >> 2U)) | 
                          (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[1U] 
                           << 0x1eU)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x1aU] 
                    = ((0xfffffU & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[1U] 
                                    >> 2U)) | ((0x3ff00000U 
                                                & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[1U] 
                                                   >> 2U)) 
                                               | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[2U] 
                                                  << 0x1eU)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x1bU] 
                    = ((0xfffffU & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[2U] 
                                    >> 2U)) | ((0x3ff00000U 
                                                & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[2U] 
                                                   >> 2U)) 
                                               | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[3U] 
                                                  << 0x1eU)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x1cU] 
                    = ((0xfffffU & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[3U] 
                                    >> 2U)) | ((0x3ff00000U 
                                                & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[3U] 
                                                   >> 2U)) 
                                               | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[4U] 
                                                  << 0x1eU)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x1dU] 
                    = ((0xfffffU & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[4U] 
                                    >> 2U)) | (0x3ff00000U 
                                               & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[4U] 
                                                  >> 2U)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x1eU] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x1fU] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x20U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x21U] = 0U;
                if ((0x427U >= (0x7ffU & ((IData)(0x85U) 
                                          * (7U & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U]))))) {
                    __Vtemp_he3792748__0[0U] = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x85U) 
                                                      * 
                                                      (7U 
                                                       & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U]))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x3fU 
                                                    & (((IData)(0x85U) 
                                                        * 
                                                        (7U 
                                                         & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x85U) 
                                                       * 
                                                       (7U 
                                                        & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])))))) 
                                                | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[
                                                   (0x3fU 
                                                    & (((IData)(0x85U) 
                                                        * 
                                                        (7U 
                                                         & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x85U) 
                                                       * 
                                                       (7U 
                                                        & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])))));
                    __Vtemp_he3792748__0[1U] = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x85U) 
                                                      * 
                                                      (7U 
                                                       & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U]))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[
                                                  ((IData)(2U) 
                                                   + 
                                                   (0x3fU 
                                                    & (((IData)(0x85U) 
                                                        * 
                                                        (7U 
                                                         & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x85U) 
                                                       * 
                                                       (7U 
                                                        & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])))))) 
                                                | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[
                                                   ((IData)(1U) 
                                                    + 
                                                    (0x3fU 
                                                     & (((IData)(0x85U) 
                                                         * 
                                                         (7U 
                                                          & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])) 
                                                        >> 5U)))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x85U) 
                                                       * 
                                                       (7U 
                                                        & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])))));
                    __Vtemp_he3792748__0[2U] = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x85U) 
                                                      * 
                                                      (7U 
                                                       & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U]))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[
                                                  ((IData)(3U) 
                                                   + 
                                                   (0x3fU 
                                                    & (((IData)(0x85U) 
                                                        * 
                                                        (7U 
                                                         & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x85U) 
                                                       * 
                                                       (7U 
                                                        & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])))))) 
                                                | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[
                                                   ((IData)(2U) 
                                                    + 
                                                    (0x3fU 
                                                     & (((IData)(0x85U) 
                                                         * 
                                                         (7U 
                                                          & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])) 
                                                        >> 5U)))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x85U) 
                                                       * 
                                                       (7U 
                                                        & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])))));
                    __Vtemp_he3792748__0[3U] = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x85U) 
                                                      * 
                                                      (7U 
                                                       & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U]))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[
                                                  ((IData)(4U) 
                                                   + 
                                                   (0x3fU 
                                                    & (((IData)(0x85U) 
                                                        * 
                                                        (7U 
                                                         & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x85U) 
                                                       * 
                                                       (7U 
                                                        & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])))))) 
                                                | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[
                                                   ((IData)(3U) 
                                                    + 
                                                    (0x3fU 
                                                     & (((IData)(0x85U) 
                                                         * 
                                                         (7U 
                                                          & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])) 
                                                        >> 5U)))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x85U) 
                                                       * 
                                                       (7U 
                                                        & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])))));
                    __Vtemp_he3792748__0[4U] = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x85U) 
                                                      * 
                                                      (7U 
                                                       & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U]))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[
                                                  ((IData)(5U) 
                                                   + 
                                                   (0x3fU 
                                                    & (((IData)(0x85U) 
                                                        * 
                                                        (7U 
                                                         & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x85U) 
                                                       * 
                                                       (7U 
                                                        & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])))))) 
                                                | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[
                                                   ((IData)(4U) 
                                                    + 
                                                    (0x3fU 
                                                     & (((IData)(0x85U) 
                                                         * 
                                                         (7U 
                                                          & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])) 
                                                        >> 5U)))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x85U) 
                                                       * 
                                                       (7U 
                                                        & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])))));
                } else {
                    __Vtemp_he3792748__0[0U] = 0U;
                    __Vtemp_he3792748__0[1U] = 0U;
                    __Vtemp_he3792748__0[2U] = 0U;
                    __Vtemp_he3792748__0[3U] = 0U;
                    __Vtemp_he3792748__0[4U] = 0U;
                }
                VL_ADD_W(5, __Vtemp_ha285151e__0, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg, __Vtemp_he3792748__0);
                __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[0U] 
                    = __Vtemp_ha285151e__0[0U];
                __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[1U] 
                    = __Vtemp_ha285151e__0[1U];
                __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[2U] 
                    = __Vtemp_ha285151e__0[2U];
                __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[3U] 
                    = __Vtemp_ha285151e__0[3U];
                __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[4U] 
                    = (0xfU & __Vtemp_ha285151e__0[4U]);
                __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter)));
            }
            __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state 
                = (((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state)) 
                    | (~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT___T_4))) 
                   & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state));
        } else {
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT___GEN = 0U;
            __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid = 0U;
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T 
                = ((((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8) 
                     & (0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))) 
                    << 2U) | ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8)
                               ? (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_h60d3cac5__0) 
                                   | (0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)))
                                   ? 3U : ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
                                           << 1U)) : 0U));
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___T_2 
                = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8) 
                   & (~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid)));
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_hi = 0ULL;
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_lo = 0ULL;
            __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter = 0U;
            if (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___T_2) {
                __Vtemp_h18181908__0[6U] = (((0x3fU 
                                              & ((IData)((QData)((IData)(
                                                                         (3U 
                                                                          & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                                                                >> 0x1fU))))))))) 
                                                 >> 0x19U)) 
                                             | ((IData)(
                                                        (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier)) 
                                                          << 1U) 
                                                         >> 0x20U)) 
                                                >> 0x1aU)) 
                                            | ((0x40U 
                                                & ((IData)((QData)((IData)(
                                                                           (3U 
                                                                            & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                                                                >> 0x1fU))))))))) 
                                                   >> 0x19U)) 
                                               | ((IData)(
                                                          ((QData)((IData)(
                                                                           (3U 
                                                                            & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                                                                >> 0x1fU)))))))) 
                                                           >> 0x20U)) 
                                                  << 7U)));
                __Vtemp_hc32c987f__0[7U] = ((7U & ((IData)(
                                                           ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier)) 
                                                            << 1U)) 
                                                   >> 0x17U)) 
                                            | ((0x1f8U 
                                                & ((IData)(
                                                           ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier)) 
                                                            << 1U)) 
                                                   >> 0x17U)) 
                                               | (((IData)((QData)((IData)(
                                                                           (3U 
                                                                            & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                                                                >> 0x1fU))))))))) 
                                                   << 0xaU) 
                                                  | ((IData)(
                                                             (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier)) 
                                                               << 1U) 
                                                              >> 0x20U)) 
                                                     << 9U))));
                __Vtemp_hdb7ecb01__0[0xbU] = ((0x3fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                                                  >> 0x10U)) 
                                              | ((0x1c0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                                                     >> 0x10U)) 
                                                 | ((0xe00U 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                                                        >> 0x10U)) 
                                                    | (0xf000U 
                                                       & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                                                          >> 0x10U)))));
                __Vtemp_hdb7ecb01__0[0xcU] = ((IData)(
                                                      ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier)) 
                                                       << 1U)) 
                                              << 0x12U);
                __Vtemp_hdb7ecb01__0[0xdU] = ((0x3fU 
                                               & ((IData)(
                                                          ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier)) 
                                                           << 1U)) 
                                                  >> 0xeU)) 
                                              | ((0x1c0U 
                                                  & ((IData)(
                                                             ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier)) 
                                                              << 1U)) 
                                                     >> 0xeU)) 
                                                 | (__Vtemp_hc32c987f__0[7U] 
                                                    << 9U)));
                __Vtemp_hdb7ecb01__0[0xeU] = ((0x3fU 
                                               & (__Vtemp_hc32c987f__0[7U] 
                                                  >> 0x17U)) 
                                              | ((0x1c0U 
                                                  & (__Vtemp_hc32c987f__0[7U] 
                                                     >> 0x17U)) 
                                                 | ((0xe00U 
                                                     & ((0x7fe00U 
                                                         & ((IData)((QData)((IData)(
                                                                                (3U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                                                                >> 0x1fU))))))))) 
                                                            >> 0xdU)) 
                                                        | (0x3fe00U 
                                                           & ((IData)(
                                                                      (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier)) 
                                                                        << 1U) 
                                                                       >> 0x20U)) 
                                                              >> 0xeU)))) 
                                                    | (__Vtemp_h18181908__0[6U] 
                                                       << 0xcU))));
                __Vtemp_h0aaf08a3__0[8U] = ((7U & ((IData)(
                                                           (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                                            >> 0x20U)) 
                                                   >> 0x16U)) 
                                            | ((0x1f8U 
                                                & ((IData)(
                                                           (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                                            >> 0x20U)) 
                                                   >> 0x16U)) 
                                               | (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                                                   << 0xdU) 
                                                  | ((0xc00U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                                                                >> 0x3fU))))) 
                                                         << 0xaU)) 
                                                     | (0x200U 
                                                        & ((IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                                                    >> 0x20U)) 
                                                           >> 0x16U))))));
                __Vtemp_h0aaf08a3__0[9U] = ((7U & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                                                   >> 0x13U)) 
                                            | ((0x1f8U 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                                                   >> 0x13U)) 
                                               | ((0xe00U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                                                      >> 0x13U)) 
                                                  | (0x1000U 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                                                        >> 0x13U)))));
                __Vtemp_h0aaf08a3__0[0xaU] = 0U;
                __Vtemp_h0aaf08a3__0[0xbU] = 0U;
                __Vtemp_h0aaf08a3__0[0xcU] = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                                              << 0x13U);
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[0U] 
                    = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                       << 1U);
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[1U] 
                    = (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                        >> 0x1fU) | ((IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                              >> 0x20U)) 
                                     << 1U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[2U] 
                    = ((IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                >> 0x20U)) >> 0x1fU);
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[3U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[4U] 
                    = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                       << 7U);
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[5U] 
                    = ((7U & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                              >> 0x19U)) | ((0x78U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                                                >> 0x19U)) 
                                            | ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                                        >> 0x20U)) 
                                               << 7U)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[6U] 
                    = ((7U & ((IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                       >> 0x20U)) >> 0x19U)) 
                       | (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                           << 0xaU) | (0x78U & ((IData)(
                                                        (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                                         >> 0x20U)) 
                                                >> 0x19U))));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[7U] 
                    = ((7U & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                              >> 0x16U)) | ((0x1f8U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                                                >> 0x16U)) 
                                            | ((0x200U 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                                                   >> 0x16U)) 
                                               | ((IData)(
                                                          (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                                           >> 0x20U)) 
                                                  << 0xaU))));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[8U] 
                    = __Vtemp_h0aaf08a3__0[8U];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[9U] 
                    = __Vtemp_h0aaf08a3__0[9U];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[0xaU] 
                    = __Vtemp_h0aaf08a3__0[0xaU];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[0xbU] 
                    = __Vtemp_h0aaf08a3__0[0xbU];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[0xcU] 
                    = __Vtemp_h0aaf08a3__0[0xcU];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[0xdU] 
                    = ((7U & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                              >> 0xdU)) | (__Vtemp_hdb7ecb01__0[0xbU] 
                                           << 3U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[0xeU] 
                    = ((__Vtemp_hdb7ecb01__0[0xbU] 
                        >> 0x1dU) | (__Vtemp_hdb7ecb01__0[0xcU] 
                                     << 3U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[0xfU] 
                    = ((__Vtemp_hdb7ecb01__0[0xcU] 
                        >> 0x1dU) | (__Vtemp_hdb7ecb01__0[0xdU] 
                                     << 3U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[0x10U] 
                    = ((__Vtemp_hdb7ecb01__0[0xdU] 
                        >> 0x1dU) | (__Vtemp_hdb7ecb01__0[0xeU] 
                                     << 3U));
                __Vtemp_h7ef64bbb__0[0x10U] = ((0xfU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                          >> 0x1fU))))) 
                                                   >> 0x14U)) 
                                               | (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                                                   << 0x10U) 
                                                  | ((0xff0U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                                >> 0x1fU))))) 
                                                         >> 0x14U)) 
                                                     | (0xf000U 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                                >> 0x1fU))))) 
                                                           << 0xcU)))));
                __Vtemp_h240ba972__0[0x1aU] = ((0xfffU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                          >> 0x1fU))))) 
                                                   >> 8U)) 
                                               | ((0xf000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                             >> 0x1fU))))) 
                                                      >> 8U)) 
                                                  | ((0xff0000U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                                >> 0x1fU))))) 
                                                         >> 8U)) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                               >> 0x1fU))))) 
                                                        << 0x18U))));
                __Vtemp_h240ba972__0[0x1bU] = ((0xfffU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                          >> 0x1fU))))) 
                                                   >> 8U)) 
                                               | ((0xf000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                             >> 0x1fU))))) 
                                                      >> 8U)) 
                                                  | ((0xff0000U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                                >> 0x1fU))))) 
                                                         >> 8U)) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                               >> 0x1fU))))) 
                                                        << 0x18U))));
                __Vtemp_h240ba972__0[0x1cU] = ((0xfffU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                          >> 0x1fU))))) 
                                                   >> 8U)) 
                                               | (__Vtemp_h7ef64bbb__0[0x10U] 
                                                  << 0xcU));
                __Vtemp_h240ba972__0[0x1dU] = ((__Vtemp_h7ef64bbb__0[0x10U] 
                                                >> 0x14U) 
                                               | ((0xf000U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                                                      >> 4U)) 
                                                  | ((0xfff0000U 
                                                      & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                                                         >> 4U)) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                               >> 0x1fU))))) 
                                                        << 0x1cU))));
                __Vtemp_h240ba972__0[0x1eU] = ((0xfffU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                          >> 0x1fU))))) 
                                                   >> 4U)) 
                                               | ((0xf000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                             >> 0x1fU))))) 
                                                      >> 4U)) 
                                                  | ((0xfff0000U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                                >> 0x1fU))))) 
                                                         >> 4U)) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                               >> 0x1fU))))) 
                                                        << 0x1cU))));
                __Vtemp_h240ba972__0[0x1fU] = ((0xfffU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                          >> 0x1fU))))) 
                                                   >> 4U)) 
                                               | ((0xf000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                             >> 0x1fU))))) 
                                                      >> 4U)) 
                                                  | ((0xfff0000U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                                >> 0x1fU))))) 
                                                         >> 4U)) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                               >> 0x1fU))))) 
                                                        << 0x1cU))));
                __Vtemp_h240ba972__0[0x20U] = ((0xfffU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                          >> 0x1fU))))) 
                                                   >> 4U)) 
                                               | ((0xf000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                             >> 0x1fU))))) 
                                                      >> 4U)) 
                                                  | ((0xfff0000U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                                >> 0x1fU))))) 
                                                         >> 4U)) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                               >> 0x1fU))))) 
                                                        << 0x1cU))));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0U] 
                    = (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand);
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[1U] 
                    = (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                               >> 0x20U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[2U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[3U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[4U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[5U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[6U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[7U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[8U] 
                    = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                       << 8U);
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[9U] 
                    = (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                        >> 0x18U) | ((IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                              >> 0x20U)) 
                                     << 8U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0xaU] 
                    = (((- (IData)((1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                  >> 0x3fU))))) 
                        << 8U) | ((IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                           >> 0x20U)) 
                                  >> 0x18U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0xbU] 
                    = (((- (IData)((1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                  >> 0x3fU))))) 
                        >> 0x18U) | ((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                            >> 0x3fU))))) 
                                     << 8U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0xcU] 
                    = (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                        << 0xcU) | (((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                            >> 0x3fU))))) 
                                     >> 0x18U) | (0xf00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                            >> 0x3fU))))) 
                                                     << 8U))));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0xdU] 
                    = (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                        >> 0x14U) | ((IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                              >> 0x20U)) 
                                     << 0xcU));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0xeU] 
                    = (((IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                 >> 0x20U)) >> 0x14U) 
                       | ((- (IData)((1U & (IData)(
                                                   (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                    >> 0x3fU))))) 
                          << 0xcU));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0xfU] 
                    = (((- (IData)((1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                  >> 0x3fU))))) 
                        >> 0x14U) | ((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                            >> 0x3fU))))) 
                                     << 0xcU));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x10U] 
                    = (((- (IData)((1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                  >> 0x3fU))))) 
                        >> 0x14U) | (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                                      << 0x10U) | (0xf000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                             >> 0x3fU))))) 
                                                      << 0xcU))));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x11U] 
                    = ((0xfffU & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                                  >> 0x10U)) | (0xf000U 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                                                   >> 0x10U)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x12U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x13U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x14U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x15U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x16U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x17U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x18U] 
                    = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                       << 0x18U);
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x19U] 
                    = ((0xfffU & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                                  >> 8U)) | ((0xf000U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                                                 >> 8U)) 
                                             | (((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                        >> 0x1fU))))) 
                                                 << 0x18U) 
                                                | (0xff0000U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                                                      >> 8U)))));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x1aU] 
                    = __Vtemp_h240ba972__0[0x1aU];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x1bU] 
                    = __Vtemp_h240ba972__0[0x1bU];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x1cU] 
                    = __Vtemp_h240ba972__0[0x1cU];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x1dU] 
                    = __Vtemp_h240ba972__0[0x1dU];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x1eU] 
                    = __Vtemp_h240ba972__0[0x1eU];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x1fU] 
                    = __Vtemp_h240ba972__0[0x1fU];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x20U] 
                    = __Vtemp_h240ba972__0[0x20U];
                if ((0x217U >= (0x3ffU & ((IData)(0x43U) 
                                          * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))) {
                    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U] 
                        = (((0U == (0x1fU & ((IData)(0x43U) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))
                             ? 0U : (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[
                                     ((IData)(1U) + 
                                      (0x1fU & (((IData)(0x43U) 
                                                 * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x43U) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))))) 
                           | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[
                              (0x1fU & (((IData)(0x43U) 
                                         * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                        >> 5U))] >> 
                              (0x1fU & ((IData)(0x43U) 
                                        * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))));
                    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[1U] 
                        = (((0U == (0x1fU & ((IData)(0x43U) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))
                             ? 0U : (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[
                                     ((IData)(2U) + 
                                      (0x1fU & (((IData)(0x43U) 
                                                 * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x43U) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))))) 
                           | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[
                              ((IData)(1U) + (0x1fU 
                                              & (((IData)(0x43U) 
                                                  * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x43U) 
                                           * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))));
                    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[2U] 
                        = (7U & (((0U == (0x1fU & ((IData)(0x43U) 
                                                   * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))
                                   ? 0U : (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[
                                           ((IData)(3U) 
                                            + (0x1fU 
                                               & (((IData)(0x43U) 
                                                   * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                                  >> 5U)))] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(0x43U) 
                                                     * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))))) 
                                 | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[
                                    ((IData)(2U) + 
                                     (0x1fU & (((IData)(0x43U) 
                                                * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                               >> 5U)))] 
                                    >> (0x1fU & ((IData)(0x43U) 
                                                 * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))));
                } else {
                    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U] = 0U;
                    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[1U] = 0U;
                    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[2U] = 0U;
                }
                __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[0U] = 0U;
                __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[1U] = 0U;
                __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[2U] = 0U;
                __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[3U] = 0U;
                __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[4U] = 0U;
                if ((0x41fU >= (0x7ffU & ((IData)(0x84U) 
                                          * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))) {
                    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U] 
                        = (((0U == (0x1fU & ((IData)(0x84U) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))
                             ? 0U : (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[
                                     ((IData)(1U) + 
                                      (0x3fU & (((IData)(0x84U) 
                                                 * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x84U) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))))) 
                           | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[
                              (0x3fU & (((IData)(0x84U) 
                                         * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                        >> 5U))] >> 
                              (0x1fU & ((IData)(0x84U) 
                                        * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))));
                    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U] 
                        = (((0U == (0x1fU & ((IData)(0x84U) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))
                             ? 0U : (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[
                                     ((IData)(2U) + 
                                      (0x3fU & (((IData)(0x84U) 
                                                 * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x84U) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))))) 
                           | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[
                              ((IData)(1U) + (0x3fU 
                                              & (((IData)(0x84U) 
                                                  * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x84U) 
                                           * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))));
                    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U] 
                        = (((0U == (0x1fU & ((IData)(0x84U) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))
                             ? 0U : (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[
                                     ((IData)(3U) + 
                                      (0x3fU & (((IData)(0x84U) 
                                                 * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x84U) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))))) 
                           | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[
                              ((IData)(2U) + (0x3fU 
                                              & (((IData)(0x84U) 
                                                  * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x84U) 
                                           * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))));
                    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U] 
                        = (((0U == (0x1fU & ((IData)(0x84U) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))
                             ? 0U : (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[
                                     ((IData)(4U) + 
                                      (0x3fU & (((IData)(0x84U) 
                                                 * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x84U) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))))) 
                           | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[
                              ((IData)(3U) + (0x3fU 
                                              & (((IData)(0x84U) 
                                                  * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x84U) 
                                           * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))));
                    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[4U] 
                        = (0xfU & (((0U == (0x1fU & 
                                            ((IData)(0x84U) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))
                                     ? 0U : (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[
                                             ((IData)(5U) 
                                              + (0x3fU 
                                                 & (((IData)(0x84U) 
                                                     * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x84U) 
                                                     * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))))) 
                                   | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[
                                      ((IData)(4U) 
                                       + (0x3fU & (
                                                   ((IData)(0x84U) 
                                                    * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                                   >> 5U)))] 
                                      >> (0x1fU & ((IData)(0x84U) 
                                                   * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))));
                } else {
                    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U] = 0U;
                    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U] = 0U;
                    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U] = 0U;
                    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U] = 0U;
                    __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[4U] = 0U;
                }
                __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total 
                    = ((0x2fU >= (0x3fU & ((IData)(6U) 
                                           * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))
                        ? (0x3fU & (IData)((0x411011821021ULL 
                                            >> (0x3fU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))))
                        : 0U);
            } else {
                __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total = 0U;
            }
            __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state 
                = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___T_2) 
                   | (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state));
        }
        vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_2 
            = (((IData)(vlSelf->Soc__DOT__core__DOT__clint__DOT__valid_buf) 
                & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
               & (~ (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer)));
        __Vdly__Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_2) 
               | ((~ ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
                      & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer))) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer)));
        if (vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_2) {
            vlSelf->Soc__DOT__core__DOT__mem__DOT__clmem_buffer 
                = vlSelf->Soc__DOT__core__DOT__clint__DOT__rvalue_buf;
        }
        if (((((0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
               & (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_6)) 
              & (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_9)) 
             & (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_11))) {
            vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_data 
                = vlSelf->Soc__DOT__core__DOT___excute_io_wdata;
            vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_mask 
                = vlSelf->Soc__DOT__core__DOT___excute_io_wmask;
        }
        if ((0x100073U == (((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                            & (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.io_cpu_resp_valid))
                            ? vlSelf->Soc__DOT__core__DOT__decode__DOT____VdfgTmp_hd891a444__0
                            : 0U))) {
            vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag = 1U;
        }
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__unnamedblk1__DOT___GEN_6 
            = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
               & (IData)(vlSelf->Soc__DOT__core__DOT___ioformem_io_fc_valid));
        __Vdly__Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid 
            = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
               & ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__unnamedblk1__DOT___GEN_6) 
                  | (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid)));
        if ((1U & (~ ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
                      | (~ (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__unnamedblk1__DOT___GEN_6)))))) {
            __Vtemp_h26f7ce52__0[0U] = 0U;
            __Vtemp_h26f7ce52__0[1U] = 0U;
            __Vtemp_h26f7ce52__0[2U] = 0U;
            __Vtemp_h26f7ce52__0[3U] = 0U;
            __Vtemp_h26f7ce52__0[4U] = 0U;
            __Vtemp_h26f7ce52__0[5U] = 0U;
            __Vtemp_h26f7ce52__0[6U] = (IData)(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_13)
                                                 ? 0ULL
                                                 : 
                                                ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_12)
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
                                                  ? 0ULL
                                                  : 
                                                 ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_12)
                                                   ? 
                                                  ((1U 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                       | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_9)))
                                                    ? vlSelf->Soc__DOT__sram__DOT__rdata
                                                    : 0ULL)
                                                   : 
                                                  ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_9)
                                                    ? vlSelf->Soc__DOT__sram__DOT__rdata
                                                    : 0ULL))) 
                                                >> 0x20U));
            vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_bits 
                = (((QData)((IData)(__Vtemp_h26f7ce52__0[
                                    (((IData)(0x3fU) 
                                      + (0xffU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 6U))) 
                                     >> 5U)])) << (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                        << 6U)))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                        << 6U))))) 
                   | (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                        << 6U))) ? 0ULL
                        : ((QData)((IData)(__Vtemp_h26f7ce52__0[
                                           (((IData)(0x1fU) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 6U))) 
                                            >> 5U)])) 
                           << ((IData)(0x20U) - (0x1fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                    << 6U))))) 
                      | ((QData)((IData)(__Vtemp_h26f7ce52__0[
                                         (6U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 1U))])) 
                         >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                      << 6U)))));
        }
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
            if ((0xffU == (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_clex_wmask))) {
                __Vdly__Soc__DOT__core__DOT__clint__DOT__MSIP 
                    = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata);
            } else if ((0xfU == (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_clex_wmask))) {
                __Vdly__Soc__DOT__core__DOT__clint__DOT__MSIP 
                    = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata);
            } else if ((3U == (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_clex_wmask))) {
                __Vdly__Soc__DOT__core__DOT__clint__DOT__MSIP 
                    = ((0xffff0000U & vlSelf->Soc__DOT__core__DOT__clint__DOT__MSIP) 
                       | (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata)));
            } else if ((1U == (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_clex_wmask))) {
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
            if ((0xffU == (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_clex_wmask))) {
                __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIMECMP 
                    = vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata;
            } else if ((0xfU == (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_clex_wmask))) {
                __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIMECMP 
                    = (((QData)((IData)((vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP 
                                         >> 0x20U))) 
                        << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata)));
            } else if ((3U == (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_clex_wmask))) {
                __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIMECMP 
                    = ((0xffffffffffff0000ULL & vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP) 
                       | (QData)((IData)((0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata)))));
            } else if ((1U == (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_clex_wmask))) {
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
        } else if ((0xffU == (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_clex_wmask))) {
            __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIME 
                = vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata;
        } else if ((0xfU == (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_clex_wmask))) {
            __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIME 
                = (((QData)((IData)((vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME 
                                     >> 0x20U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata)));
        } else if ((3U == (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_clex_wmask))) {
            __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIME 
                = ((0xffffffffffff0000ULL & vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME) 
                   | (QData)((IData)((0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata)))));
        } else if ((1U == (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_clex_wmask))) {
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
        if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
            vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen 
                = vlSelf->Soc__DOT__core__DOT__emreg_csr_wen;
            vlSelf->Soc__DOT__core__DOT__emreg_reg_wdata 
                = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen)
                    ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                    : vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_h7d5adbc1__0);
            vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit 
                = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                    ? (7U & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result))
                    : 0U);
            vlSelf->Soc__DOT__core__DOT__emreg_ld_type 
                = vlSelf->Soc__DOT__core__DOT__dereg_ld_type;
            vlSelf->Soc__DOT__core__DOT__dereg_branch_type 
                = ((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                   & ((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                      & ((0x17U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                         & ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                            & ((0x6fU != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                               & ((0x67U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                  & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)))))));
            vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata 
                = vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata;
            vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr 
                = vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr;
            vlSelf->Soc__DOT__core__DOT__mwreg_wb_type 
                = vlSelf->Soc__DOT__core__DOT__emreg_wb_type;
            vlSelf->Soc__DOT__core__DOT__emreg_csr_wen 
                = vlSelf->Soc__DOT__core__DOT__dereg_csr_wen;
            vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr 
                = vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr;
            vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata 
                = vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata;
            vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr 
                = vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr;
            vlSelf->Soc__DOT__core__DOT__emreg_wb_type 
                = vlSelf->Soc__DOT__core__DOT__dereg_wb_type;
            vlSelf->Soc__DOT__core__DOT__dereg_csr_wen 
                = ((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                   & (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen));
            vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr 
                = vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr;
            if (vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush) {
                vlSelf->Soc__DOT__core__DOT__dereg_shamt = 0U;
                vlSelf->Soc__DOT__core__DOT__dereg_branch_addr = 0ULL;
                vlSelf->Soc__DOT__core__DOT__dereg_op_b = 0ULL;
                vlSelf->Soc__DOT__core__DOT__dereg_op_a = 0ULL;
                vlSelf->Soc__DOT__core__DOT__dereg_csr_t = 0ULL;
                vlSelf->Soc__DOT__core__DOT__dereg_alu_op = 0U;
                vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata = 0ULL;
                vlSelf->Soc__DOT__core__DOT__dereg_ld_type = 0U;
                vlSelf->Soc__DOT__core__DOT__dereg_sd_type = 0U;
                vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr = 0U;
                vlSelf->Soc__DOT__core__DOT__dereg_wb_type = 0U;
                vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr = 0U;
            } else {
                vlSelf->Soc__DOT__core__DOT__dereg_shamt 
                    = ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.io_cpu_resp_valid)
                        ? (0x3fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT____VdfgTmp_hd891a444__0 
                                    >> 0x14U)) : 0U);
                vlSelf->Soc__DOT__core__DOT__dereg_branch_addr 
                    = ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__fdreg_pc)) 
                       + (((- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))) 
                           << 0xcU) | (QData)((IData)(
                                                      (((IData)(vlSelf->__VdfgTmp_h3db68a5f__0) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSelf->__VdfgTmp_hd31110f2__0) 
                                                           << 5U) 
                                                          | ((IData)(vlSelf->__VdfgTmp_hd0a2fa80__0) 
                                                             << 1U)))))));
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
                                 & ((~ (IData)(vlSelf->__VdfgTmp_hae56d818__0)) 
                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0) 
                                       | (3U == (3U 
                                                 & (- (IData)(
                                                              (0x3f3U 
                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))))
                        ? vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm
                        : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type))
                            ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4
                            : (QData)((IData)(((1U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type))
                                                ? vlSelf->Soc__DOT__core__DOT__fdreg_pc
                                                : 0U)))));
                vlSelf->Soc__DOT__core__DOT__dereg_csr_t 
                    = vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T;
                vlSelf->Soc__DOT__core__DOT__dereg_alu_op 
                    = vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op;
                vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata 
                    = vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T;
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
            vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata 
                = vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result;
        }
        if ((1U & (~ (((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
                         | (~ (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_6))) 
                        | (~ (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_9))) 
                       | (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_11)) 
                      | (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__begin_flag))))) {
            vlSelf->Soc__DOT__core__DOT__ioformem__DOT__begin_waddr 
                = vlSelf->Soc__DOT__core__DOT____Vcellinp__ioformem__io_excute_waddr;
        }
        vlSelf->Soc__DOT__core__DOT__fdreg_pc = vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc;
    }
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT___GEN_0 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__r_count;
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT___GEN 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__ren;
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT___GEN_0 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__r_count;
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT___GEN_0 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__r_count;
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT___GEN_0 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__r_count;
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT___GEN_0 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__r_count;
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT___GEN_0 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__r_count;
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT___GEN_0 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__r_count;
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT___GEN_0 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__r_count;
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT___GEN_0 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__r_count;
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT___GEN 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__ren;
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT___GEN 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__ren;
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT___GEN 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__ren;
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT___GEN 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__ren;
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT___GEN 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__ren;
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT___GEN 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__ren;
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT___GEN 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__ren;
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT___GEN 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__ren;
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_count 
        = __Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_count;
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp 
        = __Vdly__Soc__DOT__core__DOT__arbitor__DOT__aw_comp;
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp 
        = __Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_comp;
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v0) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v0] 
            = __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v1) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory[0U] 
            = __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory__v1;
    }
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc 
        = __Vdly__Soc__DOT__core__DOT__fetch__DOT__old_pc;
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc = __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc;
    vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0U] = 0ULL;
    vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1] 
        = __Vdlyvval__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1;
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v0) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v0] 
            = __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v1) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory[8U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v2) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory[9U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v3) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory[0xaU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v4) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory[0xbU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v5) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory[0xcU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v6) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory[0xdU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v7) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory[0xeU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v8) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory[0xfU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v9) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory[0U] 
            = __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v9;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v10) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory[0U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v11) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory[1U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v12) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory[2U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v13) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory[3U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v14) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory[4U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v15) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory[5U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v16) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory[6U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory__v17) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory[7U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v0) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v0] 
            = __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v1) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory[8U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v2) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory[9U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v3) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory[0xaU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v4) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory[0xbU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v5) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory[0xcU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v6) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory[0xdU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v7) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory[0xeU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v8) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory[0xfU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v9) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory[0U] 
            = __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v9;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v10) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory[0U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v11) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory[1U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v12) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory[2U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v13) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory[3U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v14) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory[4U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v15) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory[5U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v16) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory[6U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory__v17) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory[7U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v0) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v0] 
            = __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v1) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory[8U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v2) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory[9U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v3) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory[0xaU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v4) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory[0xbU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v5) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory[0xcU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v6) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory[0xdU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v7) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory[0xeU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v8) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory[0xfU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v9) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory[0U] 
            = __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v9;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v10) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory[0U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v11) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory[1U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v12) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory[2U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v13) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory[3U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v14) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory[4U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v15) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory[5U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v16) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory[6U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory__v17) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory[7U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v0) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v0] 
            = __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v1) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory[8U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v2) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory[9U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v3) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory[0xaU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v4) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory[0xbU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v5) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory[0xcU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v6) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory[0xdU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v7) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory[0xeU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v8) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory[0xfU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v9) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory[0U] 
            = __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v9;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v10) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory[0U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v11) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory[1U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v12) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory[2U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v13) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory[3U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v14) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory[4U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v15) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory[5U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v16) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory[6U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory__v17) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory[7U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v0) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v0] 
            = __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v1) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory[8U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v2) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory[9U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v3) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory[0xaU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v4) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory[0xbU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v5) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory[0xcU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v6) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory[0xdU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v7) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory[0xeU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v8) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory[0xfU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v9) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory[0U] 
            = __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v9;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v10) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory[0U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v11) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory[1U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v12) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory[2U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v13) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory[3U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v14) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory[4U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v15) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory[5U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v16) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory[6U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory__v17) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory[7U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v0) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v0] 
            = __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v1) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory[8U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v2) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory[9U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v3) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory[0xaU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v4) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory[0xbU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v5) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory[0xcU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v6) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory[0xdU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v7) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory[0xeU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v8) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory[0xfU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v9) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory[0U] 
            = __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v9;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v10) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory[0U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v11) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory[1U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v12) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory[2U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v13) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory[3U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v14) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory[4U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v15) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory[5U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v16) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory[6U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory__v17) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory[7U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v0) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v0] 
            = __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v1) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory[8U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v2) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory[9U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v3) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory[0xaU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v4) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory[0xbU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v5) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory[0xcU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v6) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory[0xdU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v7) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory[0xeU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v8) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory[0xfU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v9) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory[0U] 
            = __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v9;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v10) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory[0U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v11) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory[1U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v12) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory[2U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v13) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory[3U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v14) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory[4U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v15) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory[5U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v16) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory[6U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory__v17) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory[7U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v0) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v0] 
            = __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v1) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory[8U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v2) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory[9U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v3) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory[0xaU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v4) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory[0xbU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v5) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory[0xcU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v6) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory[0xdU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v7) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory[0xeU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v8) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory[0xfU] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v9) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory[0U] 
            = __Vdlyvval__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v9;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v10) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory[0U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v11) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory[1U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v12) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory[2U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v13) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory[3U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v14) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory[4U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v15) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory[5U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v16) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory[6U] = 0U;
    }
    if (__Vdlyvset__Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory__v17) {
        vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory[7U] = 0U;
    }
    vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count 
        = __Vdly__Soc__DOT__core__DOT__interact__DOT__over_count;
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__r_count 
        = __Vdly__Soc__DOT__core__DOT__ioformem__DOT__r_count;
    vlSelf->Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer 
        = __Vdly__Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer;
    vlSelf->Soc__DOT__core__DOT__trap__DOT__state = __Vdly__Soc__DOT__core__DOT__trap__DOT__state;
    vlSelf->Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer;
    vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer 
        = __Vdly__Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer;
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__data_count 
        = __Vdly__Soc__DOT__core__DOT__ioformem__DOT__data_count;
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP = __Vdly__Soc__DOT__core__DOT__csrs__DOT__MIP;
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo;
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem;
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U] 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U] 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U] 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U] 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter;
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state;
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient;
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid;
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U] 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[1U] 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[1U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[2U] 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[2U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U] 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U] 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U] 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U] 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[4U] 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[4U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[0U] 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[0U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[1U] 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[1U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[2U] 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[2U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[3U] 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[3U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[4U] 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[4U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state;
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter;
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total;
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid 
        = __Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid;
    vlSelf->Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer 
        = __Vdly__Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer;
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
    vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3 
        = ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
           | (7U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)));
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
    vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7 = 
        (1U & ((IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP 
                        >> 7U)) & ((IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                            >> 3U)) 
                                   & (IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE 
                                              >> 7U)))));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_4 
        = (0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_10 
        = (0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T 
        = (0U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_3 
        = (1U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_9 
        = (2U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state));
    __Vtemp_hc3c146cc__0[0U] = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U] 
                                 << 1U) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U] 
                                           >> 0x1fU));
    __Vtemp_hc3c146cc__0[1U] = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U] 
                                 << 1U) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U] 
                                           >> 0x1fU));
    __Vtemp_hc3c146cc__0[2U] = (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U] 
                                >> 0x1fU);
    __Vtemp_h68469746__0[0U] = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65[0U];
    __Vtemp_h68469746__0[1U] = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65[1U];
    __Vtemp_h68469746__0[2U] = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65[2U];
    VL_ADD_W(3, __Vtemp_ha2817953__0, __Vtemp_hc3c146cc__0, __Vtemp_h68469746__0);
    if (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state)) 
         | ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state)) 
            | ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state)) 
               | (0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter)))))) {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[0U] = 0U;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[1U] = 0U;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[2U] = 0U;
    } else {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[0U] 
            = __Vtemp_ha2817953__0[0U];
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[1U] 
            = __Vtemp_ha2817953__0[1U];
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[2U] 
            = (3U & __Vtemp_ha2817953__0[2U]);
    }
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34 
        = (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state)) 
            | ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state)) 
               | (0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter))))
            ? 0ULL : (0x3ffffffffULL & ((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U])) 
                                             << 1U) 
                                            | ((QData)((IData)(
                                                               vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U])) 
                                               >> 0x1fU))) 
                                        + vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub33)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_mul_div_outvalid 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_100 
        = VL_MODDIV_QQQ(64, vlSelf->Soc__DOT__core__DOT__dereg_op_a, vlSelf->Soc__DOT__core__DOT__dereg_op_b);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_97 
        = VL_MODDIVS_QQQ(64, vlSelf->Soc__DOT__core__DOT__dereg_op_a, vlSelf->Soc__DOT__core__DOT__dereg_op_b);
    if ((0x1fU >= (0x3fU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)))) {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_92 
            = VL_SHIFTRS_III(32,32,6, (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a), 
                             (0x3fU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_87 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
               >> (0x3fU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)));
    } else {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_92 
            = (- ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
                  >> 0x1fU));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_87 = 0U;
    }
    __Vtemp_h7cb4ecaa__0[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a);
    __Vtemp_h7cb4ecaa__0[1U] = (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                        >> 0x20U));
    __Vtemp_h7cb4ecaa__0[2U] = 0U;
    __Vtemp_h7cb4ecaa__0[3U] = 0U;
    VL_SHIFTL_WWI(127,127,6, __Vtemp_hb46e09a5__0, __Vtemp_h7cb4ecaa__0, 
                  (0x3fU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_81[0U] 
        = __Vtemp_hb46e09a5__0[0U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_81[1U] 
        = __Vtemp_hb46e09a5__0[1U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_81[2U] 
        = __Vtemp_hb46e09a5__0[2U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_81[3U] 
        = (0x7fffffffU & __Vtemp_hb46e09a5__0[3U]);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_78 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
           - (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b));
    if ((0x1fU >= (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt))) {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_69 
            = VL_SHIFTRS_III(32,32,6, (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a), (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_65 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
               >> (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt));
    } else {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_69 
            = (- ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
                  >> 0x1fU));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_65 = 0U;
    }
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47 
        = (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
           & vlSelf->Soc__DOT__core__DOT__dereg_op_b);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_34 
        = (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
           >> (0x3fU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_38 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->Soc__DOT__core__DOT__dereg_op_a, 
                         (0x3fU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_58 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
           + (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b));
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid 
        = __Vdly__Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid;
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state 
        = __Vdly__Soc__DOT__core__DOT__arbitor__DOT__state;
    vlSelf->Soc__DOT__core__DOT__clint__DOT__MSIP = __Vdly__Soc__DOT__core__DOT__clint__DOT__MSIP;
    vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP 
        = __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIMECMP;
    vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME 
        = __Vdly__Soc__DOT__core__DOT__clint__DOT__MTIME;
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__wait_cycle 
        = __Vdly__Soc__DOT__core__DOT__ioformem__DOT__wait_cycle;
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__begin_flag 
        = __Vdly__Soc__DOT__core__DOT__ioformem__DOT__begin_flag;
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state 
        = __Vdly__Soc__DOT__core__DOT__ioformem__DOT__state;
    vlSelf->Soc__DOT__core__DOT__regfile__DOT___regs_ext_R0_data 
        = vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
        [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5 
        = (((QData)((IData)((- (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_58 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_58)));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_8 
        = (2U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T = 
        (0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_2 
        = (1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_8 
        = ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           | ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
              | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN 
        = ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           | (0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_13 
        = (1U & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                 | ((~ (IData)((3U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)))) 
                    | (2U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)))));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h4ab110e3__0 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & (1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc0e633fc__0 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & (1U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_h60d3cac5__0 
        = ((0x12U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
           | (0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_hf1075dbb__0 
        = ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
           | (0x25U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_126 
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
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_23 
        = ((0xfU == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__wait_cycle)) 
           | (0xfU == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__data_count)));
    vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN)
            ? 0U : vlSelf->Soc__DOT__core__DOT__arbitor__DOT__addr);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_3 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h4ab110e3__0) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__burst_len) 
              == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_count)));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h4ab110e3__0));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h4ab110e3__0));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_h60d3cac5__0) 
           | ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
              | ((0x15U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
                 | (0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)))));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_15 
        = ((0x16U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
           | ((0x17U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
              | (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_hf1075dbb__0)));
    __Vtemp_h7cb4ecaa__1[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a);
    __Vtemp_h7cb4ecaa__1[1U] = (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                        >> 0x20U));
    __Vtemp_h7cb4ecaa__1[2U] = 0U;
    __Vtemp_h7cb4ecaa__1[3U] = 0U;
    VL_SHIFTL_WWI(127,127,6, __Vtemp_he3381e13__0, __Vtemp_h7cb4ecaa__1, (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt));
    vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid)
            ? (((0x12U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
                | (0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)))
                ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_lo
                : (((0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
                    | ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
                       | (0x15U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))))
                    ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_hi
                    : 0ULL)) : ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid)
                                 ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient
                                 : ((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                     ? 0ULL : ((0x28U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                ? (
                                                   (~ vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
                                                   & vlSelf->Soc__DOT__core__DOT__dereg_op_b)
                                                : (
                                                   (0x27U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_100 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_100)))
                                                    : 
                                                   ((0x26U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_97 
                                                                                >> 0x1fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_97)))
                                                     : 
                                                    ((0x22U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_92 
                                                                                >> 0x1fU))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_92)))
                                                      : 
                                                     ((0x21U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_87 
                                                                                >> 0x1fU))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_87)))
                                                       : 
                                                      ((0x20U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_81[0U] 
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
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_78 
                                                                                >> 0x1fU))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_78)))
                                                         : 
                                                        ((0x1eU 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                          ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5
                                                          : 
                                                         ((0x1dU 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                           ? 
                                                          (((QData)((IData)(
                                                                            (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_69 
                                                                                >> 0x1fU))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_69)))
                                                           : 
                                                          ((0x1cU 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                            ? 
                                                           (((QData)((IData)(
                                                                             (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_65 
                                                                                >> 0x1fU))))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_65)))
                                                            : 
                                                           ((0x1bU 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                             ? 
                                                            (((QData)((IData)(
                                                                              (- (IData)(
                                                                                (__Vtemp_he3381e13__0[0U] 
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
                                                              ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5
                                                              : 
                                                             ((0x19U 
                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                               ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_100
                                                               : 
                                                              ((0x18U 
                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_100
                                                                : 
                                                               ((0x11U 
                                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                 ? 
                                                                (~ vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47)
                                                                 : 
                                                                ((0x10U 
                                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                  ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47
                                                                  : 
                                                                 ((0xfU 
                                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                   ? 
                                                                  VL_SHIFTRS_QQI(64,64,6, vlSelf->Soc__DOT__core__DOT__dereg_op_a, (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt))
                                                                   : 
                                                                  ((0xeU 
                                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                    ? 
                                                                   (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                                                    >> (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt))
                                                                    : 
                                                                   ((0xdU 
                                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                     ? 
                                                                    (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                                                     << (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt))
                                                                     : 
                                                                    (((QData)((IData)(
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
                                                                                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_81[1U]
                                                                                 : (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_126 
                                                                                >> 0x20U))))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                ((0xcU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                                 ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_38)
                                                                                 : 
                                                                                ((0xbU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                                 ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_34)
                                                                                 : 
                                                                                ((0xaU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                                 ? 
                                                                                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_81[0U]
                                                                                 : (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_126)))))))))))))))))))))))))))));
    vlSelf->Soc__DOT__sram__DOT__need_resp = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_3) 
                                              & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4));
    if (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8) {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
            = vlSelf->Soc__DOT__core__DOT__dereg_op_a;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
            = vlSelf->Soc__DOT__core__DOT__dereg_op_b;
    } else {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand = 0ULL;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier = 0ULL;
    }
    if (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_15) {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divw 
            = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_hf1075dbb__0;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_div_signed 
            = ((0x16U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
               | (0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend 
            = vlSelf->Soc__DOT__core__DOT__dereg_op_a;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor 
            = vlSelf->Soc__DOT__core__DOT__dereg_op_b;
    } else {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divw = 0U;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_div_signed = 0U;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend = 0ULL;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor = 0ULL;
    }
    vlSelf->Soc__DOT__core__DOT__excute__DOT___mul_div_type_T_16 
        = ((0x12U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
           | ((0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
              | ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
                 | ((0x15U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
                    | ((0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
                       | (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_15))))));
    vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_branch_type) 
           & (0U != vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result));
    vlSelf->Soc__DOT__core__DOT___excute_io_clex_wmask 
        = ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
            ? 0xffU : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                        ? 0xfU : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                                   ? 3U : (1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))));
    vlSelf->__VdfgTmp_hf6b87a09__0 = (0xffU & ((3U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                                                ? ((IData)(0xfU) 
                                                   << 
                                                   (7U 
                                                    & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)))
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                                                    ? 
                                                   ((IData)(3U) 
                                                    << 
                                                    (7U 
                                                     & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                                                     ? 
                                                    ((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)))
                                                     : 0U))));
    vlSelf->Soc__DOT__core__DOT____Vcellinp__DI__mem_access 
        = (0U != ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type) 
                  | (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6 
        = (((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type)) 
            | (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))) 
           & ((0U != (vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result 
                      >> 0x19U)) & (0x200c000ULL > vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)));
    if (vlSelf->Soc__DOT__core__DOT__excute__DOT___mul_div_type_T_16) {
        vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_h7d5adbc1__0 
            = (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_mul_div_outvalid) 
                | (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer))
                ? ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer)
                    ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu_buffer
                    : vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)
                : 0ULL);
        vlSelf->Soc__DOT__core__DOT__fc__DOT__MULDIV_stall 
            = (1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_mul_div_outvalid)));
    } else {
        vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_h7d5adbc1__0 
            = vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result;
        vlSelf->Soc__DOT__core__DOT__fc__DOT__MULDIV_stall = 0U;
    }
    vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6)) 
           & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type)));
    vlSelf->__VdfgTmp_h9d5684c6__0 = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6)) 
                                      & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)));
    vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type)) 
           | (3U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type)));
    vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type))
            ? vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_h7d5adbc1__0
            : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type))
                ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                : 0ULL));
    vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h7bd08a2f__0 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)) 
           & ((~ (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag)) 
              & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__MULDIV_stall)));
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT____VdfgTmp_he4e20366__0 
        = ((((IData)(vlSelf->__VdfgTmp_h9d5684c6__0)
              ? (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result 
                         >> 3U)) : 0U) | ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                                           ? (IData)(
                                                     (vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result 
                                                      >> 3U))
                                           : 0U)) << 3U);
    vlSelf->Soc__DOT__core__DOT____Vcellinp__ioformem__io_excute_waddr 
        = ((IData)(vlSelf->__VdfgTmp_h9d5684c6__0) ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)
            : 0U);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_11 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__begin_flag) 
           & (vlSelf->Soc__DOT__core__DOT__ioformem__DOT__last_addr 
              != vlSelf->Soc__DOT__core__DOT____Vcellinp__ioformem__io_excute_waddr));
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_9 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)) 
           & (0xa0ffffffU < vlSelf->Soc__DOT__core__DOT____Vcellinp__ioformem__io_excute_waddr));
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_6 
        = ((IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__DI__mem_access) 
           & (0x9fffffffU < (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                               ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)
                               : 0U) | vlSelf->Soc__DOT__core__DOT____Vcellinp__ioformem__io_excute_waddr)));
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_2 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_11) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_23));
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_3 
        = (1U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_6)) 
                 | (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_9)));
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT____VdfgTmp_hd1afc83c__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_6) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_9));
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_1 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_11)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT____VdfgTmp_hd1afc83c__0));
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_0 
        = ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_1));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__2(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT___load_use_T_12;
    Soc__DOT__core__DOT__decode__DOT___load_use_T_12 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT___load_use_T_8;
    Soc__DOT__core__DOT__decode__DOT___load_use_T_8 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_3;
    Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_3 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h69b28aa1__0;
    Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h69b28aa1__0 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h83c98ea0__0;
    Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h83c98ea0__0 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hdd103720__0;
    Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hdd103720__0 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h32d1be8b__0;
    Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h32d1be8b__0 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3c60961a__0;
    Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3c60961a__0 = 0;
    CData/*6:0*/ __VdfgTmp_hd301f469__0;
    __VdfgTmp_hd301f469__0 = 0;
    VlWide<12>/*383:0*/ __Vtemp_h3c1ab257__0;
    VlWide<16>/*511:0*/ __Vtemp_h94f171c3__0;
    VlWide<14>/*447:0*/ __Vtemp_h9b08c88b__0;
    VlWide<16>/*511:0*/ __Vtemp_h3fa6f579__0;
    // Body
    vlSelf->Soc__DOT__core__DOT___excute_io_wdata = 
        (vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata 
         << (0x38U & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result) 
                      << 3U)));
    vlSelf->Soc__DOT__core__DOT___excute_io_wmask = 
        ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
          ? 0xffU : (IData)(vlSelf->__VdfgTmp_hf6b87a09__0));
    vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
             ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
             : 0ULL) | ((IData)(vlSelf->__VdfgTmp_h9d5684c6__0)
                         ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                         : 0ULL));
    vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer)
            ? vlSelf->Soc__DOT__core__DOT__mem__DOT__clmem_buffer
            : ((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer)
                ? vlSelf->Soc__DOT__core__DOT__mem__DOT__rdata_buffer
                : ((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer)
                    ? vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataio_buffer
                    : ((IData)(vlSelf->Soc__DOT__core__DOT__clint__DOT__valid_buf)
                        ? vlSelf->Soc__DOT__core__DOT__clint__DOT__rvalue_buf
                        : ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.io_cpu_resp_valid)
                            ? vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.io_cpu_resp_bits_data
                            : ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid)
                                ? vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_bits
                                : 0ULL))))));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__choose_buffer;
    vlSelf->Soc__DOT__core__DOT__decode__DOT____VdfgTmp_hd891a444__0 
        = ((4U & vlSelf->Soc__DOT__core__DOT__fdreg_pc)
            ? (IData)((((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc_reg)
                         ? (((QData)((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_4[
                                             (((IData)(0x3fU) 
                                               + (0x3c0U 
                                                  & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__addr_reg 
                                                     << 3U))) 
                                              >> 5U)])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_4[
                                                         (0x1eU 
                                                          & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__addr_reg 
                                                             >> 2U))])))
                         : (((QData)((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__read[
                                             (((IData)(0x3fU) 
                                               + (0x3c0U 
                                                  & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__addr_reg 
                                                     << 3U))) 
                                              >> 5U)])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__read[
                                                         (0x1eU 
                                                          & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__addr_reg 
                                                             >> 2U))])))) 
                       >> 0x20U)) : (IData)(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__is_alloc_reg)
                                              ? (((QData)((IData)(
                                                                  vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_4[
                                                                  (((IData)(0x3fU) 
                                                                    + 
                                                                    (0x3c0U 
                                                                     & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__addr_reg 
                                                                        << 3U))) 
                                                                   >> 5U)])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_4[
                                                                   (0x1eU 
                                                                    & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__addr_reg 
                                                                       >> 2U))])))
                                              : (((QData)((IData)(
                                                                  vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__read[
                                                                  (((IData)(0x3fU) 
                                                                    + 
                                                                    (0x3c0U 
                                                                     & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__addr_reg 
                                                                        << 3U))) 
                                                                   >> 5U)])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__read[
                                                                   (0x1eU 
                                                                    & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__addr_reg 
                                                                       >> 2U))]))))));
    vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid 
        = ((IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__DI__mem_access) 
           & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6)) 
              & (0xa0000000ULL > vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T)));
    __Vtemp_h3c1ab257__0[0U] = (IData)(((6U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                         ? (((- (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                            >> 0x3fU)))))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                          >> 0x30U))))))
                                         : ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                             ? (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x2fU)))))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                              >> 0x20U))))))
                                             : ((2U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x1fU)))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                               >> 0x10U))))))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0xfU)))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)))))
                                                  : 0ULL)))));
    __Vtemp_h3c1ab257__0[1U] = (IData)((((6U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                          ? (((- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                             >> 0x3fU)))))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(
                                                                          (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                           >> 0x30U))))))
                                          : ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                              ? (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x2fU)))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                               >> 0x20U))))))
                                              : ((2U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x1fU)))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x10U))))))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0xfU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)))))
                                                   : 0ULL)))) 
                                        >> 0x20U));
    __Vtemp_h94f171c3__0[0U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                       >> 8U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                              >> 7U))))))))) 
                                 << 8U) | (0xffU & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)));
    __Vtemp_h94f171c3__0[1U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                       >> 8U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                              >> 7U))))))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 8U))))) 
                                                         << 0x38U) 
                                                        | (0xffffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 7U)))))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h94f171c3__0[2U] = (((IData)(((((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                        >> 8U))))) 
                                            << 0x38U) 
                                           | (0xffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                               >> 7U)))))))) 
                                          >> 0x20U)) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x10U))))) 
                                                        << 0x38U) 
                                                       | (0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0xfU))))))))) 
                                              << 8U));
    __Vtemp_h94f171c3__0[3U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                       >> 0x10U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                              >> 0xfU))))))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x10U))))) 
                                                         << 0x38U) 
                                                        | (0xffffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0xfU)))))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h94f171c3__0[4U] = (((IData)(((((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                        >> 0x10U))))) 
                                            << 0x38U) 
                                           | (0xffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                               >> 0xfU)))))))) 
                                          >> 0x20U)) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x18U))))) 
                                                        << 0x38U) 
                                                       | (0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x17U))))))))) 
                                              << 8U));
    __Vtemp_h94f171c3__0[5U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                       >> 0x18U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                              >> 0x17U))))))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x18U))))) 
                                                         << 0x38U) 
                                                        | (0xffffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x17U)))))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h94f171c3__0[6U] = (((IData)(((((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                        >> 0x18U))))) 
                                            << 0x38U) 
                                           | (0xffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                               >> 0x17U)))))))) 
                                          >> 0x20U)) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x20U))))) 
                                                        << 0x38U) 
                                                       | (0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x1fU))))))))) 
                                              << 8U));
    __Vtemp_h94f171c3__0[7U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                       >> 0x20U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                              >> 0x1fU))))))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x20U))))) 
                                                         << 0x38U) 
                                                        | (0xffffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x1fU)))))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h94f171c3__0[8U] = (((IData)(((((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                        >> 0x20U))))) 
                                            << 0x38U) 
                                           | (0xffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                               >> 0x1fU)))))))) 
                                          >> 0x20U)) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x28U))))) 
                                                        << 0x38U) 
                                                       | (0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x27U))))))))) 
                                              << 8U));
    __Vtemp_h94f171c3__0[9U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                       >> 0x28U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                              >> 0x27U))))))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x28U))))) 
                                                         << 0x38U) 
                                                        | (0xffffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x27U)))))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h94f171c3__0[0xaU] = (((IData)(((((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                          >> 0x28U))))) 
                                              << 0x38U) 
                                             | (0xffffffffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x27U)))))))) 
                                            >> 0x20U)) 
                                   >> 0x18U) | ((IData)(
                                                        (((QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x30U))))) 
                                                          << 0x38U) 
                                                         | (0xffffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x2fU))))))))) 
                                                << 8U));
    __Vtemp_h94f171c3__0[0xbU] = (((IData)((((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                         >> 0x30U))))) 
                                             << 0x38U) 
                                            | (0xffffffffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x2fU))))))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x30U))))) 
                                                           << 0x38U) 
                                                          | (0xffffffffffffffULL 
                                                             & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x2fU)))))))) 
                                                         >> 0x20U)) 
                                                << 8U));
    __Vtemp_h94f171c3__0[0xcU] = (((IData)(((((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                          >> 0x30U))))) 
                                              << 0x38U) 
                                             | (0xffffffffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x2fU)))))))) 
                                            >> 0x20U)) 
                                   >> 0x18U) | ((IData)(
                                                        (((QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x38U))))) 
                                                          << 0x38U) 
                                                         | (0xffffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x37U))))))))) 
                                                << 8U));
    __Vtemp_h94f171c3__0[0xdU] = (((IData)((((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                         >> 0x38U))))) 
                                             << 0x38U) 
                                            | (0xffffffffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x37U))))))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x38U))))) 
                                                           << 0x38U) 
                                                          | (0xffffffffffffffULL 
                                                             & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x37U)))))))) 
                                                         >> 0x20U)) 
                                                << 8U));
    __Vtemp_h94f171c3__0[0xeU] = (((IData)((0xffffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                             >> 0x3fU)))))))) 
                                   << 8U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x38U))))) 
                                                        << 0x38U) 
                                                       | (0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x37U)))))))) 
                                                      >> 0x20U)) 
                                             >> 0x18U));
    __Vtemp_h94f171c3__0[0xfU] = (((IData)((0xffffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                             >> 0x3fU)))))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x3fU))))))) 
                                                         >> 0x20U)) 
                                                << 8U));
    __Vtemp_h9b08c88b__0[0U] = (IData)((((QData)((IData)(
                                                         __Vtemp_h94f171c3__0[
                                                         (((IData)(0x3fU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                               << 6U))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                  << 6U)))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                     << 6U))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                 << 6U)))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                __Vtemp_h94f171c3__0[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                      << 6U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                     << 6U))))) 
                                           | ((QData)((IData)(
                                                              __Vtemp_h94f171c3__0[
                                                              (0xeU 
                                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                  << 1U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                     << 6U))))));
    __Vtemp_h9b08c88b__0[1U] = (IData)(((((QData)((IData)(
                                                          __Vtemp_h94f171c3__0[
                                                          (((IData)(0x3fU) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                << 6U))) 
                                                           >> 5U)])) 
                                          << ((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                   << 6U)))
                                               ? 0x20U
                                               : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                      << 6U))))) 
                                         | (((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                  << 6U)))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 __Vtemp_h94f171c3__0[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                       << 6U))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                      << 6U))))) 
                                            | ((QData)((IData)(
                                                               __Vtemp_h94f171c3__0[
                                                               (0xeU 
                                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                   << 1U))])) 
                                               >> (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                      << 6U))))) 
                                        >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0U] = 0U;
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[1U] = 0U;
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[2U] 
        = __Vtemp_h9b08c88b__0[0U];
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[3U] 
        = __Vtemp_h9b08c88b__0[1U];
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[4U] 
        = __Vtemp_h3c1ab257__0[0U];
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[5U] 
        = __Vtemp_h3c1ab257__0[1U];
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[6U] 
        = (IData)(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                    ? (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                               >> 0x3fU))))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                     >> 0x20U))))
                    : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                        ? (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)))
                        : 0ULL)));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[7U] 
        = (IData)((((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                     ? (((QData)((IData)((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                >> 0x3fU))))))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                      >> 0x20U))))
                     : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                         ? (((QData)((IData)((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                    >> 0x1fU))))))) 
                             << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)))
                         : 0ULL)) >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[8U] 
        = (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value);
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[9U] 
        = (IData)((vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                   >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xaU] 
        = (IData)((QData)((IData)((0xffU & ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                             ? (IData)(
                                                       (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                        >> 0x38U))
                                             : ((6U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                 ? (IData)(
                                                           (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                            >> 0x30U))
                                                 : (IData)(
                                                           ((((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)))) 
                                                                 << 0x30U) 
                                                                | (0xffffffffffffULL 
                                                                   & vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value))) 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                << 3U))))))))));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xbU] 
        = (IData)(((QData)((IData)((0xffU & ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                              ? (IData)(
                                                        (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                         >> 0x38U))
                                              : ((6U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                  ? (IData)(
                                                            (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                             >> 0x30U))
                                                  : (IData)(
                                                            ((((QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)))) 
                                                                  << 0x30U) 
                                                                 | (0xffffffffffffULL 
                                                                    & vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value))) 
                                                             >> 
                                                             (0x3fU 
                                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                 << 3U))))))))) 
                   >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xcU] 
        = (IData)(((6U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                    ? (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                       >> 0x30U) : ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                     ? (QData)((IData)(
                                                       (0xffffU 
                                                        & (IData)(
                                                                  (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                   >> 0x20U)))))
                                     : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                       >> 0x10U)))))
                                         : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                             ? (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value))))
                                             : 0ULL)))));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xdU] 
        = (IData)((((6U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                     ? (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                        >> 0x30U) : ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                    >> 0x20U)))))
                                      : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                          ? (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                        >> 0x10U)))))
                                          : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value))))
                                              : 0ULL)))) 
                   >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xeU] 
        = (IData)(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                    ? (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                       >> 0x20U) : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                     ? (QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value))
                                     : 0ULL)));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xfU] 
        = (IData)((((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                     ? (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                        >> 0x20U) : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                      ? (QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value))
                                      : 0ULL)) >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_5 
        = (IData)((2U == (3U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_6 
        = (IData)((0U == (3U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_2 
        = (1U & ((~ ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                     & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                        >> 3U))) | (0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))));
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__started 
        = (1U & (~ (IData)(vlSelf->reset)));
    if (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.io_cpu_resp_valid) {
        vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0 
            = (0U != (0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT____VdfgTmp_hd891a444__0 
                               >> 0x14U)));
        vlSelf->Soc__DOT__core__DOT___decode_io_deio_reg_waddr 
            = (0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT____VdfgTmp_hd891a444__0 
                        >> 7U));
        vlSelf->__VdfgTmp_hd31110f2__0 = (0x3fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT____VdfgTmp_hd891a444__0 
                                                   >> 0x19U));
        vlSelf->__VdfgTmp_hd0a2fa80__0 = (0xfU & (vlSelf->Soc__DOT__core__DOT__decode__DOT____VdfgTmp_hd891a444__0 
                                                  >> 8U));
        vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr 
            = (vlSelf->Soc__DOT__core__DOT__decode__DOT____VdfgTmp_hd891a444__0 
               >> 0x14U);
        vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr 
            = (0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT____VdfgTmp_hd891a444__0 
                        >> 0x14U));
        vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr 
            = (0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT____VdfgTmp_hd891a444__0 
                        >> 0xfU));
        __VdfgTmp_hd301f469__0 = (vlSelf->Soc__DOT__core__DOT__decode__DOT____VdfgTmp_hd891a444__0 
                                  >> 0x19U);
        vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
            = vlSelf->Soc__DOT__core__DOT__decode__DOT____VdfgTmp_hd891a444__0;
        vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0 
            = (0x7fU & vlSelf->Soc__DOT__core__DOT__decode__DOT____VdfgTmp_hd891a444__0);
        vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0 
            = (vlSelf->Soc__DOT__core__DOT__decode__DOT____VdfgTmp_hd891a444__0 
               >> 0x1fU);
        vlSelf->__VdfgTmp_h3db68a5f__0 = (1U & (vlSelf->Soc__DOT__core__DOT__decode__DOT____VdfgTmp_hd891a444__0 
                                                >> 7U));
        vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0 
            = (0U != (0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT____VdfgTmp_hd891a444__0 
                               >> 0xfU)));
    } else {
        vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0 = 0U;
        vlSelf->Soc__DOT__core__DOT___decode_io_deio_reg_waddr = 0U;
        vlSelf->__VdfgTmp_hd31110f2__0 = 0U;
        vlSelf->__VdfgTmp_hd0a2fa80__0 = 0U;
        vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr = 0U;
        vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr = 0U;
        vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr = 0U;
        __VdfgTmp_hd301f469__0 = 0U;
        vlSelf->Soc__DOT__core__DOT__decode__DOT__inst = 0x13U;
        vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0 = 0x13U;
        vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0 = 0U;
        vlSelf->__VdfgTmp_h3db68a5f__0 = 0U;
        vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0 = 0U;
    }
    vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata 
        = (((1U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type)) 
            | (3U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type)))
            ? vlSelf->Soc__DOT__core__DOT__emreg_reg_wdata
            : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))
                ? (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
                                    (((IData)(0x3fU) 
                                      + (0x1ffU & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                   << 6U))) 
                                     >> 5U)])) << (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                        << 6U)))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                        << 6U))))) 
                   | (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                        << 6U))) ? 0ULL
                        : ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
                                           (((IData)(0x1fU) 
                                             + (0x1ffU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                   << 6U))) 
                                            >> 5U)])) 
                           << ((IData)(0x20U) - (0x1fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                    << 6U))))) 
                      | ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
                                         (0xeU & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                  << 1U))])) 
                         >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                      << 6U))))) : 0ULL));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr) 
              == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr)));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_csr_wen) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr) 
              == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr)));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr) 
              == (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr)));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0) 
           & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type)) 
              & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr) 
                 == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr))));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0) 
           & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
              & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr) 
                 == (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr))));
    Soc__DOT__core__DOT__decode__DOT___load_use_T_8 
        = ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr) 
           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we) 
              & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr) 
                 == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr))));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0) 
           & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type)) 
              & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr) 
                 == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr))));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0) 
           & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
              & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr) 
                 == (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr))));
    Soc__DOT__core__DOT__decode__DOT___load_use_T_12 
        = ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr) 
           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we) 
              & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr) 
                 == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr))));
    vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2 = 
        ((0x73U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
         & (IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                    >> 3U)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6 
        = ((0x17U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
           | (0x37U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN 
        = ((((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.io_cpu_resp_valid)
              ? (7U & (vlSelf->Soc__DOT__core__DOT__decode__DOT____VdfgTmp_hd891a444__0 
                       >> 0xcU)) : 0U) << 7U) | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0));
    vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard) 
            | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard) 
               | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)))
            ? ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard)
                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard)
                    ? vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata
                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)
                        ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                        : 0ULL))) : ((0x340U == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
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
                                                  : 
                                                 ((0x342U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
                                                   ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE
                                                   : 
                                                  ((0x305U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
                                                    ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC
                                                    : 0ULL)))))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
            | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
               | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))
            ? ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                    ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                        ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                        : 0ULL))) : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0)
                                      ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                     [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]
                                      : 0ULL));
    vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard) 
            | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard) 
               | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)))
            ? ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard)
                ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard)
                    ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)
                        ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                        : 0ULL))) : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0)
                                      ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                     [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]
                                      : 0ULL));
    vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14 
        = (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
            & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2) 
               | ((0x30200073U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                  | (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7)))) 
           | ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
              | ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                 | ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                    | ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                       | (6U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)))))));
    Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h69b28aa1__0 
        = ((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9 
        = ((0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | ((0xa3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
              | ((0x123U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | (0x1a3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0 
        = ((0x2f3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | (0x373U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4 
        = ((0x6fU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
           | (0x67U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)));
    Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h32d1be8b__0 
        = ((0x173U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | (0x1f3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0 
        = ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | ((0x83U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
              | ((0x103U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | ((0x203U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                    | ((0x283U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                       | ((0x303U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                          | (0x183U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5 
        = ((0x63U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | ((0xe3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
              | ((0x263U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | ((0x2e3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                    | ((0x363U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                       | (0x3e3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1 
        = (((IData)(__VdfgTmp_hd301f469__0) << 0xaU) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0 
        = ((((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.io_cpu_resp_valid)
              ? (vlSelf->Soc__DOT__core__DOT__decode__DOT____VdfgTmp_hd891a444__0 
                 >> 0x1aU) : 0U) << 0xaU) | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN));
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type 
        = ((IData)(Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h69b28aa1__0)
            ? 0U : ((0x6fU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                     ? 1U : ((0x67U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                             << 1U)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_10 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4));
    Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h83c98ea0__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0) 
           | ((0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
              | ((0xa3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | ((0x123U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                    | ((0x1a3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                       | (0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))));
    Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3c60961a__0 
        = ((IData)(Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h69b28aa1__0) 
           | ((0x6fU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
              | ((0x67U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5))));
    Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hdd103720__0 
        = ((0x3bU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
           | ((0x803bU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
              | ((0xbbU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                 | ((0x2bbU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                    | ((0x82bbU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                       | ((0x43bU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                          | ((0x63bU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                             | ((0x6bbU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                | ((0x73bU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                   | (0x7bbU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))))))))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11 
        = ((0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | ((0x113U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
              | ((0x193U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | ((0x213U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                    | ((0x313U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                       | ((0x393U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                          | ((0x93U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                             | ((0x293U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                | ((0x4293U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                   | ((0x33U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                      | ((0x8033U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                         | ((0xb3U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                            | ((0x133U 
                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                               | ((0x1b3U 
                                                   == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                  | ((0x233U 
                                                      == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                     | ((0x2b3U 
                                                         == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                        | ((0x82b3U 
                                                            == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                           | ((0x333U 
                                                               == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                              | ((0x3b3U 
                                                                  == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                 | (0x433U 
                                                                    == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))))))))))))))))))));
    Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_3 
        = ((0x1b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
           | ((0x233U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
              | ((0x2b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                 | ((0x82b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                    | ((0x333U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                       | ((0x3b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                          | ((0x433U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                             | ((0x4b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                | ((0x533U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                   | ((0x5b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                      | ((0x633U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
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
                                                                                | (IData)(Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h32d1be8b__0))))))))))))))))))))))))))))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_he9100215__0 
        = ((0x113U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | ((0x193U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
              | ((0x213U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | ((0x313U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                    | ((0x393U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                       | ((0x93U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                          | ((0x293U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                             | (0x4293U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)))))))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h567a98b8__0 
        = ((0x33U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
           | ((0x8033U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
              | ((0xb3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                 | ((0x133U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                    | ((0x1b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                       | ((0x233U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                          | ((0x2b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                             | ((0x82b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                | ((0x333U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                   | ((0x3b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                      | ((0x433U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
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
                                                           | (0x7b3U 
                                                              == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))))))))))))))))));
    vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type)) 
           | (2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type 
        = ((IData)(Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3c60961a__0)
            ? 0U : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                     ? 1U : ((0x83U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                              ? 2U : ((0x103U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                       ? 3U : ((0x203U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                ? 5U
                                                : (
                                                   (0x283U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                    ? 6U
                                                    : 
                                                   ((0x303U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                     ? 7U
                                                     : 
                                                    ((0x183U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                     << 2U))))))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0 
        = ((IData)(Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3c60961a__0) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h156a9c0e__0 
        = ((0x1bU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | ((0x9bU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
              | ((0x29bU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                 | ((0x429bU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                    | (IData)(Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hdd103720__0)))));
    __Vtemp_h3fa6f579__0[0U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 << 0xcU) | (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr));
    __Vtemp_h3fa6f579__0[1U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 >> 0x14U) | ((IData)(
                                                      ((0xfffffffffffffULL 
                                                        & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_h3fa6f579__0[2U] = ((((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.io_cpu_resp_valid)
                                   ? (vlSelf->Soc__DOT__core__DOT__decode__DOT____VdfgTmp_hd891a444__0 
                                      >> 0xcU) : 0U) 
                                 << 0xcU) | ((IData)(
                                                     ((0xfffffffffffffULL 
                                                       & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                                      >> 0x20U)) 
                                             >> 0x14U));
    __Vtemp_h3fa6f579__0[3U] = (- (IData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)));
    __Vtemp_h3fa6f579__0[4U] = (((IData)((0xfffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 << 0x14U) | ((((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.io_cpu_resp_valid)
                                                 ? 
                                                (0xffU 
                                                 & (vlSelf->Soc__DOT__core__DOT__decode__DOT____VdfgTmp_hd891a444__0 
                                                    >> 0xcU))
                                                 : 0U) 
                                               << 0xcU) 
                                              | ((0x7ff800U 
                                                  & (((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.io_cpu_resp_valid) 
                                                      << 0xbU) 
                                                     & (vlSelf->Soc__DOT__core__DOT__decode__DOT____VdfgTmp_hd891a444__0 
                                                        >> 9U))) 
                                                 | (((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.io_cpu_resp_valid)
                                                      ? 
                                                     (0x3ffU 
                                                      & (vlSelf->Soc__DOT__core__DOT__decode__DOT____VdfgTmp_hd891a444__0 
                                                         >> 0x15U))
                                                      : 0U) 
                                                    << 1U))));
    __Vtemp_h3fa6f579__0[5U] = (((IData)((0xfffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 >> 0xcU) | ((IData)(
                                                     ((0xfffffffffffULL 
                                                       & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_h3fa6f579__0[6U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 << 0xcU) | (((IData)(__VdfgTmp_hd301f469__0) 
                                              << 5U) 
                                             | (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_deio_reg_waddr)));
    __Vtemp_h3fa6f579__0[7U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 >> 0x14U) | ((IData)(
                                                      ((0xfffffffffffffULL 
                                                        & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_h3fa6f579__0[8U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 << 0xcU) | (((IData)(vlSelf->__VdfgTmp_h3db68a5f__0) 
                                              << 0xbU) 
                                             | (((IData)(vlSelf->__VdfgTmp_hd31110f2__0) 
                                                 << 5U) 
                                                | ((IData)(vlSelf->__VdfgTmp_hd0a2fa80__0) 
                                                   << 1U))));
    __Vtemp_h3fa6f579__0[9U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 >> 0x14U) | ((IData)(
                                                      ((0xfffffffffffffULL 
                                                        & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_h3fa6f579__0[0xaU] = vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr;
    __Vtemp_h3fa6f579__0[0xbU] = 0U;
    __Vtemp_h3fa6f579__0[0xcU] = 0U;
    __Vtemp_h3fa6f579__0[0xdU] = 0U;
    __Vtemp_h3fa6f579__0[0xeU] = 0U;
    __Vtemp_h3fa6f579__0[0xfU] = 0U;
    vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
        = (((QData)((IData)(__Vtemp_h3fa6f579__0[(((IData)(0x3fU) 
                                                   + 
                                                   (0x1ffU 
                                                    & (((0x13U 
                                                         == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                                          ? 1U
                                                          : 
                                                         ((0x6fU 
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
                                                              : 5U)))))) 
                                                       << 6U))) 
                                                  >> 5U)])) 
            << ((0U == (0x1fU & (((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
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
                                                   : 5U)))))) 
                                 << 6U))) ? 0x20U : 
                ((IData)(0x40U) - (0x1fU & (((0x13U 
                                              == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                              ? 0U : 
                                             ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                               ? 1U
                                               : ((0x6fU 
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
                                                      : 5U)))))) 
                                            << 6U))))) 
           | (((0U == (0x1fU & (((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                  ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                           ? 1U : (
                                                   (0x6fU 
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
                                                       : 5U)))))) 
                                << 6U))) ? 0ULL : ((QData)((IData)(
                                                                   __Vtemp_h3fa6f579__0[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0x1ffU 
                                                                      & (((0x13U 
                                                                           == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                                                           ? 0U
                                                                           : 
                                                                          ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                                                            ? 1U
                                                                            : 
                                                                           ((0x6fU 
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
                                                                                : 5U)))))) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & (((0x13U 
                                                          == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                                           ? 1U
                                                           : 
                                                          ((0x6fU 
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
                                                               : 5U)))))) 
                                                        << 6U))))) 
              | ((QData)((IData)(__Vtemp_h3fa6f579__0[
                                 (0xeU & (((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                            ? 0U : 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
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
                                                    : 5U)))))) 
                                          << 1U))])) 
                 >> (0x1fU & (((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
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
                                                     : 5U)))))) 
                              << 6U)))));
    vlSelf->__VdfgTmp_hae56d818__0 = (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5) 
                                       | ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                          | ((0x83U 
                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                             | ((0x103U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                | ((0x203U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                   | ((0x283U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                      | ((0x303U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                         | ((0x183U 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                            | ((0x23U 
                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                               | ((0xa3U 
                                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                  | ((0x123U 
                                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                     | ((0x1a3U 
                                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                        | ((0x13U 
                                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                           | ((0x113U 
                                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                              | ((0x193U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x213U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x313U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x393U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x93U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x293U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x4293U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x33U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x8033U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xb3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | (0x133U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))))))))))))))))))))))))) 
                                      | (IData)(Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_3));
    if ((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)) {
        vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op = 0x3fU;
        vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type = 0U;
        vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type = 0U;
    } else {
        vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_10)
                ? 0U : ((0x63U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                         ? 2U : ((0xe3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                  ? 3U : ((0x263U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                           ? 4U : (
                                                   (0x2e3U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                    ? 5U
                                                    : 
                                                   ((0x363U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                     ? 6U
                                                     : 
                                                    ((0x3e3U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                      ? 7U
                                                      : 
                                                     ((IData)(Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h83c98ea0__0)
                                                       ? 0U
                                                       : 
                                                      ((0x113U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                        ? 4U
                                                        : 
                                                       ((0x193U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                         ? 6U
                                                         : 
                                                        ((0x213U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                          ? 8U
                                                          : 
                                                         ((0x313U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                           ? 9U
                                                           : 
                                                          ((0x393U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                            ? 0x10U
                                                            : 
                                                           ((0x93U 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0))
                                                             ? 0xdU
                                                             : 
                                                            ((0x293U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0))
                                                              ? 0xeU
                                                              : 
                                                             ((0x4293U 
                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0))
                                                               ? 0xfU
                                                               : 
                                                              ((0x33U 
                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                ? 0U
                                                                : 
                                                               ((0x8033U 
                                                                 == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                 ? 1U
                                                                 : 
                                                                ((0xb3U 
                                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0))
                                                                  ? 0xaU
                                                                  : 
                                                                 ((0x133U 
                                                                   == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                   ? 4U
                                                                   : 
                                                                  ((0x1b3U 
                                                                    == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                    ? 6U
                                                                    : 
                                                                   ((0x233U 
                                                                     == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                     ? 8U
                                                                     : 
                                                                    ((0x2b3U 
                                                                      == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                      ? 0xbU
                                                                      : 
                                                                     ((0x82b3U 
                                                                       == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                       ? 0xcU
                                                                       : 
                                                                      ((0x333U 
                                                                        == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                        ? 9U
                                                                        : 
                                                                       ((0x3b3U 
                                                                         == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                         ? 0x10U
                                                                         : 
                                                                        ((0x433U 
                                                                          == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                          ? 0x12U
                                                                          : 
                                                                         ((0x4b3U 
                                                                           == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                           ? 0x13U
                                                                           : 
                                                                          ((0x533U 
                                                                            == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                            ? 0x14U
                                                                            : 
                                                                           ((0x5b3U 
                                                                             == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                             ? 0x15U
                                                                             : 
                                                                            ((0x633U 
                                                                              == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                              ? 0x16U
                                                                              : 
                                                                             ((0x6b3U 
                                                                               == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                               ? 0x17U
                                                                               : 
                                                                              ((0x733U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                ? 0x18U
                                                                                : 
                                                                               ((0x7b3U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x19U
                                                                                 : 
                                                                                ((0x1bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                                                 ? 0x1aU
                                                                                 : 
                                                                                ((0x9bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0))
                                                                                 ? 0x1bU
                                                                                 : 
                                                                                ((0x29bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0))
                                                                                 ? 0x1cU
                                                                                 : 
                                                                                ((0x429bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0))
                                                                                 ? 0x1dU
                                                                                 : 
                                                                                ((0x3bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x1eU
                                                                                 : 
                                                                                ((0x803bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x1fU
                                                                                 : 
                                                                                ((0xbbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((0x2bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((0x82bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((0x43bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x23U
                                                                                 : 
                                                                                ((0x63bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x24U
                                                                                 : 
                                                                                ((0x6bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x25U
                                                                                 : 
                                                                                ((0x73bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x26U
                                                                                 : 
                                                                                ((0x7bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x27U
                                                                                 : 
                                                                                ((0xf3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x173U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                                                 ? 9U
                                                                                 : 
                                                                                ((0x1f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                                                 ? 0x28U
                                                                                 : 
                                                                                ((0x2f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x373U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                                                 ? 9U
                                                                                 : 
                                                                                ((0x3f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                                                 ? 0x28U
                                                                                 : 0x3fU))))))))))))))))))))))))))))))))))))))))))))))))))))));
        vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                ? 1U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4)
                         ? 3U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                  ? 2U : (((IData)(Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h83c98ea0__0) 
                                           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_he9100215__0))
                                           ? 1U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h567a98b8__0)
                                                    ? 2U
                                                    : 
                                                   (((0x1bU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                     | ((0x9bU 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                        | ((0x29bU 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                           | (0x429bU 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)))))
                                                     ? 1U
                                                     : 
                                                    ((IData)(Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hdd103720__0)
                                                      ? 2U
                                                      : 
                                                     ((0xf3U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                       ? 0U
                                                       : 
                                                      ((IData)(Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h32d1be8b__0)
                                                        ? 4U
                                                        : 
                                                       ((0x2f3U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                         ? 0U
                                                         : 
                                                        ((0x373U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                          ? 4U
                                                          : 
                                                         ((0x3f3U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                          << 2U))))))))))));
        vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type 
            = ((0x17U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                ? 1U : ((0x37U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                         ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4)
                                  ? 1U : ((IData)(vlSelf->__VdfgTmp_hae56d818__0)
                                           ? 2U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0)
                                                    ? 3U
                                                    : 
                                                   (3U 
                                                    & (- (IData)(
                                                                 (0x3f3U 
                                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))));
    }
    vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen 
        = ((~ (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0) 
                | ((0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                   | ((0xa3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                      | ((0x123U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                         | ((0x1a3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                            | ((0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                               | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_he9100215__0))))))) 
               | ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h567a98b8__0) 
                  | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h156a9c0e__0)))) 
           & ((0xf3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
              | ((0x173U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | ((0x1f3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                    | ((0x2f3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                       | ((0x373U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                          | (0U != (3U & (- (IData)(
                                                    (0x3f3U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))));
    vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)
            ? ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC)
                : ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                    ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC)
                    : 0U)) : ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag)
                               ? (IData)(vlSelf->Soc__DOT__core__DOT__dereg_branch_addr)
                               : ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag)
                                   ? ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                       ? (vlSelf->Soc__DOT__core__DOT__fdreg_pc 
                                          + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm))
                                       : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                           ? (0xfffffffeU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4) 
                                                 + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm)))
                                           : 0x80000000U))
                                   : 0x80000000U)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16 
        = ((((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type)) 
             & (IData)(Soc__DOT__core__DOT__decode__DOT___load_use_T_12)) 
            | (((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type)) 
                & (IData)(Soc__DOT__core__DOT__decode__DOT___load_use_T_8)) 
               | (((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0)) 
                   & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9) 
                      & (IData)(Soc__DOT__core__DOT__decode__DOT___load_use_T_8))) 
                  | ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type)) 
                     & (IData)(Soc__DOT__core__DOT__decode__DOT___load_use_T_12))))) 
           & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd)));
}

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

VL_INLINE_OPT void VSoc___024root___nba_comb__TOP__0(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT___GEN_10;
    Soc__DOT__core__DOT__arbitor__DOT___GEN_10 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT___GEN_11;
    Soc__DOT__core__DOT__arbitor__DOT___GEN_11 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT___GEN_15;
    Soc__DOT__core__DOT__arbitor__DOT___GEN_15 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_haaad1b39__0;
    Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_haaad1b39__0 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h8a5bb8da__0;
    Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h8a5bb8da__0 = 0;
    VlWide<8>/*255:0*/ __Vtemp_hda373ffc__0;
    VlWide<8>/*255:0*/ __Vtemp_hc9b9f8b9__0;
    // Body
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp) 
              & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                 & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                    & (IData)(vlSelf->Soc__DOT__sram__DOT__bvalid)))));
    vlSelf->Soc__DOT__sram__DOT__awaddr = (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1) 
                                            & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4))
                                            ? vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr
                                            : vlSelf->Soc__DOT__sram__DOT__awaddr_buffer);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_9 
        = ((IData)(vlSelf->Soc__DOT__sram__DOT__rvalid) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer));
    Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h8a5bb8da__0 
        = (1U & ((~ (IData)(vlSelf->Soc__DOT__sram__DOT__rvalid)) 
                 | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer)));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_12 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc0e633fc__0) 
           & ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
              & ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                 & ((IData)(vlSelf->Soc__DOT__sram__DOT__rlast) 
                    & (IData)(vlSelf->Soc__DOT__sram__DOT__rvalid)))));
    Soc__DOT__core__DOT__arbitor__DOT___GEN_11 = (1U 
                                                  & ((IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h8a5bb8da__0) 
                                                     | ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                        >> 1U)));
    Soc__DOT__core__DOT__arbitor__DOT___GEN_10 = (1U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                       >> 1U)) 
                                                     | (IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h8a5bb8da__0)));
    Soc__DOT__core__DOT__arbitor__DOT___GEN_15 = (1U 
                                                  & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_12)) 
                                                     | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer)));
    Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_haaad1b39__0 
        = ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
              & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_12)));
    __Vtemp_hda373ffc__0[0U] = 0U;
    __Vtemp_hda373ffc__0[1U] = 0U;
    __Vtemp_hda373ffc__0[2U] = 0U;
    __Vtemp_hda373ffc__0[3U] = 0U;
    __Vtemp_hda373ffc__0[4U] = 0U;
    __Vtemp_hda373ffc__0[5U] = 0U;
    __Vtemp_hda373ffc__0[6U] = (IData)(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_13)
                                         ? 0ULL : ((IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_15)
                                                    ? 
                                                   ((IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_11)
                                                     ? 0ULL
                                                     : vlSelf->Soc__DOT__sram__DOT__rdata)
                                                    : 
                                                   ((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                      >> 1U) 
                                                     & (IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_11))
                                                     ? 0ULL
                                                     : vlSelf->Soc__DOT__sram__DOT__rdata))));
    __Vtemp_hda373ffc__0[7U] = (IData)((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_13)
                                          ? 0ULL : 
                                         ((IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_15)
                                           ? ((IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_11)
                                               ? 0ULL
                                               : vlSelf->Soc__DOT__sram__DOT__rdata)
                                           : ((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                >> 1U) 
                                               & (IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_11))
                                               ? 0ULL
                                               : vlSelf->Soc__DOT__sram__DOT__rdata))) 
                                        >> 0x20U));
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
        = (((QData)((IData)(__Vtemp_hda373ffc__0[(((IData)(0x3fU) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                       << 6U))) 
                                                  >> 5U)])) 
            << ((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 6U))) ? 0x20U : 
                ((IData)(0x40U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 6U))))) 
           | (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                << 6U))) ? 0ULL : ((QData)((IData)(
                                                                   __Vtemp_hda373ffc__0[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                        << 6U))))) 
              | ((QData)((IData)(__Vtemp_hda373ffc__0[
                                 (6U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                        << 1U))])) 
                 >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                              << 6U)))));
    __Vtemp_hc9b9f8b9__0[0U] = 0U;
    __Vtemp_hc9b9f8b9__0[1U] = 0U;
    __Vtemp_hc9b9f8b9__0[2U] = 0U;
    __Vtemp_hc9b9f8b9__0[3U] = 0U;
    __Vtemp_hc9b9f8b9__0[4U] = 0U;
    __Vtemp_hc9b9f8b9__0[5U] = 0U;
    __Vtemp_hc9b9f8b9__0[6U] = (IData)(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_13)
                                         ? 0ULL : ((IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_15)
                                                    ? 
                                                   ((IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_10)
                                                     ? 0ULL
                                                     : vlSelf->Soc__DOT__sram__DOT__rdata)
                                                    : 
                                                   ((1U 
                                                     & ((~ (IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_10)) 
                                                        | ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                           >> 1U)))
                                                     ? vlSelf->Soc__DOT__sram__DOT__rdata
                                                     : 0ULL))));
    __Vtemp_hc9b9f8b9__0[7U] = (IData)((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_13)
                                          ? 0ULL : 
                                         ((IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_15)
                                           ? ((IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_10)
                                               ? 0ULL
                                               : vlSelf->Soc__DOT__sram__DOT__rdata)
                                           : ((1U & 
                                               ((~ (IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_10)) 
                                                | ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                   >> 1U)))
                                               ? vlSelf->Soc__DOT__sram__DOT__rdata
                                               : 0ULL))) 
                                        >> 0x20U));
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
        = (((QData)((IData)(__Vtemp_hc9b9f8b9__0[(((IData)(0x3fU) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                       << 6U))) 
                                                  >> 5U)])) 
            << ((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 6U))) ? 0x20U : 
                ((IData)(0x40U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 6U))))) 
           | (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                << 6U))) ? 0ULL : ((QData)((IData)(
                                                                   __Vtemp_hc9b9f8b9__0[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                        << 6U))))) 
              | ((QData)((IData)(__Vtemp_hc9b9f8b9__0[
                                 (6U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                        << 1U))])) 
                 >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                              << 6U)))));
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_valid 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))
               ? ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_6))
               : ((IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_haaad1b39__0) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_6))));
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_valid 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))
               ? ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_5))
               : ((IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_haaad1b39__0) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_5))));
    vlSelf->Soc__DOT__core__DOT___ioformem_io_fc_valid 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))
               ? ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
               : ((IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_haaad1b39__0) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))));
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_4 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
           & ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
              & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
                 & (IData)(vlSelf->Soc__DOT__core__DOT___ioformem_io_fc_valid))));
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_5 
        = ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
           | (IData)(vlSelf->Soc__DOT__core__DOT___ioformem_io_fc_valid));
    vlSelf->__VdfgTmp_hc42be29e__0 = ((~ (IData)(vlSelf->Soc__DOT__core__DOT___ioformem_io_fc_valid)) 
                                      & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
                                         | (2U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))));
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__ren 
        = ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))
            ? ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT____VdfgTmp_hd1afc83c__0) 
               & (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_2))
            : ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
               & ((~ (IData)(vlSelf->Soc__DOT__core__DOT___ioformem_io_fc_valid)) 
                  & (2U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)))));
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_4) 
           & (0U != vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_addr));
    if (vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_2) {
        vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb = 0U;
        vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data = 0ULL;
    } else if ((1U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))) {
        if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))) {
            if (vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_3) {
                vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb 
                    = (0xffU & 0U);
                vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data = 0ULL;
            } else {
                vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb 
                    = (0xffU & (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_wmask));
                vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data 
                    = vlSelf->Soc__DOT__core__DOT___excute_io_wdata;
            }
        } else if ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))) {
            if (vlSelf->Soc__DOT__core__DOT___ioformem_io_fc_valid) {
                vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb 
                    = (0xffU & 0U);
                vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data = 0ULL;
            } else {
                vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb 
                    = (0xffU & (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_wmask));
                vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data 
                    = vlSelf->Soc__DOT__core__DOT___excute_io_wdata;
            }
        } else if (vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_5) {
            vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb 
                = (0xffU & 0U);
            vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data = 0ULL;
        } else {
            vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb 
                = (0xffU & ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT___GEN)
                             ? vlSelf->Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory
                            [vlSelf->Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT___GEN_0]
                             : 0U));
            vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data 
                = (((QData)((IData)(((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT___GEN)
                                      ? vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory
                                     [vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT___GEN_0]
                                      : 0U))) << 0x38U) 
                   | (((QData)((IData)(((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT___GEN)
                                         ? vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory
                                        [vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT___GEN_0]
                                         : 0U))) << 0x30U) 
                      | (((QData)((IData)(((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT___GEN)
                                            ? vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory
                                           [vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT___GEN_0]
                                            : 0U))) 
                          << 0x28U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT___GEN)
                                                          ? 
                                                         vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory
                                                         [vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT___GEN_0]
                                                          : 0U))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT___GEN)
                                                                        ? 
                                                                       vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory
                                                                       [vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT___GEN_0]
                                                                        : 0U) 
                                                                      << 0x18U) 
                                                                     | ((((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT___GEN)
                                                                           ? 
                                                                          vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory
                                                                          [vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT___GEN_0]
                                                                           : 0U) 
                                                                         << 0x10U) 
                                                                        | ((((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT___GEN)
                                                                              ? 
                                                                             vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory
                                                                             [vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT___GEN_0]
                                                                              : 0U) 
                                                                            << 8U) 
                                                                           | ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT___GEN)
                                                                               ? 
                                                                              vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory
                                                                              [vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT___GEN_0]
                                                                               : 0U))))))))));
        }
    } else if ((2U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))) {
        vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb 
            = (0xffU & 0xffU);
        vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data 
            = (((QData)((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__read[
                                (((IData)(0x3fU) + 
                                  (0x3ffU & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__w_count) 
                                             << 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__w_count) 
                                                    << 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__w_count) 
                                                       << 6U))))) 
               | (((0U == (0x1fU & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__w_count) 
                                    << 6U))) ? 0ULL
                    : ((QData)((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__read[
                                       (((IData)(0x1fU) 
                                         + (0x3ffU 
                                            & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__w_count) 
                                               << 6U))) 
                                        >> 5U)])) << 
                       ((IData)(0x20U) - (0x1fU & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__w_count) 
                                                   << 6U))))) 
                  | ((QData)((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__read[
                                     (0x1eU & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__w_count) 
                                               << 1U))])) 
                     >> (0x1fU & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__w_count) 
                                  << 6U)))));
    } else {
        vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb 
            = (0xffU & (- (IData)((1U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                         >> 2U)))));
        vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data 
            = ((4U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                ? (((QData)((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__read[
                                    (((IData)(0x3fU) 
                                      + (0x3ffU & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__w_count) 
                                                   << 6U))) 
                                     >> 5U)])) << (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__w_count) 
                                                        << 6U)))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__w_count) 
                                                        << 6U))))) 
                   | (((0U == (0x1fU & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__w_count) 
                                        << 6U))) ? 0ULL
                        : ((QData)((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__read[
                                           (((IData)(0x1fU) 
                                             + (0x3ffU 
                                                & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__w_count) 
                                                   << 6U))) 
                                            >> 5U)])) 
                           << ((IData)(0x20U) - (0x1fU 
                                                 & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__w_count) 
                                                    << 6U))))) 
                      | ((QData)((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__read[
                                         (0x1eU & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__w_count) 
                                                   << 1U))])) 
                         >> (0x1fU & ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__w_count) 
                                      << 6U))))) : 0ULL);
    }
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose 
        = (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))
             ? ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_6) 
                & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_9)) 
                   | (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_2)))
             : (IData)(vlSelf->__VdfgTmp_hc42be29e__0))
            ? 9U : (((0U != (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__state)) 
                     & ((1U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__state)) 
                        | ((2U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__state)) 
                           | (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__VdfgTmp_h661b8699__0))))
                     ? 0xaU : (((0U != (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__state)) 
                                & ((1U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__state)) 
                                   | ((2U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__state)) 
                                      | (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_h661b8699__0))))
                                ? 0xcU : 0U)));
    vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall 
        = ((IData)(vlSelf->__VdfgTmp_hc42be29e__0) 
           | ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
              & ((~ ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
                     & (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT____VdfgTmp_hd1afc83c__0))) 
                 & (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_6))));
    vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hc3ceced8__0 
        = (1U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall)) 
                 & (~ (IData)((0U != ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__state) 
                                      | (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__state)))))));
    vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h23e7ec03__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall) 
           | ((0U != (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__state)) 
              | (0U != (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__state))));
    vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hc3ceced8__0) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16) 
              | ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                 | ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14) 
                    | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)) 
                       & (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag))))));
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hc3ceced8__0) 
            & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
               & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                  | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14)) 
                     & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                        | ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag) 
                           | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__MULDIV_stall)) 
                              & (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag)))))))) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
              | ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag) 
                 | (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3))));
    vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h23e7ec03__0) 
           | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
              & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)) 
                 & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14)) 
                    & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h7bd08a2f__0)))));
    vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h23e7ec03__0) 
           | ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16) 
              | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)) 
                 & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14) 
                    | (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h7bd08a2f__0)))));
    vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen));
    vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0)
            ? vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc
            : ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2)
                ? vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc
                : ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___io_pc_bits_T_3)
                    ? ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2)
                        ? ((IData)(4U) + vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc)
                        : ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                            ? ((IData)(4U) + vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)
                            : vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc))
                    : vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)));
}
