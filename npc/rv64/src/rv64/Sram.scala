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
    |   input reg[31:0] raddr);
    |
    |import "DPI-C" function void pmem_write(
    |   input reg[31:0] waddr, input reg[63:0] wdata, input byte wmask);
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
    |   output [1:0] S_AXI_RRESP,
    |   output       S_AXI_RVALID,
    |   input        S_AXI_RREADY
    |);
    |
    |//interface reg_def
    |reg             awready;
    |
    |reg             wready;
    |
    |reg     [1:0]   bresp;
    |reg             bvalid;
    |
    |reg             arready;
    |
    |reg     [63:0]  rdata;
    |reg     [1:0]   rresp;
    |reg             rvalid;
    |
    |assign S_AXI_AWREADY = awready;
    |assign S_AXI_WREADY = wready;
    |assign S_AXI_BRESP = bresp;
    |assign S_AXI_BVALID = bvalid;
    |assign S_AXI_ARREADY = arready;
    |assign S_AXI_RDATA = rdata;
    |assign S_AXI_RRESP = rresp;
    |assign S_AXI_RVALID = rvalid;
    |
    |
    |//aw channel
    |always@(posedge ACLK or negedge ARESETn) begin
    |   if(!ARESETn)
    |       awready <= 1'b0;
    |    else begin
    |        if(S_AXI_AWVALID) begin
    |            awready <= 1'b1;
    |        end
    |        else begin
    |            awready <= 1'b0;
    |        end
    |    end 
    |end
    |
    |reg [31:0] awaddr_buffer;
    |
    |always@(posedge ACLK or negedge ARESETn)begin
    |    if(!ARESETn)
    |        awaddr_buffer <= 32'd0;
    |    else begin
    |        if(S_AXI_AWVALID && S_AXI_AWREADY)begin
    |            awaddr_buffer <= S_AXI_AWADDR;
    |        end
    |    end
    |end
    |
    |
    |//address selection
    |wire [31:0] awaddr; //True addr
    |assign awaddr = (S_AXI_WVALID && S_AXI_WREADY && S_AXI_AWVALID && S_AXI_AWREADY) ? S_AXI_AWADDR : awaddr_buffer;
    |
    |//w channel
    |always @(posedge ACLK or negedge ARESETn) begin
    |    if(!ARESETn)
    |        wready <= 1'b0;
    |    else begin
    |        if(S_AXI_WVALID)
    |            wready <= 1'b1;
    |        else 
    |            wready <= 1'b0;
    |    end
    |end
    |
    |//b channel
    |reg need_resp;
    |always@(posedge ACLK or negedge ARESETn)begin
    |    if(!ARESETn)
    |        need_resp <= 1'b0;
    |    else begin
    |        if(S_AXI_WVALID && S_AXI_WREADY)begin
    |            need_resp <= 1'b1;
    |            pmem_write(awaddr, S_AXI_WDATA, S_AXI_WSTRB);
    |        end 
    |        else begin 
    |            need_resp <= 1'b0;
    |        end
    |    end
    |end
    |
    |always@(posedge ACLK or negedge ARESETn)begin
    |    if(!ARESETn)
    |        bvalid <= 1'b0;
    |    else begin
    |        if(need_resp)begin
    |            bvalid <= 1'b1;
    |            bresp <= 2'b00;
    |        end
    |        else if(S_AXI_BVALID && S_AXI_BREADY)begin
    |            bvalid <= 1'b0;
    |        end
    |    end
    |end
    |
    |
    |
    |//ar channel
    |always@(posedge ACLK or negedge ARESETn) begin
    |   if(!ARESETn)
    |       arready <= 1'b0;
    |    else begin
    |        if(S_AXI_ARVALID) begin
    |            arready <= 1'b1;
    |        end
    |        else begin
    |            arready <= 1'b0;
    |        end
    |    end 
    |end
    |
    |reg [31:0] araddr; 
    |reg need_read;
    |
    |always@(posedge ACLK or negedge ARESETn)begin
    |    if(!ARESETn)begin
    |        araddr <= 32'd0;
    |        need_read <= 1'b0;
    |    end
    |    else begin
    |        if(S_AXI_ARVALID && S_AXI_ARREADY)begin
    |            araddr <= S_AXI_ARADDR;
    |            need_read <= 1'b1;
    |        end
    |        else begin
    |            need_read <= 1'b0;
    |        end
    |    end
    |end
    |
    |//r channel
    |always@(posedge ACLK or negedge ARESETn) begin
    |   if(!ARESETn)begin
    |       rvalid <= 1'b0;
    |       rdata <= 64'd0;
    |       rresp <= 2'd0;
    |    end
    |    else begin
    |        if(need_read) begin
    |            rvalid <= 1'b1;
    |            rdata <= pmem_read(araddr);
    |            rresp <= 2'b00;
    |        end
    |        else begin
    |             rvalid <= 1'b0;
    |        end
    |    end 
    |end
    |
    |
    |
    |endmodule
    """.stripMargin
    )
  
}
