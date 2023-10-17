package rv64

import chisel3._
import chisel3.util._
import Define._

class AXILiteAddr extends Bundle{
    val addr = UInt(ADDRWIDTH.W)
    val prot = UInt(3.W)
}

class AXILiteWriteData extends Bundle{
    val data = UInt(X_LEN.W)
    val strb = UInt((X_LEN/8).W)
}

class AXILiteReadData extends Bundle{
    val data = UInt(X_LEN.W)
    val resp = UInt(2.W)
}

class AXILiteMasterIf extends Bundle{
    val aw = DecoupledIO(new AXILiteAddr)
    val w = DecoupledIO(new AXILiteWriteData)
    val b = Flipped(DecoupledIO(UInt(2.W))) //Write Response
    val ar = DecoupledIO(new AXILiteAddr)
    val r = Flipped(DecoupledIO(new AXILiteReadData))
}

class AXILiteSlaveIF extends Bundle{
    val aw = Flipped(DecoupledIO(new AXILiteAddr))
    val w = Flipped(DecoupledIO(new AXILiteWriteData))
    val b = (DecoupledIO(UInt(2.W))) //Write Response
    val ar = Flipped(DecoupledIO(new AXILiteAddr))
    val r = DecoupledIO(new AXILiteReadData)
}
