package rv64

import chisel3._
import chisel3.util._
import chisel3.util.experimental.{loadMemoryFromFile, loadMemoryFromFileInline}
import Define._


class RamIO extends Bundle{
    val dataOut = ValidIO(UInt(INST_LEN.W))
    val pc   = Flipped(ValidIO(UInt(PC_LEN.W)))
}

class Ram extends Module{
   
    val io = IO(new RamIO) //在没有extend Module时，IO报错
   
    val SyncMem = SyncReadMem(256, UInt(PC_LEN.W))
    loadMemoryFromFileInline(SyncMem, "rv64/sim/inst")


    val inst_valid = RegNext(io.pc.valid)
    io.dataOut.valid := inst_valid
    
    io.dataOut.bits := SyncMem.read(io.pc.bits, io.pc.valid)      //当io.pc.valid为0时，默认读出SyncMem[0]的数据
}
