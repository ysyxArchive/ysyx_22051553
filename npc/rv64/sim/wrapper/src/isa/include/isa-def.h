#ifndef __ISA_RISCV64_H__
#define __ISA_RISCV64_H__

#define MEPC 0x341
#define MCAUSE 0x342
#define MTVEC 0x305
#define MSTATUS 0x300




enum {mepc, mcause, mtvec, mstatus};

typedef struct {
  word_t gpr[32];
  vaddr_t pc;
  word_t csr[3];
} riscv64_CPU_state;


#endif