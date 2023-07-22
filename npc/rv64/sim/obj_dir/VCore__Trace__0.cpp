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
        bufp->chgQData(oldp+24,(vlSelf->Core__DOT__fetch__DOT__pc),64);
        bufp->chgBit(oldp+26,((0U != (IData)(vlSelf->Core__DOT__mwreg_wb_type))));
        bufp->chgQData(oldp+27,((((0U != (IData)(vlSelf->Core__DOT__mwreg_wb_type)) 
                                  & (0U != (IData)(vlSelf->Core__DOT__mwreg_rd)))
                                  ? vlSelf->Core__DOT__mwreg_alu_res
                                  : vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [vlSelf->Core__DOT__mwreg_rd])),64);
        bufp->chgQData(oldp+29,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                [vlSelf->Core__DOT__mwreg_rd]),64);
        bufp->chgQData(oldp+31,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
        bufp->chgQData(oldp+33,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
        bufp->chgQData(oldp+35,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
        bufp->chgQData(oldp+37,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
        bufp->chgQData(oldp+39,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
        bufp->chgQData(oldp+41,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
        bufp->chgQData(oldp+43,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
        bufp->chgQData(oldp+45,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
        bufp->chgQData(oldp+47,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
        bufp->chgQData(oldp+49,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
        bufp->chgQData(oldp+51,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
        bufp->chgQData(oldp+53,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
        bufp->chgQData(oldp+55,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
        bufp->chgQData(oldp+57,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
        bufp->chgQData(oldp+59,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
        bufp->chgQData(oldp+61,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
        bufp->chgQData(oldp+63,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
        bufp->chgQData(oldp+65,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
        bufp->chgQData(oldp+67,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
        bufp->chgQData(oldp+69,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
        bufp->chgQData(oldp+71,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
        bufp->chgQData(oldp+73,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
        bufp->chgQData(oldp+75,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
        bufp->chgQData(oldp+77,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
        bufp->chgQData(oldp+79,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
        bufp->chgQData(oldp+81,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
        bufp->chgQData(oldp+83,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
        bufp->chgQData(oldp+85,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
        bufp->chgQData(oldp+87,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
        bufp->chgQData(oldp+89,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
        bufp->chgQData(oldp+91,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
        bufp->chgQData(oldp+93,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
    }
    bufp->chgBit(oldp+95,(vlSelf->clock));
    bufp->chgBit(oldp+96,(vlSelf->reset));
    bufp->chgBit(oldp+97,(vlSelf->io_ramio_dataOut_valid));
    bufp->chgIData(oldp+98,(vlSelf->io_ramio_dataOut_bits),32);
    bufp->chgBit(oldp+99,(vlSelf->io_ramio_pc_valid));
    bufp->chgQData(oldp+100,(vlSelf->io_ramio_pc_bits),64);
    bufp->chgQData(oldp+102,((((IData)(vlSelf->io_ramio_dataOut_valid) 
                               & (0U != (0x1fU & (vlSelf->io_ramio_dataOut_bits 
                                                  >> 0xfU))))
                               ? vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory
                              [((IData)(vlSelf->io_ramio_dataOut_valid)
                                 ? (0x1fU & (vlSelf->io_ramio_dataOut_bits 
                                             >> 0xfU))
                                 : 0U)] : 0ULL)),64);
    bufp->chgCData(oldp+104,(((IData)(vlSelf->io_ramio_dataOut_valid)
                               ? (0x1fU & (vlSelf->io_ramio_dataOut_bits 
                                           >> 0xfU))
                               : 0U)),5);
    bufp->chgCData(oldp+105,(((IData)(vlSelf->io_ramio_dataOut_valid)
                               ? (0x1fU & (vlSelf->io_ramio_dataOut_bits 
                                           >> 0x14U))
                               : 0U)),5);
    bufp->chgQData(oldp+106,(((IData)(vlSelf->Core__DOT__decode__DOT___cu_io_opa_type)
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
    bufp->chgQData(oldp+108,((((- (QData)((IData)(((IData)(vlSelf->io_ramio_dataOut_valid) 
                                                   & (vlSelf->io_ramio_dataOut_bits 
                                                      >> 0x1fU))))) 
                               << 0xcU) | (QData)((IData)(
                                                          ((IData)(vlSelf->io_ramio_dataOut_valid)
                                                            ? 
                                                           (vlSelf->io_ramio_dataOut_bits 
                                                            >> 0x14U)
                                                            : 0U))))),64);
    bufp->chgCData(oldp+110,(((IData)(vlSelf->io_ramio_dataOut_valid)
                               ? (0x1fU & (vlSelf->io_ramio_dataOut_bits 
                                           >> 7U)) : 0U)),5);
    bufp->chgIData(oldp+111,(((IData)(vlSelf->io_ramio_dataOut_valid)
                               ? vlSelf->io_ramio_dataOut_bits
                               : 0U)),32);
    bufp->chgQData(oldp+112,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory
                             [((IData)(vlSelf->io_ramio_dataOut_valid)
                                ? (0x1fU & (vlSelf->io_ramio_dataOut_bits 
                                            >> 0xfU))
                                : 0U)]),64);
    bufp->chgQData(oldp+114,(vlSelf->Core__DOT__regfile__DOT__regs_ext__DOT__Memory
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
