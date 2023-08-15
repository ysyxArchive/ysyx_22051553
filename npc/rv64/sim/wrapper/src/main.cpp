#include "stdlib.h"
#include <verilated_vcd_c.h>
#include <verilated.h>
#include "../../obj_dir/VSoc.h"
#include <iostream>

static VSoc dut;

vluint64_t sim_time = 0;
VerilatedVcdC * vcd = new VerilatedVcdC;

extern "C" {
  void sdb_mainloop();

  int exam_exit();

  void single_cycle();

}

int exam_exit(){
  if(Verilated::gotFinish()){
    return 1;
  }
  else {
    return 0;
  }
}


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
  
  Verilated::traceEverOn(true);
  
  dut.trace(vcd,0);
  vcd->open("wave.vcd");
  reset(2);        
  
  sdb_mainloop();
  
  vcd->close();
    
}

