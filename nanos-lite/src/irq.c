#include <common.h>

static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    default: panic("Unhandled event ID = %d", e.event);
  }
  
  printf("regs values: %ld,%ld,%ld,%ld,%ld,%ld,%ld,%ld,\n%ld,%ld,%ld,%ld,%ld,%ld,%ld,%ld,\n%ld,%ld,%ld,%ld,%ld,%ld,%ld,%ld,\n%ld,%ld,%ld,%ld,%ld,%ld,%ld,%ld\n", 
  c->gpr[0], c->gpr[1], c->gpr[2], c->gpr[3], c->gpr[4], c->gpr[5], c->gpr[6], c->gpr[7], c->gpr[8], c->gpr[9], c->gpr[10], c->gpr[11], c->gpr[12], c->gpr[13], c->gpr[14], c->gpr[15], c->gpr[16], c->gpr[17], c->gpr[18], c->gpr[19], c->gpr[20], c->gpr[21], c->gpr[22], c->gpr[23], c->gpr[24], c->gpr[25], c->gpr[26], c->gpr[27], c->gpr[28], c->gpr[29], c->gpr[30], c->gpr[31]);
  printf("mcause is %lx\n", c->mcause);
  printf("mstatus is %lx\n", c->mstatus);
  printf("mepc is %lx\n", c->mepc);

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
