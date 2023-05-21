module GCD(
  input         clock,
  input         reset,
  input  [15:0] io_value1,
  input  [15:0] io_value2,
  input         io_loadingValues,
  output [15:0] io_outputGCD,
  output        io_outputValid
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [15:0] x; // @[GCD.scala 17:14]
  reg [15:0] y; // @[GCD.scala 18:14]
  wire [15:0] _x_T_1 = x - y; // @[GCD.scala 20:24]
  wire [15:0] _y_T_1 = y - x; // @[GCD.scala 20:49]
  assign io_outputGCD = x; // @[GCD.scala 27:18]
  assign io_outputValid = y == 16'h0; // @[GCD.scala 28:23]
  always @(posedge clock) begin
    if (io_loadingValues) begin // @[GCD.scala 22:26]
      x <= io_value1; // @[GCD.scala 23:7]
    end else if (x > y) begin // @[GCD.scala 20:15]
      x <= _x_T_1; // @[GCD.scala 20:19]
    end
    if (io_loadingValues) begin // @[GCD.scala 22:26]
      y <= io_value2; // @[GCD.scala 24:7]
    end else if (!(x > y)) begin // @[GCD.scala 20:15]
      y <= _y_T_1; // @[GCD.scala 20:44]
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
  x = _RAND_0[15:0];
  _RAND_1 = {1{`RANDOM}};
  y = _RAND_1[15:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
