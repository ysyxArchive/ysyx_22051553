#include <common.h>
#include "syscall.h"
#include "fs.h"
#include <sys/time.h>
#include <proc.h>

void naive_uload(PCB *pcb, const char *filename);

static void sys_yield(Context *c){
  printf("yield is a syscall\n");
  c->GPRx = 0;
}

static void sys_open(Context *c){

  c->GPRx = fs_open((const char*)(c->GPR2), (int)(c->GPR3), (int)(c->GPR4));
  
}

static void sys_write(Context *c){

  if(c-> GPR2 <= 0)
    assert(0);
  else {
    c->GPRx = fs_write((int)(c->GPR2), (const void*)(c->GPR3), (size_t)(c->GPR4));
  }
}

static void sys_read(Context *c){
  
  if( c->GPR2 <= 2){
    assert(0);
  }
  else{
    c->GPRx = fs_read((int)(c->GPR2), (void*)(c->GPR3), (size_t)(c->GPR4));
  }
}

static void sys_lseek(Context *c){
  if( c->GPR2 <= 2){
    assert(0);
  }
  else{
    c->GPRx = fs_lseek((int)(c->GPR2), (size_t)(c->GPR3), (int)(c->GPR4));
  }
}

static void sys_close(Context *c){
  

  // if( c->GPR2 <= 2){        好像最后系统会产生close(0)
  //   assert(0);
  // }
  // else{
    c->GPRx = fs_close((int)(c->GPR2));
  // }
}



static void sys_brk(Context *c){
  c->GPRx = 0;
}

static void sys_gettimeofday(Context *c){
  
  __uint64_t time = 0;
  time = io_read(AM_TIMER_UPTIME).us;

  struct timeval *tv = (void*)(c->GPR2);
  struct timezone *tz = (void*)(c->GPR3);

  if(tv != NULL){
    tv->tv_sec = time/(1000000);
    tv->tv_usec = time%(1000000);
  }

  if(tz != NULL){

  }

  c->GPRx = 0;


}

static void sys_exit(Context *c){
  #ifdef CONFIG_STRACE
  printf("syscall: %s over\nreturn value is 0x%lx\n", 
  syscall_name[c->GPR1], c->GPRx);
  #endif

  naive_uload(0, "/bin/nterm");
}

static void sys_execve(Context *c){
  naive_uload(0, (const char *)(c->GPR2));

  c->GPRx = 0;
}


void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;

  #ifdef CONFIG_STRACE
  printf("syscall: %s happen\nparas:a0:0x%lx a1:0x%lx a2:0x%lx a7:0x%lx\n", 
  syscall_name[a[0]], c->GPR2,  c->GPR3, c->GPR4, c->GPR1);
  #endif

  c->mepc += 4;         //对于ecall触发的异常，由软件实现mepc+4
  switch (a[0]) {
    case SYS_gettimeofday: sys_gettimeofday(c); break;
    case SYS_brk: sys_brk(c); break;
    case SYS_yield: sys_yield(c); break;
    case SYS_exit: sys_exit(c); break;                     //不在该循环中打印返回值
    case SYS_write: sys_write(c); break;
    case SYS_read: sys_read(c); break;
    case SYS_open: sys_open(c); break;
    case SYS_lseek: sys_lseek(c); break;
    case SYS_close: sys_close(c); break;
    case SYS_execve: sys_execve(c); break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }

  #ifdef CONFIG_STRACE
  printf("syscall: %s over\nreturn value is 0x%lx\n", 
  syscall_name[a[0]], c->GPRx);
  #endif
}
