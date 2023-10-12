#include "stdlib.h"
#include <verilated_vcd_c.h>
#include <verilated.h>
#include "VSoc.h"
#include <iostream>
#include <cstdio>
#include "memory.hpp"
#include <list>
#include <define.h>
#include <display.hpp>


static VSoc dut;

#ifdef VCD_ON
vluint64_t sim_time = 0;
VerilatedVcdC * vcd = new VerilatedVcdC;
#endif

void sdb_mainloop();
void init_regex();
void init_difftest(const char *ref_so_file, long img_size, int port);
void init_disasm(const char *triple);
void getelf(char* filename);


void init_keymap();




void single_cycle() {  //clock总是为1
  dut.clock = 0; dut.eval();
  #ifdef VCD_ON
  vcd->dump(sim_time);
  sim_time ++;
  #endif
  dut.clock = 1; dut.eval();

  #ifdef VCD_ON
  vcd->dump(sim_time);              //将发生的变化记录到sim_time节点
  sim_time ++;
  #endif
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
  int n = 12;
  while(n -- > 0) single_cycle();
}

int main(int argc, char **argv) {
  init_regex();
  
  display.init_screen();
  init_keymap();

  #ifdef ITRACE
  init_disasm("riscv64" "-pc-linux-gnu");
  #endif

  uint64_t size = pmem.mem_loader("/home/shikye/ysyx-workbench/npc/rv64/sim/wrapper/files/file");

  #ifdef FTRACE
  getelf("/home/shikye/ysyx-workbench/npc/rv64/sim/wrapper/files/file");
  #endif


  #ifdef VCD_ON
  Verilated::traceEverOn(true);
  dut.trace(vcd,0);
  vcd->open("wave.vcd");
  #endif

  reset(2);        
  
  // syn_diff();
  
  #ifdef DIFFTEST
  init_difftest("/home/shikye/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so", size, 0);
  #endif

  sdb_mainloop();
  
  #ifdef VCD_ON
  vcd->close();
  #endif
    
}

