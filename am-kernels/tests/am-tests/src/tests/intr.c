#include <amtest.h>

static int loc = 0;

Context *simple_trap(Event ev, Context *ctx) {
  switch(ev.event) {
    case EVENT_IRQ_TIMER:
      printf("in timer %d\n", loc);
      loc ++;
      unsigned long mtime, mtimecmp;
      asm volatile (
        // 读取mtime寄存器
        "li a0, 0x200bff8\n"
        "ld %[mtime], 0(a0)\n"
        
        // 设置mtimecmp寄存器
        // "lui a1, %[upper]\n"
        // "addi a1, a1, %[lower]\n"
        "li a1, 1000\n"
        "add %[mtimecmp], a1, %[mtime]\n"
        "li a0, 0x2004000\n"
        "sd %[mtimecmp], 0(a0)\n"
        : [mtime] "=r" (mtime), [mtimecmp] "=r" (mtimecmp)
        :
        // : [upper] "I" (2000000 >> 12), [lower] "I" (2000000 & 0xfff)
        : "a0", "a1" // clobber list
    );
      
      break;
    case EVENT_IRQ_IODEV:
      putch('d'); break;
    case EVENT_YIELD:
      putch('y'); break;
    default:
      break;
  }
  return ctx;
}

void hello_intr() {
  printf("Hello, AM World @ " __ISA__ "\n");
  printf("  t = timer, d = device, y = yield\n");
  io_read(AM_INPUT_CONFIG);
  printf("begin!\n");
  iset(1);
  printf("over!\n");
  while (1) {
  
    for (volatile int i = 0; i < 10000000; i++) ;
    // yield();
  }
}
