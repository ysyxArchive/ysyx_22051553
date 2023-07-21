// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCore__Syms.h"


void VCore___024root__trace_chg_sub_0(VCore___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VCore___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root__trace_chg_top_0\n"); );
    // Init
    VCore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCore___024root*>(voidSelf);
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VCore___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VCore___024root__trace_chg_sub_0(VCore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,((0x1fU & (- (IData)(
                                                   (1U 
                                                    & ((~ (IData)(vlSelf->Core__DOT__decode__DOT__cu__DOT___controlsig_T_9)) 
                                                       | (0x13U 
                                                          == vlSelf->Core__DOT__decode__DOT___inst_T))))))),5);
        bufp->chgCData(oldp+1,(vlSelf->Core__DOT__decode__DOT___cu_io_opa_type),2);
        bufp->chgIData(oldp+2,(vlSelf->Core__DOT__decode__DOT___inst_T),32);
        bufp->chgBit(oldp+3,(vlSelf->Core__DOT__decode__DOT___cu_io_opa_type));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+4,(vlSelf->Core__DOT__fdreg_pc),64);
        bufp->chgQData(oldp+6,(vlSelf->Core__DOT__dereg_op_a),64);
        bufp->chgQData(oldp+8,(vlSelf->Core__DOT__dereg_op_b),64);
        bufp->chgCData(oldp+10,(vlSelf->Core__DOT__dereg_rd),5);
        bufp->chgCData(oldp+11,(vlSelf->Core__DOT__dereg_alu_op),5);
        bufp->chgCData(oldp+12,(vlSelf->Core__DOT__dereg_wb_type),2);
        bufp->chgQData(oldp+13,(vlSelf->Core__DOT__emreg_alu_res),64);
        bufp->chgCData(oldp+15,(vlSelf->Core__DOT__emreg_wb_type),2);
        bufp->chgCData(oldp+16,(vlSelf->Core__DOT__emreg_rd),5);
        bufp->chgQData(oldp+17,(vlSelf->Core__DOT__mwreg_alu_res),64);
        bufp->chgCData(oldp+19,(vlSelf->Core__DOT__mwreg_wb_type),2);
        bufp->chgCData(oldp+20,(vlSelf->Core__DOT__mwreg_rd),5);
        bufp->chgQData(oldp+21,(((0U == (IData)(vlSelf->Core__DOT__dereg_alu_op))
                                  ? (vlSelf->Core__DOT__dereg_op_a 
                                     + vlSelf->Core__DOT__dereg_op_b)
                                  : 0ULL)),64);
        bufp->chgBit(oldp+23,(vlSelf->Core__DOT__fetch__DOT__started));
        bufp->chgIData(oldp+24,(vlSelf->Core__DOT__fetch__DOT__pc),32);
        bufp->chgBit(oldp+25,((0U != (IData)(vlSelf->Core__DOT__mwreg_wb_type))));
        bufp->chgQData(oldp+26,((((0U != (IData)(vlSelf->Core__DOT__mwreg_wb_type)) 
                                  & (0U != (IData)(vlSelf->Core__DOT__mwreg_rd)))
                                  ? vlSelf->Core__DOT__mwreg_alu_res
                                  : vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [vlSelf->Core__DOT__mwreg_rd])),64);
        bufp->chgQData(oldp+28,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                [vlSelf->Core__DOT__mwreg_rd]),64);
        bufp->chgQData(oldp+30,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
        bufp->chgQData(oldp+32,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
        bufp->chgQData(oldp+34,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
        bufp->chgQData(oldp+36,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
        bufp->chgQData(oldp+38,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
        bufp->chgQData(oldp+40,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
        bufp->chgQData(oldp+42,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
        bufp->chgQData(oldp+44,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
        bufp->chgQData(oldp+46,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
        bufp->chgQData(oldp+48,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
        bufp->chgQData(oldp+50,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
        bufp->chgQData(oldp+52,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
        bufp->chgQData(oldp+54,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
        bufp->chgQData(oldp+56,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
        bufp->chgQData(oldp+58,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
        bufp->chgQData(oldp+60,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
        bufp->chgQData(oldp+62,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
        bufp->chgQData(oldp+64,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
        bufp->chgQData(oldp+66,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
        bufp->chgQData(oldp+68,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
        bufp->chgQData(oldp+70,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
        bufp->chgQData(oldp+72,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
        bufp->chgQData(oldp+74,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
        bufp->chgQData(oldp+76,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
        bufp->chgQData(oldp+78,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
        bufp->chgQData(oldp+80,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
        bufp->chgQData(oldp+82,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
        bufp->chgQData(oldp+84,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
        bufp->chgQData(oldp+86,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
        bufp->chgQData(oldp+88,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
        bufp->chgQData(oldp+90,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
        bufp->chgQData(oldp+92,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
    }
    bufp->chgBit(oldp+94,(vlSelf->clock));
    bufp->chgBit(oldp+95,(vlSelf->reset));
    bufp->chgBit(oldp+96,(vlSelf->io_ramio_dataOut_valid));
    bufp->chgIData(oldp+97,(vlSelf->io_ramio_dataOut_bits),32);
    bufp->chgBit(oldp+98,(vlSelf->io_ramio_pc_valid));
    bufp->chgQData(oldp+99,(vlSelf->io_ramio_pc_bits),64);
    bufp->chgQData(oldp+101,((((IData)(vlSelf->io_ramio_dataOut_valid) 
                               & (0U != (0x1fU & (vlSelf->io_ramio_dataOut_bits 
                                                  >> 0xfU))))
                               ? vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [((IData)(vlSelf->io_ramio_dataOut_valid)
                                 ? (0x1fU & (vlSelf->io_ramio_dataOut_bits 
                                             >> 0xfU))
                                 : 0U)] : 0ULL)),64);
    bufp->chgCData(oldp+103,(((IData)(vlSelf->io_ramio_dataOut_valid)
                               ? (0x1fU & (vlSelf->io_ramio_dataOut_bits 
                                           >> 0xfU))
                               : 0U)),5);
    bufp->chgCData(oldp+104,(((IData)(vlSelf->io_ramio_dataOut_valid)
                               ? (0x1fU & (vlSelf->io_ramio_dataOut_bits 
                                           >> 0x14U))
                               : 0U)),5);
    bufp->chgQData(oldp+105,(((IData)(vlSelf->Core__DOT__decode__DOT___cu_io_opa_type)
                               ? (((IData)(vlSelf->io_ramio_dataOut_valid) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->io_ramio_dataOut_bits 
                                                >> 0xfU))))
                                   ? vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                  [((IData)(vlSelf->io_ramio_dataOut_valid)
                                     ? (0x1fU & (vlSelf->io_ramio_dataOut_bits 
                                                 >> 0xfU))
                                     : 0U)] : 0ULL)
                               : vlSelf->Core__DOT__fdreg_pc)),64);
    bufp->chgQData(oldp+107,((((- (QData)((IData)(((IData)(vlSelf->io_ramio_dataOut_valid) 
                                                   & (vlSelf->io_ramio_dataOut_bits 
                                                      >> 0x1fU))))) 
                               << 0xcU) | (QData)((IData)(
                                                          ((IData)(vlSelf->io_ramio_dataOut_valid)
                                                            ? 
                                                           (vlSelf->io_ramio_dataOut_bits 
                                                            >> 0x14U)
                                                            : 0U))))),64);
    bufp->chgCData(oldp+109,(((IData)(vlSelf->io_ramio_dataOut_valid)
                               ? (0x1fU & (vlSelf->io_ramio_dataOut_bits 
                                           >> 7U)) : 0U)),5);
    bufp->chgQData(oldp+110,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory
                             [((IData)(vlSelf->io_ramio_dataOut_valid)
                                ? (0x1fU & (vlSelf->io_ramio_dataOut_bits 
                                            >> 0xfU))
                                : 0U)]),64);
    bufp->chgQData(oldp+112,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory
                             [((IData)(vlSelf->io_ramio_dataOut_valid)
                                ? (0x1fU & (vlSelf->io_ramio_dataOut_bits 
                                            >> 0x14U))
                                : 0U)]),64);
}

void VCore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root__trace_cleanup\n"); );
    // Init
    VCore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCore___024root*>(voidSelf);
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
