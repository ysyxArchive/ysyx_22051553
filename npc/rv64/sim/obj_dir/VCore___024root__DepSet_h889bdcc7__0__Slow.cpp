// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCore.h for the primary calling header

#include "verilated.h"

#include "VCore___024root.h"

VL_ATTR_COLD void VCore___024root___eval_static(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_static\n"); );
}

VL_ATTR_COLD void VCore___024root___eval_initial(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VCore___024root___eval_final(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_final\n"); );
}

VL_ATTR_COLD void VCore___024root___eval_triggers__stl(VCore___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__stl(VCore___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VCore___024root___eval_stl(VCore___024root* vlSelf);

VL_ATTR_COLD void VCore___024root___eval_settle(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VCore___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VCore___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/Core.v", 280, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VCore___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__stl(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCore___024root___stl_sequent__TOP__0(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->io_ramio_pc_valid = vlSelf->Core__DOT__fetch__DOT__started;
    vlSelf->io_ramio_pc_bits = vlSelf->Core__DOT__fetch__DOT__pc;
    vlSelf->Core__DOT__regfile__DOT___regs_ext_R0_data 
        = vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory
        [vlSelf->Core__DOT__mwreg_rd];
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

VL_ATTR_COLD void VCore___024root___eval_stl(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VCore___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__ico(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__act(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__nba(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCore___024root___ctor_var_reset(VCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_ramio_dataOut_valid = VL_RAND_RESET_I(1);
    vlSelf->io_ramio_dataOut_bits = VL_RAND_RESET_I(32);
    vlSelf->io_ramio_pc_valid = VL_RAND_RESET_I(1);
    vlSelf->io_ramio_pc_bits = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__fdreg_pc = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__dereg_op_a = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__dereg_op_b = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__dereg_rd = VL_RAND_RESET_I(5);
    vlSelf->Core__DOT__dereg_alu_op = VL_RAND_RESET_I(5);
    vlSelf->Core__DOT__dereg_wb_type = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__emreg_alu_res = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__emreg_wb_type = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__emreg_rd = VL_RAND_RESET_I(5);
    vlSelf->Core__DOT__mwreg_alu_res = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__mwreg_wb_type = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__mwreg_rd = VL_RAND_RESET_I(5);
    vlSelf->Core__DOT__fetch__DOT__started = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__fetch__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__decode__DOT___cu_io_opa_type = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__decode__DOT___inst_T = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__decode__DOT__cu__DOT___controlsig_T_9 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__regfile__DOT___regs_ext_R0_data = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
