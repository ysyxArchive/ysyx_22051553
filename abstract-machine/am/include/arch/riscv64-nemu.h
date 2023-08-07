#ifndef ARCH_H__
#define ARCH_H__

#define GPR1 gpr[17] // 系统调用号a7
#define GPR2 gpr[10]
#define GPR3 gpr[11]
#define GPR4 gpr[12]
#define GPRx gpr[17] // 返回值也是a7

struct Context {
  // TODO: fix the order of these members to match trap.S
  uintptr_t gpr[32], mcause, mstatus, mepc;
  void *pdir;//这是什么
};


#endif