#include <common.h>
#include "syscall.h"

static void sys_yield(Context *c){
  yield();
  c->GPRx = 0;
}

static void sys_exit(Context *c){
  halt(c->GPRx);
}



void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;

  Log("syscall: %s happen\nparas:a0:0x%lx a1:0x%lx a2:0x%lx a7:0x%lx", 
  syscall_name[a[0]], c->GPR2,  c->GPR3, c->GPR4, c->GPR1);

  switch (a[0]) {
    case SYS_yield: sys_yield(c); break;
    case SYS_exit: sys_exit(c); break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
  Log("syscall: %s over\nreturn value is 0x%lx", 
  syscall_name[a[0]], c->GPRx);
}
