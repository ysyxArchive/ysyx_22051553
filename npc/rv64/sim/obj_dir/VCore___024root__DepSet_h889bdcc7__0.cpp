// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCore.h for the primary calling header

#include "verilated.h"

#include "VCore___024root.h"

VL_INLINE_OPT void VCore___024root___ico_sequent__TOP__0(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->Core__DOT__decode__DOT___inst_T = ((IData)(vlSelf->io_ramio_dataOut_valid)
                                                ? vlSelf->io_ramio_dataOut_bits
                                                : 0x13U);
    vlSelf->Core__DOT__decode__DOT__cu__DOT___controlsig_T_9 
        = (0x13U == ((((IData)(vlSelf->io_ramio_dataOut_valid)
                        ? (7U & (vlSelf->io_ramio_dataOut_bits 
                                 >> 0xcU)) : 0U) << 7U) 
                     | ((IData)(vlSelf->io_ramio_dataOut_valid)
                         ? (0x7fU & vlSelf->io_ramio_dataOut_bits)
                         : 0x13U)));
    vlSelf->Core__DOT__decode__DOT___cu_io_opa_type 
        = ((0x13U != vlSelf->Core__DOT__decode__DOT___inst_T) 
           & (IData)(vlSelf->Core__DOT__decode__DOT__cu__DOT___controlsig_T_9));
}

void VCore___024root___eval_ico(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VCore___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VCore___024root___eval_act(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_act\n"); );
}

VL_INLINE_OPT void VCore___024root___nba_sequent__TOP__0(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___nba_sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ __Vdly__Core__DOT__fetch__DOT__pc;
    __Vdly__Core__DOT__fetch__DOT__pc = 0;
    CData/*4:0*/ __Vdlyvdim0__Core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1;
    __Vdlyvdim0__Core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1 = 0;
    QData/*63:0*/ __Vdlyvval__Core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1;
    __Vdlyvval__Core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1 = 0;
    // Body
    if (VL_UNLIKELY((0x100073U == ((IData)(vlSelf->io_ramio_dataOut_valid)
                                    ? vlSelf->io_ramio_dataOut_bits
                                    : 0U)))) {
        VL_FINISH_MT("vsrc/Core.v", 469, "");
    }
    __Vdly__Core__DOT__fetch__DOT__pc = vlSelf->Core__DOT__fetch__DOT__pc;
    __Vdlyvval__Core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1 
        = (((0U != (IData)(vlSelf->Core__DOT__mwreg_wb_type)) 
            & (0U != (IData)(vlSelf->Core__DOT__mwreg_rd)))
            ? vlSelf->Core__DOT__mwreg_alu_res : vlSelf->Core__DOT__regfile__DOT___regs_ext_R0_data);
    __Vdlyvdim0__Core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1 
        = vlSelf->Core__DOT__mwreg_rd;
    if (vlSelf->reset) {
        __Vdly__Core__DOT__fetch__DOT__pc = 0x80000000ULL;
        vlSelf->Core__DOT__mwreg_wb_type = 0U;
        vlSelf->Core__DOT__mwreg_rd = 0U;
        vlSelf->Core__DOT__mwreg_alu_res = 0ULL;
        vlSelf->Core__DOT__emreg_wb_type = 0U;
        vlSelf->Core__DOT__emreg_rd = 0U;
        vlSelf->Core__DOT__emreg_alu_res = 0ULL;
        vlSelf->Core__DOT__dereg_wb_type = 0U;
        vlSelf->Core__DOT__dereg_rd = 0U;
        vlSelf->Core__DOT__dereg_op_b = 0ULL;
        vlSelf->Core__DOT__dereg_alu_op = 0x1fU;
        vlSelf->Core__DOT__dereg_op_a = 0ULL;
        vlSelf->Core__DOT__fdreg_pc = 0x80000000ULL;
    } else {
        if (vlSelf->Core__DOT__fetch__DOT__started) {
            __Vdly__Core__DOT__fetch__DOT__pc = (4ULL 
                                                 + vlSelf->Core__DOT__fetch__DOT__pc);
        }
        vlSelf->Core__DOT__mwreg_wb_type = vlSelf->Core__DOT__emreg_wb_type;
        vlSelf->Core__DOT__mwreg_rd = vlSelf->Core__DOT__emreg_rd;
        vlSelf->Core__DOT__mwreg_alu_res = vlSelf->Core__DOT__emreg_alu_res;
        vlSelf->Core__DOT__emreg_wb_type = vlSelf->Core__DOT__dereg_wb_type;
        vlSelf->Core__DOT__emreg_rd = vlSelf->Core__DOT__dereg_rd;
        vlSelf->Core__DOT__emreg_alu_res = ((0U == (IData)(vlSelf->Core__DOT__dereg_alu_op))
                                             ? (vlSelf->Core__DOT__dereg_op_a 
                                                + vlSelf->Core__DOT__dereg_op_b)
                                             : 0ULL);
        vlSelf->Core__DOT__dereg_wb_type = vlSelf->Core__DOT__decode__DOT___cu_io_opa_type;
        vlSelf->Core__DOT__dereg_rd = ((IData)(vlSelf->io_ramio_dataOut_valid)
                                        ? (0x1fU & 
                                           (vlSelf->io_ramio_dataOut_bits 
                                            >> 7U))
                                        : 0U);
        vlSelf->Core__DOT__dereg_op_b = (((- (QData)((IData)(
                                                             ((IData)(vlSelf->io_ramio_dataOut_valid) 
                                                              & (vlSelf->io_ramio_dataOut_bits 
                                                                 >> 0x1fU))))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           ((IData)(vlSelf->io_ramio_dataOut_valid)
                                                             ? 
                                                            (vlSelf->io_ramio_dataOut_bits 
                                                             >> 0x14U)
                                                             : 0U))));
        vlSelf->Core__DOT__dereg_alu_op = (0x1fU & 
                                           (- (IData)(
                                                      (1U 
                                                       & ((~ (IData)(vlSelf->Core__DOT__decode__DOT__cu__DOT___controlsig_T_9)) 
                                                          | (0x13U 
                                                             == vlSelf->Core__DOT__decode__DOT___inst_T))))));
        vlSelf->Core__DOT__dereg_op_a = ((IData)(vlSelf->Core__DOT__decode__DOT___cu_io_opa_type)
                                          ? (((IData)(vlSelf->io_ramio_dataOut_valid) 
                                              & (0U 
                                                 != 
                                                 (0x1fU 
                                                  & (vlSelf->io_ramio_dataOut_bits 
                                                     >> 0xfU))))
                                              ? vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                             [((IData)(vlSelf->io_ramio_dataOut_valid)
                                                ? (0x1fU 
                                                   & (vlSelf->io_ramio_dataOut_bits 
                                                      >> 0xfU))
                                                : 0U)]
                                              : 0ULL)
                                          : vlSelf->Core__DOT__fdreg_pc);
        vlSelf->Core__DOT__fdreg_pc = vlSelf->io_ramio_pc_bits;
    }
    vlSelf->Core__DOT__fetch__DOT__pc = __Vdly__Core__DOT__fetch__DOT__pc;
    vlSelf->Core__DOT__fetch__DOT__started = (1U & 
                                              (~ (IData)(vlSelf->reset)));
    vlSelf->io_ramio_pc_valid = vlSelf->Core__DOT__fetch__DOT__started;
    vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[0U] = 0ULL;
    vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[__Vdlyvdim0__Core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1] 
        = __Vdlyvval__Core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1;
    vlSelf->Core__DOT__regfile__DOT___regs_ext_R0_data 
        = vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory
        [vlSelf->Core__DOT__mwreg_rd];
    vlSelf->io_ramio_pc_bits = vlSelf->Core__DOT__fetch__DOT__pc;
}

void VCore___024root___eval_nba(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VCore___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void VCore___024root___eval_triggers__ico(VCore___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__ico(VCore___024root* vlSelf);
#endif  // VL_DEBUG
void VCore___024root___eval_triggers__act(VCore___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__act(VCore___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__nba(VCore___024root* vlSelf);
#endif  // VL_DEBUG

void VCore___024root___eval(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VCore___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VCore___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/Core.v", 281, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VCore___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VCore___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VCore___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/Core.v", 281, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VCore___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VCore___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/Core.v", 281, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VCore___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VCore___024root___eval_debug_assertions(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_ramio_dataOut_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("io_ramio_dataOut_valid");}
}
#endif  // VL_DEBUG
