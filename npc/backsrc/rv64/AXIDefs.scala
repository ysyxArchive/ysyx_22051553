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
    val aw = DecoupledIO(new AXIAddr)
    val w = DecoupledIO(new AXIWriteData)
    val b = Flipped(DecoupledIO(new AXIWriteResp))
    val ar = DecoupledIO(new AXIAddr)
    val r = Flipped(DecoupledIO(new AXIReadData))
}

class AXISlaveIF extends Bundle{
    val aw = Flipped(DecoupledIO(new AXIAddr))
    val w = Flipped(DecoupledIO(new AXIWriteData))
    val b = DecoupledIO(new AXIWriteResp)
    val ar = Flipped(DecoupledIO(new AXIAddr))
    val r = DecoupledIO(new AXIReadData)
}
