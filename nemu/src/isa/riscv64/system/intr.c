/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <isa-def.h>

extern riscv64_CPU_state cpu;

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  cpu.csr[mepc] = epc;
  cpu.csr[mcause] = NO;
  uint64_t mstatus_buf = cpu.csr[mstatus];
  cpu.csr[mstatus] = BITS(mstatus_buf, 63,8) << 8 | BITS(mstatus_buf, 3,3) << 7 | BITS(mstatus_buf, 6,4) << 4 | 
    0 << 3 | BITS(mstatus_buf, 2,0);

  return cpu.csr[mtvec];
}

word_t isa_mret() {

  uint64_t mstatus_buf = cpu.csr[mstatus];
  cpu.csr[mstatus] = BITS(mstatus_buf, 63,4) << 4 | BITS(mstatus_buf, 7,7) << 3 | BITS(mstatus_buf, 2,0);

  return cpu.csr[mepc];
}



word_t isa_query_intr() {
  return INTR_EMPTY;
}
