#ifndef ARCH_H__
#define ARCH_H__

struct Context {
  // TODO: fix the order of these members to match trap.S
  uintptr_t gpr[32], mcause, mstatus, mepc;
  void *pdir;//这是什么
};

#define GPR1 gpr[17] // a7
#define GPR2 gpr[2]
#define GPR3 gpr[3]
#define GPR4 gpr[4]
// #define GPRx gpr[x]
#endif
