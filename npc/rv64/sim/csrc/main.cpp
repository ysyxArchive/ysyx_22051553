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

static void reset(int n) {
  dut.reset = 1;
  while (n -- > 0) single_cycle();
  dut.reset = 0;
}

int main(int argc, char **argv) {
  
  reset(10);

  Verilated::traceEverOn(true);
  VerilatedVcdC * vcd = new VerilatedVcdC;

  VL_IN(Memory,31,0);
  FILE* file = fopen("Mem.txt", "r");
  unsigned int buffer[256];
  unsigned int buffer_idx = 0;
  if(file != NULL){
    while(fscanf(file, "%08x", "&buffer[buffer_idx]") > 0)
      buffer_idx++;
    
    fclose(file);
    dut.Memory = buffer;
  }


  dut.trace(vcd,0);
  vcd->open("wave.vcd");

  while(sim_time < 50000000){
    edge_change();
    vcd->dump(sim_time);
    sim_time++;
  }


  vcd->close();
    
}

