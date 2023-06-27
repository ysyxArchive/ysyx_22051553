import chisel3._
import chisel3.util._
import Define._



class FetchIO extends Bundle {
    // val if_stall = Input(Bool())
    // val if_jump_flag = Input(Bool())
    // val if_jump_pc = Input(UInt(PC_LEN.W))

    val pc = Output(UInt(PC_LEN.W))
    val inst_req = Output(Bool())
}



class Fetch extends Module{

    val io = IO(new FetchIO)

    val started = RegInit(false.B)
    started := true.B

    val next_pc = RegInit(PC_START)
    next_pc := io.pc + 4.U

    io.pc := next_pc  
    io.inst_req := true.B


}
