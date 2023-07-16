module Ram(
  input         clock,
  
  output        io_dataOut_valid,
  output [31:0] io_dataOut_bits,
  input         io_pc_valid,
  input  [31:0] io_pc_bits
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] SyncMem [0:255]; // @[Ram.scala 16:30]
  wire  SyncMem_io_dataOut_bits_MPORT_en; // @[Ram.scala 16:30]
  wire [7:0] SyncMem_io_dataOut_bits_MPORT_addr; // @[Ram.scala 16:30]
  wire [31:0] SyncMem_io_dataOut_bits_MPORT_data; // @[Ram.scala 16:30]
  reg  SyncMem_io_dataOut_bits_MPORT_en_pipe_0;
  reg [7:0] SyncMem_io_dataOut_bits_MPORT_addr_pipe_0;
  reg  inst_valid; // @[Ram.scala 19:29]
  reg [31:0] pc_addr; // @[Ram.scala 21:26]
  assign SyncMem_io_dataOut_bits_MPORT_en = SyncMem_io_dataOut_bits_MPORT_en_pipe_0;
  assign SyncMem_io_dataOut_bits_MPORT_addr = SyncMem_io_dataOut_bits_MPORT_addr_pipe_0;
  assign SyncMem_io_dataOut_bits_MPORT_data = SyncMem[SyncMem_io_dataOut_bits_MPORT_addr]; // @[Ram.scala 16:30]
  assign io_dataOut_valid = inst_valid; // @[Ram.scala 20:22]
  assign io_dataOut_bits = inst_valid ? SyncMem_io_dataOut_bits_MPORT_data : 32'h0; // @[Ram.scala 22:27]
  always @(posedge clock) begin
    SyncMem_io_dataOut_bits_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      SyncMem_io_dataOut_bits_MPORT_addr_pipe_0 <= pc_addr[7:0];
    end
    inst_valid <= io_pc_valid; // @[Ram.scala 19:29]
    pc_addr <= io_pc_bits; // @[Ram.scala 21:26]
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
  integer initvar;
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  SyncMem_io_dataOut_bits_MPORT_en_pipe_0 = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  SyncMem_io_dataOut_bits_MPORT_addr_pipe_0 = _RAND_1[7:0];
  _RAND_2 = {1{`RANDOM}};
  inst_valid = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  pc_addr = _RAND_3[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
  $readmemh("/home/shikye/ysyx-workbench/npc/rv64/sim/Mem.txt", SyncMem);
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
