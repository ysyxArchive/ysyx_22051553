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

  vluint64_t main_time = 0;
  const vluint64_t sim_time = 50000000;

  Verilated::commandArgs(argc,argv);
  Verilated::traceEverOn(true);
  VerilatedVcdC * vcd = new VerilatedVcdC;
  
  dut.trace(vcd,0);
  vcd->open("wave.vcd");

  
  nvboard_bind_all_pins(&dut);
  nvboard_init();

  reset(10);

  while(main_time < sim_time) {
    int a = rand() % 8;
    int b = rand() % 8;
    dut.io_value0 = a;
    dut.io_value1 = b;
    dut.io_sel    = rand() % 2;

    edge_change();

    if(dut.clk == 1)      //只有上升沿才更新
      nvboard_update();

    if(main_time % 999 == 0)    //999为采样频率     为奇数才能采样高低电平，若为偶数，只有高或者低电平
      vcd->dump(main_time);

    main_time++;
  }

  vcd->close();
  delete vcd;

  return 0;
}