package rv64

import chisel3._
import chisel3.util._
import Define._

class Sram extends BlackBox with HasBlackBoxInline{
    val io = IO(new Bundle {
        val ACLK = Input(Clock())
        val ARESETn = Input(Reset())

        val S_AXI_AWADDR = Input(UInt(ADDRWIDTH.W))
        val S_AXI_AWPROT = Input(UInt(3.W))
        val S_AXI_AWVALID = Input(Bool())
        val S_AXI_AWREADY = Output(Bool())

        val S_AXI_WDATA = Input(UInt(X_LEN.W))
        val S_AXI_WSTRB = Input(UInt((X_LEN/8).W))
        val S_AXI_WVALID = Input(Bool())
        val S_AXI_WREADY = Output(Bool())

        val S_AXI_BRESP = Output(UInt(2.W))
        val S_AXI_BVALID = Output(Bool())
        val S_AXI_BREADY = Input(Bool())

        val S_AXI_ARADDR = Input(UInt(ADDRWIDTH.W))
        val S_AXI_ARPROT = Input(UInt(3.W))
        val S_AXI_ARVALID = Input(Bool())
        val S_AXI_ARREADY = Output(Bool())

        val S_AXI_RDATA = Output(UInt(X_LEN.W))
        val S_AXI_RRESP = Output(UInt(2.W))
        val S_AXI_RVALID = Output(Bool())
        val S_AXI_RREADY = Input(Bool())
    })

    setInline("Sram.v",
    """
    |import "DPI-C" function longint pmem_read(
    |   input reg[63:0] raddr);
    |
    |import "DPI-C" function void pmem_write(
    |   input reg[63:0] waddr, input reg[63:0] wdata, input byte wmask);
    |
    |
    |module Sram(
    |   input        ACLK,
    |   input        ARESETn,
    |
    |   input [31:0] S_AXI_AWADDR,
    |   input [2:0]  S_AXI_AWPROT,
    |   input        S_AXI_AWVALID,
    |   output       S_AXI_AWREADY,
    |
    |   input [63:0] S_AXI_WDATA,
    |   input [7:0]  S_AXI_WSTRB,
    |   input        S_AXI_WVALID,
    |   output       S_AXI_WREADY,
    |
    |   output [1:0] S_AXI_BRESP,
    |   output       S_AXI_BVALID,
    |   input        S_AXI_BREADY,
    |
    |   input [31:0] S_AXI_ARADDR,
    |   input [2:0]  S_AXI_ARPROT,
    |   input        S_AXI_ARVALID,
    |   output       S_AXI_ARREADY,
    |
    |   output [63:0]S_AXI_RDATA,
    |   output [31:0]S_AXI_RRESP,
    |   output [31:0]S_AXI_RVALID,
    |   input [31:0] S_AXI_RREADY
    |);
    |
    |
    |
    |always@(posedge A_CLK or negedge ARESETn) begin
    |   if(!ARESETn)
    |       S_AXI_
    |end
    |
    |
    |endmodule
    """.stripMargin
    )
  
}
