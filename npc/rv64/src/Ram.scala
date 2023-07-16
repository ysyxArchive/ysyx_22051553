import chisel3._
import chisel3.util._
import chisel3.util.experimental.{loadMemoryFromFile, loadMemoryFromFileInline}
import Define._


class RamIO extends Bundle{
    val dataOut = ValidIO(UInt(32.W))
    val pc   = Flipped(ValidIO(UInt(PC_LEN.W)))
}

class Ram extends Module{
   
    val io = IO(new RamIO) //在没有extend Module时，IO报错
   
    val SyncMem = SyncReadMem(256, UInt(PC_LEN.W))
    loadMemoryFromFileInline(SyncMem, "/home/shikye/ysyx-workbench/npc/rv64/sim/Mem.txt")




    val inst_valid = RegNext(io.pc.valid)
    io.dataOut.valid := inst_valid
    
    io.dataOut.bits := SyncMem.read(io.pc.bits, io.pc.valid)
}
