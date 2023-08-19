package rv64

import chisel3._
import chisel3.util._
import Define._


class TmIO extends Bundle{
    

    val inst = Output(UInt(INST_LEN.W))
    val pc   = Input(UInt(PC_LEN.W))

    val raddr = Input(UInt(X_LEN.W))
    val rdata = Output(UInt(X_LEN.W))

    val waddr = Input(UInt(X_LEN.W))
    val wdata = Input(UInt(X_LEN.W))
    val wmask = Input(UInt(8.W))
}

class TempMem extends BlackBox with HasBlackBoxInline{
    val io = IO(new TmIO)

    setInline("TempMem.v",
    """
    |import "DPI-C" function longint pmem_read(
    |   input longint raddr);
    |
    |import "DPI-C" function void pmem_write(
    |   input longint waddr, input longint wdata, input byte wmask);
    |
    |module TempMem(
    |   input           clk,
    |
    |   input   [31:0]  inst,
    |   input   [63:0]  pc,
    |
    |   input   [63:0]  raddr,
    |   output  [63:0]  rdata,
    |
    |   input   [63:0]  wdata,
    |   input   [63:0]  waddr,
    |   input   [7:0]   wmask
    |);
    |
    |   always@(posedge clk)begin
    |       inst <= pmem_read(pc);
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
