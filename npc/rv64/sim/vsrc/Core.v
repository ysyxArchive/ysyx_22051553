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
module regs_combMem(	// Regfile.scala:32:19
  input  [4:0]  R0_addr,
  input         R0_en,
                R0_clk,
  input  [4:0]  R1_addr,
  input         R1_en,
                R1_clk,
  input  [4:0]  R2_addr,
  input         R2_en,
                R2_clk,
  input  [4:0]  W0_addr,
  input         W0_en,
                W0_clk,
  input  [63:0] W0_data,
  input  [4:0]  W1_addr,
  input         W1_en,
                W1_clk,
  input  [63:0] W1_data,
  output [63:0] R0_data,
                R1_data,
                R2_data);

  reg [63:0] Memory[0:31];	// Regfile.scala:32:19
  always @(posedge W0_clk) begin	// Regfile.scala:32:19
    if (W0_en)	// Regfile.scala:32:19
      Memory[W0_addr] <= W0_data;	// Regfile.scala:32:19
    if (W1_en)	// Regfile.scala:32:19
      Memory[W1_addr] <= W1_data;	// Regfile.scala:32:19
  end // always @(posedge)
  `ifndef SYNTHESIS	// Regfile.scala:32:19
    `ifdef RANDOMIZE_MEM_INIT	// Regfile.scala:32:19
      integer initvar;	// Regfile.scala:32:19
      reg [63:0] _RANDOM_MEM;	// Regfile.scala:32:19
    `endif // RANDOMIZE_MEM_INIT
    initial begin	// Regfile.scala:32:19
      `INIT_RANDOM_PROLOG_	// Regfile.scala:32:19
      `ifdef RANDOMIZE_MEM_INIT	// Regfile.scala:32:19
        for (initvar = 0; initvar < 32; initvar = initvar + 1) begin
          _RANDOM_MEM = {{`RANDOM}, {`RANDOM}};
          Memory[initvar] = _RANDOM_MEM[63:0];
        end	// Regfile.scala:32:19
      `endif // RANDOMIZE_MEM_INIT
    end // initial
  `endif // not def SYNTHESIS
  assign R0_data = R0_en ? Memory[R0_addr] : 64'bx;	// Regfile.scala:32:19
  assign R1_data = R1_en ? Memory[R1_addr] : 64'bx;	// Regfile.scala:32:19
  assign R2_data = R2_en ? Memory[R2_addr] : 64'bx;	// Regfile.scala:32:19
endmodule

// external module Interact

module Fetch(	// <stdin>:7:10
  input         clock,
                reset,
  output [63:0] io_fdio_pc,
  output        io_pc_valid,
  output [63:0] io_pc_bits);

  reg        started;	// Fetch.scala:24:26
  reg [63:0] pc;	// Fetch.scala:27:21
  always @(posedge clock) begin
    if (reset) begin
      started <= 1'h0;	// Fetch.scala:24:26
      pc <= 64'h80000000;	// Fetch.scala:27:21
    end
    else begin
      started <= 1'h1;	// Fetch.scala:24:26, :25:13
      if (started)	// Fetch.scala:24:26
        pc <= pc + 64'h4;	// Fetch.scala:27:21, :28:34
    end
  end // always @(posedge)
  `ifndef SYNTHESIS	// <stdin>:7:10
    `ifdef FIRRTL_BEFORE_INITIAL	// <stdin>:7:10
      `FIRRTL_BEFORE_INITIAL	// <stdin>:7:10
    `endif // FIRRTL_BEFORE_INITIAL
    initial begin	// <stdin>:7:10
      automatic logic [31:0] _RANDOM_0;	// <stdin>:7:10
      automatic logic [31:0] _RANDOM_1;	// <stdin>:7:10
      automatic logic [31:0] _RANDOM_2;	// <stdin>:7:10
      `ifdef INIT_RANDOM_PROLOG_	// <stdin>:7:10
        `INIT_RANDOM_PROLOG_	// <stdin>:7:10
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT	// <stdin>:7:10
        _RANDOM_0 = `RANDOM;	// <stdin>:7:10
        _RANDOM_1 = `RANDOM;	// <stdin>:7:10
        _RANDOM_2 = `RANDOM;	// <stdin>:7:10
        started = _RANDOM_0[0];	// Fetch.scala:24:26
        pc = {_RANDOM_0[31:1], _RANDOM_1, _RANDOM_2[0]};	// Fetch.scala:24:26, :27:21
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL	// <stdin>:7:10
      `FIRRTL_AFTER_INITIAL	// <stdin>:7:10
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  assign io_fdio_pc = pc;	// <stdin>:7:10, Fetch.scala:27:21
  assign io_pc_valid = started;	// <stdin>:7:10, Fetch.scala:24:26
  assign io_pc_bits = pc;	// <stdin>:7:10, Fetch.scala:27:21
endmodule

module ControlUnit(	// <stdin>:25:10
  input  [31:0] io_inst,
  output        io_opa_type,
  output [4:0]  io_alu_op,
  output [1:0]  io_wb_type);

  wire _controlsig_T_1 = io_inst == 32'h13;	// Lookup.scala:31:38
  wire _controlsig_T_9 = {io_inst[14:12], io_inst[6:0]} == 10'h13;	// Lookup.scala:31:38
  assign io_opa_type = ~_controlsig_T_1 & _controlsig_T_9;	// <stdin>:25:10, Lookup.scala:31:38, :34:39
  assign io_alu_op = {5{_controlsig_T_1 | ~_controlsig_T_9}};	// <stdin>:25:10, Lookup.scala:31:38, :34:39
  assign io_wb_type = {1'h0, ~_controlsig_T_1 & _controlsig_T_9};	// <stdin>:25:10, ControlUnit.scala:69:21, Lookup.scala:31:38, :34:39
endmodule

module Eximm(	// <stdin>:53:10
  input  [31:0] io_inst,
  output [63:0] io_eximm);

  assign io_eximm = {{52{io_inst[31]}}, io_inst[31:20]};	// <stdin>:53:10, Bitwise.scala:77:12, Cat.scala:33:92, Eximm.scala:30:{40,54}
endmodule

module Decode(	// <stdin>:67:10
  input         io_inst_valid,
  input  [31:0] io_inst_bits,
  input  [63:0] io_fdio_pc,
                io_rfio_reg1_rdata,
  output [4:0]  io_rfio_reg1_raddr,
                io_rfio_reg2_raddr,
  output [63:0] io_deio_op_a,
                io_deio_op_b,
  output [4:0]  io_deio_rd,
                io_deio_alu_op,
  output [1:0]  io_deio_wb_type);

  wire        _cu_io_opa_type;	// Decode.scala:34:20
  wire [31:0] _inst_T = io_inst_valid ? io_inst_bits : 32'h13;	// Decode.scala:38:16
  ControlUnit cu (	// Decode.scala:34:20
    .io_inst     (_inst_T),	// Decode.scala:38:16
    .io_opa_type (_cu_io_opa_type),
    .io_alu_op   (io_deio_alu_op),
    .io_wb_type  (io_deio_wb_type)
  );
  Eximm eximm (	// Decode.scala:35:23
    .io_inst  (_inst_T),	// Decode.scala:38:16
    .io_eximm (io_deio_op_b)
  );
  assign io_rfio_reg1_raddr = _inst_T[19:15];	// <stdin>:67:10, Decode.scala:38:16, :39:16
  assign io_rfio_reg2_raddr = _inst_T[24:20];	// <stdin>:67:10, Decode.scala:38:16, :40:16
  assign io_deio_op_a = _cu_io_opa_type ? io_rfio_reg1_rdata : io_fdio_pc;	// <stdin>:67:10, Decode.scala:34:20, Mux.scala:81:58
  assign io_deio_rd = _inst_T[11:7];	// <stdin>:67:10, Decode.scala:38:16, :41:15
endmodule

module Alu(	// <stdin>:108:10
  input  [63:0] io_op_a,
                io_op_b,
  input  [4:0]  io_alu_op,
  output [63:0] io_result);

  assign io_result = io_alu_op == 5'h0 ? io_op_a + io_op_b : 64'h0;	// <stdin>:108:10, Alu.scala:49:33, Mux.scala:81:{58,61}
endmodule

module Excute(	// <stdin>:119:10
  input  [63:0] io_deio_op_a,
                io_deio_op_b,
  input  [4:0]  io_deio_rd,
                io_deio_alu_op,
  input  [1:0]  io_deio_wb_type,
  output [63:0] io_emio_alu_res,
  output [1:0]  io_emio_wb_type,
  output [4:0]  io_emio_rd);

  Alu alu (	// Excute.scala:18:21
    .io_op_a   (io_deio_op_a),
    .io_op_b   (io_deio_op_b),
    .io_alu_op (io_deio_alu_op),
    .io_result (io_emio_alu_res)
  );
  assign io_emio_wb_type = io_deio_wb_type;	// <stdin>:119:10
  assign io_emio_rd = io_deio_rd;	// <stdin>:119:10
endmodule

module Mem(	// <stdin>:134:10
  input  [63:0] io_emio_alu_res,
  input  [1:0]  io_emio_wb_type,
  input  [4:0]  io_emio_rd,
  output [63:0] io_mwio_alu_res,
  output [1:0]  io_mwio_wb_type,
  output [4:0]  io_mwio_rd);

  assign io_mwio_alu_res = io_emio_alu_res;	// <stdin>:134:10
  assign io_mwio_wb_type = io_emio_wb_type;	// <stdin>:134:10
  assign io_mwio_rd = io_emio_rd;	// <stdin>:134:10
endmodule

module Wb(	// <stdin>:143:10
  input  [63:0] io_mwio_alu_res,
  input  [1:0]  io_mwio_wb_type,
  input  [4:0]  io_mwio_rd,
  output [4:0]  io_rfio_rd,
  output        io_rfio_reg_wen,
  output [63:0] io_rfio_reg_wdata);

  assign io_rfio_rd = io_mwio_rd;	// <stdin>:143:10
  assign io_rfio_reg_wen = |io_mwio_wb_type;	// <stdin>:143:10, Wb.scala:21:40
  assign io_rfio_reg_wdata = io_mwio_alu_res;	// <stdin>:143:10
endmodule

module Regfile(	// <stdin>:153:10
  input         clock,
  input  [4:0]  io_RfDe_reg1_raddr,
                io_RfDe_reg2_raddr,
                io_RfWb_rd,
  input         io_RfWb_reg_wen,
  input  [63:0] io_RfWb_reg_wdata,
  output [63:0] io_RfDe_reg1_rdata);

  wire [63:0] _regs_ext_R0_data;	// Regfile.scala:32:19
  wire [63:0] _regs_ext_R1_data;	// Regfile.scala:32:19
  wire [63:0] _regs_ext_R2_data;	// Regfile.scala:32:19
  regs_combMem regs_ext (	// Regfile.scala:32:19
    .R0_addr (io_RfWb_rd),
    .R0_en   (1'h1),	// <stdin>:153:10
    .R0_clk  (clock),
    .R1_addr (io_RfDe_reg1_raddr),
    .R1_en   (1'h1),	// <stdin>:153:10
    .R1_clk  (clock),
    .R2_addr (io_RfDe_reg2_raddr),
    .R2_en   (1'h1),	// <stdin>:153:10
    .R2_clk  (clock),
    .W0_addr (5'h0),	// Regfile.scala:35:9
    .W0_en   (1'h1),	// <stdin>:153:10
    .W0_clk  (clock),
    .W0_data (64'h0),	// Regfile.scala:35:13
    .W1_addr (io_RfWb_rd),
    .W1_en   (1'h1),	// <stdin>:153:10
    .W1_clk  (clock),
    .W1_data (io_RfWb_reg_wen & (|io_RfWb_rd) ? io_RfWb_reg_wdata : _regs_ext_R0_data),	// Regfile.scala:32:19, :37:{28,45,60}
    .R0_data (_regs_ext_R0_data),
    .R1_data (_regs_ext_R1_data),
    .R2_data (_regs_ext_R2_data)
  );
  assign io_RfDe_reg1_rdata = (|io_RfDe_reg1_raddr) ? _regs_ext_R1_data : 64'h0;	// <stdin>:153:10, Regfile.scala:32:19, :35:13, :43:{30,50}
endmodule

module Core(	// <stdin>:176:10
  input         clock,
                reset,
                io_ramio_dataOut_valid,
  input  [31:0] io_ramio_dataOut_bits,
  output        io_ramio_pc_valid,
  output [63:0] io_ramio_pc_bits);

  wire [63:0] _regfile_io_RfDe_reg1_rdata;	// Core.scala:62:25
  wire [4:0]  _wb_io_rfio_rd;	// Core.scala:29:20
  wire        _wb_io_rfio_reg_wen;	// Core.scala:29:20
  wire [63:0] _wb_io_rfio_reg_wdata;	// Core.scala:29:20
  wire [63:0] _mem_io_mwio_alu_res;	// Core.scala:28:21
  wire [1:0]  _mem_io_mwio_wb_type;	// Core.scala:28:21
  wire [4:0]  _mem_io_mwio_rd;	// Core.scala:28:21
  wire [63:0] _excute_io_emio_alu_res;	// Core.scala:26:24
  wire [1:0]  _excute_io_emio_wb_type;	// Core.scala:26:24
  wire [4:0]  _excute_io_emio_rd;	// Core.scala:26:24
  wire [4:0]  _decode_io_rfio_reg1_raddr;	// Core.scala:25:24
  wire [4:0]  _decode_io_rfio_reg2_raddr;	// Core.scala:25:24
  wire [63:0] _decode_io_deio_op_a;	// Core.scala:25:24
  wire [63:0] _decode_io_deio_op_b;	// Core.scala:25:24
  wire [4:0]  _decode_io_deio_rd;	// Core.scala:25:24
  wire [4:0]  _decode_io_deio_alu_op;	// Core.scala:25:24
  wire [1:0]  _decode_io_deio_wb_type;	// Core.scala:25:24
  wire [63:0] _fetch_io_fdio_pc;	// Core.scala:24:23
  reg  [63:0] fdreg_pc;	// Core.scala:32:24
  reg  [63:0] dereg_op_a;	// Core.scala:37:24
  reg  [63:0] dereg_op_b;	// Core.scala:37:24
  reg  [4:0]  dereg_rd;	// Core.scala:37:24
  reg  [4:0]  dereg_alu_op;	// Core.scala:37:24
  reg  [1:0]  dereg_wb_type;	// Core.scala:37:24
  reg  [63:0] emreg_alu_res;	// Core.scala:46:24
  reg  [1:0]  emreg_wb_type;	// Core.scala:46:24
  reg  [4:0]  emreg_rd;	// Core.scala:46:24
  reg  [63:0] mwreg_alu_res;	// Core.scala:53:24
  reg  [1:0]  mwreg_wb_type;	// Core.scala:53:24
  reg  [4:0]  mwreg_rd;	// Core.scala:53:24
  always @(posedge clock) begin
    if (reset) begin
      fdreg_pc <= 64'h80000000;	// <stdin>:203:20, Core.scala:32:24
      dereg_op_a <= 64'h0;	// <stdin>:210:22, Core.scala:37:24
      dereg_op_b <= 64'h0;	// <stdin>:210:22, Core.scala:37:24
      dereg_rd <= 5'h0;	// <stdin>:209:20, Core.scala:37:24
      dereg_alu_op <= 5'h1F;	// <stdin>:208:27, Core.scala:37:24
      dereg_wb_type <= 2'h0;	// <stdin>:207:25, Core.scala:37:24
      emreg_alu_res <= 64'h0;	// <stdin>:210:22, Core.scala:46:24
      emreg_wb_type <= 2'h0;	// <stdin>:207:25, Core.scala:46:24
      emreg_rd <= 5'h0;	// <stdin>:209:20, Core.scala:46:24
      mwreg_alu_res <= 64'h0;	// <stdin>:210:22, Core.scala:53:24
      mwreg_wb_type <= 2'h0;	// <stdin>:207:25, Core.scala:53:24
      mwreg_rd <= 5'h0;	// <stdin>:209:20, Core.scala:53:24
    end
    else begin
      fdreg_pc <= _fetch_io_fdio_pc;	// Core.scala:24:23, :32:24
      dereg_op_a <= _decode_io_deio_op_a;	// Core.scala:25:24, :37:24
      dereg_op_b <= _decode_io_deio_op_b;	// Core.scala:25:24, :37:24
      dereg_rd <= _decode_io_deio_rd;	// Core.scala:25:24, :37:24
      dereg_alu_op <= _decode_io_deio_alu_op;	// Core.scala:25:24, :37:24
      dereg_wb_type <= _decode_io_deio_wb_type;	// Core.scala:25:24, :37:24
      emreg_alu_res <= _excute_io_emio_alu_res;	// Core.scala:26:24, :46:24
      emreg_wb_type <= _excute_io_emio_wb_type;	// Core.scala:26:24, :46:24
      emreg_rd <= _excute_io_emio_rd;	// Core.scala:26:24, :46:24
      mwreg_alu_res <= _mem_io_mwio_alu_res;	// Core.scala:28:21, :53:24
      mwreg_wb_type <= _mem_io_mwio_wb_type;	// Core.scala:28:21, :53:24
      mwreg_rd <= _mem_io_mwio_rd;	// Core.scala:28:21, :53:24
    end
  end // always @(posedge)
  `ifndef SYNTHESIS	// <stdin>:176:10
    `ifdef FIRRTL_BEFORE_INITIAL	// <stdin>:176:10
      `FIRRTL_BEFORE_INITIAL	// <stdin>:176:10
    `endif // FIRRTL_BEFORE_INITIAL
    initial begin	// <stdin>:176:10
      automatic logic [31:0] _RANDOM_0;	// <stdin>:176:10
      automatic logic [31:0] _RANDOM_1;	// <stdin>:176:10
      automatic logic [31:0] _RANDOM_2;	// <stdin>:176:10
      automatic logic [31:0] _RANDOM_3;	// <stdin>:176:10
      automatic logic [31:0] _RANDOM_4;	// <stdin>:176:10
      automatic logic [31:0] _RANDOM_5;	// <stdin>:176:10
      automatic logic [31:0] _RANDOM_6;	// <stdin>:176:10
      automatic logic [31:0] _RANDOM_7;	// <stdin>:176:10
      automatic logic [31:0] _RANDOM_8;	// <stdin>:176:10
      automatic logic [31:0] _RANDOM_9;	// <stdin>:176:10
      automatic logic [31:0] _RANDOM_10;	// <stdin>:176:10
      `ifdef INIT_RANDOM_PROLOG_	// <stdin>:176:10
        `INIT_RANDOM_PROLOG_	// <stdin>:176:10
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT	// <stdin>:176:10
        _RANDOM_0 = `RANDOM;	// <stdin>:176:10
        _RANDOM_1 = `RANDOM;	// <stdin>:176:10
        _RANDOM_2 = `RANDOM;	// <stdin>:176:10
        _RANDOM_3 = `RANDOM;	// <stdin>:176:10
        _RANDOM_4 = `RANDOM;	// <stdin>:176:10
        _RANDOM_5 = `RANDOM;	// <stdin>:176:10
        _RANDOM_6 = `RANDOM;	// <stdin>:176:10
        _RANDOM_7 = `RANDOM;	// <stdin>:176:10
        _RANDOM_8 = `RANDOM;	// <stdin>:176:10
        _RANDOM_9 = `RANDOM;	// <stdin>:176:10
        _RANDOM_10 = `RANDOM;	// <stdin>:176:10
        fdreg_pc = {_RANDOM_0, _RANDOM_1};	// Core.scala:32:24
        dereg_op_a = {_RANDOM_2, _RANDOM_3};	// Core.scala:37:24
        dereg_op_b = {_RANDOM_4, _RANDOM_5};	// Core.scala:37:24
        dereg_rd = _RANDOM_6[4:0];	// Core.scala:37:24
        dereg_alu_op = _RANDOM_6[9:5];	// Core.scala:37:24
        dereg_wb_type = _RANDOM_6[11:10];	// Core.scala:37:24
        emreg_alu_res = {_RANDOM_6[31:12], _RANDOM_7, _RANDOM_8[11:0]};	// Core.scala:37:24, :46:24
        emreg_wb_type = _RANDOM_8[13:12];	// Core.scala:46:24
        emreg_rd = _RANDOM_8[18:14];	// Core.scala:46:24
        mwreg_alu_res = {_RANDOM_8[31:19], _RANDOM_9, _RANDOM_10[18:0]};	// Core.scala:46:24, :53:24
        mwreg_wb_type = _RANDOM_10[20:19];	// Core.scala:53:24
        mwreg_rd = _RANDOM_10[25:21];	// Core.scala:53:24
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL	// <stdin>:176:10
      `FIRRTL_AFTER_INITIAL	// <stdin>:176:10
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  Interact interact (	// Core.scala:17:26
    .inst (io_ramio_dataOut_valid ? io_ramio_dataOut_bits : 32'h0),	// Core.scala:18:28
    .clk  (clock)
  );
  Fetch fetch (	// Core.scala:24:23
    .clock       (clock),
    .reset       (reset),
    .io_fdio_pc  (_fetch_io_fdio_pc),
    .io_pc_valid (io_ramio_pc_valid),
    .io_pc_bits  (io_ramio_pc_bits)
  );
  Decode decode (	// Core.scala:25:24
    .io_inst_valid      (io_ramio_dataOut_valid),
    .io_inst_bits       (io_ramio_dataOut_bits),
    .io_fdio_pc         (fdreg_pc),	// Core.scala:32:24
    .io_rfio_reg1_rdata (_regfile_io_RfDe_reg1_rdata),	// Core.scala:62:25
    .io_rfio_reg1_raddr (_decode_io_rfio_reg1_raddr),
    .io_rfio_reg2_raddr (_decode_io_rfio_reg2_raddr),
    .io_deio_op_a       (_decode_io_deio_op_a),
    .io_deio_op_b       (_decode_io_deio_op_b),
    .io_deio_rd         (_decode_io_deio_rd),
    .io_deio_alu_op     (_decode_io_deio_alu_op),
    .io_deio_wb_type    (_decode_io_deio_wb_type)
  );
  Excute excute (	// Core.scala:26:24
    .io_deio_op_a    (dereg_op_a),	// Core.scala:37:24
    .io_deio_op_b    (dereg_op_b),	// Core.scala:37:24
    .io_deio_rd      (dereg_rd),	// Core.scala:37:24
    .io_deio_alu_op  (dereg_alu_op),	// Core.scala:37:24
    .io_deio_wb_type (dereg_wb_type),	// Core.scala:37:24
    .io_emio_alu_res (_excute_io_emio_alu_res),
    .io_emio_wb_type (_excute_io_emio_wb_type),
    .io_emio_rd      (_excute_io_emio_rd)
  );
  Mem mem (	// Core.scala:28:21
    .io_emio_alu_res (emreg_alu_res),	// Core.scala:46:24
    .io_emio_wb_type (emreg_wb_type),	// Core.scala:46:24
    .io_emio_rd      (emreg_rd),	// Core.scala:46:24
    .io_mwio_alu_res (_mem_io_mwio_alu_res),
    .io_mwio_wb_type (_mem_io_mwio_wb_type),
    .io_mwio_rd      (_mem_io_mwio_rd)
  );
  Wb wb (	// Core.scala:29:20
    .io_mwio_alu_res   (mwreg_alu_res),	// Core.scala:53:24
    .io_mwio_wb_type   (mwreg_wb_type),	// Core.scala:53:24
    .io_mwio_rd        (mwreg_rd),	// Core.scala:53:24
    .io_rfio_rd        (_wb_io_rfio_rd),
    .io_rfio_reg_wen   (_wb_io_rfio_reg_wen),
    .io_rfio_reg_wdata (_wb_io_rfio_reg_wdata)
  );
  Regfile regfile (	// Core.scala:62:25
    .clock              (clock),
    .io_RfDe_reg1_raddr (_decode_io_rfio_reg1_raddr),	// Core.scala:25:24
    .io_RfDe_reg2_raddr (_decode_io_rfio_reg2_raddr),	// Core.scala:25:24
    .io_RfWb_rd         (_wb_io_rfio_rd),	// Core.scala:29:20
    .io_RfWb_reg_wen    (_wb_io_rfio_reg_wen),	// Core.scala:29:20
    .io_RfWb_reg_wdata  (_wb_io_rfio_reg_wdata),	// Core.scala:29:20
    .io_RfDe_reg1_rdata (_regfile_io_RfDe_reg1_rdata)
  );
endmodule


// ----- 8< ----- FILE "rv64/./build/Interact.v" ----- 8< -----


module Interact(input [31:0] inst,
                input  clk
);
   
   always@(posedge clk)begin
       if(inst == 32'b00000000000100000000000001110011)
           $finish;
   end
   
endmodule
        

// ----- 8< ----- FILE "firrtl_black_box_resource_files.f" ----- 8< -----


