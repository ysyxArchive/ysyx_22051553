// Generated by CIRCT unknown git version
// Standard header to adapt well known macros to our needs.
`ifdef RANDOMIZE_REG_INIT
  `define RANDOMIZE
`endif // RANDOMIZE_REG_INIT

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

module Button(	// <stdin>:2:10
  input        clock,
               reset,
               io_ps2_clk,
               io_ps2_data,
  output [2:0] io_button_out);

  reg  [9:0] buffer;	// Button.scala:34:36
  reg  [3:0] count;	// Button.scala:35:36
  reg  [2:0] ps2_clk_sync;	// Button.scala:36:36
  wire       sampling = ps2_clk_sync[2] & ~(ps2_clk_sync[1]);	// Button.scala:36:36, :39:{45,49,51,64}
  wire       _T_1 = count == 4'hA;	// Button.scala:35:36, :52:20
  always @(posedge clock) begin
    if (reset) begin
      buffer <= 10'h0;	// Button.scala:34:36
      count <= 4'h0;	// Button.scala:35:36
      ps2_clk_sync <= 3'h0;	// Button.scala:36:36
    end
    else begin
      if (~sampling | _T_1) begin	// Button.scala:34:36, :39:49, :49:19, :51:30, :52:{20,29}
      end
      else	// Button.scala:34:36, :39:49, :49:19, :51:30, :52:{20,29}
        buffer <= {count == 4'h9 ? io_ps2_data : buffer[9], count == 4'h8 ? io_ps2_data : buffer[8], count ==
                                                                4'h7 ? io_ps2_data : buffer[7], count == 4'h6 ? io_ps2_data : buffer[6], count == 4'h5 ?
                                                                io_ps2_data : buffer[5], count == 4'h4 ? io_ps2_data : buffer[4], count == 4'h3 ?
                                                                io_ps2_data : buffer[3], count == 4'h2 ? io_ps2_data : buffer[2], count == 4'h1 ?
                                                                io_ps2_data : buffer[1], count == 4'h0 ? io_ps2_data : buffer[0]};	// Button.scala:34:36, :35:36, :41:{36,44}, :43:22, :79:33
      if (sampling) begin	// Button.scala:39:49

        if (_T_1)	// Button.scala:52:20
          count <= 4'h0;	// Button.scala:35:36
        else	// Button.scala:52:20
          count <= count + 4'h1;	// Button.scala:35:36, :43:22, :81:28
      end
      ps2_clk_sync <= {ps2_clk_sync[1:0], io_ps2_clk};	// Button.scala:36:36, :46:37, Cat.scala:33:92
    end
  end // always @(posedge)
  `ifndef SYNTHESIS	// <stdin>:2:10
    `ifdef FIRRTL_BEFORE_INITIAL	// <stdin>:2:10
      `FIRRTL_BEFORE_INITIAL	// <stdin>:2:10
    `endif // FIRRTL_BEFORE_INITIAL
    initial begin	// <stdin>:2:10
      automatic logic [31:0] _RANDOM_0;	// <stdin>:2:10
      `ifdef INIT_RANDOM_PROLOG_	// <stdin>:2:10
        `INIT_RANDOM_PROLOG_	// <stdin>:2:10
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT	// <stdin>:2:10
        _RANDOM_0 = `RANDOM;	// <stdin>:2:10
        buffer = _RANDOM_0[9:0];	// Button.scala:34:36
        count = _RANDOM_0[13:10];	// Button.scala:34:36, :35:36
        ps2_clk_sync = _RANDOM_0[16:14];	// Button.scala:34:36, :36:36
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL	// <stdin>:2:10
      `FIRRTL_AFTER_INITIAL	// <stdin>:2:10
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  assign io_button_out = ~sampling | ~_T_1 | ~(~(buffer[0]) & io_ps2_data & ^(buffer[9:1])) | buffer[8:1] == 8'h1C ?
                3'h0 : buffer[8:1] == 8'h32 ? 3'h1 : buffer[8:1] == 8'h21 ? 3'h2 : buffer[8:1] == 8'h23 ?
                3'h3 : buffer[8:1] == 8'h24 ? 3'h4 : buffer[8:1] == 8'h2B ? 3'h5 : buffer[8:1] == 8'h34 ?
                3'h6 : {3{buffer[8:1] == 8'h33}};	// <stdin>:2:10, Button.scala:34:36, :36:36, :39:49, :41:44, :49:19, :51:30, :52:{20,29}, :54:27, :56:{17,27,33}, :57:14, :58:31, :63:{36,42}, :64:42, :65:42, :66:42, :67:42, :68:42, :69:42, :70:42, Mux.scala:101:16


  always@(posedge clock)begin
    if(count == 4'd10 && sampling)begin
      $display("buffer %x",buffer[8:1]);
      $display("bufferout %d",io_button_out);
    end
  
  end




endmodule

module Alu(	// <stdin>:97:10
  input        clock,
               reset,
  input  [3:0] io_A,
               io_B,
  input  [2:0] io_alu_op,
  output [3:0] io_result,
  output       io_carry,
               io_zero,
               io_overflow);

  reg  [2:0]      alu_op;	// Alu.scala:33:25
  wire            _overflow_T_3 = alu_op == 3'h0;	// Alu.scala:33:25, :48:16
  wire            _overflow_T_9 = alu_op == 3'h1;	// Alu.scala:33:25, :36:45, :51:20
  wire [3:0]      B1 = _overflow_T_3 ? io_B : _overflow_T_9 ? ~io_B + 4'h1 : 4'h0;	// Alu.scala:47:17, :48:16, :50:12, :51:20, :52:{26,53}
  wire [3:0]      _result_T_1 = io_A + B1;	// Alu.scala:47:17, :64:28
  wire            zero = io_A == io_B;	// Alu.scala:71:28
  wire [7:0][3:0] _GEN = {{{4{zero}}}, {{4{$signed(io_A) < $signed(io_B)}}}, {io_A ^ io_B}, {io_A | io_B}, {io_A &
                io_B}, {4'h0 - io_A}, {_result_T_1}, {_result_T_1}};	// Alu.scala:50:12, :64:28, :66:24, :67:28, :68:28, :69:28, :70:28, :71:28, Mux.scala:81:{58,61}
  wire [3:0]      result = _GEN[alu_op];	// Alu.scala:33:25, Mux.scala:81:{58,61}
  wire            _GEN_0 = result[3] != io_A[3];	// Alu.scala:80:15, :84:{27,31}, Mux.scala:81:58
  wire [4:0]      _carry_T_2 = {1'h0, io_A} + {1'h0, B1};	// Alu.scala:47:17, :66:24, :102:28
  always @(posedge clock) begin
    if (reset)
      alu_op <= 3'h0;	// Alu.scala:33:25
    else if (io_alu_op == 3'h0 | io_alu_op == 3'h1 | io_alu_op == 3'h2 | io_alu_op == 3'h3 | io_alu_op
                                == 3'h4 | io_alu_op == 3'h5 | io_alu_op == 3'h6 | (&io_alu_op))	// Alu.scala:33:25, :36:{20,45,70,95}, :37:{19,43,68,80,93}
      alu_op <= io_alu_op;	// Alu.scala:33:25
  end // always @(posedge)
  `ifndef SYNTHESIS	// <stdin>:97:10
    `ifdef FIRRTL_BEFORE_INITIAL	// <stdin>:97:10
      `FIRRTL_BEFORE_INITIAL	// <stdin>:97:10
    `endif // FIRRTL_BEFORE_INITIAL
    initial begin	// <stdin>:97:10
      automatic logic [31:0] _RANDOM_0;	// <stdin>:97:10
      `ifdef INIT_RANDOM_PROLOG_	// <stdin>:97:10
        `INIT_RANDOM_PROLOG_	// <stdin>:97:10
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT	// <stdin>:97:10
        _RANDOM_0 = `RANDOM;	// <stdin>:97:10
        alu_op = _RANDOM_0[2:0];	// Alu.scala:33:25
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL	// <stdin>:97:10
      `FIRRTL_AFTER_INITIAL	// <stdin>:97:10
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  assign io_result = result;	// <stdin>:97:10, Mux.scala:81:58
  assign io_carry = _carry_T_2[4];	// <stdin>:97:10, Alu.scala:102:{28,41}
  assign io_zero = zero;	// <stdin>:97:10, Alu.scala:71:28
  assign io_overflow = io_A[3] == io_B[3] ? _overflow_T_3 & _GEN_0 : _overflow_T_9 & _GEN_0;	// <stdin>:97:10, Alu.scala:48:16, :51:20, :79:12, :80:{15,19,25}, :81:16, :84:31, :90:16
endmodule

module Seg(	// <stdin>:192:10
  input  [3:0] io_dataIn_0,
               io_dataIn_1,
               io_dataIn_2,
               io_dataIn_3,
  output [6:0] io_encodeOut_0,
               io_encodeOut_1,
               io_encodeOut_2,
               io_encodeOut_3);

  assign io_encodeOut_0 = io_dataIn_0 == 4'h9 ? 7'h4 : io_dataIn_0 == 4'h8 ? 7'h0 : io_dataIn_0 == 4'h7 ? 7'hF :
                io_dataIn_0 == 4'h6 ? 7'h20 : io_dataIn_0 == 4'h5 ? 7'h24 : io_dataIn_0 == 4'h4 ? 7'h4C :
                io_dataIn_0 == 4'h3 ? 7'h6 : io_dataIn_0 == 4'h2 ? 7'h12 : io_dataIn_0 == 4'h1 ? 7'h4F :
                7'h1;	// <stdin>:192:10, Mux.scala:81:{58,61}
  assign io_encodeOut_1 = io_dataIn_1 == 4'h9 ? 7'h4 : io_dataIn_1 == 4'h8 ? 7'h0 : io_dataIn_1 == 4'h7 ? 7'hF :
                io_dataIn_1 == 4'h6 ? 7'h20 : io_dataIn_1 == 4'h5 ? 7'h24 : io_dataIn_1 == 4'h4 ? 7'h4C :
                io_dataIn_1 == 4'h3 ? 7'h6 : io_dataIn_1 == 4'h2 ? 7'h12 : io_dataIn_1 == 4'h1 ? 7'h4F :
                7'h1;	// <stdin>:192:10, Mux.scala:81:{58,61}
  assign io_encodeOut_2 = io_dataIn_2 == 4'h9 ? 7'h4 : io_dataIn_2 == 4'h8 ? 7'h0 : io_dataIn_2 == 4'h7 ? 7'hF :
                io_dataIn_2 == 4'h6 ? 7'h20 : io_dataIn_2 == 4'h5 ? 7'h24 : io_dataIn_2 == 4'h4 ? 7'h4C :
                io_dataIn_2 == 4'h3 ? 7'h6 : io_dataIn_2 == 4'h2 ? 7'h12 : io_dataIn_2 == 4'h1 ? 7'h4F :
                7'h1;	// <stdin>:192:10, Mux.scala:81:{58,61}
  assign io_encodeOut_3 = io_dataIn_3 == 4'h9 ? 7'h4 : io_dataIn_3 == 4'h8 ? 7'h0 : io_dataIn_3 == 4'h7 ? 7'hF :
                io_dataIn_3 == 4'h6 ? 7'h20 : io_dataIn_3 == 4'h5 ? 7'h24 : io_dataIn_3 == 4'h4 ? 7'h4C :
                io_dataIn_3 == 4'h3 ? 7'h6 : io_dataIn_3 == 4'h2 ? 7'h12 : io_dataIn_3 == 4'h1 ? 7'h4F :
                7'h1;	// <stdin>:192:10, Mux.scala:81:{58,61}
endmodule

module top(	// <stdin>:282:10
  input        clock,
               reset,
               io_ps2_clk,
               io_ps2_data,
  input  [7:0] io_sw_input,
  output [6:0] io_seg3,
               io_seg2,
               io_seg1,
               io_seg0,
  output       io_led0,
               io_led1,
               io_led2);

  wire [3:0] _Alu_io_result;	// Top.scala:34:21
  wire [2:0] _Button_io_button_out;	// Top.scala:29:24
  Button Button (	// Top.scala:29:24
    .clock         (clock),
    .reset         (reset),
    .io_ps2_clk    (io_ps2_clk),
    .io_ps2_data   (io_ps2_data),
    .io_button_out (_Button_io_button_out)
  );
  Alu Alu (	// Top.scala:34:21
    .clock       (clock),
    .reset       (reset),
    .io_A        (io_sw_input[7:4]),	// Top.scala:22:24
    .io_B        (io_sw_input[3:0]),	// Top.scala:23:24
    .io_alu_op   (_Button_io_button_out),	// Top.scala:29:24
    .io_result   (_Alu_io_result),
    .io_carry    (io_led2),
    .io_zero     (io_led1),
    .io_overflow (io_led0)
  );
  Seg Seg (	// Top.scala:41:21
    .io_dataIn_0    ({3'h0, _Alu_io_result[0]}),	// Top.scala:34:21, :46:{22,45}
    .io_dataIn_1    ({3'h0, _Alu_io_result[1]}),	// Top.scala:34:21, :46:22, :47:{22,45}
    .io_dataIn_2    ({3'h0, _Alu_io_result[2]}),	// Top.scala:34:21, :46:22, :48:{22,45}
    .io_dataIn_3    ({3'h0, _Alu_io_result[3]}),	// Top.scala:34:21, :46:22, :49:{22,45}
    .io_encodeOut_0 (io_seg0),
    .io_encodeOut_1 (io_seg1),
    .io_encodeOut_2 (io_seg2),
    .io_encodeOut_3 (io_seg3)
  );

endmodule

