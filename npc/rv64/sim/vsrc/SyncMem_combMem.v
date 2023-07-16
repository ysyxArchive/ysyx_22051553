// Generated by CIRCT unknown git version
// Standard header to adapt well known macros to our needs.
`ifdef RANDOMIZE_REG_INIT
  `define RANDOMIZE
`endif // RANDOMIZE_REG_INIT
`ifdef RANDOMIZE_MEM_INIT
  `define RANDOMIZE
`endif // RANDOMIZE_MEM_INIT

// RANDOM may be set to an expression that produces a 32-bit random unsigned value.
`ifndef RANDOM
  `define RANDOM $random
`endif // not def RANDOM

// Users can define INIT_RANDOM as general code that gets injected into the
// initializer block for modules with registers.
`ifndef INIT_RANDOM
  `define INIT_RANDOM
`endif // not def INIT_RANDOM

// If using random initialization, you can also define RANDOMIZE_DELAY to
// customize the delay used, otherwise 0.002 is used.
`ifndef RANDOMIZE_DELAY
  `define RANDOMIZE_DELAY 0.002
`endif // not def RANDOMIZE_DELAY

// Define INIT_RANDOM_PROLOG_ for use in our modules below.
`ifdef RANDOMIZE
  `ifdef VERILATOR
    `define INIT_RANDOM_PROLOG_ `INIT_RANDOM
  `else  // VERILATOR
    `define INIT_RANDOM_PROLOG_ `INIT_RANDOM #`RANDOMIZE_DELAY begin end
  `endif // VERILATOR
`else  // RANDOMIZE
  `define INIT_RANDOM_PROLOG_
`endif // RANDOMIZE

// VCS coverage exclude_file
module SyncMem_combMem(	// Ram.scala:16:30
  input  [7:0]  R0_addr,
  input         R0_en,
                R0_clk,
  output [31:0] R0_data);

  reg [31:0] Memory[0:255];	// Ram.scala:16:30
  reg        _GEN;	// Ram.scala:16:30
  reg [7:0]  _GEN_0;	// Ram.scala:16:30
  always @(posedge R0_clk) begin	// Ram.scala:16:30
    _GEN <= R0_en;	// Ram.scala:16:30
    _GEN_0 <= R0_addr;	// Ram.scala:16:30
  end // always @(posedge)
  `ifndef SYNTHESIS	// Ram.scala:16:30
    // `ifdef RANDOMIZE_MEM_INIT	// Ram.scala:16:30
    //   integer initvar;	// Ram.scala:16:30
    //   reg [31:0] _RANDOM_MEM;	// Ram.scala:16:30
    // `endif // RANDOMIZE_MEM_INIT
    `ifdef RANDOMIZE_REG_INIT	// Ram.scala:16:30
      reg [31:0] _RANDOM;	// Ram.scala:16:30
    `endif // RANDOMIZE_REG_INIT
    initial begin	// Ram.scala:16:30
      `INIT_RANDOM_PROLOG_	// Ram.scala:16:30
    //   `ifdef RANDOMIZE_MEM_INIT	// Ram.scala:16:30
    //     for (initvar = 0; initvar < 256; initvar = initvar + 1) begin
    //       _RANDOM_MEM = {`RANDOM};
    //       Memory[initvar] = _RANDOM_MEM[31:0];
    //     end	// Ram.scala:16:30
    //   `endif // RANDOMIZE_MEM_INIT

      `ifdef RANDOMIZE_MEM_INIT	// Ram.scala:16:30
        $readmemh("../Mem.txt", Memory);
      `endif // RANDOMIZE_MEM_INIT

      `ifdef RANDOMIZE_REG_INIT	// Ram.scala:16:30
        _RANDOM = {`RANDOM};	// Ram.scala:16:30
        _GEN = _RANDOM[0];	// Ram.scala:16:30
        _GEN_0 = _RANDOM[8:1];	// Ram.scala:16:30
      `endif // RANDOMIZE_REG_INIT
    end // initial
  `endif // not def SYNTHESIS
  assign R0_data = _GEN ? Memory[_GEN_0] : 32'bx;	// Ram.scala:16:30
endmodule