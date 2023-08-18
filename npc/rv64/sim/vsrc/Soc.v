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

// VCS coverage exclude_file
module SyncMem_combMem(	// Ram.scala:18:30
  input  [7:0] R0_addr,
  input        R0_en,
               R0_clk,
  input  [7:0] R1_addr,
  input        R1_en,
               R1_clk,
  input  [7:0] R2_addr,
  input        R2_en,
               R2_clk,
  input  [7:0] R3_addr,
  input        R3_en,
               R3_clk,
  output [7:0] R0_data,
               R1_data,
               R2_data,
               R3_data);

  reg [7:0] Memory[0:255];	// Ram.scala:18:30
  reg       _GEN;	// Ram.scala:18:30
  reg [7:0] _GEN_0;	// Ram.scala:18:30
  always @(posedge R0_clk) begin	// Ram.scala:18:30
    _GEN <= R0_en;	// Ram.scala:18:30
    _GEN_0 <= R0_addr;	// Ram.scala:18:30
  end // always @(posedge)
  reg       _GEN_1;	// Ram.scala:18:30
  reg [7:0] _GEN_2;	// Ram.scala:18:30
  always @(posedge R1_clk) begin	// Ram.scala:18:30
    _GEN_1 <= R1_en;	// Ram.scala:18:30
    _GEN_2 <= R1_addr;	// Ram.scala:18:30
  end // always @(posedge)
  reg       _GEN_3;	// Ram.scala:18:30
  reg [7:0] _GEN_4;	// Ram.scala:18:30
  always @(posedge R2_clk) begin	// Ram.scala:18:30
    _GEN_3 <= R2_en;	// Ram.scala:18:30
    _GEN_4 <= R2_addr;	// Ram.scala:18:30
  end // always @(posedge)
  reg       _GEN_5;	// Ram.scala:18:30
  reg [7:0] _GEN_6;	// Ram.scala:18:30
  always @(posedge R3_clk) begin	// Ram.scala:18:30
    _GEN_5 <= R3_en;	// Ram.scala:18:30
    _GEN_6 <= R3_addr;	// Ram.scala:18:30
  end // always @(posedge)
  `ifndef SYNTHESIS	// Ram.scala:18:30
    `ifdef RANDOMIZE_MEM_INIT	// Ram.scala:18:30
      integer initvar;	// Ram.scala:18:30
      reg [31:0] _RANDOM_MEM;	// Ram.scala:18:30
    `endif // RANDOMIZE_MEM_INIT
    `ifdef RANDOMIZE_REG_INIT	// Ram.scala:18:30
      reg [31:0] _RANDOM;	// Ram.scala:18:30
      reg [31:0] _RANDOM_0;	// Ram.scala:18:30
    `endif // RANDOMIZE_REG_INIT
    initial begin	// Ram.scala:18:30
      `INIT_RANDOM_PROLOG_	// Ram.scala:18:30
      `ifdef RANDOMIZE_MEM_INIT	// Ram.scala:18:30
        for (initvar = 0; initvar < 256; initvar = initvar + 1) begin
          _RANDOM_MEM = {`RANDOM};
          Memory[initvar] = _RANDOM_MEM[7:0];
        end	// Ram.scala:18:30
      `endif // RANDOMIZE_MEM_INIT
      `ifdef RANDOMIZE_REG_INIT	// Ram.scala:18:30
        _RANDOM = {`RANDOM};	// Ram.scala:18:30
        _RANDOM_0 = {`RANDOM};	// Ram.scala:18:30
        _GEN = _RANDOM[0];	// Ram.scala:18:30
        _GEN_0 = _RANDOM[8:1];	// Ram.scala:18:30
        _GEN_1 = _RANDOM[9];	// Ram.scala:18:30
        _GEN_2 = _RANDOM[17:10];	// Ram.scala:18:30
        _GEN_3 = _RANDOM[18];	// Ram.scala:18:30
        _GEN_4 = _RANDOM[26:19];	// Ram.scala:18:30
        _GEN_5 = _RANDOM[27];	// Ram.scala:18:30
        _GEN_6 = {_RANDOM[31:28], _RANDOM_0[3:0]};	// Ram.scala:18:30
      `endif // RANDOMIZE_REG_INIT
      $readmemh("inst", Memory);
    end // initial
  `endif // not def SYNTHESIS
  assign R0_data = _GEN ? Memory[_GEN_0] : 8'bx;	// Ram.scala:18:30
  assign R1_data = _GEN_1 ? Memory[_GEN_2] : 8'bx;	// Ram.scala:18:30
  assign R2_data = _GEN_3 ? Memory[_GEN_4] : 8'bx;	// Ram.scala:18:30
  assign R3_data = _GEN_5 ? Memory[_GEN_6] : 8'bx;	// Ram.scala:18:30
endmodule

// external module Interact

module Fetch(	// <stdin>:8:10
  input         clock,
                reset,
                io_fcfe_jump_flag,
  input  [63:0] io_fcfe_jump_pc,
  input         io_fcfe_flush,
  output [63:0] io_fdio_pc,
  output        io_pc_valid,
  output [63:0] io_pc_bits);

  reg        started;	// Fetch.scala:23:26
  reg [63:0] pc;	// Fetch.scala:26:21
  always @(posedge clock) begin
    if (reset) begin
      started <= 1'h0;	// <stdin>:8:10, Fetch.scala:23:26
      pc <= 64'h80000000;	// Fetch.scala:26:21
    end
    else begin
      started <= 1'h1;	// Fetch.scala:23:26, :24:13
      if (started)	// Fetch.scala:23:26
        pc <= pc + 64'h4;	// Fetch.scala:26:21, :30:37
      else if (io_fcfe_flush & io_fcfe_jump_flag)	// Fetch.scala:23:26, :31:36
        pc <= io_fcfe_jump_pc + 64'h4;	// Fetch.scala:26:21, :30:37, :31:85
    end
  end // always @(posedge)
  `ifndef SYNTHESIS	// <stdin>:8:10
    `ifdef FIRRTL_BEFORE_INITIAL	// <stdin>:8:10
      `FIRRTL_BEFORE_INITIAL	// <stdin>:8:10
    `endif // FIRRTL_BEFORE_INITIAL
    initial begin	// <stdin>:8:10
      automatic logic [31:0] _RANDOM_0;	// <stdin>:8:10
      automatic logic [31:0] _RANDOM_1;	// <stdin>:8:10
      automatic logic [31:0] _RANDOM_2;	// <stdin>:8:10
      `ifdef INIT_RANDOM_PROLOG_	// <stdin>:8:10
        `INIT_RANDOM_PROLOG_	// <stdin>:8:10
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT	// <stdin>:8:10
        _RANDOM_0 = `RANDOM;	// <stdin>:8:10
        _RANDOM_1 = `RANDOM;	// <stdin>:8:10
        _RANDOM_2 = `RANDOM;	// <stdin>:8:10
        started = _RANDOM_0[0];	// Fetch.scala:23:26
        pc = {_RANDOM_0[31:1], _RANDOM_1, _RANDOM_2[0]};	// Fetch.scala:23:26, :26:21
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL	// <stdin>:8:10
      `FIRRTL_AFTER_INITIAL	// <stdin>:8:10
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  assign io_fdio_pc = io_fcfe_flush & io_fcfe_jump_flag ? io_fcfe_jump_pc : pc;	// <stdin>:8:10, Fetch.scala:26:21, :39:36, Mux.scala:101:16
  assign io_pc_valid = started;	// <stdin>:8:10, Fetch.scala:23:26
  assign io_pc_bits = io_fcfe_flush & io_fcfe_jump_flag ? io_fcfe_jump_pc : pc;	// <stdin>:8:10, Fetch.scala:26:21, :46:36, Mux.scala:101:16
endmodule

module ControlUnit(	// <stdin>:43:10
  input  [31:0] io_inst,
  output [1:0]  io_jump_type,
  output        io_opa_type,
                io_opb_type,
  output [1:0]  io_imm_type,
  output [4:0]  io_alu_op,
  output [1:0]  io_wb_type);

  wire       _controlsig_T_1 = io_inst == 32'h13;	// Lookup.scala:31:38
  wire [9:0] _GEN = {io_inst[14:12], io_inst[6:0]};	// Lookup.scala:31:38
  wire       _controlsig_T_3 = _GEN == 10'h13;	// Lookup.scala:31:38
  wire       _controlsig_T_5 = io_inst[6:0] == 7'h17;	// Lookup.scala:31:38
  wire       _controlsig_T_7 = io_inst[6:0] == 7'h37;	// Lookup.scala:31:38
  wire       _controlsig_T_9 = io_inst[6:0] == 7'h6F;	// Lookup.scala:31:38
  wire       _controlsig_T_45 = _GEN == 10'h67;	// Lookup.scala:31:38
  wire       _GEN_0 = _controlsig_T_3 | _controlsig_T_5 | _controlsig_T_7 | _controlsig_T_9 | _controlsig_T_45;	// Lookup.scala:31:38, :34:39
  assign io_jump_type = _controlsig_T_1 | _controlsig_T_3 | _controlsig_T_5 | _controlsig_T_7 ? 2'h0 :
                _controlsig_T_9 ? 2'h1 : {_controlsig_T_45, 1'h0};	// <stdin>:43:10, Lookup.scala:31:38, :34:39
  assign io_opa_type = ~_controlsig_T_1 & ~_controlsig_T_3 & (_controlsig_T_5 | ~_controlsig_T_7 &
                (_controlsig_T_9 | _controlsig_T_45));	// <stdin>:43:10, Lookup.scala:31:38, :34:39
  assign io_opb_type = ~_controlsig_T_1 & _GEN_0;	// <stdin>:43:10, Lookup.scala:31:38, :34:39
  assign io_imm_type = _controlsig_T_1 | _controlsig_T_3 ? 2'h0 : _controlsig_T_5 | _controlsig_T_7 ? 2'h1 :
                {_controlsig_T_9, 1'h0};	// <stdin>:43:10, Lookup.scala:31:38, :34:39
  assign io_alu_op = {5{_controlsig_T_1 | ~_GEN_0}};	// <stdin>:43:10, Lookup.scala:31:38, :34:39
  assign io_wb_type = {1'h0, ~_controlsig_T_1 & (_controlsig_T_3 | _controlsig_T_5 | _controlsig_T_7 |
                _controlsig_T_9 | _controlsig_T_45)};	// <stdin>:43:10, ControlUnit.scala:77:21, Lookup.scala:31:38, :34:39
endmodule

module Eximm(	// <stdin>:111:10
  input  [31:0] io_inst,
  input  [1:0]  io_imm_type,
  output [63:0] io_eximm);

  wire [3:0][63:0] _GEN = {{64'h0}, {{{44{io_inst[31]}}, io_inst[19:12], io_inst[20], io_inst[30:21], 1'h0}},
                {{{32{io_inst[31]}}, io_inst[31:12], 12'h0}}, {{{52{io_inst[31]}}, io_inst[31:20]}}};	// Bitwise.scala:77:12, Cat.scala:33:92, Eximm.scala:30:{42,56}, :31:56, :32:{56,72,85}, Mux.scala:81:{58,61}
  assign io_eximm = _GEN[io_imm_type];	// <stdin>:111:10, Mux.scala:81:{58,61}
endmodule

module Decode(	// <stdin>:146:10
  input         io_inst_valid,
  input  [31:0] io_inst_bits,
  input  [63:0] io_fdio_pc,
                io_rfio_reg1_rdata,
                io_rfio_reg2_rdata,
  output [4:0]  io_rfio_reg1_raddr,
                io_rfio_reg2_raddr,
  output [63:0] io_deio_op_a,
                io_deio_op_b,
  output [4:0]  io_deio_rd,
                io_deio_alu_op,
  output [1:0]  io_deio_wb_type,
  output        io_jump_flag,
  output [63:0] io_jump_pc);

  wire [63:0] _eximm_io_eximm;	// Decode.scala:40:23
  wire [1:0]  _cu_io_jump_type;	// Decode.scala:39:20
  wire        _cu_io_opa_type;	// Decode.scala:39:20
  wire        _cu_io_opb_type;	// Decode.scala:39:20
  wire [1:0]  _cu_io_imm_type;	// Decode.scala:39:20
  wire [31:0] _inst_T = io_inst_valid ? io_inst_bits : 32'h13;	// Decode.scala:43:16
  wire        _io_jump_pc_T = _cu_io_jump_type == 2'h1;	// Decode.scala:39:20, :81:38
  wire        _io_jump_pc_T_3 = _cu_io_jump_type == 2'h2;	// Decode.scala:39:20, :81:82, Mux.scala:81:61
  ControlUnit cu (	// Decode.scala:39:20
    .io_inst      (_inst_T),	// Decode.scala:43:16
    .io_jump_type (_cu_io_jump_type),
    .io_opa_type  (_cu_io_opa_type),
    .io_opb_type  (_cu_io_opb_type),
    .io_imm_type  (_cu_io_imm_type),
    .io_alu_op    (io_deio_alu_op),
    .io_wb_type   (io_deio_wb_type)
  );
  Eximm eximm (	// Decode.scala:40:23
    .io_inst     (_inst_T),	// Decode.scala:43:16
    .io_imm_type (_cu_io_imm_type),	// Decode.scala:39:20
    .io_eximm    (_eximm_io_eximm)
  );
  assign io_rfio_reg1_raddr = _inst_T[19:15];	// <stdin>:146:10, Decode.scala:43:16, :44:16
  assign io_rfio_reg2_raddr = _inst_T[24:20];	// <stdin>:146:10, Decode.scala:43:16, :45:16
  assign io_deio_op_a = _cu_io_opa_type ? io_fdio_pc : 64'h0;	// <stdin>:146:10, Decode.scala:39:20, Mux.scala:81:58
  assign io_deio_op_b = _cu_io_opb_type ? _eximm_io_eximm : 64'h0;	// <stdin>:146:10, Decode.scala:39:20, :40:23, Mux.scala:81:58
  assign io_deio_rd = _inst_T[11:7];	// <stdin>:146:10, Decode.scala:43:16, :46:15
  assign io_jump_flag = _io_jump_pc_T | _io_jump_pc_T_3;	// <stdin>:146:10, Decode.scala:81:{38,63,82}
  assign io_jump_pc = _io_jump_pc_T ? io_fdio_pc + _eximm_io_eximm : _io_jump_pc_T_3 ? io_rfio_reg1_rdata +
                _eximm_io_eximm & 64'hFFFFFFFFFFFFFFFE : 64'h80000000;	// <stdin>:146:10, Decode.scala:40:23, :81:{38,82}, :85:71, :86:{81,99,102}, Mux.scala:101:16
endmodule

module Alu(	// <stdin>:208:10
  input  [63:0] io_op_a,
                io_op_b,
  input  [4:0]  io_alu_op,
  output [63:0] io_result);

  assign io_result = io_alu_op == 5'h0 ? io_op_a + io_op_b : 64'h0;	// <stdin>:208:10, Alu.scala:49:33, Mux.scala:81:{58,61}
endmodule

module Excute(	// <stdin>:219:10
  input  [63:0] io_deio_op_a,
                io_deio_op_b,
  input  [4:0]  io_deio_rd,
                io_deio_alu_op,
  input  [1:0]  io_deio_wb_type,
  output [63:0] io_emio_alu_res,
  output [1:0]  io_emio_wb_type,
  output [4:0]  io_emio_rd);

  Alu alu (	// Excute.scala:22:21
    .io_op_a   (io_deio_op_a),
    .io_op_b   (io_deio_op_b),
    .io_alu_op (io_deio_alu_op),
    .io_result (io_emio_alu_res)
  );
  assign io_emio_wb_type = io_deio_wb_type;	// <stdin>:219:10
  assign io_emio_rd = io_deio_rd;	// <stdin>:219:10
endmodule

module Mem(	// <stdin>:236:10
  input  [63:0] io_emio_alu_res,
  input  [1:0]  io_emio_wb_type,
  input  [4:0]  io_emio_rd,
  output [63:0] io_mwio_alu_res,
  output [1:0]  io_mwio_wb_type,
  output [4:0]  io_mwio_rd);

  assign io_mwio_alu_res = io_emio_alu_res;	// <stdin>:236:10
  assign io_mwio_wb_type = io_emio_wb_type;	// <stdin>:236:10
  assign io_mwio_rd = io_emio_rd;	// <stdin>:236:10
endmodule

module Wb(	// <stdin>:245:10
  input  [63:0] io_mwio_alu_res,
  input  [1:0]  io_mwio_wb_type,
  input  [4:0]  io_mwio_rd,
  output [4:0]  io_rfio_rd,
  output        io_rfio_reg_wen,
  output [63:0] io_rfio_reg_wdata);

  assign io_rfio_rd = io_mwio_rd;	// <stdin>:245:10
  assign io_rfio_reg_wen = |io_mwio_wb_type;	// <stdin>:245:10, Wb.scala:21:40
  assign io_rfio_reg_wdata = io_mwio_alu_res;	// <stdin>:245:10
endmodule

module Regfile(	// <stdin>:255:10
  input         clock,
  input  [4:0]  io_RfDe_reg1_raddr,
                io_RfDe_reg2_raddr,
                io_RfWb_rd,
  input         io_RfWb_reg_wen,
  input  [63:0] io_RfWb_reg_wdata,
  output [63:0] io_RfDe_reg1_rdata,
                io_RfDe_reg2_rdata);

  wire [63:0] _regs_ext_R0_data;	// Regfile.scala:32:19
  wire [63:0] _regs_ext_R1_data;	// Regfile.scala:32:19
  wire [63:0] _regs_ext_R2_data;	// Regfile.scala:32:19
  regs_combMem regs_ext (	// Regfile.scala:32:19
    .R0_addr (io_RfWb_rd),
    .R0_en   (1'h1),	// <stdin>:255:10
    .R0_clk  (clock),
    .R1_addr (io_RfDe_reg1_raddr),
    .R1_en   (1'h1),	// <stdin>:255:10
    .R1_clk  (clock),
    .R2_addr (io_RfDe_reg2_raddr),
    .R2_en   (1'h1),	// <stdin>:255:10
    .R2_clk  (clock),
    .W0_addr (5'h0),	// Regfile.scala:37:9
    .W0_en   (1'h1),	// <stdin>:255:10
    .W0_clk  (clock),
    .W0_data (64'h0),	// Regfile.scala:37:13
    .W1_addr (io_RfWb_rd),
    .W1_en   (1'h1),	// <stdin>:255:10
    .W1_clk  (clock),
    .W1_data (io_RfWb_reg_wen & (|io_RfWb_rd) ? io_RfWb_reg_wdata : _regs_ext_R0_data),	// Regfile.scala:32:19, :39:{28,45,60}
    .R0_data (_regs_ext_R0_data),
    .R1_data (_regs_ext_R1_data),
    .R2_data (_regs_ext_R2_data)
  );
  assign io_RfDe_reg1_rdata = (|io_RfDe_reg1_raddr) ? _regs_ext_R1_data : 64'h0;	// <stdin>:255:10, Regfile.scala:32:19, :37:13, :48:{30,50}
  assign io_RfDe_reg2_rdata = (|io_RfDe_reg2_raddr) ? _regs_ext_R2_data : 64'h0;	// <stdin>:255:10, Regfile.scala:32:19, :37:13, :49:{30,50}
endmodule

module FlowControl(	// <stdin>:278:10
  input         io_fcde_jump_flag,
  input  [63:0] io_fcde_jump_pc,
  output        io_fcfe_jump_flag,
  output [63:0] io_fcfe_jump_pc,
  output        io_fcfe_flush);

  assign io_fcfe_jump_flag = io_fcde_jump_flag;	// <stdin>:278:10
  assign io_fcfe_jump_pc = io_fcde_jump_flag ? io_fcde_jump_pc : 64'h80000000;	// <stdin>:278:10, Mux.scala:101:16
  assign io_fcfe_flush = io_fcde_jump_flag;	// <stdin>:278:10
endmodule

// external module DebugInterface

module Core(	// <stdin>:337:10
  input         clock,
                reset,
                io_ramio_dataOut_valid,
  input  [31:0] io_ramio_dataOut_bits,
  output        io_ramio_pc_valid,
  output [63:0] io_ramio_pc_bits);

  wire        _fc_io_fcfe_jump_flag;	// Core.scala:66:20
  wire [63:0] _fc_io_fcfe_jump_pc;	// Core.scala:66:20
  wire        _fc_io_fcfe_flush;	// Core.scala:66:20
  wire [63:0] _regfile_io_RfDe_reg1_rdata;	// Core.scala:63:25
  wire [63:0] _regfile_io_RfDe_reg2_rdata;	// Core.scala:63:25
  wire [4:0]  _wb_io_rfio_rd;	// Core.scala:30:20
  wire        _wb_io_rfio_reg_wen;	// Core.scala:30:20
  wire [63:0] _wb_io_rfio_reg_wdata;	// Core.scala:30:20
  wire [63:0] _mem_io_mwio_alu_res;	// Core.scala:29:21
  wire [1:0]  _mem_io_mwio_wb_type;	// Core.scala:29:21
  wire [4:0]  _mem_io_mwio_rd;	// Core.scala:29:21
  wire [63:0] _excute_io_emio_alu_res;	// Core.scala:27:24
  wire [1:0]  _excute_io_emio_wb_type;	// Core.scala:27:24
  wire [4:0]  _excute_io_emio_rd;	// Core.scala:27:24
  wire [4:0]  _decode_io_rfio_reg1_raddr;	// Core.scala:26:24
  wire [4:0]  _decode_io_rfio_reg2_raddr;	// Core.scala:26:24
  wire [63:0] _decode_io_deio_op_a;	// Core.scala:26:24
  wire [63:0] _decode_io_deio_op_b;	// Core.scala:26:24
  wire [4:0]  _decode_io_deio_rd;	// Core.scala:26:24
  wire [4:0]  _decode_io_deio_alu_op;	// Core.scala:26:24
  wire [1:0]  _decode_io_deio_wb_type;	// Core.scala:26:24
  wire        _decode_io_jump_flag;	// Core.scala:26:24
  wire [63:0] _decode_io_jump_pc;	// Core.scala:26:24
  wire [63:0] _fetch_io_fdio_pc;	// Core.scala:25:23
  wire        _fetch_io_pc_valid;	// Core.scala:25:23
  wire [63:0] _fetch_io_pc_bits;	// Core.scala:25:23
  reg  [63:0] fdreg_pc;	// Core.scala:33:24
  reg  [63:0] dereg_op_a;	// Core.scala:38:24
  reg  [63:0] dereg_op_b;	// Core.scala:38:24
  reg  [4:0]  dereg_rd;	// Core.scala:38:24
  reg  [4:0]  dereg_alu_op;	// Core.scala:38:24
  reg  [1:0]  dereg_wb_type;	// Core.scala:38:24
  reg  [63:0] emreg_alu_res;	// Core.scala:47:24
  reg  [1:0]  emreg_wb_type;	// Core.scala:47:24
  reg  [4:0]  emreg_rd;	// Core.scala:47:24
  reg  [63:0] mwreg_alu_res;	// Core.scala:54:24
  reg  [1:0]  mwreg_wb_type;	// Core.scala:54:24
  reg  [4:0]  mwreg_rd;	// Core.scala:54:24
  always @(posedge clock) begin
    if (reset) begin
      fdreg_pc <= 64'h80000000;	// <stdin>:366:20, Core.scala:33:24
      dereg_op_a <= 64'h0;	// Core.scala:38:24, :66:20
      dereg_op_b <= 64'h0;	// Core.scala:38:24, :66:20
      dereg_rd <= 5'h0;	// <stdin>:372:20, Core.scala:38:24
      dereg_alu_op <= 5'h1F;	// <stdin>:371:27, Core.scala:38:24
      dereg_wb_type <= 2'h0;	// <stdin>:370:25, Core.scala:38:24
      emreg_alu_res <= 64'h0;	// Core.scala:47:24, :66:20
      emreg_wb_type <= 2'h0;	// <stdin>:370:25, Core.scala:47:24
      emreg_rd <= 5'h0;	// <stdin>:372:20, Core.scala:47:24
      mwreg_alu_res <= 64'h0;	// Core.scala:54:24, :66:20
      mwreg_wb_type <= 2'h0;	// <stdin>:370:25, Core.scala:54:24
      mwreg_rd <= 5'h0;	// <stdin>:372:20, Core.scala:54:24
    end
    else begin
      fdreg_pc <= _fetch_io_fdio_pc;	// Core.scala:25:23, :33:24
      dereg_op_a <= _decode_io_deio_op_a;	// Core.scala:26:24, :38:24
      dereg_op_b <= _decode_io_deio_op_b;	// Core.scala:26:24, :38:24
      dereg_rd <= _decode_io_deio_rd;	// Core.scala:26:24, :38:24
      dereg_alu_op <= _decode_io_deio_alu_op;	// Core.scala:26:24, :38:24
      dereg_wb_type <= _decode_io_deio_wb_type;	// Core.scala:26:24, :38:24
      emreg_alu_res <= _excute_io_emio_alu_res;	// Core.scala:27:24, :47:24
      emreg_wb_type <= _excute_io_emio_wb_type;	// Core.scala:27:24, :47:24
      emreg_rd <= _excute_io_emio_rd;	// Core.scala:27:24, :47:24
      mwreg_alu_res <= _mem_io_mwio_alu_res;	// Core.scala:29:21, :54:24
      mwreg_wb_type <= _mem_io_mwio_wb_type;	// Core.scala:29:21, :54:24
      mwreg_rd <= _mem_io_mwio_rd;	// Core.scala:29:21, :54:24
    end
  end // always @(posedge)
  `ifndef SYNTHESIS	// <stdin>:337:10
    `ifdef FIRRTL_BEFORE_INITIAL	// <stdin>:337:10
      `FIRRTL_BEFORE_INITIAL	// <stdin>:337:10
    `endif // FIRRTL_BEFORE_INITIAL
    initial begin	// <stdin>:337:10
      automatic logic [31:0] _RANDOM_0;	// <stdin>:337:10
      automatic logic [31:0] _RANDOM_1;	// <stdin>:337:10
      automatic logic [31:0] _RANDOM_2;	// <stdin>:337:10
      automatic logic [31:0] _RANDOM_3;	// <stdin>:337:10
      automatic logic [31:0] _RANDOM_4;	// <stdin>:337:10
      automatic logic [31:0] _RANDOM_5;	// <stdin>:337:10
      automatic logic [31:0] _RANDOM_6;	// <stdin>:337:10
      automatic logic [31:0] _RANDOM_7;	// <stdin>:337:10
      automatic logic [31:0] _RANDOM_8;	// <stdin>:337:10
      automatic logic [31:0] _RANDOM_9;	// <stdin>:337:10
      automatic logic [31:0] _RANDOM_10;	// <stdin>:337:10
      `ifdef INIT_RANDOM_PROLOG_	// <stdin>:337:10
        `INIT_RANDOM_PROLOG_	// <stdin>:337:10
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT	// <stdin>:337:10
        _RANDOM_0 = `RANDOM;	// <stdin>:337:10
        _RANDOM_1 = `RANDOM;	// <stdin>:337:10
        _RANDOM_2 = `RANDOM;	// <stdin>:337:10
        _RANDOM_3 = `RANDOM;	// <stdin>:337:10
        _RANDOM_4 = `RANDOM;	// <stdin>:337:10
        _RANDOM_5 = `RANDOM;	// <stdin>:337:10
        _RANDOM_6 = `RANDOM;	// <stdin>:337:10
        _RANDOM_7 = `RANDOM;	// <stdin>:337:10
        _RANDOM_8 = `RANDOM;	// <stdin>:337:10
        _RANDOM_9 = `RANDOM;	// <stdin>:337:10
        _RANDOM_10 = `RANDOM;	// <stdin>:337:10
        fdreg_pc = {_RANDOM_0, _RANDOM_1};	// Core.scala:33:24
        dereg_op_a = {_RANDOM_2, _RANDOM_3};	// Core.scala:38:24
        dereg_op_b = {_RANDOM_4, _RANDOM_5};	// Core.scala:38:24
        dereg_rd = _RANDOM_6[4:0];	// Core.scala:38:24
        dereg_alu_op = _RANDOM_6[9:5];	// Core.scala:38:24
        dereg_wb_type = _RANDOM_6[11:10];	// Core.scala:38:24
        emreg_alu_res = {_RANDOM_6[31:12], _RANDOM_7, _RANDOM_8[11:0]};	// Core.scala:38:24, :47:24
        emreg_wb_type = _RANDOM_8[13:12];	// Core.scala:47:24
        emreg_rd = _RANDOM_8[18:14];	// Core.scala:47:24
        mwreg_alu_res = {_RANDOM_8[31:19], _RANDOM_9, _RANDOM_10[18:0]};	// Core.scala:47:24, :54:24
        mwreg_wb_type = _RANDOM_10[20:19];	// Core.scala:54:24
        mwreg_rd = _RANDOM_10[25:21];	// Core.scala:54:24
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL	// <stdin>:337:10
      `FIRRTL_AFTER_INITIAL	// <stdin>:337:10
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  Interact interact (	// Core.scala:17:26
    .inst (io_ramio_dataOut_valid ? io_ramio_dataOut_bits : 32'h0),	// Core.scala:18:28
    .clk  (clock),
    .rst  (reset)
  );
  Fetch fetch (	// Core.scala:25:23
    .clock             (clock),
    .reset             (reset),
    .io_fcfe_jump_flag (_fc_io_fcfe_jump_flag),	// Core.scala:66:20
    .io_fcfe_jump_pc   (_fc_io_fcfe_jump_pc),	// Core.scala:66:20
    .io_fcfe_flush     (_fc_io_fcfe_flush),	// Core.scala:66:20
    .io_fdio_pc        (_fetch_io_fdio_pc),
    .io_pc_valid       (_fetch_io_pc_valid),
    .io_pc_bits        (_fetch_io_pc_bits)
  );
  Decode decode (	// Core.scala:26:24
    .io_inst_valid      (io_ramio_dataOut_valid),
    .io_inst_bits       (io_ramio_dataOut_bits),
    .io_fdio_pc         (fdreg_pc),	// Core.scala:33:24
    .io_rfio_reg1_rdata (_regfile_io_RfDe_reg1_rdata),	// Core.scala:63:25
    .io_rfio_reg2_rdata (_regfile_io_RfDe_reg2_rdata),	// Core.scala:63:25
    .io_rfio_reg1_raddr (_decode_io_rfio_reg1_raddr),
    .io_rfio_reg2_raddr (_decode_io_rfio_reg2_raddr),
    .io_deio_op_a       (_decode_io_deio_op_a),
    .io_deio_op_b       (_decode_io_deio_op_b),
    .io_deio_rd         (_decode_io_deio_rd),
    .io_deio_alu_op     (_decode_io_deio_alu_op),
    .io_deio_wb_type    (_decode_io_deio_wb_type),
    .io_jump_flag       (_decode_io_jump_flag),
    .io_jump_pc         (_decode_io_jump_pc)
  );
  Excute excute (	// Core.scala:27:24
    .io_deio_op_a    (dereg_op_a),	// Core.scala:38:24
    .io_deio_op_b    (dereg_op_b),	// Core.scala:38:24
    .io_deio_rd      (dereg_rd),	// Core.scala:38:24
    .io_deio_alu_op  (dereg_alu_op),	// Core.scala:38:24
    .io_deio_wb_type (dereg_wb_type),	// Core.scala:38:24
    .io_emio_alu_res (_excute_io_emio_alu_res),
    .io_emio_wb_type (_excute_io_emio_wb_type),
    .io_emio_rd      (_excute_io_emio_rd)
  );
  Mem mem (	// Core.scala:29:21
    .io_emio_alu_res (emreg_alu_res),	// Core.scala:47:24
    .io_emio_wb_type (emreg_wb_type),	// Core.scala:47:24
    .io_emio_rd      (emreg_rd),	// Core.scala:47:24
    .io_mwio_alu_res (_mem_io_mwio_alu_res),
    .io_mwio_wb_type (_mem_io_mwio_wb_type),
    .io_mwio_rd      (_mem_io_mwio_rd)
  );
  Wb wb (	// Core.scala:30:20
    .io_mwio_alu_res   (mwreg_alu_res),	// Core.scala:54:24
    .io_mwio_wb_type   (mwreg_wb_type),	// Core.scala:54:24
    .io_mwio_rd        (mwreg_rd),	// Core.scala:54:24
    .io_rfio_rd        (_wb_io_rfio_rd),
    .io_rfio_reg_wen   (_wb_io_rfio_reg_wen),
    .io_rfio_reg_wdata (_wb_io_rfio_reg_wdata)
  );
  Regfile regfile (	// Core.scala:63:25
    .clock              (clock),
    .io_RfDe_reg1_raddr (_decode_io_rfio_reg1_raddr),	// Core.scala:26:24
    .io_RfDe_reg2_raddr (_decode_io_rfio_reg2_raddr),	// Core.scala:26:24
    .io_RfWb_rd         (_wb_io_rfio_rd),	// Core.scala:30:20
    .io_RfWb_reg_wen    (_wb_io_rfio_reg_wen),	// Core.scala:30:20
    .io_RfWb_reg_wdata  (_wb_io_rfio_reg_wdata),	// Core.scala:30:20
    .io_RfDe_reg1_rdata (_regfile_io_RfDe_reg1_rdata),
    .io_RfDe_reg2_rdata (_regfile_io_RfDe_reg2_rdata)
  );
  FlowControl fc (	// Core.scala:66:20
    .io_fcde_jump_flag (_decode_io_jump_flag),	// Core.scala:26:24
    .io_fcde_jump_pc   (_decode_io_jump_pc),	// Core.scala:26:24
    .io_fcfe_jump_flag (_fc_io_fcfe_jump_flag),
    .io_fcfe_jump_pc   (_fc_io_fcfe_jump_pc),
    .io_fcfe_flush     (_fc_io_fcfe_flush)
  );
  DebugInterface DI (	// Core.scala:193:19
    .clk        (clock),
    .pc         (_fetch_io_pc_bits),	// Core.scala:25:23
    .pc_req     (_fetch_io_pc_valid),	// Core.scala:25:23
    .inst       (io_ramio_dataOut_bits),
    .inst_valid (io_ramio_dataOut_valid),
    .op_a       (dereg_op_a),	// Core.scala:38:24
    .op_b       (dereg_op_b),	// Core.scala:38:24
    .result     (_excute_io_emio_alu_res),	// Core.scala:27:24
    .rd         (_wb_io_rfio_rd),	// Core.scala:30:20
    .reg_wen    (_wb_io_rfio_reg_wen),	// Core.scala:30:20
    .reg_wdata  (_wb_io_rfio_reg_wdata)	// Core.scala:30:20
  );
  assign io_ramio_pc_valid = _fetch_io_pc_valid;	// <stdin>:337:10, Core.scala:25:23
  assign io_ramio_pc_bits = _fetch_io_pc_bits;	// <stdin>:337:10, Core.scala:25:23
endmodule

module Ram(	// <stdin>:477:10
  input         clock,
                io_pc_valid,
  input  [63:0] io_pc_bits,
  output        io_dataOut_valid,
  output [31:0] io_dataOut_bits);

  wire [7:0] _SyncMem_ext_R0_data;	// Ram.scala:18:30
  wire [7:0] _SyncMem_ext_R1_data;	// Ram.scala:18:30
  wire [7:0] _SyncMem_ext_R2_data;	// Ram.scala:18:30
  wire [7:0] _SyncMem_ext_R3_data;	// Ram.scala:18:30
  reg        inst_valid;	// Ram.scala:22:29
  always @(posedge clock)
    inst_valid <= io_pc_valid;	// Ram.scala:22:29
  `ifndef SYNTHESIS	// <stdin>:477:10
    `ifdef FIRRTL_BEFORE_INITIAL	// <stdin>:477:10
      `FIRRTL_BEFORE_INITIAL	// <stdin>:477:10
    `endif // FIRRTL_BEFORE_INITIAL
    initial begin	// <stdin>:477:10
      automatic logic [31:0] _RANDOM_0;	// <stdin>:477:10
      `ifdef INIT_RANDOM_PROLOG_	// <stdin>:477:10
        `INIT_RANDOM_PROLOG_	// <stdin>:477:10
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT	// <stdin>:477:10
        _RANDOM_0 = `RANDOM;	// <stdin>:477:10
        inst_valid = _RANDOM_0[0];	// Ram.scala:22:29
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL	// <stdin>:477:10
      `FIRRTL_AFTER_INITIAL	// <stdin>:477:10
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  SyncMem_combMem SyncMem_ext (	// Ram.scala:18:30
    .R0_addr (io_pc_bits[7:0] + 8'h3),	// Ram.scala:27:36
    .R0_en   (io_pc_valid),
    .R0_clk  (clock),
    .R1_addr (io_pc_bits[7:0] + 8'h2),	// Ram.scala:27:79
    .R1_en   (io_pc_valid),
    .R1_clk  (clock),
    .R2_addr (io_pc_bits[7:0] + 8'h1),	// Ram.scala:28:36
    .R2_en   (io_pc_valid),
    .R2_clk  (clock),
    .R3_addr (io_pc_bits[7:0]),	// Ram.scala:28:68
    .R3_en   (io_pc_valid),
    .R3_clk  (clock),
    .R0_data (_SyncMem_ext_R0_data),
    .R1_data (_SyncMem_ext_R1_data),
    .R2_data (_SyncMem_ext_R2_data),
    .R3_data (_SyncMem_ext_R3_data)
  );
  assign io_dataOut_valid = inst_valid;	// <stdin>:477:10, Ram.scala:22:29
  assign io_dataOut_bits = inst_valid ? {_SyncMem_ext_R0_data, _SyncMem_ext_R1_data, _SyncMem_ext_R2_data,
                _SyncMem_ext_R3_data} : 32'h0;	// <stdin>:477:10, Cat.scala:33:92, Ram.scala:18:30, :22:29, :26:27
endmodule

module Soc(	// <stdin>:527:10
  input clock,
        reset);

  wire        _ram_io_dataOut_valid;	// Soc.scala:11:21
  wire [31:0] _ram_io_dataOut_bits;	// Soc.scala:11:21
  wire        _core_io_ramio_pc_valid;	// Soc.scala:10:22
  wire [63:0] _core_io_ramio_pc_bits;	// Soc.scala:10:22
  Core core (	// Soc.scala:10:22
    .clock                  (clock),
    .reset                  (reset),
    .io_ramio_dataOut_valid (_ram_io_dataOut_valid),	// Soc.scala:11:21
    .io_ramio_dataOut_bits  (_ram_io_dataOut_bits),	// Soc.scala:11:21
    .io_ramio_pc_valid      (_core_io_ramio_pc_valid),
    .io_ramio_pc_bits       (_core_io_ramio_pc_bits)
  );
  Ram ram (	// Soc.scala:11:21
    .clock            (clock),
    .io_pc_valid      (_core_io_ramio_pc_valid),	// Soc.scala:10:22
    .io_pc_bits       (_core_io_ramio_pc_bits - 64'h80000000),	// Soc.scala:10:22, :14:45
    .io_dataOut_valid (_ram_io_dataOut_valid),
    .io_dataOut_bits  (_ram_io_dataOut_bits)
  );
endmodule


// ----- 8< ----- FILE "rv64/./build/Interact.v" ----- 8< -----


module Interact(input [31:0] inst,
                input  clk,
                input  rst
);
   
   reg ebreak_flag;
   reg [2:0] over_count;

   always@(posedge clk)begin
       if(rst)
           ebreak_flag <= 1'b0;
       else
       if(inst == 32'b00000000000100000000000001110011)begin
           ebreak_flag <= 1'b1;
       end
   end

   always@(posedge clk)begin  //需要等前面指令执行结束，再停止程序
       if(rst)
           over_count <= 'd0;
       else begin
           if(ebreak_flag)begin
               over_count <= over_count + 1'b1;
               if(over_count == 3'd4)begin
                   $display("ebreak!");
                   $finish;
               end
                   
           end
       end 
           
   end

   
endmodule
        

// ----- 8< ----- FILE "rv64/./build/DebugInterface.v" ----- 8< -----



import "DPI-C" function void update_debuginfo(unsigned long pc, bool pc_req, unsigned int inst, 
  bool inst_valid, unsigned long op_a, unsigned long op_b, unsigned long result, unsigned int rd, unsigned long reg_wdata,
  bool reg_wen);

module WbInterface(
                   input        clk,
   
                   input [63:0] pc,
                   input        pc_req,

                   input [31:0] inst,
                   input        inst_valid,

                   input [63:0] op_a,
                   input [63:0] op_b,
                   input [63:0] result,


                   input [4:0] rd,
                   input [63:0] reg_wdata,
                   input        reg_wen
);




always@(posedge clk)begin
   update_debuginfo(pc,pc_req,inst,inst_valid,op_a,op_b,result,rd,reg_wdata,reg_wen);
end



endmodule


    

