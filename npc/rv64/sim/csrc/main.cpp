#include <verilated_vcd_c.h>
#include <verilated.h>
#include "VSoc.h"
#include <iostream>

vluint64_t sim_time = 0;

static VSoc dut;

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
  
  Verilated::traceEverOn(true);
  VerilatedVcdC * vcd = new VerilatedVcdC;


  dut.trace(vcd,0);
  vcd->open("wave.vcd");


  reset(2);        

  while(!Verilated::gotFinish()){      
    edge_change();   //第一次进入时，是第一个下降沿
    vcd->dump(sim_time);
    sim_time++;
    if(sim_time > 100)
      break;
  }

  vcd->close();
    
}

