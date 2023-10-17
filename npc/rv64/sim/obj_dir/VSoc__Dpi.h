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
    // DPI import at vsrc/Soc.v:10050:33
    extern long long pmem_read(const svLogicVecVal* raddr);
    // DPI import at vsrc/Soc.v:10053:30
    extern void pmem_write(const svLogicVecVal* waddr, const svLogicVecVal* wdata, char wmask);
    // DPI import at vsrc/Soc.v:9937:30
    extern void update_debuginfo(const svLogicVecVal* pc, svLogic pc_req, const svLogicVecVal* inst, svLogic inst_valid, svLogic load_use, const svLogicVecVal* op_a, const svLogicVecVal* op_b, const svLogicVecVal* result, svLogic br_yes, svLogic mem_access, const svLogicVecVal* mem_addr, const svLogicVecVal* rd, const svLogicVecVal* reg_wdata, svLogic reg_wen, svLogic csr_wen, const svLogicVecVal* csr_wdata, const svLogicVecVal* csr_waddr, svLogic sdb_stall, const svLogicVecVal* trap_state, svLogic Icache_hit, svLogic Icache_req, svLogic fcfe_stall, svLogic Dcache_hit, svLogic Dcache_req, svLogic fcex_stall);

#ifdef __cplusplus
}
#endif

#endif  // guard
