#include <nvboard.h>
#include <Vtop.h>
#include <verilated_vcd_c.h>
#include <verilated.h>

static TOP_NAME dut;


void nvboard_bind_all_pins(Vtop* top);

static void single_cycle() {  //clk总是为1
  dut.clk = 0; dut.eval();
  dut.clk = 1; dut.eval();
}

static void edge_change() {  
  dut.clk ^= 1; dut.eval();
}

static void reset(int n) {
  dut.rst = 1;
  while (n -- > 0) single_cycle();
  dut.rst = 0;
}

int main(int argc, char **argv) {

  nvboard_bind_all_pins(&dut);
  nvboard_init();

  reset(10);

  while(1) {
    if(dut.clk == 1)      //只有上升沿才更新
      nvboard_update();
    
    edge_change();

    
  }

  return 0;
}