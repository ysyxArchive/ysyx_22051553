package rv64

import chisel3._
import chisel3.util._
import Define._




class DebugInterface extends BlackBox with HasBlackBoxInline{
    val io = IO(new Bundle {
        val clk = Input(Clock())
        val rst = Input(Reset())
        //------IF
        val pc = Input(UInt(PC_LEN.W))
        val pc_req = Input(Bool())
        //------DE
        val inst = Input(UInt(INST_LEN.W))
        val inst_valid = Input(Bool())

        val load_use = Input(Bool())
        //------EX
        val op_a  = Input(UInt(X_LEN.W))
        val op_b  = Input(UInt(X_LEN.W))

        val result = Input(UInt(X_LEN.W))

        val br_yes = Input(Bool())

        val mem_access = Input(Bool())
        val mem_addr = Input(UInt(X_LEN.W))
        //------MEM
        

        //------WB
        val rd = Input(UInt(REG_ADDR_LEN.W))
        val reg_wen = Input(Bool())
        val reg_wdata = Input(UInt(X_LEN.W))

        val csr_wen = Input(Bool())
        val csr_wdata = Input(UInt(X_LEN.W))
        val csr_waddr = Input(UInt(CSR_ADDR_LEN.W))

    })

    setInline("DebugInterface.v",
    """
    |
    |import "DPI-C" function void update_debuginfo(input reg[63:0] pc, input pc_req, input reg[31:0] inst, 
    |  input inst_valid, input load_use, input reg[63:0] op_a, input reg[63:0] op_b, input reg[63:0] result, 
    |   input br_yes, input reg mem_access, input [63:0] mem_addr,
    |   input reg[4:0] rd, input reg[63:0] reg_wdata,
    |  input reg_wen, input csr_wen, input [63:0] csr_wdata, input [11:0] csr_waddr);
    |
    |module DebugInterface(
    |                   input        clk,
    |                   input        rst,            
    |                   //fetch
    |                   input [63:0] pc,
    |                   input        pc_req,
    |
    |                   input [31:0] inst,
    |                   input        inst_valid,
    |                   input        load_use,
    |                   
    |                   //decode
    |                   input [63:0] op_a,
    |                   input [63:0] op_b,
    |                   input [63:0] result,
    |
    |                   //execute
    |                   input        br_yes,
    |
    |                   input        mem_access,
    |                   input [63:0] mem_addr,
    |       
    |
    |                   //wb
    |                   input [4:0] rd,
    |                   input [63:0] reg_wdata,
    |                   input        reg_wen,
    |
    |                   input       csr_wen,
    |                   input [63:0] csr_wdata,
    |                   input [11:0]    csr_waddr
    |);
    |
    |
    |
    |
    |always@(posedge clk)begin
    |   if(rst != 'd1)
    |       update_debuginfo(pc,pc_req,inst,inst_valid,load_use,op_a,op_b,result,br_yes, mem_access, mem_addr, rd,reg_wdata,reg_wen,
    |       csr_wen,csr_wdata,csr_waddr);
    |end
    |
    |
    |
    |endmodule
    |
    |
    """.stripMargin
    
    
    )
  
}
