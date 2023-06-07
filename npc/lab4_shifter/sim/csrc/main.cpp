#include <nvboard.h>
#include <Vtop.h>
#include <verilated_vcd_c.h>
#include <verilated.h>

static TOP_NAME dut;


void nvboard_bind_all_pins(Vtop* top);

static void single_cycle() {  //clock总是为1
  dut.clock = 0; dut.eval();
  dut.clock = 1; dut.eval();
}

static void edge_change() {  
  dut.clock ^= 1; dut.eval();
}

static void reset(int n) {
  dut.reset = 1;
  while (n -- > 0) single_cycle();
  dut.reset = 0;
}

int main(int argc, char **argv) {

  nvboard_bind_all_pins(&dut);
  nvboard_init();

  reset(10);

  while(1) {
    if(dut.clock == 1)      //只有上升沿才更新
      nvboard_update();
    
    edge_change();

    
  }

  return 0;
}