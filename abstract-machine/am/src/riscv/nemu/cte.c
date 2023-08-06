#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>


static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {  //根据系统调用号，得到事件原因

 


  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case 0xffffffffffffffff: ev.event = EVENT_YIELD; break;
      default: ev.event = EVENT_ERROR; break;
    }

    #ifdef CONFIG_ETRACE
      printf("irq happen, event is %d\n", ev.event);
    #endif

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // initialize for difftest
  // asm volatile("csrw mstatus, %0" : : "i"(0xa00001800)); 立即数域没有这么大
  unsigned long int temp = 0xa00001800;
  asm volatile("csrw mstatus, %0" : : "r"(temp));


  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
  // asm volatile("li a7, -1; ecall");
  asm volatile("li a7, -1");
  asm volatile("ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
