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

module Fetch(	// <stdin>:8:10
  input         clock,
                reset,
                io_fcfe_jump_flag,
  input  [63:0] io_fcfe_jump_pc,
  input         io_fcfe_flush,
  output [63:0] io_fdio_pc,
  output        io_pc_valid,
  output [63:0] io_pc_bits,
                io_next_pc);

  reg         started;	// Fetch.scala:25:26
  reg  [63:0] pc;	// Fetch.scala:28:21
  wire        _next_pc_T_2 = io_fcfe_flush & io_fcfe_jump_flag;	// Fetch.scala:34:36
  wire [63:0] _next_pc_T_4 = io_fcfe_jump_pc + 64'h4;	// Fetch.scala:34:85
  wire [63:0] _next_pc_T_7 = pc + 64'h4;	// Fetch.scala:28:21, :34:85, :35:37
  always @(posedge clock) begin
    if (reset) begin
      started <= 1'h0;	// <stdin>:8:10, Fetch.scala:25:26
      pc <= 64'h80000000;	// Fetch.scala:28:21
    end
    else begin
      started <= 1'h1;	// Fetch.scala:25:26, :26:13
      if (_next_pc_T_2)	// Fetch.scala:34:36
        pc <= _next_pc_T_4;	// Fetch.scala:28:21, :34:85
      else if (started)	// Fetch.scala:25:26, :34:36
        pc <= _next_pc_T_7;	// Fetch.scala:28:21, :35:37
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
        started = _RANDOM_0[0];	// Fetch.scala:25:26
        pc = {_RANDOM_0[31:1], _RANDOM_1, _RANDOM_2[0]};	// Fetch.scala:25:26, :28:21
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL	// <stdin>:8:10
      `FIRRTL_AFTER_INITIAL	// <stdin>:8:10
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  assign io_fdio_pc = io_fcfe_flush & io_fcfe_jump_flag ? io_fcfe_jump_pc : pc;	// <stdin>:8:10, Fetch.scala:28:21, :45:36, Mux.scala:101:16
  assign io_pc_valid = started;	// <stdin>:8:10, Fetch.scala:25:26
  assign io_pc_bits = io_fcfe_flush & io_fcfe_jump_flag ? io_fcfe_jump_pc : pc;	// <stdin>:8:10, Fetch.scala:28:21, :52:36, Mux.scala:101:16
  assign io_next_pc = _next_pc_T_2 ? _next_pc_T_4 : started ? _next_pc_T_7 : pc;	// <stdin>:8:10, Fetch.scala:25:26, :28:21, :34:{36,85}, :35:37, Mux.scala:101:16
endmodule

module ControlUnit(	// <stdin>:44:10
  input  [31:0] io_inst,
  output [1:0]  io_jump_type,
                io_opa_type,
                io_opb_type,
                io_imm_type,
  output [4:0]  io_alu_op,
  output [1:0]  io_wb_type,
  output [2:0]  io_sd_type,
                io_ld_type);

  wire       _controlsig_T_1 = io_inst == 32'h13;	// Lookup.scala:31:38
  wire [9:0] _GEN = {io_inst[14:12], io_inst[6:0]};	// Lookup.scala:31:38
  wire       _controlsig_T_3 = _GEN == 10'h13;	// Lookup.scala:31:38
  wire       _controlsig_T_5 = io_inst[6:0] == 7'h17;	// Lookup.scala:31:38
  wire       _controlsig_T_7 = io_inst[6:0] == 7'h37;	// Lookup.scala:31:38
  wire       _controlsig_T_9 = io_inst[6:0] == 7'h6F;	// Lookup.scala:31:38
  wire       _controlsig_T_11 = _GEN == 10'h67;	// Lookup.scala:31:38
  wire       _controlsig_T_26 = _GEN == 10'h1A3;	// Lookup.scala:31:38
  wire [1:0] _controlsig_T_44 = {_controlsig_T_26, 1'h0};	// Lookup.scala:31:38, :34:39
  wire       _GEN_0 = _controlsig_T_9 | _controlsig_T_11;	// Lookup.scala:31:38, :34:39
  wire [2:0] _controlsig_T_56 = {_controlsig_T_26, 2'h0};	// Lookup.scala:31:38, :34:39
  wire       _GEN_1 = _controlsig_T_1 | _controlsig_T_3 | _controlsig_T_5 | _controlsig_T_7 | _controlsig_T_9 |
                _controlsig_T_11;	// Lookup.scala:31:38, :34:39
  assign io_jump_type = _controlsig_T_1 | _controlsig_T_3 | _controlsig_T_5 | _controlsig_T_7 ? 2'h0 :
                _controlsig_T_9 ? 2'h1 : {_controlsig_T_11, 1'h0};	// <stdin>:44:10, Lookup.scala:31:38, :34:39
  assign io_opa_type = _controlsig_T_1 ? 2'h0 : _controlsig_T_3 ? 2'h2 : _controlsig_T_5 ? 2'h1 : _controlsig_T_7
                ? 2'h0 : _GEN_0 ? 2'h1 : _controlsig_T_44;	// <stdin>:44:10, Lookup.scala:31:38, :34:39
  assign io_opb_type = _controlsig_T_1 ? 2'h0 : _controlsig_T_3 | _controlsig_T_5 | _controlsig_T_7 ? 2'h1 :
                _GEN_0 ? 2'h3 : {1'h0, _controlsig_T_26};	// <stdin>:44:10, Lookup.scala:31:38, :34:39
  assign io_imm_type = _controlsig_T_1 | _controlsig_T_3 ? 2'h0 : _controlsig_T_5 | _controlsig_T_7 ? 2'h1 :
                _controlsig_T_9 ? 2'h2 : _controlsig_T_11 ? 2'h0 : {2{_controlsig_T_26}};	// <stdin>:44:10, Lookup.scala:31:38, :34:39
  assign io_alu_op = {5{_controlsig_T_1 | ~(_controlsig_T_3 | _controlsig_T_5 | _controlsig_T_7 |
                _controlsig_T_9 | _controlsig_T_11 | _controlsig_T_26)}};	// <stdin>:44:10, Lookup.scala:31:38, :34:39
  assign io_wb_type = _controlsig_T_1 ? 2'h0 : _controlsig_T_3 | _controlsig_T_5 | _controlsig_T_7 |
                _controlsig_T_9 | _controlsig_T_11 ? 2'h1 : _controlsig_T_44;	// <stdin>:44:10, Lookup.scala:31:38, :34:39
  assign io_sd_type = _GEN_1 ? 3'h0 : _controlsig_T_56;	// <stdin>:44:10, Lookup.scala:34:39
  assign io_ld_type = _GEN_1 ? 3'h0 : _controlsig_T_56;	// <stdin>:44:10, Lookup.scala:34:39
endmodule

module Eximm(	// <stdin>:128:10
  input  [31:0] io_inst,
  input  [1:0]  io_imm_type,
  output [63:0] io_eximm);

  wire [3:0][63:0] _GEN = {{64'h0}, {{{44{io_inst[31]}}, io_inst[19:12], io_inst[20], io_inst[30:21], 1'h0}},
                {{{32{io_inst[31]}}, io_inst[31:12], 12'h0}}, {{{52{io_inst[31]}}, io_inst[31:20]}}};	// Bitwise.scala:77:12, Cat.scala:33:92, Eximm.scala:30:{42,56}, :31:56, :32:{56,72,85}, Mux.scala:81:{58,61}
  assign io_eximm = _GEN[io_imm_type];	// <stdin>:128:10, Mux.scala:81:{58,61}
endmodule

module Decode(	// <stdin>:163:10
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
  output [2:0]  io_deio_sd_type,
  output [63:0] io_deio_reg2_rdata,
  output [2:0]  io_deio_ld_type,
  output        io_jump_flag,
  output [63:0] io_jump_pc);

  wire [63:0]      _eximm_io_eximm;	// Decode.scala:40:23
  wire [1:0]       _cu_io_jump_type;	// Decode.scala:39:20
  wire [1:0]       _cu_io_opa_type;	// Decode.scala:39:20
  wire [1:0]       _cu_io_opb_type;	// Decode.scala:39:20
  wire [1:0]       _cu_io_imm_type;	// Decode.scala:39:20
  wire [3:0][63:0] _GEN = {{64'h4}, {io_rfio_reg2_rdata}, {_eximm_io_eximm}, {64'h0}};	// Decode.scala:40:23, Mux.scala:81:{58,61}
  wire             _io_jump_pc_T = _cu_io_jump_type == 2'h1;	// Decode.scala:39:20, :84:38, Mux.scala:81:61
  wire             _io_jump_pc_T_3 = _cu_io_jump_type == 2'h2;	// Decode.scala:39:20, :84:82, Mux.scala:81:61
  ControlUnit cu (	// Decode.scala:39:20
    .io_inst      (io_inst_bits),
    .io_jump_type (_cu_io_jump_type),
    .io_opa_type  (_cu_io_opa_type),
    .io_opb_type  (_cu_io_opb_type),
    .io_imm_type  (_cu_io_imm_type),
    .io_alu_op    (io_deio_alu_op),
    .io_wb_type   (io_deio_wb_type),
    .io_sd_type   (io_deio_sd_type),
    .io_ld_type   (io_deio_ld_type)
  );
  Eximm eximm (	// Decode.scala:40:23
    .io_inst     (io_inst_bits),
    .io_imm_type (_cu_io_imm_type),	// Decode.scala:39:20
    .io_eximm    (_eximm_io_eximm)
  );
  assign io_rfio_reg1_raddr = io_inst_bits[19:15];	// <stdin>:163:10, Decode.scala:44:16
  assign io_rfio_reg2_raddr = io_inst_bits[24:20];	// <stdin>:163:10, Decode.scala:45:16
  assign io_deio_op_a = _cu_io_opa_type == 2'h2 ? io_rfio_reg1_rdata : _cu_io_opa_type == 2'h1 ? io_fdio_pc : 64'h0;	// <stdin>:163:10, Decode.scala:39:20, Mux.scala:81:{58,61}
  assign io_deio_op_b = _GEN[_cu_io_opb_type];	// <stdin>:163:10, Decode.scala:39:20, Mux.scala:81:{58,61}
  assign io_deio_rd = io_inst_bits[11:7];	// <stdin>:163:10, Decode.scala:46:15
  assign io_deio_reg2_rdata = io_rfio_reg2_rdata;	// <stdin>:163:10
  assign io_jump_flag = _io_jump_pc_T | _io_jump_pc_T_3;	// <stdin>:163:10, Decode.scala:84:{38,63,82}
  assign io_jump_pc = _io_jump_pc_T ? io_fdio_pc + _eximm_io_eximm : _io_jump_pc_T_3 ? io_rfio_reg1_rdata +
                _eximm_io_eximm & 64'hFFFFFFFFFFFFFFFE : 64'h80000000;	// <stdin>:163:10, Decode.scala:40:23, :84:{38,82}, :88:71, :89:{81,99,102}, Mux.scala:101:16
endmodule

module Alu(	// <stdin>:230:10
  input  [63:0] io_op_a,
                io_op_b,
  input  [4:0]  io_alu_op,
  output [63:0] io_result);

  assign io_result = io_alu_op == 5'h0 ? io_op_a + io_op_b : 64'h0;	// <stdin>:230:10, Alu.scala:49:33, Mux.scala:81:{58,61}
endmodule

module Excute(	// <stdin>:241:10
  input  [63:0] io_deio_op_a,
                io_deio_op_b,
  input  [4:0]  io_deio_rd,
                io_deio_alu_op,
  input  [1:0]  io_deio_wb_type,
  input  [2:0]  io_deio_sd_type,
  input  [63:0] io_deio_reg2_rdata,
  input  [2:0]  io_deio_ld_type,
  output [63:0] io_emio_alu_res,
  output [1:0]  io_emio_wb_type,
  output [4:0]  io_emio_rd,
  output [2:0]  io_emio_ld_type,
                io_emio_ld_addr_lowbit,
  output [63:0] io_raddr,
                io_waddr,
                io_wdata,
  output [7:0]  io_wmask);

  wire [63:0] _io_raddr_T_1;	// Excute.scala:47:20
  wire [63:0] _alu_io_result;	// Excute.scala:29:21
  assign _io_raddr_T_1 = (|io_deio_ld_type) ? _alu_io_result : 64'h0;	// Excute.scala:29:21, :44:16, :47:{20,37}
  Alu alu (	// Excute.scala:29:21
    .io_op_a   (io_deio_op_a),
    .io_op_b   (io_deio_op_b),
    .io_alu_op (io_deio_alu_op),
    .io_result (_alu_io_result)
  );
  assign io_emio_alu_res = _alu_io_result;	// <stdin>:241:10, Excute.scala:29:21
  assign io_emio_wb_type = io_deio_wb_type;	// <stdin>:241:10
  assign io_emio_rd = io_deio_rd;	// <stdin>:241:10
  assign io_emio_ld_type = io_deio_ld_type;	// <stdin>:241:10
  assign io_emio_ld_addr_lowbit = {1'h0, _io_raddr_T_1[1:0]};	// <stdin>:241:10, Excute.scala:41:{28,39}, :47:20
  assign io_raddr = _io_raddr_T_1;	// <stdin>:241:10, Excute.scala:47:20
  assign io_waddr = (|io_deio_sd_type) ? _alu_io_result : 64'h0;	// <stdin>:241:10, Excute.scala:29:21, :44:16, :49:{20,37}
  assign io_wdata = io_deio_reg2_rdata;	// <stdin>:241:10
  assign io_wmask = io_deio_sd_type == 3'h4 ? 8'hFF : {4'h0, io_deio_sd_type == 3'h3 ? 4'hF : {2'h0,
                io_deio_sd_type == 3'h2 ? 2'h3 : {1'h0, io_deio_sd_type == 3'h1}}};	// <stdin>:241:10, Excute.scala:41:28, Mux.scala:81:{58,61}
endmodule

module Mem(	// <stdin>:277:10
  input  [63:0] io_emio_alu_res,
  input  [1:0]  io_emio_wb_type,
  input  [4:0]  io_emio_rd,
  input  [2:0]  io_emio_ld_type,
                io_emio_ld_addr_lowbit,
  input  [63:0] io_rdata,
  output [63:0] io_mwio_alu_res,
  output [1:0]  io_mwio_wb_type,
  output [4:0]  io_mwio_rd,
  output [2:0]  io_mwio_ld_type,
                io_mwio_ld_addr_lowbit,
  output [63:0] io_mwio_ld_data);

  assign io_mwio_alu_res = io_emio_alu_res;	// <stdin>:277:10
  assign io_mwio_wb_type = io_emio_wb_type;	// <stdin>:277:10
  assign io_mwio_rd = io_emio_rd;	// <stdin>:277:10
  assign io_mwio_ld_type = io_emio_ld_type;	// <stdin>:277:10
  assign io_mwio_ld_addr_lowbit = io_emio_ld_addr_lowbit;	// <stdin>:277:10
  assign io_mwio_ld_data = io_rdata;	// <stdin>:277:10
endmodule

module Wb(	// <stdin>:289:10
  input  [63:0] io_mwio_alu_res,
  input  [1:0]  io_mwio_wb_type,
  input  [4:0]  io_mwio_rd,
  input  [2:0]  io_mwio_ld_type,
                io_mwio_ld_addr_lowbit,
  input  [63:0] io_mwio_ld_data,
  output [4:0]  io_rfio_rd,
  output        io_rfio_reg_wen,
  output [63:0] io_rfio_reg_wdata);

  wire             _mem_data_T_148 = io_mwio_ld_addr_lowbit == 3'h2;	// Mux.scala:81:61
  wire             _mem_data_T_162 = io_mwio_ld_addr_lowbit == 3'h4;	// Mux.scala:81:61
  wire             _mem_data_T_152 = io_mwio_ld_addr_lowbit == 3'h6;	// Mux.scala:81:61
  wire [7:0][63:0] _GEN = {{{{56{io_mwio_ld_data[63]}}, io_mwio_ld_data[63:56]}}, {{{56{io_mwio_ld_data[55]}},
                io_mwio_ld_data[55:48]}}, {{{56{io_mwio_ld_data[47]}}, io_mwio_ld_data[47:40]}},
                {{{56{io_mwio_ld_data[39]}}, io_mwio_ld_data[39:32]}}, {{{56{io_mwio_ld_data[31]}},
                io_mwio_ld_data[31:24]}}, {{{56{io_mwio_ld_data[23]}}, io_mwio_ld_data[23:16]}},
                {{{56{io_mwio_ld_data[15]}}, io_mwio_ld_data[15:8]}}, {{{56{io_mwio_ld_data[7]}},
                io_mwio_ld_data[7:0]}}};	// Bitwise.scala:77:12, Cat.scala:33:92, Mux.scala:81:{58,61}, Wb.scala:24:{56,77}, :25:{56,78}, :26:{56,78}, :27:{56,78}, :28:{56,78}, :29:{56,78}, :30:{56,78}, :31:{56,78}
  wire             _mem_data_T_160 = io_mwio_ld_addr_lowbit == 3'h0;	// Mux.scala:81:61
  wire [7:0][7:0]  _GEN_0 = {{io_mwio_ld_data[7:0]}, {io_mwio_ld_data[7:0]}, {io_mwio_ld_data[47:40]},
                {io_mwio_ld_data[39:32]}, {io_mwio_ld_data[31:24]}, {io_mwio_ld_data[23:16]},
                {io_mwio_ld_data[15:8]}, {io_mwio_ld_data[7:0]}};	// Mux.scala:81:{58,61}, Wb.scala:24:77, :25:78, :26:78, :27:78, :28:78, :29:78
  wire [7:0][63:0] _GEN_1 = {{_mem_data_T_162 ? {32'h0, io_mwio_ld_data[63:32]} : _mem_data_T_160 ? {32'h0,
                io_mwio_ld_data[31:0]} : 64'h0}, {_mem_data_T_152 ? {48'h0, io_mwio_ld_data[63:48]} :
                _mem_data_T_162 ? {48'h0, io_mwio_ld_data[47:32]} : _mem_data_T_148 ? {48'h0,
                io_mwio_ld_data[31:16]} : _mem_data_T_160 ? {48'h0, io_mwio_ld_data[15:0]} : 64'h0},
                {{56'h0, (&io_mwio_ld_addr_lowbit) ? io_mwio_ld_data[63:56] : _mem_data_T_152 ?
                io_mwio_ld_data[55:48] : _GEN_0[io_mwio_ld_addr_lowbit]}}, {io_mwio_ld_data},
                {_mem_data_T_162 ? {{32{io_mwio_ld_data[63]}}, io_mwio_ld_data[63:32]} : _mem_data_T_160 ?
                {{32{io_mwio_ld_data[31]}}, io_mwio_ld_data[31:0]} : 64'h0}, {_mem_data_T_152 ?
                {{48{io_mwio_ld_data[63]}}, io_mwio_ld_data[63:48]} : _mem_data_T_162 ?
                {{48{io_mwio_ld_data[47]}}, io_mwio_ld_data[47:32]} : _mem_data_T_148 ?
                {{48{io_mwio_ld_data[31]}}, io_mwio_ld_data[31:16]} : _mem_data_T_160 ?
                {{48{io_mwio_ld_data[15]}}, io_mwio_ld_data[15:0]} : 64'h0},
                {_GEN[io_mwio_ld_addr_lowbit]}, {64'h0}};	// Bitwise.scala:77:12, Cat.scala:33:92, Mux.scala:81:{58,61}, Wb.scala:25:56, :27:56, :29:56, :30:78, :31:{56,78}, :36:78, :37:78, :38:78, :39:78, :44:78, :45:78
  assign io_rfio_rd = io_mwio_rd;	// <stdin>:289:10
  assign io_rfio_reg_wen = |io_mwio_wb_type;	// <stdin>:289:10, Wb.scala:82:40
  assign io_rfio_reg_wdata = io_mwio_wb_type == 2'h2 ? _GEN_1[io_mwio_ld_type] : io_mwio_wb_type == 2'h1 ?
                io_mwio_alu_res : 64'h0;	// <stdin>:289:10, Mux.scala:81:{58,61}
endmodule

module Regfile(	// <stdin>:483:10
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
    .R0_en   (1'h1),	// <stdin>:483:10
    .R0_clk  (clock),
    .R1_addr (io_RfDe_reg1_raddr),
    .R1_en   (1'h1),	// <stdin>:483:10
    .R1_clk  (clock),
    .R2_addr (io_RfDe_reg2_raddr),
    .R2_en   (1'h1),	// <stdin>:483:10
    .R2_clk  (clock),
    .W0_addr (5'h0),	// Regfile.scala:37:9
    .W0_en   (1'h1),	// <stdin>:483:10
    .W0_clk  (clock),
    .W0_data (64'h0),	// Regfile.scala:37:13
    .W1_addr (io_RfWb_rd),
    .W1_en   (1'h1),	// <stdin>:483:10
    .W1_clk  (clock),
    .W1_data (io_RfWb_reg_wen & (|io_RfWb_rd) ? io_RfWb_reg_wdata : _regs_ext_R0_data),	// Regfile.scala:32:19, :39:{28,45,60}
    .R0_data (_regs_ext_R0_data),
    .R1_data (_regs_ext_R1_data),
    .R2_data (_regs_ext_R2_data)
  );
  assign io_RfDe_reg1_rdata = (|io_RfDe_reg1_raddr) ? _regs_ext_R1_data : 64'h0;	// <stdin>:483:10, Regfile.scala:32:19, :37:13, :48:{30,50}
  assign io_RfDe_reg2_rdata = (|io_RfDe_reg2_raddr) ? _regs_ext_R2_data : 64'h0;	// <stdin>:483:10, Regfile.scala:32:19, :37:13, :49:{30,50}
endmodule

module FlowControl(	// <stdin>:506:10
  input         io_fcde_jump_flag,
  input  [63:0] io_fcde_jump_pc,
  output        io_fcfe_jump_flag,
  output [63:0] io_fcfe_jump_pc,
  output        io_fcfe_flush);

  assign io_fcfe_jump_flag = io_fcde_jump_flag;	// <stdin>:506:10
  assign io_fcfe_jump_pc = io_fcde_jump_flag ? io_fcde_jump_pc : 64'h80000000;	// <stdin>:506:10, Mux.scala:101:16
  assign io_fcfe_flush = io_fcde_jump_flag;	// <stdin>:506:10
endmodule

// external module DebugInterface

module Core(	// <stdin>:565:10
  input         clock,
                reset,
  input  [63:0] io_inst,
                io_rdata,
  output [63:0] io_pc,
  output        io_valid,
  output [63:0] io_raddr,
                io_waddr,
                io_wdata,
  output [7:0]  io_wmask,
  output [63:0] io_next_pc);

  wire        _fc_io_fcfe_jump_flag;	// Core.scala:91:20
  wire [63:0] _fc_io_fcfe_jump_pc;	// Core.scala:91:20
  wire        _fc_io_fcfe_flush;	// Core.scala:91:20
  wire [63:0] _regfile_io_RfDe_reg1_rdata;	// Core.scala:88:25
  wire [63:0] _regfile_io_RfDe_reg2_rdata;	// Core.scala:88:25
  wire [4:0]  _wb_io_rfio_rd;	// Core.scala:44:20
  wire        _wb_io_rfio_reg_wen;	// Core.scala:44:20
  wire [63:0] _wb_io_rfio_reg_wdata;	// Core.scala:44:20
  wire [63:0] _mem_io_mwio_alu_res;	// Core.scala:43:21
  wire [1:0]  _mem_io_mwio_wb_type;	// Core.scala:43:21
  wire [4:0]  _mem_io_mwio_rd;	// Core.scala:43:21
  wire [2:0]  _mem_io_mwio_ld_type;	// Core.scala:43:21
  wire [2:0]  _mem_io_mwio_ld_addr_lowbit;	// Core.scala:43:21
  wire [63:0] _mem_io_mwio_ld_data;	// Core.scala:43:21
  wire [63:0] _excute_io_emio_alu_res;	// Core.scala:41:24
  wire [1:0]  _excute_io_emio_wb_type;	// Core.scala:41:24
  wire [4:0]  _excute_io_emio_rd;	// Core.scala:41:24
  wire [2:0]  _excute_io_emio_ld_type;	// Core.scala:41:24
  wire [2:0]  _excute_io_emio_ld_addr_lowbit;	// Core.scala:41:24
  wire [4:0]  _decode_io_rfio_reg1_raddr;	// Core.scala:40:24
  wire [4:0]  _decode_io_rfio_reg2_raddr;	// Core.scala:40:24
  wire [63:0] _decode_io_deio_op_a;	// Core.scala:40:24
  wire [63:0] _decode_io_deio_op_b;	// Core.scala:40:24
  wire [4:0]  _decode_io_deio_rd;	// Core.scala:40:24
  wire [4:0]  _decode_io_deio_alu_op;	// Core.scala:40:24
  wire [1:0]  _decode_io_deio_wb_type;	// Core.scala:40:24
  wire [2:0]  _decode_io_deio_sd_type;	// Core.scala:40:24
  wire [63:0] _decode_io_deio_reg2_rdata;	// Core.scala:40:24
  wire [2:0]  _decode_io_deio_ld_type;	// Core.scala:40:24
  wire        _decode_io_jump_flag;	// Core.scala:40:24
  wire [63:0] _decode_io_jump_pc;	// Core.scala:40:24
  wire [63:0] _fetch_io_fdio_pc;	// Core.scala:39:23
  wire        _fetch_io_pc_valid;	// Core.scala:39:23
  wire [63:0] _fetch_io_pc_bits;	// Core.scala:39:23
  reg  [63:0] fdreg_pc;	// Core.scala:48:24
  reg  [63:0] dereg_op_a;	// Core.scala:53:24
  reg  [63:0] dereg_op_b;	// Core.scala:53:24
  reg  [4:0]  dereg_rd;	// Core.scala:53:24
  reg  [4:0]  dereg_alu_op;	// Core.scala:53:24
  reg  [1:0]  dereg_wb_type;	// Core.scala:53:24
  reg  [2:0]  dereg_sd_type;	// Core.scala:53:24
  reg  [63:0] dereg_reg2_rdata;	// Core.scala:53:24
  reg  [2:0]  dereg_ld_type;	// Core.scala:53:24
  reg  [63:0] emreg_alu_res;	// Core.scala:66:24
  reg  [1:0]  emreg_wb_type;	// Core.scala:66:24
  reg  [4:0]  emreg_rd;	// Core.scala:66:24
  reg  [2:0]  emreg_ld_type;	// Core.scala:66:24
  reg  [2:0]  emreg_ld_addr_lowbit;	// Core.scala:66:24
  reg  [63:0] mwreg_alu_res;	// Core.scala:76:24
  reg  [1:0]  mwreg_wb_type;	// Core.scala:76:24
  reg  [4:0]  mwreg_rd;	// Core.scala:76:24
  reg  [2:0]  mwreg_ld_type;	// Core.scala:76:24
  reg  [2:0]  mwreg_ld_addr_lowbit;	// Core.scala:76:24
  reg  [63:0] mwreg_ld_data;	// Core.scala:76:24
  always @(posedge clock) begin
    if (reset) begin
      fdreg_pc <= 64'h80000000;	// <stdin>:594:20, Core.scala:48:24
      dereg_op_a <= 64'h0;	// Core.scala:53:24, :91:20
      dereg_op_b <= 64'h0;	// Core.scala:53:24, :91:20
      dereg_rd <= 5'h0;	// <stdin>:603:20, Core.scala:53:24
      dereg_alu_op <= 5'h1F;	// <stdin>:602:27, Core.scala:53:24
      dereg_wb_type <= 2'h0;	// <stdin>:601:25, Core.scala:53:24
      dereg_sd_type <= 3'h0;	// <stdin>:598:25, Core.scala:53:24
      dereg_reg2_rdata <= 64'h0;	// Core.scala:53:24, :91:20
      dereg_ld_type <= 3'h0;	// <stdin>:598:25, Core.scala:53:24
      emreg_alu_res <= 64'h0;	// Core.scala:66:24, :91:20
      emreg_wb_type <= 2'h0;	// <stdin>:601:25, Core.scala:66:24
      emreg_rd <= 5'h0;	// <stdin>:603:20, Core.scala:66:24
      emreg_ld_type <= 3'h0;	// <stdin>:598:25, Core.scala:66:24
      emreg_ld_addr_lowbit <= 3'h0;	// <stdin>:598:25, Core.scala:66:24
      mwreg_alu_res <= 64'h0;	// Core.scala:76:24, :91:20
      mwreg_wb_type <= 2'h0;	// <stdin>:601:25, Core.scala:76:24
      mwreg_rd <= 5'h0;	// <stdin>:603:20, Core.scala:76:24
      mwreg_ld_type <= 3'h0;	// <stdin>:598:25, Core.scala:76:24
      mwreg_ld_addr_lowbit <= 3'h0;	// <stdin>:598:25, Core.scala:76:24
      mwreg_ld_data <= 64'h0;	// Core.scala:76:24, :91:20
    end
    else begin
      fdreg_pc <= _fetch_io_fdio_pc;	// Core.scala:39:23, :48:24
      dereg_op_a <= _decode_io_deio_op_a;	// Core.scala:40:24, :53:24
      dereg_op_b <= _decode_io_deio_op_b;	// Core.scala:40:24, :53:24
      dereg_rd <= _decode_io_deio_rd;	// Core.scala:40:24, :53:24
      dereg_alu_op <= _decode_io_deio_alu_op;	// Core.scala:40:24, :53:24
      dereg_wb_type <= _decode_io_deio_wb_type;	// Core.scala:40:24, :53:24
      dereg_sd_type <= _decode_io_deio_sd_type;	// Core.scala:40:24, :53:24
      dereg_reg2_rdata <= _decode_io_deio_reg2_rdata;	// Core.scala:40:24, :53:24
      dereg_ld_type <= _decode_io_deio_ld_type;	// Core.scala:40:24, :53:24
      emreg_alu_res <= _excute_io_emio_alu_res;	// Core.scala:41:24, :66:24
      emreg_wb_type <= _excute_io_emio_wb_type;	// Core.scala:41:24, :66:24
      emreg_rd <= _excute_io_emio_rd;	// Core.scala:41:24, :66:24
      emreg_ld_type <= _excute_io_emio_ld_type;	// Core.scala:41:24, :66:24
      emreg_ld_addr_lowbit <= _excute_io_emio_ld_addr_lowbit;	// Core.scala:41:24, :66:24
      mwreg_alu_res <= _mem_io_mwio_alu_res;	// Core.scala:43:21, :76:24
      mwreg_wb_type <= _mem_io_mwio_wb_type;	// Core.scala:43:21, :76:24
      mwreg_rd <= _mem_io_mwio_rd;	// Core.scala:43:21, :76:24
      mwreg_ld_type <= _mem_io_mwio_ld_type;	// Core.scala:43:21, :76:24
      mwreg_ld_addr_lowbit <= _mem_io_mwio_ld_addr_lowbit;	// Core.scala:43:21, :76:24
      mwreg_ld_data <= _mem_io_mwio_ld_data;	// Core.scala:43:21, :76:24
    end
  end // always @(posedge)
  `ifndef SYNTHESIS	// <stdin>:565:10
    `ifdef FIRRTL_BEFORE_INITIAL	// <stdin>:565:10
      `FIRRTL_BEFORE_INITIAL	// <stdin>:565:10
    `endif // FIRRTL_BEFORE_INITIAL
    initial begin	// <stdin>:565:10
      automatic logic [31:0] _RANDOM_0;	// <stdin>:565:10
      automatic logic [31:0] _RANDOM_1;	// <stdin>:565:10
      automatic logic [31:0] _RANDOM_2;	// <stdin>:565:10
      automatic logic [31:0] _RANDOM_3;	// <stdin>:565:10
      automatic logic [31:0] _RANDOM_4;	// <stdin>:565:10
      automatic logic [31:0] _RANDOM_5;	// <stdin>:565:10
      automatic logic [31:0] _RANDOM_6;	// <stdin>:565:10
      automatic logic [31:0] _RANDOM_7;	// <stdin>:565:10
      automatic logic [31:0] _RANDOM_8;	// <stdin>:565:10
      automatic logic [31:0] _RANDOM_9;	// <stdin>:565:10
      automatic logic [31:0] _RANDOM_10;	// <stdin>:565:10
      automatic logic [31:0] _RANDOM_11;	// <stdin>:565:10
      automatic logic [31:0] _RANDOM_12;	// <stdin>:565:10
      automatic logic [31:0] _RANDOM_13;	// <stdin>:565:10
      automatic logic [31:0] _RANDOM_14;	// <stdin>:565:10
      automatic logic [31:0] _RANDOM_15;	// <stdin>:565:10
      `ifdef INIT_RANDOM_PROLOG_	// <stdin>:565:10
        `INIT_RANDOM_PROLOG_	// <stdin>:565:10
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT	// <stdin>:565:10
        _RANDOM_0 = `RANDOM;	// <stdin>:565:10
        _RANDOM_1 = `RANDOM;	// <stdin>:565:10
        _RANDOM_2 = `RANDOM;	// <stdin>:565:10
        _RANDOM_3 = `RANDOM;	// <stdin>:565:10
        _RANDOM_4 = `RANDOM;	// <stdin>:565:10
        _RANDOM_5 = `RANDOM;	// <stdin>:565:10
        _RANDOM_6 = `RANDOM;	// <stdin>:565:10
        _RANDOM_7 = `RANDOM;	// <stdin>:565:10
        _RANDOM_8 = `RANDOM;	// <stdin>:565:10
        _RANDOM_9 = `RANDOM;	// <stdin>:565:10
        _RANDOM_10 = `RANDOM;	// <stdin>:565:10
        _RANDOM_11 = `RANDOM;	// <stdin>:565:10
        _RANDOM_12 = `RANDOM;	// <stdin>:565:10
        _RANDOM_13 = `RANDOM;	// <stdin>:565:10
        _RANDOM_14 = `RANDOM;	// <stdin>:565:10
        _RANDOM_15 = `RANDOM;	// <stdin>:565:10
        fdreg_pc = {_RANDOM_0, _RANDOM_1};	// Core.scala:48:24
        dereg_op_a = {_RANDOM_2, _RANDOM_3};	// Core.scala:53:24
        dereg_op_b = {_RANDOM_4, _RANDOM_5};	// Core.scala:53:24
        dereg_rd = _RANDOM_6[4:0];	// Core.scala:53:24
        dereg_alu_op = _RANDOM_6[9:5];	// Core.scala:53:24
        dereg_wb_type = _RANDOM_6[11:10];	// Core.scala:53:24
        dereg_sd_type = _RANDOM_6[14:12];	// Core.scala:53:24
        dereg_reg2_rdata = {_RANDOM_6[31:15], _RANDOM_7, _RANDOM_8[14:0]};	// Core.scala:53:24
        dereg_ld_type = _RANDOM_8[17:15];	// Core.scala:53:24
        emreg_alu_res = {_RANDOM_8[31:18], _RANDOM_9, _RANDOM_10[17:0]};	// Core.scala:53:24, :66:24
        emreg_wb_type = _RANDOM_10[19:18];	// Core.scala:66:24
        emreg_rd = _RANDOM_10[24:20];	// Core.scala:66:24
        emreg_ld_type = _RANDOM_10[27:25];	// Core.scala:66:24
        emreg_ld_addr_lowbit = _RANDOM_10[30:28];	// Core.scala:66:24
        mwreg_alu_res = {_RANDOM_10[31], _RANDOM_11, _RANDOM_12[30:0]};	// Core.scala:66:24, :76:24
        mwreg_wb_type = {_RANDOM_12[31], _RANDOM_13[0]};	// Core.scala:76:24
        mwreg_rd = _RANDOM_13[5:1];	// Core.scala:76:24
        mwreg_ld_type = _RANDOM_13[8:6];	// Core.scala:76:24
        mwreg_ld_addr_lowbit = _RANDOM_13[11:9];	// Core.scala:76:24
        mwreg_ld_data = {_RANDOM_13[31:12], _RANDOM_14, _RANDOM_15[11:0]};	// Core.scala:76:24
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL	// <stdin>:565:10
      `FIRRTL_AFTER_INITIAL	// <stdin>:565:10
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  Interact interact (	// Core.scala:31:26
    .inst (io_inst[31:0]),	// Core.scala:32:22
    .clk  (clock),
    .rst  (reset)
  );
  Fetch fetch (	// Core.scala:39:23
    .clock             (clock),
    .reset             (reset),
    .io_fcfe_jump_flag (_fc_io_fcfe_jump_flag),	// Core.scala:91:20
    .io_fcfe_jump_pc   (_fc_io_fcfe_jump_pc),	// Core.scala:91:20
    .io_fcfe_flush     (_fc_io_fcfe_flush),	// Core.scala:91:20
    .io_fdio_pc        (_fetch_io_fdio_pc),
    .io_pc_valid       (_fetch_io_pc_valid),
    .io_pc_bits        (_fetch_io_pc_bits),
    .io_next_pc        (io_next_pc)
  );
  Decode decode (	// Core.scala:40:24
    .io_inst_bits       (fdreg_pc[2] ? io_inst[63:32] : io_inst[31:0]),	// Core.scala:48:24, :110:{31,40,60,76}
    .io_fdio_pc         (fdreg_pc),	// Core.scala:48:24
    .io_rfio_reg1_rdata (_regfile_io_RfDe_reg1_rdata),	// Core.scala:88:25
    .io_rfio_reg2_rdata (_regfile_io_RfDe_reg2_rdata),	// Core.scala:88:25
    .io_rfio_reg1_raddr (_decode_io_rfio_reg1_raddr),
    .io_rfio_reg2_raddr (_decode_io_rfio_reg2_raddr),
    .io_deio_op_a       (_decode_io_deio_op_a),
    .io_deio_op_b       (_decode_io_deio_op_b),
    .io_deio_rd         (_decode_io_deio_rd),
    .io_deio_alu_op     (_decode_io_deio_alu_op),
    .io_deio_wb_type    (_decode_io_deio_wb_type),
    .io_deio_sd_type    (_decode_io_deio_sd_type),
    .io_deio_reg2_rdata (_decode_io_deio_reg2_rdata),
    .io_deio_ld_type    (_decode_io_deio_ld_type),
    .io_jump_flag       (_decode_io_jump_flag),
    .io_jump_pc         (_decode_io_jump_pc)
  );
  Excute excute (	// Core.scala:41:24
    .io_deio_op_a           (dereg_op_a),	// Core.scala:53:24
    .io_deio_op_b           (dereg_op_b),	// Core.scala:53:24
    .io_deio_rd             (dereg_rd),	// Core.scala:53:24
    .io_deio_alu_op         (dereg_alu_op),	// Core.scala:53:24
    .io_deio_wb_type        (dereg_wb_type),	// Core.scala:53:24
    .io_deio_sd_type        (dereg_sd_type),	// Core.scala:53:24
    .io_deio_reg2_rdata     (dereg_reg2_rdata),	// Core.scala:53:24
    .io_deio_ld_type        (dereg_ld_type),	// Core.scala:53:24
    .io_emio_alu_res        (_excute_io_emio_alu_res),
    .io_emio_wb_type        (_excute_io_emio_wb_type),
    .io_emio_rd             (_excute_io_emio_rd),
    .io_emio_ld_type        (_excute_io_emio_ld_type),
    .io_emio_ld_addr_lowbit (_excute_io_emio_ld_addr_lowbit),
    .io_raddr               (io_raddr),
    .io_waddr               (io_waddr),
    .io_wdata               (io_wdata),
    .io_wmask               (io_wmask)
  );
  Mem mem (	// Core.scala:43:21
    .io_emio_alu_res        (emreg_alu_res),	// Core.scala:66:24
    .io_emio_wb_type        (emreg_wb_type),	// Core.scala:66:24
    .io_emio_rd             (emreg_rd),	// Core.scala:66:24
    .io_emio_ld_type        (emreg_ld_type),	// Core.scala:66:24
    .io_emio_ld_addr_lowbit (emreg_ld_addr_lowbit),	// Core.scala:66:24
    .io_rdata               (io_rdata),
    .io_mwio_alu_res        (_mem_io_mwio_alu_res),
    .io_mwio_wb_type        (_mem_io_mwio_wb_type),
    .io_mwio_rd             (_mem_io_mwio_rd),
    .io_mwio_ld_type        (_mem_io_mwio_ld_type),
    .io_mwio_ld_addr_lowbit (_mem_io_mwio_ld_addr_lowbit),
    .io_mwio_ld_data        (_mem_io_mwio_ld_data)
  );
  Wb wb (	// Core.scala:44:20
    .io_mwio_alu_res        (mwreg_alu_res),	// Core.scala:76:24
    .io_mwio_wb_type        (mwreg_wb_type),	// Core.scala:76:24
    .io_mwio_rd             (mwreg_rd),	// Core.scala:76:24
    .io_mwio_ld_type        (mwreg_ld_type),	// Core.scala:76:24
    .io_mwio_ld_addr_lowbit (mwreg_ld_addr_lowbit),	// Core.scala:76:24
    .io_mwio_ld_data        (mwreg_ld_data),	// Core.scala:76:24
    .io_rfio_rd             (_wb_io_rfio_rd),
    .io_rfio_reg_wen        (_wb_io_rfio_reg_wen),
    .io_rfio_reg_wdata      (_wb_io_rfio_reg_wdata)
  );
  Regfile regfile (	// Core.scala:88:25
    .clock              (clock),
    .io_RfDe_reg1_raddr (_decode_io_rfio_reg1_raddr),	// Core.scala:40:24
    .io_RfDe_reg2_raddr (_decode_io_rfio_reg2_raddr),	// Core.scala:40:24
    .io_RfWb_rd         (_wb_io_rfio_rd),	// Core.scala:44:20
    .io_RfWb_reg_wen    (_wb_io_rfio_reg_wen),	// Core.scala:44:20
    .io_RfWb_reg_wdata  (_wb_io_rfio_reg_wdata),	// Core.scala:44:20
    .io_RfDe_reg1_rdata (_regfile_io_RfDe_reg1_rdata),
    .io_RfDe_reg2_rdata (_regfile_io_RfDe_reg2_rdata)
  );
  FlowControl fc (	// Core.scala:91:20
    .io_fcde_jump_flag (_decode_io_jump_flag),	// Core.scala:40:24
    .io_fcde_jump_pc   (_decode_io_jump_pc),	// Core.scala:40:24
    .io_fcfe_jump_flag (_fc_io_fcfe_jump_flag),
    .io_fcfe_jump_pc   (_fc_io_fcfe_jump_pc),
    .io_fcfe_flush     (_fc_io_fcfe_flush)
  );
  DebugInterface DI (	// Core.scala:289:19
    .clk        (clock),
    .pc         (_fetch_io_pc_bits),	// Core.scala:39:23
    .pc_req     (_fetch_io_pc_valid),	// Core.scala:39:23
    .inst       (io_inst[31:0]),	// Core.scala:32:22
    .inst_valid (1'h0),	// Core.scala:289:19
    .op_a       (dereg_op_a),	// Core.scala:53:24
    .op_b       (dereg_op_b),	// Core.scala:53:24
    .result     (_excute_io_emio_alu_res),	// Core.scala:41:24
    .rd         (_wb_io_rfio_rd),	// Core.scala:44:20
    .reg_wen    (_wb_io_rfio_reg_wen),	// Core.scala:44:20
    .reg_wdata  (_wb_io_rfio_reg_wdata)	// Core.scala:44:20
  );
  assign io_pc = _fetch_io_pc_bits;	// <stdin>:565:10, Core.scala:39:23
  assign io_valid = _fetch_io_pc_valid;	// <stdin>:565:10, Core.scala:39:23
endmodule

// external module TempMem

module Soc(	// <stdin>:768:10
  input         clock,
                reset,
  output [63:0] io_next_pc);

  wire [63:0] _tm_inst;	// Soc.scala:15:20
  wire [63:0] _tm_rdata;	// Soc.scala:15:20
  wire [63:0] _core_io_pc;	// Soc.scala:12:22
  wire        _core_io_valid;	// Soc.scala:12:22
  wire [63:0] _core_io_raddr;	// Soc.scala:12:22
  wire [63:0] _core_io_waddr;	// Soc.scala:12:22
  wire [63:0] _core_io_wdata;	// Soc.scala:12:22
  wire [7:0]  _core_io_wmask;	// Soc.scala:12:22
  Core core (	// Soc.scala:12:22
    .clock      (clock),
    .reset      (reset),
    .io_inst    (_tm_inst),	// Soc.scala:15:20
    .io_rdata   (_tm_rdata),	// Soc.scala:15:20
    .io_pc      (_core_io_pc),
    .io_valid   (_core_io_valid),
    .io_raddr   (_core_io_raddr),
    .io_waddr   (_core_io_waddr),
    .io_wdata   (_core_io_wdata),
    .io_wmask   (_core_io_wmask),
    .io_next_pc (io_next_pc)
  );
  TempMem tm (	// Soc.scala:15:20
    .clk   (clock),
    .pc    (_core_io_pc),	// Soc.scala:12:22
    .valid (_core_io_valid),	// Soc.scala:12:22
    .raddr (_core_io_raddr),	// Soc.scala:12:22
    .waddr (_core_io_waddr),	// Soc.scala:12:22
    .wdata (_core_io_wdata),	// Soc.scala:12:22
    .wmask (_core_io_wmask),	// Soc.scala:12:22
    .inst  (_tm_inst),
    .rdata (_tm_rdata)
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



import "DPI-C" function void update_debuginfo(input reg[63:0] pc, input pc_req, input reg[31:0] inst, 
  input inst_valid, input reg[63:0] op_a, input reg[63:0] op_b, input reg[63:0] result, input reg[4:0] rd, input reg[63:0] reg_wdata,
  input reg_wen);

module DebugInterface(
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


    

// ----- 8< ----- FILE "rv64/./build/TempMem.v" ----- 8< -----


import "DPI-C" function longint pmem_read(
   input reg[63:0] raddr);

import "DPI-C" function void pmem_write(
   input reg[63:0] waddr, input reg[63:0] wdata, input byte wmask);

module TempMem(
   input           clk,

   output  reg [63:0]  inst,
   input   [63:0]  pc,
   input           valid,

   input   [63:0]  raddr,
   output  reg [63:0]  rdata,

   input   [63:0]  wdata,
   input   [63:0]  waddr,
   input   [7:0]   wmask
);


   always@(posedge clk)begin
          
       if(valid == 'd1)begin
           inst <= pmem_read(pc);
       end
       if(raddr != 'd0)
           rdata <= pmem_read(raddr);
       if(waddr != 'd0)
           pmem_write(waddr, wdata, wmask);
       
   end

endmodule


    

// ----- 8< ----- FILE "firrtl_black_box_resource_files.f" ----- 8< -----

