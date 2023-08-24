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
void VSoc___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &pmem_read__Vfuncrtn);
void VSoc___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__0(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ __Vfunc_pmem_read__1__Vfuncout;
    __Vfunc_pmem_read__1__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_pmem_read__2__Vfuncout;
    __Vfunc_pmem_read__2__Vfuncout = 0;
    CData/*2:0*/ __Vdly__Soc__DOT__core__DOT__interact__DOT__over_count;
    __Vdly__Soc__DOT__core__DOT__interact__DOT__over_count = 0;
    CData/*4:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1;
    __Vdlyvdim0__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1 = 0;
    QData/*63:0*/ __Vdlyvval__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1;
    __Vdlyvval__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1 = 0;
    VlWide<8>/*255:0*/ __Vtemp_h073bfb9e__0;
    VlWide<12>/*383:0*/ __Vtemp_h75410eeb__0;
    VlWide<16>/*511:0*/ __Vtemp_h1742dff7__0;
    VlWide<14>/*447:0*/ __Vtemp_hd1c116ed__0;
    VlWide<4>/*127:0*/ __Vtemp_hcd5eb97e__0;
    // Body
    __Vdly__Soc__DOT__core__DOT__interact__DOT__over_count 
        = vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        VSoc___024unit____Vdpiimwrap_update_debuginfo_TOP____024unit(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc, (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started), vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits, 0U, vlSelf->Soc__DOT__core__DOT__dereg_op_a, vlSelf->Soc__DOT__core__DOT__dereg_op_b, vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result, (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_rd), vlSelf->Soc__DOT__core__DOT__mwreg_wb_data, 
                                                                     (0U 
                                                                      != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)));
    }
    if (vlSelf->reset) {
        __Vdly__Soc__DOT__core__DOT__interact__DOT__over_count = 0U;
    } else if (vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag) {
        __Vdly__Soc__DOT__core__DOT__interact__DOT__over_count 
            = (7U & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count)));
        if (VL_UNLIKELY((4U == (IData)(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count)))) {
            VL_WRITEF("ebreak!\n");
            VL_FINISH_MT("vsrc/Soc.v", 848, "");
        }
    }
    __Vdlyvval__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1 
        = (((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
            & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_rd)))
            ? vlSelf->Soc__DOT__core__DOT__mwreg_wb_data
            : vlSelf->Soc__DOT__core__DOT__regfile__DOT___regs_ext_R0_data);
    __Vdlyvdim0__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1 
        = vlSelf->Soc__DOT__core__DOT__mwreg_rd;
    vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count 
        = __Vdly__Soc__DOT__core__DOT__interact__DOT__over_count;
    vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0U] = 0ULL;
    vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1] 
        = __Vdlyvval__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1;
    __Vtemp_h073bfb9e__0[0U] = 0U;
    __Vtemp_h073bfb9e__0[1U] = 0U;
    __Vtemp_h073bfb9e__0[2U] = (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm);
    __Vtemp_h073bfb9e__0[3U] = (IData)((vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
                                        >> 0x20U));
    __Vtemp_h073bfb9e__0[4U] = (IData)((((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
                                         | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
                                            | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))
                                         ? ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                                             ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                             : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                                                 ? vlSelf->Soc__DOT__core__DOT___mem_io_fwmem_reg_wdata
                                                 : 
                                                ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                                                  ? vlSelf->Soc__DOT__core__DOT__mwreg_wb_data
                                                  : 0ULL)))
                                         : vlSelf->Soc__DOT__core__DOT___regfile_io_RfDe_reg2_rdata));
    __Vtemp_h073bfb9e__0[5U] = (IData)(((((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
                                          | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
                                             | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))
                                          ? ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                                              ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                              : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                                                  ? vlSelf->Soc__DOT__core__DOT___mem_io_fwmem_reg_wdata
                                                  : 
                                                 ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                                                   ? vlSelf->Soc__DOT__core__DOT__mwreg_wb_data
                                                   : 0ULL)))
                                          : vlSelf->Soc__DOT__core__DOT___regfile_io_RfDe_reg2_rdata) 
                                        >> 0x20U));
    __Vtemp_h073bfb9e__0[6U] = 4U;
    __Vtemp_h073bfb9e__0[7U] = 0U;
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc = 0x80000000ULL;
    } else if (vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_flag) {
        vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc 
            = (4ULL + vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc);
    } else if (vlSelf->Soc__DOT__core__DOT__fetch__DOT__started) {
        vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc 
            = vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_7;
    }
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_7 
        = (4ULL + vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc);
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_op_a = 0ULL;
        vlSelf->Soc__DOT__core__DOT__dereg_op_b = 0ULL;
    } else {
        vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit 
            = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type))
                ? ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                    ? (3U & (IData)(vlSelf->__VdfgTmp_h6424cc69__0))
                    : 0U) : 0U);
        vlSelf->Soc__DOT__core__DOT__dereg_op_a = (
                                                   (2U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type))
                                                    ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type))
                                                     ? vlSelf->Soc__DOT__core__DOT__fdreg_pc
                                                     : 0ULL));
        vlSelf->Soc__DOT__core__DOT__dereg_op_b = (
                                                   ((QData)((IData)(
                                                                    __Vtemp_h073bfb9e__0[
                                                                    (((IData)(0x3fU) 
                                                                      + 
                                                                      (0xffU 
                                                                       & (((0x13U 
                                                                            == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                                            ? 0U
                                                                            : 
                                                                           ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h73d7e1c7__0)
                                                                             ? 1U
                                                                             : 
                                                                            ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)
                                                                              ? 3U
                                                                              : 
                                                                             (0x1a3U 
                                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))) 
                                                                          << 6U))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & (((0x13U 
                                                            == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                            ? 0U
                                                            : 
                                                           ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h73d7e1c7__0)
                                                             ? 1U
                                                             : 
                                                            ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)
                                                              ? 3U
                                                              : 
                                                             (0x1a3U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))) 
                                                          << 6U)))
                                                      ? 0x20U
                                                      : 
                                                     ((IData)(0x40U) 
                                                      - 
                                                      (0x1fU 
                                                       & (((0x13U 
                                                            == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                            ? 0U
                                                            : 
                                                           ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h73d7e1c7__0)
                                                             ? 1U
                                                             : 
                                                            ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)
                                                              ? 3U
                                                              : 
                                                             (0x1a3U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))) 
                                                          << 6U))))) 
                                                   | (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & (((0x13U 
                                                              == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                              ? 0U
                                                              : 
                                                             ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h73d7e1c7__0)
                                                               ? 1U
                                                               : 
                                                              ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)
                                                                ? 3U
                                                                : 
                                                               (0x1a3U 
                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))) 
                                                            << 6U)))
                                                        ? 0ULL
                                                        : 
                                                       ((QData)((IData)(
                                                                        __Vtemp_h073bfb9e__0[
                                                                        (((IData)(0x1fU) 
                                                                          + 
                                                                          (0xffU 
                                                                           & (((0x13U 
                                                                                == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                                                ? 0U
                                                                                : 
                                                                               ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h73d7e1c7__0)
                                                                                 ? 1U
                                                                                 : 
                                                                                ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)
                                                                                 ? 3U
                                                                                 : 
                                                                                (0x1a3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))) 
                                                                              << 6U))) 
                                                                         >> 5U)])) 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & (((0x13U 
                                                               == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                               ? 0U
                                                               : 
                                                              ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h73d7e1c7__0)
                                                                ? 1U
                                                                : 
                                                               ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)
                                                                 ? 3U
                                                                 : 
                                                                (0x1a3U 
                                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))) 
                                                             << 6U))))) 
                                                      | ((QData)((IData)(
                                                                         __Vtemp_h073bfb9e__0[
                                                                         (6U 
                                                                          & (((0x13U 
                                                                               == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                                               ? 0U
                                                                               : 
                                                                              ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h73d7e1c7__0)
                                                                                ? 1U
                                                                                : 
                                                                               ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)
                                                                                 ? 3U
                                                                                 : 
                                                                                (0x1a3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))) 
                                                                             << 1U))])) 
                                                         >> 
                                                         (0x1fU 
                                                          & (((0x13U 
                                                               == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                               ? 0U
                                                               : 
                                                              ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h73d7e1c7__0)
                                                                ? 1U
                                                                : 
                                                               ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)
                                                                 ? 3U
                                                                 : 
                                                                (0x1a3U 
                                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))) 
                                                             << 6U)))));
    }
    vlSelf->__VdfgTmp_h6424cc69__0 = (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                      + vlSelf->Soc__DOT__core__DOT__dereg_op_b);
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag = 0U;
        vlSelf->Soc__DOT__core__DOT__mwreg_rd = 0U;
        vlSelf->Soc__DOT__core__DOT__mwreg_wb_type = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_alu_op = 0x1fU;
        vlSelf->Soc__DOT__core__DOT__fdreg_pc = 0x80000000ULL;
        vlSelf->Soc__DOT__core__DOT__mwreg_wb_data = 0ULL;
    } else {
        if ((0x100073U == (IData)(vlSelf->Soc__DOT___tm_inst))) {
            vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag = 1U;
        }
        vlSelf->Soc__DOT__core__DOT__mwreg_rd = vlSelf->Soc__DOT__core__DOT__emreg_rd;
        vlSelf->Soc__DOT__core__DOT__mwreg_wb_type 
            = vlSelf->Soc__DOT__core__DOT__emreg_wb_type;
        vlSelf->Soc__DOT__core__DOT__dereg_alu_op = 
            (0x1fU & (- (IData)((1U & ((~ ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hbf1f1a09__0) 
                                           | (0x1a3U 
                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))) 
                                       | (0x13U == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits))))));
        vlSelf->Soc__DOT__core__DOT__fdreg_pc = vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc;
        vlSelf->Soc__DOT__core__DOT__mwreg_wb_data 
            = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))
                ? vlSelf->Soc__DOT__core__DOT__emreg_alu_res
                : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))
                    ? (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
                                        (((IData)(0x3fU) 
                                          + (0x1ffU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                << 6U))) 
                                         >> 5U)])) 
                        << ((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                             << 6U)))
                             ? 0x20U : ((IData)(0x40U) 
                                        - (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                            << 6U))))) 
                       | (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                            << 6U)))
                            ? 0ULL : ((QData)((IData)(
                                                      vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                            << 6U))) 
                                                       >> 5U)])) 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                << 6U))))) 
                          | ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
                                             (0xeU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                 << 1U))])) 
                             >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                          << 6U)))))
                    : 0ULL));
    }
    if (vlSelf->Soc__DOT__core__DOT__fetch__DOT__started) {
        VSoc___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc, __Vfunc_pmem_read__1__Vfuncout);
        vlSelf->Soc__DOT___tm_inst = __Vfunc_pmem_read__1__Vfuncout;
    }
    if ((0ULL != vlSelf->Soc__DOT__core__DOT__excute__DOT___io_raddr_T_1)) {
        VSoc___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->Soc__DOT__core__DOT__excute__DOT___io_raddr_T_1, __Vfunc_pmem_read__2__Vfuncout);
        vlSelf->Soc__DOT___tm_rdata = __Vfunc_pmem_read__2__Vfuncout;
    }
    if ((0ULL != vlSelf->Soc__DOT___core_io_waddr)) {
        VSoc___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->Soc__DOT___core_io_waddr, vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata, 
                                                               ((4U 
                                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                                                                 ? 0xffU
                                                                 : 
                                                                ((3U 
                                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                                                                  ? 0xfU
                                                                  : 
                                                                 ((2U 
                                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                                                                   ? 3U
                                                                   : 
                                                                  (1U 
                                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))))));
    }
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__emreg_rd = 0U;
        vlSelf->Soc__DOT__core__DOT__emreg_ld_type = 0U;
        vlSelf->Soc__DOT__core__DOT__emreg_alu_res = 0ULL;
        vlSelf->Soc__DOT__core__DOT__emreg_wb_type = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata = 0ULL;
        vlSelf->Soc__DOT__core__DOT__dereg_sd_type = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_rd = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_wb_type = 0U;
    } else {
        vlSelf->Soc__DOT__core__DOT__emreg_rd = vlSelf->Soc__DOT__core__DOT__dereg_rd;
        vlSelf->Soc__DOT__core__DOT__emreg_ld_type 
            = vlSelf->Soc__DOT__core__DOT__dereg_ld_type;
        vlSelf->Soc__DOT__core__DOT__emreg_alu_res 
            = vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result;
        vlSelf->Soc__DOT__core__DOT__emreg_wb_type 
            = vlSelf->Soc__DOT__core__DOT__dereg_wb_type;
        vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata 
            = vlSelf->Soc__DOT__core__DOT___regfile_io_RfDe_reg2_rdata;
        vlSelf->Soc__DOT__core__DOT__dereg_sd_type 
            = (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_ha79e1490__0) 
                | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0))
                ? 0U : ((0x1a3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                        << 2U));
        vlSelf->Soc__DOT__core__DOT__dereg_rd = (0x1fU 
                                                 & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                    >> 7U));
        vlSelf->Soc__DOT__core__DOT__dereg_wb_type 
            = ((0x13U == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hbf1f1a09__0)
                         ? 1U : ((0x1a3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                 << 1U)));
    }
    vlSelf->Soc__DOT__core__DOT__regfile__DOT___regs_ext_R0_data 
        = vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
        [vlSelf->Soc__DOT__core__DOT__mwreg_rd];
    __Vtemp_h75410eeb__0[0U] = (IData)(((6U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                         ? (((- (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->Soc__DOT___tm_rdata 
                                                                            >> 0x3fU)))))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT___tm_rdata 
                                                                          >> 0x30U))))))
                                         : ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                             ? (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x2fU)))))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT___tm_rdata 
                                                                              >> 0x20U))))))
                                             : ((2U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x1fU)))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT___tm_rdata 
                                                                               >> 0x10U))))))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0xfU)))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->Soc__DOT___tm_rdata)))))
                                                  : 0ULL)))));
    __Vtemp_h75410eeb__0[1U] = (IData)((((6U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                          ? (((- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT___tm_rdata 
                                                                             >> 0x3fU)))))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(
                                                                          (vlSelf->Soc__DOT___tm_rdata 
                                                                           >> 0x30U))))))
                                          : ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                              ? (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x2fU)))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT___tm_rdata 
                                                                               >> 0x20U))))))
                                              : ((2U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x1fU)))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x10U))))))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0xfU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->Soc__DOT___tm_rdata)))))
                                                   : 0ULL)))) 
                                        >> 0x20U));
    __Vtemp_h1742dff7__0[0U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT___tm_rdata 
                                                                       >> 8U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT___tm_rdata 
                                                                              >> 7U))))))))) 
                                 << 8U) | (0xffU & (IData)(vlSelf->Soc__DOT___tm_rdata)));
    __Vtemp_h1742dff7__0[1U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT___tm_rdata 
                                                                       >> 8U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT___tm_rdata 
                                                                              >> 7U))))))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 8U))))) 
                                                         << 0x38U) 
                                                        | (0xffffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 7U)))))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h1742dff7__0[2U] = (((IData)(((((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT___tm_rdata 
                                                                        >> 8U))))) 
                                            << 0x38U) 
                                           | (0xffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT___tm_rdata 
                                                                               >> 7U)))))))) 
                                          >> 0x20U)) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x10U))))) 
                                                        << 0x38U) 
                                                       | (0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0xfU))))))))) 
                                              << 8U));
    __Vtemp_h1742dff7__0[3U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT___tm_rdata 
                                                                       >> 0x10U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT___tm_rdata 
                                                                              >> 0xfU))))))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x10U))))) 
                                                         << 0x38U) 
                                                        | (0xffffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0xfU)))))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h1742dff7__0[4U] = (((IData)(((((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT___tm_rdata 
                                                                        >> 0x10U))))) 
                                            << 0x38U) 
                                           | (0xffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT___tm_rdata 
                                                                               >> 0xfU)))))))) 
                                          >> 0x20U)) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x18U))))) 
                                                        << 0x38U) 
                                                       | (0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x17U))))))))) 
                                              << 8U));
    __Vtemp_h1742dff7__0[5U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT___tm_rdata 
                                                                       >> 0x18U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT___tm_rdata 
                                                                              >> 0x17U))))))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x18U))))) 
                                                         << 0x38U) 
                                                        | (0xffffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x17U)))))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h1742dff7__0[6U] = (((IData)(((((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT___tm_rdata 
                                                                        >> 0x18U))))) 
                                            << 0x38U) 
                                           | (0xffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT___tm_rdata 
                                                                               >> 0x17U)))))))) 
                                          >> 0x20U)) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x20U))))) 
                                                        << 0x38U) 
                                                       | (0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x1fU))))))))) 
                                              << 8U));
    __Vtemp_h1742dff7__0[7U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT___tm_rdata 
                                                                       >> 0x20U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT___tm_rdata 
                                                                              >> 0x1fU))))))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x20U))))) 
                                                         << 0x38U) 
                                                        | (0xffffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x1fU)))))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h1742dff7__0[8U] = (((IData)(((((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT___tm_rdata 
                                                                        >> 0x20U))))) 
                                            << 0x38U) 
                                           | (0xffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT___tm_rdata 
                                                                               >> 0x1fU)))))))) 
                                          >> 0x20U)) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x28U))))) 
                                                        << 0x38U) 
                                                       | (0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x27U))))))))) 
                                              << 8U));
    __Vtemp_h1742dff7__0[9U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT___tm_rdata 
                                                                       >> 0x28U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT___tm_rdata 
                                                                              >> 0x27U))))))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x28U))))) 
                                                         << 0x38U) 
                                                        | (0xffffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x27U)))))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h1742dff7__0[0xaU] = (((IData)(((((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT___tm_rdata 
                                                                          >> 0x28U))))) 
                                              << 0x38U) 
                                             | (0xffffffffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x27U)))))))) 
                                            >> 0x20U)) 
                                   >> 0x18U) | ((IData)(
                                                        (((QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x30U))))) 
                                                          << 0x38U) 
                                                         | (0xffffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x2fU))))))))) 
                                                << 8U));
    __Vtemp_h1742dff7__0[0xbU] = (((IData)((((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->Soc__DOT___tm_rdata 
                                                                         >> 0x30U))))) 
                                             << 0x38U) 
                                            | (0xffffffffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x2fU))))))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x30U))))) 
                                                           << 0x38U) 
                                                          | (0xffffffffffffffULL 
                                                             & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x2fU)))))))) 
                                                         >> 0x20U)) 
                                                << 8U));
    __Vtemp_h1742dff7__0[0xcU] = (((IData)(((((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT___tm_rdata 
                                                                          >> 0x30U))))) 
                                              << 0x38U) 
                                             | (0xffffffffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x2fU)))))))) 
                                            >> 0x20U)) 
                                   >> 0x18U) | ((IData)(
                                                        (((QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x38U))))) 
                                                          << 0x38U) 
                                                         | (0xffffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x37U))))))))) 
                                                << 8U));
    __Vtemp_h1742dff7__0[0xdU] = (((IData)((((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->Soc__DOT___tm_rdata 
                                                                         >> 0x38U))))) 
                                             << 0x38U) 
                                            | (0xffffffffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x37U))))))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x38U))))) 
                                                           << 0x38U) 
                                                          | (0xffffffffffffffULL 
                                                             & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x37U)))))))) 
                                                         >> 0x20U)) 
                                                << 8U));
    __Vtemp_h1742dff7__0[0xeU] = (((IData)((0xffffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT___tm_rdata 
                                                                             >> 0x3fU)))))))) 
                                   << 8U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x38U))))) 
                                                        << 0x38U) 
                                                       | (0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x37U)))))))) 
                                                      >> 0x20U)) 
                                             >> 0x18U));
    __Vtemp_h1742dff7__0[0xfU] = (((IData)((0xffffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT___tm_rdata 
                                                                             >> 0x3fU)))))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT___tm_rdata 
                                                                                >> 0x3fU))))))) 
                                                         >> 0x20U)) 
                                                << 8U));
    __Vtemp_hd1c116ed__0[0U] = (IData)((((QData)((IData)(
                                                         __Vtemp_h1742dff7__0[
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
                                                                __Vtemp_h1742dff7__0[
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
                                                              __Vtemp_h1742dff7__0[
                                                              (0xeU 
                                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                  << 1U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                     << 6U))))));
    __Vtemp_hd1c116ed__0[1U] = (IData)(((((QData)((IData)(
                                                          __Vtemp_h1742dff7__0[
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
                                                                 __Vtemp_h1742dff7__0[
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
                                                               __Vtemp_h1742dff7__0[
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
        = __Vtemp_hd1c116ed__0[0U];
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[3U] 
        = __Vtemp_hd1c116ed__0[1U];
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[4U] 
        = __Vtemp_h75410eeb__0[0U];
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[5U] 
        = __Vtemp_h75410eeb__0[1U];
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[6U] 
        = (IData)(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                    ? (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->Soc__DOT___tm_rdata 
                                                               >> 0x3fU))))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->Soc__DOT___tm_rdata 
                                                     >> 0x20U))))
                    : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                        ? (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->Soc__DOT___tm_rdata 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT___tm_rdata)))
                        : 0ULL)));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[7U] 
        = (IData)((((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                     ? (((QData)((IData)((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->Soc__DOT___tm_rdata 
                                                                >> 0x3fU))))))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->Soc__DOT___tm_rdata 
                                                      >> 0x20U))))
                     : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                         ? (((QData)((IData)((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->Soc__DOT___tm_rdata 
                                                                    >> 0x1fU))))))) 
                             << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT___tm_rdata)))
                         : 0ULL)) >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[8U] 
        = (IData)(vlSelf->Soc__DOT___tm_rdata);
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[9U] 
        = (IData)((vlSelf->Soc__DOT___tm_rdata >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xaU] 
        = (IData)((QData)((IData)((0xffU & ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                             ? (IData)(
                                                       (vlSelf->Soc__DOT___tm_rdata 
                                                        >> 0x38U))
                                             : ((6U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                 ? (IData)(
                                                           (vlSelf->Soc__DOT___tm_rdata 
                                                            >> 0x30U))
                                                 : (IData)(
                                                           ((((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->Soc__DOT___tm_rdata)))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->Soc__DOT___tm_rdata)))) 
                                                                 << 0x30U) 
                                                                | (0xffffffffffffULL 
                                                                   & vlSelf->Soc__DOT___tm_rdata))) 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                << 3U))))))))));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xbU] 
        = (IData)(((QData)((IData)((0xffU & ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                              ? (IData)(
                                                        (vlSelf->Soc__DOT___tm_rdata 
                                                         >> 0x38U))
                                              : ((6U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                  ? (IData)(
                                                            (vlSelf->Soc__DOT___tm_rdata 
                                                             >> 0x30U))
                                                  : (IData)(
                                                            ((((QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->Soc__DOT___tm_rdata)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->Soc__DOT___tm_rdata)))) 
                                                                  << 0x30U) 
                                                                 | (0xffffffffffffULL 
                                                                    & vlSelf->Soc__DOT___tm_rdata))) 
                                                             >> 
                                                             (0x3fU 
                                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                 << 3U))))))))) 
                   >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xcU] 
        = (IData)(((6U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                    ? (vlSelf->Soc__DOT___tm_rdata 
                       >> 0x30U) : ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                     ? (QData)((IData)(
                                                       (0xffffU 
                                                        & (IData)(
                                                                  (vlSelf->Soc__DOT___tm_rdata 
                                                                   >> 0x20U)))))
                                     : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT___tm_rdata 
                                                                       >> 0x10U)))))
                                         : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                             ? (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->Soc__DOT___tm_rdata))))
                                             : 0ULL)))));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xdU] 
        = (IData)((((6U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                     ? (vlSelf->Soc__DOT___tm_rdata 
                        >> 0x30U) : ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(
                                                                   (vlSelf->Soc__DOT___tm_rdata 
                                                                    >> 0x20U)))))
                                      : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                          ? (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT___tm_rdata 
                                                                        >> 0x10U)))))
                                          : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->Soc__DOT___tm_rdata))))
                                              : 0ULL)))) 
                   >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xeU] 
        = (IData)(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                    ? (vlSelf->Soc__DOT___tm_rdata 
                       >> 0x20U) : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                     ? (QData)((IData)(vlSelf->Soc__DOT___tm_rdata))
                                     : 0ULL)));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xfU] 
        = (IData)((((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                     ? (vlSelf->Soc__DOT___tm_rdata 
                        >> 0x20U) : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                      ? (QData)((IData)(vlSelf->Soc__DOT___tm_rdata))
                                      : 0ULL)) >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__started 
        = (1U & (~ (IData)(vlSelf->reset)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result 
        = ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
            ? vlSelf->__VdfgTmp_h6424cc69__0 : 0ULL);
    vlSelf->Soc__DOT__core__DOT__dereg_ld_type = 0U;
    vlSelf->Soc__DOT__core__DOT___mem_io_fwmem_reg_wdata 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))
            ? vlSelf->Soc__DOT__core__DOT__emreg_alu_res
            : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))
                ? vlSelf->Soc__DOT___tm_rdata : 0ULL));
    vlSelf->Soc__DOT__core__DOT___mem_io_fwmem_reg_we 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type)) 
           | (2U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type)));
    vlSelf->Soc__DOT___core_io_waddr = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                                         ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                         : 0ULL);
    vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
        = ((1U & (IData)((vlSelf->Soc__DOT__core__DOT__fdreg_pc 
                          >> 2U))) ? (IData)((vlSelf->Soc__DOT___tm_inst 
                                              >> 0x20U))
            : (IData)(vlSelf->Soc__DOT___tm_inst));
    vlSelf->Soc__DOT__core__DOT__excute__DOT___io_raddr_T_1 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type))
            ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
            : 0ULL);
    if ((0U != (0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                         >> 0x14U)))) {
        vlSelf->Soc__DOT__core__DOT___regfile_io_RfDe_reg2_rdata 
            = vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
            [(0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                       >> 0x14U))];
        vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard 
            = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type)) 
               & ((0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                            >> 0x14U)) == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_rd)));
        vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard 
            = ((IData)(vlSelf->Soc__DOT__core__DOT___mem_io_fwmem_reg_we) 
               & ((0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                            >> 0x14U)) == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_rd)));
        vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard 
            = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
               & ((0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                            >> 0x14U)) == (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_rd)));
    } else {
        vlSelf->Soc__DOT__core__DOT___regfile_io_RfDe_reg2_rdata = 0ULL;
        vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard = 0U;
        vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard = 0U;
        vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard = 0U;
    }
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard 
        = ((0U != (0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                            >> 0xfU))) & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type)) 
                                          & ((0x1fU 
                                              & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                 >> 0xfU)) 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_rd))));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard 
        = ((0U != (0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                            >> 0xfU))) & ((IData)(vlSelf->Soc__DOT__core__DOT___mem_io_fwmem_reg_we) 
                                          & ((0x1fU 
                                              & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                 >> 0xfU)) 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_rd))));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard 
        = ((0U != (0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                            >> 0xfU))) & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                                          & ((0x1fU 
                                              & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                 >> 0xfU)) 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_rd))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0 
        = ((0x17U == (0x7fU & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)) 
           | (0x37U == (0x7fU & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN 
        = ((0x380U & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                      >> 5U)) | (0x7fU & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits));
    vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard) 
            | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard) 
               | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)))
            ? ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard)
                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard)
                    ? vlSelf->Soc__DOT__core__DOT___mem_io_fwmem_reg_wdata
                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)
                        ? vlSelf->Soc__DOT__core__DOT__mwreg_wb_data
                        : 0ULL))) : ((0U != (0x1fU 
                                             & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                >> 0xfU)))
                                      ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                     [(0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                >> 0xfU))]
                                      : 0ULL));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h73d7e1c7__0 
        = ((0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0 
        = ((0x6fU == (0x7fU & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)) 
           | (0x67U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0 
        = ((0x13U == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits) 
           | (0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hbf1f1a09__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h73d7e1c7__0) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0));
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type 
        = ((0x13U == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
            ? 0U : ((0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                     ? 2U : ((0x17U == (0x7fU & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits))
                              ? 1U : ((0x37U == (0x7fU 
                                                 & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits))
                                       ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)
                                                ? 1U
                                                : (
                                                   (0x1a3U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                   << 1U))))));
    __Vtemp_hcd5eb97e__0[0U] = (IData)((((QData)((IData)(
                                                         (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                          >> 0xcU))) 
                                         << 0x2cU) 
                                        | (((QData)((IData)(
                                                            (0xfffffU 
                                                             & (- (IData)(
                                                                          (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                           >> 0x1fU)))))) 
                                            << 0xcU) 
                                           | (QData)((IData)(
                                                             (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                              >> 0x14U))))));
    __Vtemp_hcd5eb97e__0[1U] = (IData)(((((QData)((IData)(
                                                          (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                           >> 0xcU))) 
                                          << 0x2cU) 
                                         | (((QData)((IData)(
                                                             (0xfffffU 
                                                              & (- (IData)(
                                                                           (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                            >> 0x1fU)))))) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                               >> 0x14U))))) 
                                        >> 0x20U));
    __Vtemp_hcd5eb97e__0[2U] = (((- (IData)((vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                             >> 0x1fU))) 
                                 << 0x14U) | ((0xff000U 
                                               & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits) 
                                              | ((0x800U 
                                                  & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                       >> 0x14U)))));
    __Vtemp_hcd5eb97e__0[3U] = (((- (IData)((vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                   >> 7U))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
        = (((QData)((IData)((- (IData)((vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)((((0U == (0x1fU 
                                                  & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0)
                                                        ? 1U
                                                        : 
                                                       ((0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits))
                                                         ? 2U
                                                         : 
                                                        ((0x67U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                          ? 0U
                                                          : 
                                                         (3U 
                                                          & (- (IData)(
                                                                       (0x1a3U 
                                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))) 
                                                     << 5U)))
                                           ? 0U : (
                                                   __Vtemp_hcd5eb97e__0[
                                                   (((IData)(0x1fU) 
                                                     + 
                                                     (0x7fU 
                                                      & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0)
                                                           ? 0U
                                                           : 
                                                          ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0)
                                                            ? 1U
                                                            : 
                                                           ((0x6fU 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits))
                                                             ? 2U
                                                             : 
                                                            ((0x67U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                              ? 0U
                                                              : 
                                                             (3U 
                                                              & (- (IData)(
                                                                           (0x1a3U 
                                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))) 
                                                         << 5U))) 
                                                    >> 5U)] 
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
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits))
                                                            ? 2U
                                                            : 
                                                           ((0x67U 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                             ? 0U
                                                             : 
                                                            (3U 
                                                             & (- (IData)(
                                                                          (0x1a3U 
                                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))) 
                                                        << 5U))))) 
                                         | (__Vtemp_hcd5eb97e__0[
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0)
                                              ? 0U : 
                                             ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0)
                                               ? 1U
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits))
                                                   ? 2U
                                                   : 
                                                  ((0x67U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                    ? 0U
                                                    : 
                                                   (3U 
                                                    & (- (IData)(
                                                                 (0x1a3U 
                                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))] 
                                            >> (0x1fU 
                                                & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0)
                                                      ? 1U
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits))
                                                       ? 2U
                                                       : 
                                                      ((0x67U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                        ? 0U
                                                        : 
                                                       (3U 
                                                        & (- (IData)(
                                                                     (0x1a3U 
                                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))) 
                                                   << 5U)))))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_ha79e1490__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0));
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_ha79e1490__0)
            ? 0U : ((0x6fU == (0x7fU & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits))
                     ? 1U : ((0x67U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                             << 1U)));
    vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_flag 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type)) 
           | (2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type)));
    if (vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_flag) {
        vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc 
            = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                ? (vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
                   + vlSelf->Soc__DOT__core__DOT__fdreg_pc)
                : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                    ? (0xfffffffffffffffeULL & (vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4 
                                                + vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm))
                    : 0x80000000ULL));
        vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
            = vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc;
        vlSelf->io_next_pc = (4ULL + vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc);
    } else {
        vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc = 0x80000000ULL;
        vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
            = vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc;
        vlSelf->io_next_pc = ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                               ? (4ULL + vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)
                               : vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc);
    }
}
