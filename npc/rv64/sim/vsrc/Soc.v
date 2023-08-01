module Fetch(
  input         clock,
  input         reset,
  output        io_pc_valid,
  output [63:0] io_pc_bits
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [63:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg  started; // @[Fetch.scala 24:26]
  reg [63:0] pc; // @[Fetch.scala 27:21]
  wire [63:0] _next_pc_T_1 = pc + 64'h4; // @[Fetch.scala 28:34]
  assign io_pc_valid = started; // @[Fetch.scala 33:17]
  assign io_pc_bits = pc; // @[Fetch.scala 32:16]
  always @(posedge clock) begin
    if (reset) begin // @[Fetch.scala 24:26]
      started <= 1'h0; // @[Fetch.scala 24:26]
    end else begin
      started <= 1'h1; // @[Fetch.scala 25:13]
    end
    if (reset) begin // @[Fetch.scala 27:21]
      pc <= 64'h80000000; // @[Fetch.scala 27:21]
    end else if (started) begin // @[Fetch.scala 28:22]
      pc <= _next_pc_T_1;
    end
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
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
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
  started = _RAND_0[0:0];
  _RAND_1 = {2{`RANDOM}};
  pc = _RAND_1[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Core(
  input         clock,
  input         reset,
  input         io_ramio_dataOut_valid,
  input  [31:0] io_ramio_dataOut_bits,
  output        io_ramio_pc_valid,
  output [63:0] io_ramio_pc_bits
);
  wire [31:0] interact_inst; // @[Core.scala 17:26]
  wire  interact_clk; // @[Core.scala 17:26]
  wire  fetch_clock; // @[Core.scala 24:23]
  wire  fetch_reset; // @[Core.scala 24:23]
  wire  fetch_io_pc_valid; // @[Core.scala 24:23]
  wire [63:0] fetch_io_pc_bits; // @[Core.scala 24:23]
  Interact interact ( // @[Core.scala 17:26]
    .inst(interact_inst),
    .clk(interact_clk)
  );
  Fetch fetch ( // @[Core.scala 24:23]
    .clock(fetch_clock),
    .reset(fetch_reset),
    .io_pc_valid(fetch_io_pc_valid),
    .io_pc_bits(fetch_io_pc_bits)
  );
  assign io_ramio_pc_valid = fetch_io_pc_valid; // @[Core.scala 67:17]
  assign io_ramio_pc_bits = fetch_io_pc_bits; // @[Core.scala 67:17]
  assign interact_inst = io_ramio_dataOut_valid ? io_ramio_dataOut_bits : 32'h0; // @[Core.scala 18:28]
  assign interact_clk = clock; // @[Core.scala 19:21]
  assign fetch_clock = clock;
  assign fetch_reset = reset;
endmodule
module Ram(
  input         clock,
  output        io_dataOut_valid,
  output [31:0] io_dataOut_bits,
  input         io_pc_valid,
  input  [63:0] io_pc_bits
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
`endif // RANDOMIZE_REG_INIT
  reg [7:0] SyncMem [0:255]; // @[Ram.scala 18:30]
  wire  SyncMem_io_dataOut_bits_MPORT_en; // @[Ram.scala 18:30]
  wire [7:0] SyncMem_io_dataOut_bits_MPORT_addr; // @[Ram.scala 18:30]
  wire [7:0] SyncMem_io_dataOut_bits_MPORT_data; // @[Ram.scala 18:30]
  wire  SyncMem_io_dataOut_bits_MPORT_1_en; // @[Ram.scala 18:30]
  wire [7:0] SyncMem_io_dataOut_bits_MPORT_1_addr; // @[Ram.scala 18:30]
  wire [7:0] SyncMem_io_dataOut_bits_MPORT_1_data; // @[Ram.scala 18:30]
  wire  SyncMem_io_dataOut_bits_MPORT_2_en; // @[Ram.scala 18:30]
  wire [7:0] SyncMem_io_dataOut_bits_MPORT_2_addr; // @[Ram.scala 18:30]
  wire [7:0] SyncMem_io_dataOut_bits_MPORT_2_data; // @[Ram.scala 18:30]
  wire  SyncMem_io_dataOut_bits_MPORT_3_en; // @[Ram.scala 18:30]
  wire [7:0] SyncMem_io_dataOut_bits_MPORT_3_addr; // @[Ram.scala 18:30]
  wire [7:0] SyncMem_io_dataOut_bits_MPORT_3_data; // @[Ram.scala 18:30]
  reg  SyncMem_io_dataOut_bits_MPORT_en_pipe_0;
  reg [7:0] SyncMem_io_dataOut_bits_MPORT_addr_pipe_0;
  reg  SyncMem_io_dataOut_bits_MPORT_1_en_pipe_0;
  reg [7:0] SyncMem_io_dataOut_bits_MPORT_1_addr_pipe_0;
  reg  SyncMem_io_dataOut_bits_MPORT_2_en_pipe_0;
  reg [7:0] SyncMem_io_dataOut_bits_MPORT_2_addr_pipe_0;
  reg  SyncMem_io_dataOut_bits_MPORT_3_en_pipe_0;
  reg [7:0] SyncMem_io_dataOut_bits_MPORT_3_addr_pipe_0;
  reg  inst_valid; // @[Ram.scala 22:29]
  wire [63:0] _io_dataOut_bits_T_1 = io_pc_bits + 64'h3; // @[Ram.scala 27:36]
  wire [63:0] _io_dataOut_bits_T_5 = io_pc_bits + 64'h2; // @[Ram.scala 27:79]
  wire [63:0] _io_dataOut_bits_T_9 = io_pc_bits + 64'h1; // @[Ram.scala 28:36]
  wire [31:0] _io_dataOut_bits_T_14 = {SyncMem_io_dataOut_bits_MPORT_data,SyncMem_io_dataOut_bits_MPORT_1_data,
    SyncMem_io_dataOut_bits_MPORT_2_data,SyncMem_io_dataOut_bits_MPORT_3_data}; // @[Cat.scala 33:92]
  assign SyncMem_io_dataOut_bits_MPORT_en = SyncMem_io_dataOut_bits_MPORT_en_pipe_0;
  assign SyncMem_io_dataOut_bits_MPORT_addr = SyncMem_io_dataOut_bits_MPORT_addr_pipe_0;
  assign SyncMem_io_dataOut_bits_MPORT_data = SyncMem[SyncMem_io_dataOut_bits_MPORT_addr]; // @[Ram.scala 18:30]
  assign SyncMem_io_dataOut_bits_MPORT_1_en = SyncMem_io_dataOut_bits_MPORT_1_en_pipe_0;
  assign SyncMem_io_dataOut_bits_MPORT_1_addr = SyncMem_io_dataOut_bits_MPORT_1_addr_pipe_0;
  assign SyncMem_io_dataOut_bits_MPORT_1_data = SyncMem[SyncMem_io_dataOut_bits_MPORT_1_addr]; // @[Ram.scala 18:30]
  assign SyncMem_io_dataOut_bits_MPORT_2_en = SyncMem_io_dataOut_bits_MPORT_2_en_pipe_0;
  assign SyncMem_io_dataOut_bits_MPORT_2_addr = SyncMem_io_dataOut_bits_MPORT_2_addr_pipe_0;
  assign SyncMem_io_dataOut_bits_MPORT_2_data = SyncMem[SyncMem_io_dataOut_bits_MPORT_2_addr]; // @[Ram.scala 18:30]
  assign SyncMem_io_dataOut_bits_MPORT_3_en = SyncMem_io_dataOut_bits_MPORT_3_en_pipe_0;
  assign SyncMem_io_dataOut_bits_MPORT_3_addr = SyncMem_io_dataOut_bits_MPORT_3_addr_pipe_0;
  assign SyncMem_io_dataOut_bits_MPORT_3_data = SyncMem[SyncMem_io_dataOut_bits_MPORT_3_addr]; // @[Ram.scala 18:30]
  assign io_dataOut_valid = inst_valid; // @[Ram.scala 23:22]
  assign io_dataOut_bits = io_dataOut_valid ? _io_dataOut_bits_T_14 : 32'h0; // @[Ram.scala 26:27]
  always @(posedge clock) begin
    SyncMem_io_dataOut_bits_MPORT_en_pipe_0 <= io_pc_valid;
    if (io_pc_valid) begin
      SyncMem_io_dataOut_bits_MPORT_addr_pipe_0 <= _io_dataOut_bits_T_1[7:0];
    end
    SyncMem_io_dataOut_bits_MPORT_1_en_pipe_0 <= io_pc_valid;
    if (io_pc_valid) begin
      SyncMem_io_dataOut_bits_MPORT_1_addr_pipe_0 <= _io_dataOut_bits_T_5[7:0];
    end
    SyncMem_io_dataOut_bits_MPORT_2_en_pipe_0 <= io_pc_valid;
    if (io_pc_valid) begin
      SyncMem_io_dataOut_bits_MPORT_2_addr_pipe_0 <= _io_dataOut_bits_T_9[7:0];
    end
    SyncMem_io_dataOut_bits_MPORT_3_en_pipe_0 <= io_pc_valid;
    if (io_pc_valid) begin
      SyncMem_io_dataOut_bits_MPORT_3_addr_pipe_0 <= io_pc_bits[7:0];
    end
    inst_valid <= io_pc_valid; // @[Ram.scala 22:29]
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
  SyncMem_io_dataOut_bits_MPORT_1_en_pipe_0 = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  SyncMem_io_dataOut_bits_MPORT_1_addr_pipe_0 = _RAND_3[7:0];
  _RAND_4 = {1{`RANDOM}};
  SyncMem_io_dataOut_bits_MPORT_2_en_pipe_0 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  SyncMem_io_dataOut_bits_MPORT_2_addr_pipe_0 = _RAND_5[7:0];
  _RAND_6 = {1{`RANDOM}};
  SyncMem_io_dataOut_bits_MPORT_3_en_pipe_0 = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  SyncMem_io_dataOut_bits_MPORT_3_addr_pipe_0 = _RAND_7[7:0];
  _RAND_8 = {1{`RANDOM}};
  inst_valid = _RAND_8[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
  $readmemh("inst", SyncMem);
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Soc(
  input   clock,
  input   reset
);
  wire  core_clock; // @[Soc.scala 10:22]
  wire  core_reset; // @[Soc.scala 10:22]
  wire  core_io_ramio_dataOut_valid; // @[Soc.scala 10:22]
  wire [31:0] core_io_ramio_dataOut_bits; // @[Soc.scala 10:22]
  wire  core_io_ramio_pc_valid; // @[Soc.scala 10:22]
  wire [63:0] core_io_ramio_pc_bits; // @[Soc.scala 10:22]
  wire  ram_clock; // @[Soc.scala 11:21]
  wire  ram_io_dataOut_valid; // @[Soc.scala 11:21]
  wire [31:0] ram_io_dataOut_bits; // @[Soc.scala 11:21]
  wire  ram_io_pc_valid; // @[Soc.scala 11:21]
  wire [63:0] ram_io_pc_bits; // @[Soc.scala 11:21]
  Core core ( // @[Soc.scala 10:22]
    .clock(core_clock),
    .reset(core_reset),
    .io_ramio_dataOut_valid(core_io_ramio_dataOut_valid),
    .io_ramio_dataOut_bits(core_io_ramio_dataOut_bits),
    .io_ramio_pc_valid(core_io_ramio_pc_valid),
    .io_ramio_pc_bits(core_io_ramio_pc_bits)
  );
  Ram ram ( // @[Soc.scala 11:21]
    .clock(ram_clock),
    .io_dataOut_valid(ram_io_dataOut_valid),
    .io_dataOut_bits(ram_io_dataOut_bits),
    .io_pc_valid(ram_io_pc_valid),
    .io_pc_bits(ram_io_pc_bits)
  );
  assign core_clock = clock;
  assign core_reset = reset;
  assign core_io_ramio_dataOut_valid = ram_io_dataOut_valid; // @[Soc.scala 13:27]
  assign core_io_ramio_dataOut_bits = ram_io_dataOut_bits; // @[Soc.scala 13:27]
  assign ram_clock = clock;
  assign ram_io_pc_valid = core_io_ramio_pc_valid; // @[Soc.scala 15:21]
  assign ram_io_pc_bits = core_io_ramio_pc_bits - 64'h80000000; // @[Soc.scala 14:45]
endmodule
