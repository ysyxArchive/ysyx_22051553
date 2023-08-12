#ifndef ARCH_H__
#define ARCH_H__

// #define CONFIG_STRACE
// #define CONFIG_ETRACE


#define GPR1 gpr[17] // 系统调用号a7
#define GPR2 gpr[10]
#define GPR3 gpr[11]
#define GPR4 gpr[12]
#define GPRx gpr[10] // 返回值是a0

struct Context {
  // TODO: fix the order of these members to match trap.S
  uintptr_t gpr[32], mcause, mstatus, mepc;
  void *pdir;//这是什么
};


#endif