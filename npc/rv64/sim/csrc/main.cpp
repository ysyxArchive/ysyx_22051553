#include <verilated_vcd_c.h>
#include <verilated.h>
#include "VRam.h"

vluint64_t sim_time = 0;

static VRam dut;

static void single_cycle() {  //clock总是为1
  dut.clock = 0; dut.eval();
  dut.clock = 1; dut.eval();
}

static void edge_change() {  
  dut.clock ^= 1; dut.eval();
}

// static void reset(int n) {
//   dut.reset = 1;
//   while (n -- > 0) single_cycle();
//   dut.reset = 0;
// }

int main(int argc, char **argv) {
  
  Verilated::traceEverOn(true);
  VerilatedVcdC * vcd = new VerilatedVcdC;


  dut.trace(vcd,0);
  vcd->open("wave.vcd");

  dut.io_pc_valid = 0;

  single_cycle();
  while(sim_time < 50000){
    edge_change();
    
    if(sim_time >= 24999){
      dut.io_pc_bits = 1;
      dut.io_pc_valid = 1;
    }


    vcd->dump(sim_time);
    sim_time++;
  }


  vcd->close();
    
}

