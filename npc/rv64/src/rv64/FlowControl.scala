package rv64

import chisel3._
import chisel3.util._

import Define._
import firrtl.Flow

object FlowControl{

    val StallY = 1.B
    val StallN = 0.B

    val FlushY = 1.B                  //Flush意味着下一周期Ex模块不从DE流水线寄存器中获取任何有效数据
    val FlushN = 0.B              

    val default = 
        VecInit(StallN, StallN, StallN, StallN, StallN,       
            FlushN, FlushN, FlushN, FlushN, FlushN)
    
    val JAL_SFBundle = 
        VecInit(StallN, StallN, StallN, StallN, StallN,       
            FlushN, FlushN, FlushN, FlushN, FlushN)     

}

class FcFeIO extends Bundle{
    val jump_flag = Output(Bool())
    val jump_pc   = Output(UInt(PC_LEN.W))

    val flush     = Output(Bool())
    val stall     = Output(Bool())
}

class FcDeIO extends Bundle{
    val jump_flag = Input(Bool())
    val jump_pc   = Input(UInt(PC_LEN.W))

    val flush     = Output(Bool())
    val stall     = Output(Bool())
}

class FcExIO extends Bundle{
    val jump_flag = Input(Bool())
    val jump_pc   = Input(UInt(PC_LEN.W))

    val flush     = Output(Bool())
    val stall     = Output(Bool())
}

class FcMemIO extends Bundle{
    val flush     = Output(Bool())
    val stall     = Output(Bool())
}

class FcWbIO extends Bundle{
    val flush     = Output(Bool())
    val stall     = Output(Bool())
}

class FCIO extends Bundle{
    val fcfe = new FcFeIO
    val fcde = new FcDeIO //FcDeIO已经有方向了
    val fcex = new FcExIO
    val fcmem = new FcMemIO
    val fcwb = new FcWbIO
    
}

class FlowControl extends Module{
    val io = IO(new FCIO)

    val SFBundle = MuxCase(FlowControl.default,
        Seq(
            (io.fcde.jump_flag === 1.B) -> FlowControl.JAL_SFBundle
        )
    )



    io.fcfe.stall := DontCare
    io.fcfe.flush := SFBundle(5)
    io.fcfe.jump_pc := io.fcde.jump_pc
    io.fcfe.jump_flag := io.fcde.jump_flag

    io.fcde.stall := DontCare
    io.fcde.flush := DontCare

    io.fcex.stall := DontCare
    io.fcex.flush := DontCare

    io.fcmem.stall := DontCare
    io.fcmem.flush := DontCare

    io.fcwb.stall := DontCare
    io.fcwb.flush := DontCare
}
