package rv64

import chisel3._
import chisel3.util._
import Define._

class Sram extends BlackBox with HasBlackBoxInline{
    val io = IO(new Bundle {
        val ACLK = Input(Clock())
        val ARESETn = Input(Reset())

        val S_AXI_AWID = Input(UInt(1.W))
        val S_AXI_AWADDR = Input(UInt(ADDRWIDTH.W))
        val S_AXI_AWLEN = Input(UInt(8.W))
        val S_AXI_AWSIZE = Input(UInt(3.W))
        val S_AXI_AWBURST = Input(UInt(2.W))
        val S_AXI_AWLOCK = Input(Bool())
        val S_AXI_AWCACHE = Input(UInt(4.W))
        val S_AXI_AWPROT = Input(UInt(3.W))
        val S_AXI_AWVALID = Input(Bool())
        val S_AXI_AWREADY = Output(Bool())

        val S_AXI_WDATA = Input(UInt(X_LEN.W))
        val S_AXI_WSTRB = Input(UInt((X_LEN/8).W))
        val S_AXI_WLAST = Input(Bool())
        val S_AXI_WVALID = Input(Bool())
        val S_AXI_WREADY = Output(Bool())

        val S_AXI_BID = Output(UInt(1.W))
        val S_AXI_BRESP = Output(UInt(2.W))
        val S_AXI_BVALID = Output(Bool())
        val S_AXI_BREADY = Input(Bool())

        val S_AXI_ARID = Input(UInt(1.W))
        val S_AXI_ARADDR = Input(UInt(ADDRWIDTH.W))
        val S_AXI_ARLEN = Input(UInt(8.W))
        val S_AXI_ARSIZE = Input(UInt(3.W))
        val S_AXI_ARBURST = Input(UInt(2.W))
        val S_AXI_ARLOCK = Input(Bool())
        val S_AXI_ARCACHE = Input(UInt(4.W))
        val S_AXI_ARPROT = Input(UInt(3.W))
        val S_AXI_ARVALID = Input(Bool())
        val S_AXI_ARREADY = Output(Bool())

        val S_AXI_RID = Output(UInt(1.W))
        val S_AXI_RDATA = Output(UInt(X_LEN.W))
        val S_AXI_RLAST = Output(Bool())
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
    |   input       S_AXI_AWID,
    |   input [31:0] S_AXI_AWADDR,
    |   input [7:0] S_AXI_AWLEN,
    |   input [2:0] S_AXI_AWSIZE,
    |   input [1:0] S_AXI_AWBURST,
    |   input       S_AXI_AWLOCK,
    |   input [3:0] S_AXI_AWCACHE,
    |   input [2:0]  S_AXI_AWPROT,
    |   input        S_AXI_AWVALID,
    |   output       S_AXI_AWREADY,
    |
    |   input [63:0] S_AXI_WDATA,
    |   input [7:0]  S_AXI_WSTRB,
    |   input        S_AXI_WLAST,
    |   input        S_AXI_WVALID,
    |   output       S_AXI_WREADY,
    |
    |   output       S_AXI_BID,
    |   output [1:0] S_AXI_BRESP,
    |   output       S_AXI_BVALID,
    |   input        S_AXI_BREADY,
    |
    |   input        S_AXI_ARID,
    |   input [31:0] S_AXI_ARADDR,
    |   input [7:0]  S_AXI_ARLEN,
    |   input [2:0]  S_AXI_ARSIZE,
    |   input [1:0]  S_AXI_ARBURST,
    |   input        S_AXI_ARLOCK,
    |   input [3:0]  S_AXI_ARCACHE,
    |   input [2:0]  S_AXI_ARPROT,
    |   input        S_AXI_ARVALID,
    |   output       S_AXI_ARREADY,
    |
    |   output       S_AXI_RID,
    |   output [63:0]S_AXI_RDATA,
    |   output       S_AXI_RLAST,
    |   output [1:0] S_AXI_RRESP,
    |   output       S_AXI_RVALID,
    |   input        S_AXI_RREADY
    |);
    |//internal reg
    |reg     [3:0]   w_count;
    |reg     [7:0]   r_count;
    |
    |//interface reg_def
    |reg     [1:0]   bresp;
    |reg             bvalid;
    |
    |reg     [63:0]  rdata;
    |reg             rlast;
    |reg     [1:0]   rresp;
    |reg             rvalid;
    |
    |assign S_AXI_AWREADY = 'd1;  //减少延迟
    |
    |assign S_AXI_WREADY = 'd1;
    |
    |assign S_AXI_BID = 'd0;
    |assign S_AXI_BRESP = bresp;
    |assign S_AXI_BVALID = bvalid;
    |
    |assign S_AXI_ARREADY = 'd1;
    |
    |assign S_AXI_RID = 'd0;
    |assign S_AXI_RDATA = rdata;
    |assign S_AXI_RLAST = rlast;
    |assign S_AXI_RRESP = rresp;
    |assign S_AXI_RVALID = rvalid;
    |
    |
    |//aw channel
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
    |always@(posedge ACLK or negedge ARESETn)begin
    |    if(!ARESETn)begin
    |        w_count <= 'd0;
    |    end
    |    else begin
    |        if(S_AXI_WVALID && S_AXI_WREADY && S_AXI_WLAST)begin
    |            w_count <= 'd0;
    |            pmem_write(awaddr+ w_count*8, S_AXI_WDATA, S_AXI_WSTRB);
    |        end 
    |        else if(S_AXI_WVALID && S_AXI_WREADY)begin
    |            w_count <= w_count + 'd1;
    |            pmem_write(awaddr+ w_count*8, S_AXI_WDATA, S_AXI_WSTRB);  //应该用size,而不是直接8,方便
    |        end
    |        else begin 
    |            w_count <= w_count;
    |        end
    |    end
    |end
    |
    |//b channel
    |wire need_resp;
    |assign need_resp = (S_AXI_WVALID && S_AXI_WREADY && S_AXI_WLAST) ? 1'd1 : 1'd0;
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
    |reg [31:0] araddr;
    |reg need_read;
    |reg [7:0] r_burst;
    |
    |always@(posedge ACLK or negedge ARESETn)begin
    |    if(!ARESETn)begin
    |        araddr <= 32'd0;
    |        need_read <= 1'b0;
    |        r_burst <= 'd0;
    |    end
    |    else begin
    |        if(S_AXI_ARVALID && S_AXI_ARREADY &&(S_AXI_ARLEN != 'd0))begin
    |            araddr <= S_AXI_ARADDR;
    |            need_read <= 1'b1;
    |            r_burst <= S_AXI_ARLEN;
    |        end
    |        
    |        
    |       else if((r_count == r_burst))begin
    |            need_read <= 1'b0;
    |            r_burst <= 'd0;
    |       end
    |
    |    end
    |end
    |
    |//r channel
    |always@(posedge ACLK or negedge ARESETn) begin
    |   if(!ARESETn)begin
    |       rvalid <= 1'b0;
    |       rdata <= 64'd0;
    |       rresp <= 2'd0;
    |       rlast <= 1'd0;
    |       r_count <= 'd0;
    |    end
    |    else begin
    |        if(need_read || (S_AXI_ARVALID && S_AXI_ARREADY)) begin //严格最少延迟
    |            rvalid <= 1'b1;
    |            //rdata <= (S_AXI_ARVALID && S_AXI_ARREADY) ? pmem_read(S_AXI_ARADDR) : pmem_read(araddr+8*r_count);
    |            if(S_AXI_ARVALID && S_AXI_ARREADY)begin
    |               rdata <= pmem_read(S_AXI_ARADDR);
    |               rlast <= (r_count == S_AXI_ARLEN) ? 1'd1 : 1'd0;
    |            end
    |            else begin
    |               rdata <= pmem_read(araddr+8*r_count);
    |               rlast <= (r_count == r_burst) ? 1'd1 : 1'd0;
    |            end
    |            rresp <= 2'b00;
    |           
    |           if(S_AXI_ARVALID && S_AXI_ARREADY &&(S_AXI_ARLEN == 'd0))
    |               r_count <= 'd0;
    |           else
    |               r_count <= r_count + 1'd1;  
    |        end
    |        else begin
    |            rvalid <= 1'b0;
    |            r_count <= 'd0;
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
