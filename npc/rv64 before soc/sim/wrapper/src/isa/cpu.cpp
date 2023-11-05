#include "isa-def.hpp"
#include <string.h>
#include <stdio.h>
#include <cassert>

void cpu::gpr_display(){
    
    for(int i = 0; i < 32; i ++){
      printf("%s\t\t0x%-16lx\t\t%-20ld\n", regs[i], regs_state.gpr[i], regs_state.gpr[i]);
    }    
}

void cpu::set_value(int num, unsigned long value){
  assert(num < 33 && num >= 0);
  if(num == 32)
    regs_state.pc = value;  
  else
    regs_state.gpr[num] = value;
}

void cpu::set_csr(int addr, unsigned long value){
  switch (addr)
  {
    case 0x305:  //mtvec
      csr[0] = value;
      break;
    case 0x342: //mcause
      csr[1] = value;
      break;
    case 0x341: //mepc
      csr[2] = value;
      break;
    case 0x304: //mie
      csr[3] = value;
      break;
    case 0x344: //mip
      csr[4] = value;
      break;
    case 0x300: //mstatus
      csr[5] = value;
      break;
    case 0x340: //mscratch
      csr[6] = value;
      break;
    
    default: assert(0);
      break;
  }
}

void cpu::csr_display(){
    for(int i = 0; i < 6; i ++){
      printf("%s\t\t0x%-16lx\t\t%-20ld\n", csrs[i], csr[i], csr[i]);
    }  
}


unsigned long cpu::isa_reg_str2val(const char *s, bool *success){
  
  *success = true;

  if(strcmp(s, "$0") == 0)
    return cpu_ins.regs_state.gpr[0];

  if(strcmp(s+1, "pc") == 0)
    return cpu_ins.regs_state.pc;

  for(int i = 1; i < 32; i++){
    if(strcmp(s+1, regs[i]) == 0)
      return cpu_ins.regs_state.gpr[i];
  }

  
  printf("no such reg\n");
  return 0;
  
}

void* cpu::get_reg_bundle(){
  return &regs_state;
}


const char *cpu::regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

const char *cpu::csrs[] = {
  "mtvec", "mcause", "mepc", "mie", "mip", "mstatus", "mscratch"
};


cpu cpu_ins;

