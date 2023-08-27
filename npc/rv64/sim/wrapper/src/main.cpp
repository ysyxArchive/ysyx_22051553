#include "stdlib.h"
#include <verilated_vcd_c.h>
#include <verilated.h>
#include "VSoc.h"
#include <iostream>
#include <cstdio>
#include "memory.hpp"
#include <list>

static VSoc dut;

vluint64_t sim_time = 0;
VerilatedVcdC * vcd = new VerilatedVcdC;

void sdb_mainloop();
void init_regex();
void init_difftest(const char *ref_so_file, long img_size, int port);
void init_disasm(const char *triple);




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

static void syn_diff(){
  int n = 5;
  while(n -- > 0) single_cycle();
}

int main(int argc, char **argv) {
  init_regex();
  init_disasm("riscv64" "-pc-linux-gnu");

  uint64_t size = pmem.mem_loader("/home/shikye/ysyx-workbench/npc/rv64/sim/wrapper/files/file");

  Verilated::traceEverOn(true);
  
  dut.trace(vcd,0);
  vcd->open("wave.vcd");
  
  reset(2);        

  syn_diff();


  init_difftest("/home/shikye/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so", size, 0);

  sdb_mainloop();
  
  vcd->close();
    
}

