import chisel3._
import chisel3.util._
import chisel3.util.experimental.{loadMemoryFromFile, loadMemoryFromFileInline}
import Define._


class RamIO extends Bundle{
    val inst = Decoupled(UInt(32.W))
    val pc   = Flipped(Decoupled(UInt(PC_LEN.W)))
}

class Ram extends Module{
   
    val io = IO(new RamIO) //在没有extend Module时，IO报错
   
    val SyncMem = SyncReadMem(256, UInt(PC_LEN.W))

    val inst_valid = RegNext(io.pc.valid)
    io.inst.valid := inst_valid
    io.inst.bits := SyncMem(io.pc.bits(7,0))

    io.pc.ready := DontCare
}
