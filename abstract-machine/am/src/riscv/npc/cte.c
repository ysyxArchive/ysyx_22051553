#include <am.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  printf("in handle\n");
  
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case 11: ev.event = EVENT_YIELD; break;
      case 0x80000007: ev.event = EVENT_IRQ_TIMER; break;
      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
  
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {//打开全局中断、打开定时器中断、设置mtime和mtimecmp
    
    unsigned long mtime, mtimecmp;
    asm volatile (
        // 读取mtime寄存器
        "li a0, 0x200bff8\n"
        "ld %[mtime], 0(a0)\n"
        
        // 设置mtimecmp寄存器
        "addi %[mtimecmp], %[mtime], 100\n"
        "li a0, 0x2004000\n"
        "sd %[mtimecmp], 0(a0)\n"
        : [mtime] "=r" (mtime), [mtimecmp] "=r" (mtimecmp)
        :
        : "a0", "a1" // clobber list
    );
    printf("1 ok\n");
    asm volatile (
        // 确保 a0 是 0
        "li a0, 0\n"
        
        // 使能mie的MTIE位
        "li a1, 0x80\n" // MTIE在第七位
        "csrrw a0, mie, a1\n"
        
        // 使能mstatus的MIE位
        "li a1, 0x8\n" // MIE在第三位
        "csrrw a0, mstatus, a1\n"
        : 
        :
        : "a0", "a1" // clobber list
    );

}
