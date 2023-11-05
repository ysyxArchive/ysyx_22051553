package rv64

import chisel3._
import chisel3.util._
import Define._

class AXIAddr extends Bundle{
    val id = UInt(1.W)
    val addr = UInt(ADDRWIDTH.W)
    val len = UInt(8.W)
    val size = UInt(3.W) //size of data beat in bytes
    val burst = UInt(2.W)
    val lock = Bool()
    val cache = UInt(4.W)
    val prot = UInt(3.W)
}

class AXIWriteData extends Bundle{
    val data = UInt(X_LEN.W)
    val strb = UInt((X_LEN/8).W)
    val last = Bool()
}

class AXIWriteResp extends Bundle{
    val id = UInt(1.W)
    val resp = UInt(2.W)
}


class AXIReadData extends Bundle{
    val id = UInt(1.W)
    val data = UInt(X_LEN.W)
    val last = Bool()
    val resp = UInt(2.W)
}

class AXIMasterIf extends Bundle{
    val awready = Input(Bool())
    val awvalid = Output(Bool())
    val awid = Output(UInt(4.W))
    val awaddr = Output(UInt(32.W))
    val awlen = Output(UInt(8.W))
    val awsize = Output(UInt(3.W))
    val awburst = Output(UInt(2.W))

    val wready = Input(Bool())
    val wvalid = Output(Bool())
    val wdata = Output(UInt(64.W))
    val wstrb = Output(UInt(8.W))
    val wlast = Output(Bool())

    val bready = Output(Bool())
    val bvalid = Input(Bool())
    val bid = Input(UInt(4.W))
    val bresp = Input(UInt(2.W))

    val arready = Input(Bool())
    val arvalid = Output(Bool())
    val arid = Output(UInt(4.W))
    val araddr = Output(UInt(32.W))
    val arlen = Output(UInt(8.W))
    val arsize = Output(UInt(3.W))
    val arburst = Output(UInt(2.W))

    val rready = Output(Bool())
    val rvalid = Input(Bool())
    val rid = Input(UInt(4.W))
    val rresp = Input(UInt(2.W))
    val rdata = Input(UInt(64.W))
    val rlast = Input(Bool())
}

class AXISlaveIF extends Bundle{
    val aw = Flipped(DecoupledIO(new AXIAddr))
    val w = Flipped(DecoupledIO(new AXIWriteData))
    val b = DecoupledIO(new AXIWriteResp)
    val ar = Flipped(DecoupledIO(new AXIAddr))
    val r = DecoupledIO(new AXIReadData)
}
