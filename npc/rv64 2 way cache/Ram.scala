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
   
    val SyncMem = SyncReadMem(256, UInt(8.W))
    loadMemoryFromFileInline(SyncMem, "inst")


    val inst_valid = RegNext(io.pc.valid)
    io.dataOut.valid := inst_valid
    
    //当io.pc.valid为0时，默认读出SyncMem[0]的数据
    io.dataOut.bits := Mux(io.dataOut.valid, 
        Cat(SyncMem.read(io.pc.bits+3.U, io.pc.valid), SyncMem.read(io.pc.bits+2.U, io.pc.valid),
            SyncMem.read(io.pc.bits+1.U, io.pc.valid), SyncMem.read(io.pc.bits, io.pc.valid)),
        0.U(32.W))
}
