#include <common.h>
#include "syscall.h"

static void sys_yield(Context *c){
  yield();
  c->GPRx = 0;
}

static void sys_write(Context *c){
  if(c->GPR2 == 1 || c->GPR2 == 2){
    for(int i = 0; i < c-> GPR4; i --){
      putch(*((char *)(c->GPR3) + i));
    }
  }

  c->GPRx = c->GPR4;
}

static void sys_exit(Context *c){
  #ifdef CONFIG_STRACE
  printf("syscall: %s over\nreturn value is 0x%lx\n", 
  syscall_name[c->GPR1], c->GPRx);
  #endif

  halt(c->GPRx);
}



void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;

  #ifdef CONFIG_STRACE
  printf("syscall: %s happen\nparas:a0:0x%lx a1:0x%lx a2:0x%lx a7:0x%lx\n", 
  syscall_name[a[0]], c->GPR2,  c->GPR3, c->GPR4, c->GPR1);
  #endif

  switch (a[0]) {
    case SYS_yield: sys_yield(c); break;
    case SYS_exit: sys_exit(c); break;                     //不在该循环中打印返回值
    case SYS_write: sys_write(c); break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }

  #ifdef CONFIG_STRACE
  printf("syscall: %s over\nreturn value is 0x%lx\n", 
  syscall_name[a[0]], c->GPRx);
  #endif
}
