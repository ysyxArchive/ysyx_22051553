#include <common.h>

void do_syscall(Context *c);

static Context* do_event(Event e, Context* c) {
  printf("irq second\n");

  switch (e.event) {
    case EVENT_YIELD: printf("yield!\n"); break;
    case EVENT_SYSCALL: do_syscall(c); break;
    default: panic("Unhandled event ID = %d", e.event);
  }
  
  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  printf("doevent:%p\n", do_event);
  cte_init(do_event);
}
