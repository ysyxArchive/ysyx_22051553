package rv64

import chisel3._
import chisel3.util._

import Define._
import firrtl.Flow

object FlowControl{

    val StallY = 1.B
    val StallN = 0.B

    val FlushY = 1.B                  //Flush DE意味着取消周期DE的运算结果，即抛弃DE部件中的指令
    val FlushN = 0.B              

    val default = 
        VecInit(StallN, StallN, StallN, StallN, StallN,       
            FlushN, FlushN, FlushN, FlushN, FlushN)
    
    val JUMP_SFBundle = 
        VecInit(StallN, StallN, StallN, StallN, StallN,       
            FlushY, FlushN, FlushN, FlushN, FlushN)     

    val BRANCH_SFBundle = 
        VecInit(StallN, StallN, StallN, StallN, StallN,       
            FlushY, FlushY, FlushN, FlushN, FlushN)     //Fe的FlushY才能跳转

}

class FcFeIO extends Bundle{
    val jump_flag = Output(Bool())
    val jump_pc   = Output(UInt(PC_LEN.W))

    val flush     = Output(Bool())
    val stall     = Output(Bool())
}

class FcDeIO extends Bundle{
    val jump_flag = Input(Bool())            //from De
    val jump_pc   = Input(UInt(PC_LEN.W))

    val flush     = Output(Bool())       //通往流水线寄存器
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
            
            (io.fcde.jump_flag === 1.B) -> FlowControl.JUMP_SFBundle,
            
        )
    )



    io.fcfe.stall := SFBundle(0)
    io.fcfe.flush := SFBundle(5)
    io.fcfe.jump_pc := MuxCase(
        "h80000000".U,
        Seq(
            io.fcex.jump_flag -> io.fcex.jump_pc,  //ex优先
            io.fcde.jump_flag -> io.fcde.jump_pc
        )
    )
    io.fcfe.jump_flag := io.fcde.jump_flag || io.fcex.jump_flag

    io.fcde.stall := SFBundle(1)
    io.fcde.flush := SFBundle(6)

    io.fcex.stall := SFBundle(2)
    io.fcex.flush := SFBundle(7)

    io.fcmem.stall := SFBundle(3)
    io.fcmem.flush := SFBundle(8)

    io.fcwb.stall := SFBundle(4)
    io.fcwb.flush := SFBundle(9)
}
