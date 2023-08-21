package rv64

import chisel3._
import chisel3.util._
import Define._


class TempMem extends BlackBox with HasBlackBoxInline{
    val io = IO(new Bundle{
        
        val clk = Input(Clock())

        val inst = Output(UInt(INST_LEN.W))
        val pc   = Input(UInt(PC_LEN.W))

        val raddr = Input(UInt(X_LEN.W))
        val rdata = Output(UInt(X_LEN.W))

        val waddr = Input(UInt(X_LEN.W))
        val wdata = Input(UInt(X_LEN.W))
        val wmask = Input(UInt(8.W))
    })

    setInline("TempMem.v",
    """
    |import "DPI-C" function longint pmem_read(
    |   input reg[63:0] raddr);
    |
    |import "DPI-C" function void pmem_write(
    |   input reg[63:0] waddr, input reg[63:0] wdata, input byte wmask);
    |
    |module TempMem(
    |   input           clk,
    |
    |   output  [31:0]  inst,
    |   input   [63:0]  pc,
    |
    |   input   [63:0]  raddr,
    |   output  reg [63:0]  rdata,
    |
    |   input   [63:0]  wdata,
    |   input   [63:0]  waddr,
    |   input   [7:0]   wmask
    |);
    |
    |   reg [63:0] temp_inst;
    |
    |   assign inst = temp_inst[31:0];
    |
    |   always@(posedge clk)begin
    |       temp_inst <= pmem_read(pc);
    |       
    |       if(raddr != 'd0)
    |           rdata <= pmem_read(raddr);
    |       if(waddr != 'd0)
    |           pmem_write(waddr, wdata, wmask);
    |       
    |   end
    |
    |endmodule
    |
    |
    """.stripMargin
    )

  
}
