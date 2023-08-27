// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VSOC__DPI_H_
#define VERILATED_VSOC__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/Soc.v:1243:33
    extern long long pmem_read(const svLogicVecVal* raddr);
    // DPI import at vsrc/Soc.v:1246:30
    extern void pmem_write(const svLogicVecVal* waddr, const svLogicVecVal* wdata, char wmask);
    // DPI import at vsrc/Soc.v:1157:30
    extern void update_debuginfo(const svLogicVecVal* pc, svLogic pc_req, const svLogicVecVal* inst, svLogic inst_valid, svLogic load_use, const svLogicVecVal* op_a, const svLogicVecVal* op_b, const svLogicVecVal* result, svLogic br_yes, const svLogicVecVal* rd, const svLogicVecVal* reg_wdata, svLogic reg_wen);

#ifdef __cplusplus
}
#endif

#endif  // guard
