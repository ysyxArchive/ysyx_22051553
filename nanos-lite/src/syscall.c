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

  printf("syscall ID = %d\n", a[0]);
  switch (a[0]) {
    case SYS_yield: sys_yield(c); break;
    case SYS_exit: sys_exit(c); break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
