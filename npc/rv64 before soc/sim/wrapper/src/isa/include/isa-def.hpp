#ifndef __ISA_RISCV64_H__
#define __ISA_RISCV64_H__


#define MTVEC 0x305
#define MCAUSE 0x342
#define MEPC 0x341
#define MIE 0x304
#define MIP 0x344
#define MSTATUS 0x300
#define MSCRATCH 0x340

#include<array>


struct diff_context_t {   //c和c++之间传结构体指针，模仿spike的ref
  unsigned long gpr[32];
  unsigned long pc;
};


class cpu{

public:
  static const char* regs[];
  static const char* csrs[];

  cpu(): regs_state({}) { 
    regs_state.pc = 0x80000000;
  }

  void gpr_display();
  void set_value(int num, unsigned long value);

  unsigned long isa_reg_str2val(const char *s, bool *success);

  void* get_reg_bundle();

  void set_csr(int addr, unsigned long value);
  void csr_display();
  
  struct diff_context_t regs_state; //原来是array与unsigned long混合，不适合传递

  unsigned long csr[7]; //mtvec, mcause, mepc, mie, mstatus, mscratch, mip

private:
  
  

};

extern cpu cpu_ins;


#endif