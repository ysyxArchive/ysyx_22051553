// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSoc__Syms.h"
#include "VSoc___024root.h"

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
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSoc___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VSoc___024unit____Vdpiimwrap_update_debuginfo_TOP____024unit(QData/*63:0*/ pc, CData/*0:0*/ pc_req, IData/*31:0*/ inst, CData/*0:0*/ inst_valid, QData/*63:0*/ op_a, QData/*63:0*/ op_b, QData/*63:0*/ result, CData/*4:0*/ rd, QData/*63:0*/ reg_wdata, CData/*0:0*/ reg_wen);

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__0(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__Soc__DOT__core__DOT__interact__DOT__over_count;
    __Vdly__Soc__DOT__core__DOT__interact__DOT__over_count = 0;
    QData/*63:0*/ __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc;
    __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc = 0;
    CData/*4:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1;
    __Vdlyvdim0__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1 = 0;
    QData/*63:0*/ __Vdlyvval__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1;
    __Vdlyvval__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1 = 0;
    VlWide<8>/*255:0*/ __Vtemp_hd491d0a8__0;
    // Body
    __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc = vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc;
    __Vdly__Soc__DOT__core__DOT__interact__DOT__over_count 
        = vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count;
    if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_rd))) {
        VSoc___024unit____Vdpiimwrap_update_debuginfo_TOP____024unit(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc, (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started), vlSelf->Soc__DOT___ram_io_dataOut_bits, (IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid), vlSelf->Soc__DOT__core__DOT__dereg_op_a, vlSelf->Soc__DOT__core__DOT__dereg_op_b, 
                                                                     ((0U 
                                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                       ? 
                                                                      (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                                                       + vlSelf->Soc__DOT__core__DOT__dereg_op_b)
                                                                       : 0ULL), (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_rd), vlSelf->Soc__DOT__core__DOT__mwreg_alu_res, 0U);
    } else {
        VSoc___024unit____Vdpiimwrap_update_debuginfo_TOP____024unit(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc, (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started), vlSelf->Soc__DOT___ram_io_dataOut_bits, (IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid), vlSelf->Soc__DOT__core__DOT__dereg_op_a, vlSelf->Soc__DOT__core__DOT__dereg_op_b, 
                                                                     ((0U 
                                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                       ? 
                                                                      (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                                                       + vlSelf->Soc__DOT__core__DOT__dereg_op_b)
                                                                       : 0ULL), (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_rd), vlSelf->Soc__DOT__core__DOT__mwreg_alu_res, 
                                                                     (0U 
                                                                      != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)));
    }
    if (vlSelf->reset) {
        __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc = 0x80000000ULL;
    } else if (vlSelf->Soc__DOT__core__DOT__fetch__DOT__started) {
        __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc 
            = (4ULL + vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc);
    } else if (vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_flag) {
        __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc 
            = (4ULL + vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc);
    }
    if (vlSelf->reset) {
        __Vdly__Soc__DOT__core__DOT__interact__DOT__over_count = 0U;
    } else if (vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag) {
        __Vdly__Soc__DOT__core__DOT__interact__DOT__over_count 
            = (7U & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count)));
        if (VL_UNLIKELY((4U == (IData)(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count)))) {
            VL_WRITEF("ebreak!\n");
            VL_FINISH_MT("vsrc/Soc.v", 745, "");
        }
    }
    __Vdlyvval__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1 
        = (((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
            & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_rd)))
            ? vlSelf->Soc__DOT__core__DOT__mwreg_alu_res
            : vlSelf->Soc__DOT__core__DOT__regfile__DOT___regs_ext_R0_data);
    __Vdlyvdim0__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1 
        = vlSelf->Soc__DOT__core__DOT__mwreg_rd;
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag = 0U;
        vlSelf->Soc__DOT__core__DOT__mwreg_wb_type = 0U;
        vlSelf->Soc__DOT__core__DOT__mwreg_alu_res = 0ULL;
        vlSelf->Soc__DOT__core__DOT__mwreg_rd = 0U;
        vlSelf->Soc__DOT__core__DOT__emreg_wb_type = 0U;
        vlSelf->Soc__DOT__core__DOT__emreg_alu_res = 0ULL;
        vlSelf->Soc__DOT__core__DOT__emreg_rd = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_wb_type = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_op_b = 0ULL;
        vlSelf->Soc__DOT__core__DOT__dereg_alu_op = 0x1fU;
        vlSelf->Soc__DOT__core__DOT__dereg_op_a = 0ULL;
        vlSelf->Soc__DOT__core__DOT__dereg_rd = 0U;
        vlSelf->Soc__DOT__core__DOT__fdreg_pc = 0x80000000ULL;
    } else {
        if ((0x100073U == ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                            ? vlSelf->Soc__DOT___ram_io_dataOut_bits
                            : 0U))) {
            vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag = 1U;
        }
        vlSelf->Soc__DOT__core__DOT__mwreg_wb_type 
            = vlSelf->Soc__DOT__core__DOT__emreg_wb_type;
        vlSelf->Soc__DOT__core__DOT__mwreg_alu_res 
            = vlSelf->Soc__DOT__core__DOT__emreg_alu_res;
        vlSelf->Soc__DOT__core__DOT__mwreg_rd = vlSelf->Soc__DOT__core__DOT__emreg_rd;
        vlSelf->Soc__DOT__core__DOT__emreg_wb_type 
            = vlSelf->Soc__DOT__core__DOT__dereg_wb_type;
        vlSelf->Soc__DOT__core__DOT__emreg_alu_res 
            = ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                ? (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                   + vlSelf->Soc__DOT__core__DOT__dereg_op_b)
                : 0ULL);
        vlSelf->Soc__DOT__core__DOT__emreg_rd = vlSelf->Soc__DOT__core__DOT__dereg_rd;
        vlSelf->Soc__DOT__core__DOT__dereg_wb_type 
            = vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type;
        vlSelf->Soc__DOT__core__DOT__dereg_op_b = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type)
                                                    ? vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm
                                                    : 0ULL);
        vlSelf->Soc__DOT__core__DOT__dereg_alu_op = 
            (0x1fU & (- (IData)((1U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                       | (0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T))))));
        vlSelf->Soc__DOT__core__DOT__dereg_op_a = (
                                                   ((0x13U 
                                                     != vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                                    & ((0x13U 
                                                        != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                       & ((0x17U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                          | ((0x37U 
                                                              != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                             & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h5d4f4c30__0)))))
                                                    ? vlSelf->Soc__DOT__core__DOT__fdreg_pc
                                                    : 0ULL);
        vlSelf->Soc__DOT__core__DOT__dereg_rd = ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                  ? 
                                                 ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                   ? 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__VdfgTmp_h50f8190e__0) 
                                                      >> 7U))
                                                   : 0U)
                                                  : 0U);
        vlSelf->Soc__DOT__core__DOT__fdreg_pc = vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc;
    }
    vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_0 
        = (0xffU & ((IData)(3U) + (IData)(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc)));
    vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN 
        = vlSelf->Soc__DOT__core__DOT__fetch__DOT__started;
    vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_2 
        = (0xffU & ((IData)(2U) + (IData)(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc)));
    vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_1 
        = vlSelf->Soc__DOT__core__DOT__fetch__DOT__started;
    vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_4 
        = (0xffU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc)));
    vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_3 
        = vlSelf->Soc__DOT__core__DOT__fetch__DOT__started;
    vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_6 
        = (0xffU & (IData)(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc));
    vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_5 
        = vlSelf->Soc__DOT__core__DOT__fetch__DOT__started;
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc = __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc;
    vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count 
        = __Vdly__Soc__DOT__core__DOT__interact__DOT__over_count;
    vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0U] = 0ULL;
    vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1] 
        = __Vdlyvval__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1;
    vlSelf->__VdfgTmp_h8133e384__0 = vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT__Memory
        [vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_0];
    vlSelf->__VdfgTmp_hae2d2759__0 = vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT__Memory
        [vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_2];
    vlSelf->__VdfgTmp_h483daa03__0 = vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT__Memory
        [vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_4];
    vlSelf->__VdfgTmp_h7cec4c01__0 = vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT__Memory
        [vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_6];
    vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R0_data 
        = ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN)
            ? (IData)(vlSelf->__VdfgTmp_h8133e384__0)
            : 0U);
    vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R1_data 
        = ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_1)
            ? (IData)(vlSelf->__VdfgTmp_hae2d2759__0)
            : 0U);
    vlSelf->Soc__DOT__core__DOT__regfile__DOT___regs_ext_R0_data 
        = vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
        [vlSelf->Soc__DOT__core__DOT__mwreg_rd];
    vlSelf->__VdfgTmp_h50f8190e__0 = ((((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_3)
                                         ? (IData)(vlSelf->__VdfgTmp_h483daa03__0)
                                         : 0U) << 8U) 
                                      | ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_5)
                                          ? (IData)(vlSelf->__VdfgTmp_h7cec4c01__0)
                                          : 0U));
    vlSelf->__VdfgTmp_h7f65c8dc__0 = (((IData)(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R1_data) 
                                       << 0x10U) | (IData)(vlSelf->__VdfgTmp_h50f8190e__0));
    vlSelf->Soc__DOT__ram__DOT__inst_valid = vlSelf->Soc__DOT__core__DOT__fetch__DOT__started;
    vlSelf->__VdfgTmp_h27324541__0 = (((IData)(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R0_data) 
                                       << 0x18U) | vlSelf->__VdfgTmp_h7f65c8dc__0);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__started 
        = (1U & (~ (IData)(vlSelf->reset)));
    if (vlSelf->Soc__DOT__ram__DOT__inst_valid) {
        vlSelf->__VdfgTmp_h049a0a75__0 = (0x1fU & (vlSelf->__VdfgTmp_h7f65c8dc__0 
                                                   >> 0xfU));
        vlSelf->Soc__DOT___ram_io_dataOut_bits = vlSelf->__VdfgTmp_h27324541__0;
        vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0 
            = ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                ? ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_5)
                    ? (0x7fU & (IData)(vlSelf->__VdfgTmp_h7cec4c01__0))
                    : 0U) : 0U);
        vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T 
            = vlSelf->Soc__DOT___ram_io_dataOut_bits;
        vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0 
            = ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN) 
               & ((IData)(vlSelf->__VdfgTmp_h8133e384__0) 
                  >> 7U));
    } else {
        vlSelf->__VdfgTmp_h049a0a75__0 = 0U;
        vlSelf->Soc__DOT___ram_io_dataOut_bits = 0U;
        vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0 = 0x13U;
        vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T = 0x13U;
        vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0 = 0U;
    }
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0 
        = ((0x17U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
           | (0x37U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN 
        = ((((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
              ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                  ? ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_3)
                      ? (7U & ((IData)(vlSelf->__VdfgTmp_h483daa03__0) 
                               >> 4U)) : 0U) : 0U) : 0U) 
            << 7U) | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h5d4f4c30__0 
        = ((0x6fU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
           | (0x67U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0 
        = ((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
           | (0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0 
        = ((0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | ((0x17U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
              | ((0x37U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                 | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h5d4f4c30__0))));
    __Vtemp_hd491d0a8__0[0U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 << 0xcU) | ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                              ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                  ? 
                                                 (((IData)(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R0_data) 
                                                   << 4U) 
                                                  | ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_1)
                                                      ? 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->__VdfgTmp_hae2d2759__0) 
                                                         >> 4U))
                                                      : 0U))
                                                  : 0U)
                                              : 0U));
    __Vtemp_hd491d0a8__0[1U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 >> 0x14U) | ((IData)(
                                                      ((0xfffffffffffffULL 
                                                        & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_hd491d0a8__0[2U] = ((((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                   ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                       ? (((IData)(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R0_data) 
                                           << 0xcU) 
                                          | (((IData)(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R1_data) 
                                              << 4U) 
                                             | ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_3)
                                                 ? 
                                                (0xfU 
                                                 & ((IData)(vlSelf->__VdfgTmp_h483daa03__0) 
                                                    >> 4U))
                                                 : 0U)))
                                       : 0U) : 0U) 
                                 << 0xcU) | ((IData)(
                                                     ((0xfffffffffffffULL 
                                                       & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                                      >> 0x20U)) 
                                             >> 0x14U));
    __Vtemp_hd491d0a8__0[3U] = (- (IData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)));
    __Vtemp_hd491d0a8__0[4U] = (((IData)((0xfffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 << 0x14U) | ((((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                 ? 
                                                ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                  ? 
                                                 (0xffU 
                                                  & (vlSelf->__VdfgTmp_h7f65c8dc__0 
                                                     >> 0xcU))
                                                  : 0U)
                                                 : 0U) 
                                               << 0xcU) 
                                              | ((0xfffff800U 
                                                  & (((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid) 
                                                      << 0xbU) 
                                                     & (((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_1) 
                                                         << 0xbU) 
                                                        & ((IData)(vlSelf->__VdfgTmp_hae2d2759__0) 
                                                           << 7U)))) 
                                                 | (((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                      ? 
                                                     ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                       ? 
                                                      (0x3ffU 
                                                       & (vlSelf->__VdfgTmp_h27324541__0 
                                                          >> 0x15U))
                                                       : 0U)
                                                      : 0U) 
                                                    << 1U))));
    __Vtemp_hd491d0a8__0[5U] = (((IData)((0xfffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 >> 0xcU) | ((IData)(
                                                     ((0xfffffffffffULL 
                                                       & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_hd491d0a8__0[6U] = 0U;
    __Vtemp_hd491d0a8__0[7U] = 0U;
    vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
        = (((QData)((IData)(__Vtemp_hd491d0a8__0[(((IData)(0x3fU) 
                                                   + 
                                                   (0xffU 
                                                    & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0)
                                                          ? 1U
                                                          : 
                                                         ((0x6fU 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                          << 1U))) 
                                                       << 6U))) 
                                                  >> 5U)])) 
            << ((0U == (0x1fU & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0)
                                   ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0)
                                            ? 1U : 
                                           ((0x6fU 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                            << 1U))) 
                                 << 6U))) ? 0x20U : 
                ((IData)(0x40U) - (0x1fU & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0)
                                              ? 0U : 
                                             ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0)
                                               ? 1U
                                               : ((0x6fU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                  << 1U))) 
                                            << 6U))))) 
           | (((0U == (0x1fU & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0)
                                  ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0)
                                           ? 1U : (
                                                   (0x6fU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                   << 1U))) 
                                << 6U))) ? 0ULL : ((QData)((IData)(
                                                                   __Vtemp_hd491d0a8__0[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0xffU 
                                                                      & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0)
                                                                           ? 0U
                                                                           : 
                                                                          ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0)
                                                                            ? 1U
                                                                            : 
                                                                           ((0x6fU 
                                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                                            << 1U))) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0)
                                                           ? 1U
                                                           : 
                                                          ((0x6fU 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                           << 1U))) 
                                                        << 6U))))) 
              | ((QData)((IData)(__Vtemp_hd491d0a8__0[
                                 (6U & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0)
                                          ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0)
                                                   ? 1U
                                                   : 
                                                  ((0x6fU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                   << 1U))) 
                                        << 1U))])) 
                 >> (0x1fU & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0)
                                ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0)
                                         ? 1U : ((0x6fU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                 << 1U))) 
                              << 6U)))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0) 
            | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0))
            ? 0U : ((0x6fU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                     ? 1U : ((0x67U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                             << 1U)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type 
        = ((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0));
    vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_flag 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type)) 
           | (2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type)));
    if (vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_flag) {
        vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc 
            = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                ? (vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
                   + vlSelf->Soc__DOT__core__DOT__fdreg_pc)
                : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                    ? (0xfffffffffffffffeULL & (vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
                                                + (
                                                   ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid) 
                                                    & (0U 
                                                       != (IData)(vlSelf->__VdfgTmp_h049a0a75__0)))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                                   [
                                                   ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                     ? (IData)(vlSelf->__VdfgTmp_h049a0a75__0)
                                                     : 0U)]
                                                    : 0ULL)))
                    : 0x80000000ULL));
        vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
            = vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc;
    } else {
        vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc = 0x80000000ULL;
        vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
            = vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc;
    }
}
