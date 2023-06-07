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

  vluint64_t main_time = 0;
  const vluint64_t sim_time = 50000000;

  nvboard_bind_all_pins(&dut);
  nvboard_init();

  reset(10);

  while(main_time < sim_time) {
    if(dut.clock == 1)      //只有上升沿才更新
      nvboard_update();
    
    edge_change();

    printf("value is %x%x\n",dut.io_Segout1,dut.io_Segout0);

    main_time ++;
    
  }

  return 0;
}