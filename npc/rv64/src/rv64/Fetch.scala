package rv64

import chisel3._
import chisel3.util._
import Define._



class FetchIO extends Bundle {
    // val if_stall = Input(Bool())
    // val if_jump_flag = Input(Bool())
    // val if_jump_pc = Input(UInt(PC_LEN.W))
    //流水线
    val fdio = Output(new FDRegIO)
    //to ram
    val pc = Output(ValidIO(UInt(PC_LEN.W)))
}


class Fetch extends Module{

    val io = IO(new FetchIO)

    val started = RegInit(false.B)        
    started := true.B

    val pc = RegInit(("h80000000".U)(PC_LEN.W))          //为什么不能用PC_START
    val next_pc = Mux(started, pc+4.U, pc)
    pc := next_pc

    io.fdio.pc := pc
    io.pc.bits := pc
    io.pc.valid := started
}
