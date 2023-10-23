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

    val next_pc = Output(UInt(PC_LEN.W))
}


class Fetch extends Module{

    val io = IO(new FetchIO)

    val started = RegInit(false.B)        
    started := true.B

    val pc = RegInit(("h80000000".U)(PC_LEN.W))          //为什么不能用PC_START 
    val old_pc = RegInit(0.U(PC_LEN.W))

    val next_pc = MuxCase(
        pc,
        Seq(
            // (started === 1.B) -> (pc+4.U),
            // (io.fcfe.flush === 1.B && io.fcfe.jump_flag === 1.B) -> (io.fcfe.jump_pc+4.U)
            (io.fcfe.flush === 1.B && io.fcfe.jump_flag === 1.B) -> (io.fcfe.jump_pc+4.U),
            (started === 1.B) -> (pc+4.U),
        )
    )
    io.next_pc := next_pc
    
    // pc := Mux(io.fcfe.stall, pc, next_pc)
    pc := Mux(io.fcfe.stall, old_pc, next_pc)  //修改后
    //----for load_use -> 取指阶段需要再一次的use指令,需要给出use的pc
    old_pc := Mux(started, io.fdio.pc, 0.U) //不应该跟pc


    io.fdio.pc := MuxCase(
        pc,
        Seq(
            
            (io.fcfe.stall) -> old_pc,
            (io.fcfe.flush === 1.B && io.fcfe.jump_flag === 1.B) -> io.fcfe.jump_pc, //优先级高于3    
            (pc === old_pc) -> next_pc,  //从stall恢复后，fdio.pc立即增长
            
        )
    )

 

    io.pc.bits := MuxCase(
        pc,
        Seq(
            (io.fcfe.stall) -> old_pc,
            (io.fcfe.flush === 1.B && io.fcfe.jump_flag === 1.B) -> io.fcfe.jump_pc,    //直接变寻址地址
            (pc === old_pc) -> next_pc,
        )
    )
    
    // io.pc.valid := Mux(io.fcfe.stall, 0.B, started)
    io.pc.valid := Mux(started, 1.B, 0.B) //可以始终为1？
}
