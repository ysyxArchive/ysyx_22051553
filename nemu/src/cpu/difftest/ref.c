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
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

//把difftest放在这边

struct diff_context_t {   //c和c++之间传结构体指针，模仿spike的ref
  unsigned long gpr[32];
  unsigned long pc;
};


static void set_regs(void* diff_context){  //设置ref中的寄存器
  struct diff_context_t* ctx = (struct diff_context_t*)diff_context;
  for(int i = 0; i < 32; i++){
    cpu.gpr[i] = ctx->gpr[i];
  }
  
}

static void get_regs(void* diff_context){  //设置npc的寄存器
  struct diff_context_t* ctx = (struct diff_context_t*)diff_context;
  for(int i = 0; i < 32; i++){
    ctx->gpr[i] = cpu.gpr[i];
  }
  ctx->pc = cpu.pc;
}



__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {  //这里的addr是0x80000000
  
  char* dut_mem = (char *)buf;

  for(int i = 0; i < n; i++){
    paddr_write(addr+i, 1, *(dut_mem+i));
  }
  
}

__EXPORT void difftest_regcpy(void *dut, bool direction) {
  
  if (direction == DIFFTEST_TO_REF) {
    set_regs(dut);
  } else {
    get_regs(dut);
  }

}

__EXPORT void difftest_exec(uint64_t n) {   //dut执行n步后执行
  cpu_exec(n);
}

__EXPORT void difftest_skip_ref() {   //跳过一条指令，顺序到下一条指令,且复制reg
  cpu.pc += 4;
}

__EXPORT void difftest_raise_intr(word_t NO) {
    cpu.pc = isa_raise_intr(NO, cpu.pc-8);  //-8和in_ecall执行的周期数有关，在in_ecall时，nemu中pc会增加
}

__EXPORT void difftest_mret() { 
  cpu.pc = isa_mret();
}


__EXPORT void difftest_init(int port, struct diff_context_t* regs_state) {
  void init_mem();
  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
}
