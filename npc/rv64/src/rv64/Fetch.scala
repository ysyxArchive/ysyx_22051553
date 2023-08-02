package rv64

import chisel3._
import chisel3.util._
import Define._



class FetchIO extends Bundle {
    //流水线
    val fdio = Output(new FDRegIO)
    //to ram
    val pc = Output(ValidIO(UInt(PC_LEN.W)))
    //from FlowControl
    val fcfe = Flipped(new FcFeIO)
}


class Fetch extends Module{

    val io = IO(new FetchIO)

    val started = RegInit(false.B)        
    started := true.B

    val pc = RegInit(("h80000000".U)(PC_LEN.W))          //为什么不能用PC_START 
    val next_pc = MuxCase(
        pc,
        Seq(
            (started === 1.B) -> (pc+4.U),
            (io.fcfe.flush === 1.B && io.fcfe.jump_flag === 1.B) -> (io.fcfe.jump_pc+4.U)
        )
    )
    pc := Mux(io.fcfe.stall, pc, next_pc)

    io.fdio.pc := MuxCase(
        pc,
        Seq(
            (io.fcfe.flush === 1.B && io.fcfe.jump_flag === 1.B) -> io.fcfe.jump_pc    
        )
    )

    io.pc.bits := MuxCase(
        pc,
        Seq(
            (io.fcfe.flush === 1.B && io.fcfe.jump_flag === 1.B) -> io.fcfe.jump_pc    //直接变寻址地址
        )
    )
    io.pc.valid := Mux(io.fcfe.stall, 0.B, started)
}
