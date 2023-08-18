#include "isa-def.hpp"
#include <cstdio>
#include <cassert>

void cpu::gpr_display(){
    printf("pc\t\t0x%-16lx\t\t%-20ld\n", pc, pc);

    for(int i = 0; i < 31; i ++){
      printf("%s\t\t0x%-16lx\t\t%-20ld\n", regs[i], gpr[i], gpr[i]);
    }    
}

void cpu::set_value(int num, unsigned long value){
  assert(num < 32 && num >= 0);
  gpr[num] = value;
}


const char *cpu::regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};


cpu diff_cpu;

