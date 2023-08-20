// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSoc__Syms.h"
#include "VSoc___024unit.h"

extern "C" void update_debuginfo(const svLogicVecVal* pc, svLogic pc_req, const svLogicVecVal* inst, svLogic inst_valid, const svLogicVecVal* op_a, const svLogicVecVal* op_b, const svLogicVecVal* result, const svLogicVecVal* rd, const svLogicVecVal* reg_wdata, svLogic reg_wen);

VL_INLINE_OPT void VSoc___024unit____Vdpiimwrap_update_debuginfo_TOP____024unit(IData/*31:0*/ pc, CData/*0:0*/ pc_req, IData/*31:0*/ inst, CData/*0:0*/ inst_valid, QData/*63:0*/ op_a, QData/*63:0*/ op_b, QData/*63:0*/ result, CData/*4:0*/ rd, QData/*63:0*/ reg_wdata, CData/*0:0*/ reg_wen) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSoc___024unit____Vdpiimwrap_update_debuginfo_TOP____024unit\n"); );
    // Body
    svLogicVecVal pc__Vcvt[1];
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) VL_SET_SVLV_I(32, pc__Vcvt + 1 * pc__Vidx, pc);
    svLogic pc_req__Vcvt;
    for (size_t pc_req__Vidx = 0; pc_req__Vidx < 1; ++pc_req__Vidx) pc_req__Vcvt = pc_req;
    svLogicVecVal inst__Vcvt[1];
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) VL_SET_SVLV_I(32, inst__Vcvt + 1 * inst__Vidx, inst);
    svLogic inst_valid__Vcvt;
    for (size_t inst_valid__Vidx = 0; inst_valid__Vidx < 1; ++inst_valid__Vidx) inst_valid__Vcvt = inst_valid;
    svLogicVecVal op_a__Vcvt[2];
    for (size_t op_a__Vidx = 0; op_a__Vidx < 1; ++op_a__Vidx) VL_SET_SVLV_Q(64, op_a__Vcvt + 2 * op_a__Vidx, op_a);
    svLogicVecVal op_b__Vcvt[2];
    for (size_t op_b__Vidx = 0; op_b__Vidx < 1; ++op_b__Vidx) VL_SET_SVLV_Q(64, op_b__Vcvt + 2 * op_b__Vidx, op_b);
    svLogicVecVal result__Vcvt[2];
    for (size_t result__Vidx = 0; result__Vidx < 1; ++result__Vidx) VL_SET_SVLV_Q(64, result__Vcvt + 2 * result__Vidx, result);
    svLogicVecVal rd__Vcvt[1];
    for (size_t rd__Vidx = 0; rd__Vidx < 1; ++rd__Vidx) VL_SET_SVLV_I(5, rd__Vcvt + 1 * rd__Vidx, rd);
    svLogicVecVal reg_wdata__Vcvt[2];
    for (size_t reg_wdata__Vidx = 0; reg_wdata__Vidx < 1; ++reg_wdata__Vidx) VL_SET_SVLV_Q(64, reg_wdata__Vcvt + 2 * reg_wdata__Vidx, reg_wdata);
    svLogic reg_wen__Vcvt;
    for (size_t reg_wen__Vidx = 0; reg_wen__Vidx < 1; ++reg_wen__Vidx) reg_wen__Vcvt = reg_wen;
    update_debuginfo(pc__Vcvt, pc_req__Vcvt, inst__Vcvt, inst_valid__Vcvt, op_a__Vcvt, op_b__Vcvt, result__Vcvt, rd__Vcvt, reg_wdata__Vcvt, reg_wen__Vcvt);
}

extern "C" long long pmem_read(const svLogicVecVal* raddr);

VL_INLINE_OPT void VSoc___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, QData/*63:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSoc___024unit____Vdpiimwrap_pmem_read_TOP____024unit\n"); );
    // Body
    svLogicVecVal raddr__Vcvt[1];
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) VL_SET_SVLV_I(32, raddr__Vcvt + 1 * raddr__Vidx, raddr);
    long long pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(raddr__Vcvt);
    pmem_read__Vfuncrtn = pmem_read__Vfuncrtn__Vcvt;
}

extern "C" void pmem_write(const svLogicVecVal* waddr, const svLogicVecVal* wdata, char wmask);

VL_INLINE_OPT void VSoc___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSoc___024unit____Vdpiimwrap_pmem_write_TOP____024unit\n"); );
    // Body
    svLogicVecVal waddr__Vcvt[1];
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) VL_SET_SVLV_I(32, waddr__Vcvt + 1 * waddr__Vidx, waddr);
    svLogicVecVal wdata__Vcvt[2];
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) VL_SET_SVLV_Q(64, wdata__Vcvt + 2 * wdata__Vidx, wdata);
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}
