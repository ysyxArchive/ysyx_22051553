#include "stdlib.h"
#include <verilated_vcd_c.h>
#include <verilated.h>
#include "VSoc.h"
#include <iostream>
#include <cstdio>
#include "memory.hpp"

static VSoc dut;

vluint64_t sim_time = 0;
VerilatedVcdC * vcd = new VerilatedVcdC;

void sdb_mainloop();
void init_regex();




void single_cycle() {  //clock总是为1
  dut.clock = 0; dut.eval();
  vcd->dump(sim_time);
  sim_time ++;
  dut.clock = 1; dut.eval();
  vcd->dump(sim_time);
  sim_time ++;
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
  init_regex();

  pmem.mem_loader("/home/shikye/ysyx-workbench/npc/rv64/sim/wrapper/files/file");

  Verilated::traceEverOn(true);
  
  dut.trace(vcd,0);
  vcd->open("wave.vcd");
  
  reset(2);        
  

  sdb_mainloop();
  
  vcd->close();
    
}

