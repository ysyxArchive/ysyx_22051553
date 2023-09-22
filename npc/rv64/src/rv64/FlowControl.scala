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
            FlushY, FlushY, FlushN, FlushN, FlushN)     //Fe需要FlushY才能跳转，branch成立，需要使当前decode指令无效
    
    val LoadUse_SFBundle = 
        VecInit(StallY, StallN, StallN, StallN, StallN,     //fetch再一次申请相同指令
            FlushN, FlushY, FlushN, FlushN, FlushN)        //load_use的use指令应该flush掉，否则如果是要写寄存器，该指令仍然会写
    
    val TrapWait_SFBundle = 
        VecInit(StallY, StallN, StallN, StallN, StallN,     
            FlushN, FlushY, FlushN, FlushN, FlushN)     

    val TrapJump_SFBundle = 
        VecInit(StallN, StallN, StallN, StallN, StallN,     
            FlushY, FlushY, FlushN, FlushN, FlushN)    //需要清除decode中的指令,例如jal
    
    val Icache_SFBundle = 
        VecInit(StallY, StallY, StallY, StallY, StallY,     
            FlushN, FlushN, FlushN, FlushN, FlushN)   
  
    val Dcache_SFBundle = 
        VecInit(StallY, StallY, StallY, StallY, StallY,     
            FlushN, FlushN, FlushN, FlushN, FlushN) 
    
    val IOAXI_SFBundle = 
        VecInit(StallY, StallY, StallY, StallY, StallY,     
            FlushN, FlushN, FlushN, FlushN, FlushN)   //不能Flush Decode段，因为需要一直申请AXI

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
    val load_use  = Input(Bool())

    val flush     = Output(Bool())       //通往流水线寄存器 fede
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

class FcCacheIO extends Bundle{
    val req = Bool() //判断cpu是否提出申请
    val state = UInt(3.W)
    val mask = UInt((X_LEN/8).W) //判断是否为读
    val hit = Bool()  //如果为读，且为hit,则无需阻塞
    val cpu_valid = Bool() //当读出、写入，valid信号有效时，取消阻塞
    val axi_valid = Bool() //用于提前释放
}




class FCIO extends Bundle{
    val fcfe = new FcFeIO
    val fcde = new FcDeIO //FcDeIO已经有方向了
    val fcex = new FcExIO
    val fcmem = new FcMemIO
    val fcwb = new FcWbIO

    val fctr = Flipped(new FcTrIO)

    val fcIcache = Input(new FcCacheIO)
    val fcDcache = Input(new FcCacheIO)
    val fcio = Flipped(new IOfc)

    val sdb_stall = Output(Bool())
}
import TrIO._

class FlowControl extends Module{
    val io = IO(new FCIO)

    val Icache_stall = WireInit(0.B)
    val Dcache_stall = WireInit(0.B)
    val IO_stall = WireInit(0.B)
    dontTouch(Icache_stall)
    dontTouch(Dcache_stall)
    dontTouch(IO_stall)

    when(io.fcIcache.cpu_valid){ //恢复
        Icache_stall := 0.B
    }.elsewhen(io.fcIcache.state === CacheState.s_hitWrite){ //写命中提前释放
        Icache_stall := 0.B
    }.elsewhen(io.fcIcache.state === CacheState.s_WriteAllocate && io.fcIcache.axi_valid){ //写分配提前释放
        Icache_stall := 0.B
    // }.elsewhen(io.fcIcache.state === CacheState.s_ReadAck && io.fcIcache.axi_valid){ //读提前释放
    //     Icache_stall := 0.B
    }.elsewhen(io.fcIcache.state =/= 0.U){
        Icache_stall := 1.B
    }.elsewhen(io.fcIcache.state === 0.U && io.fcIcache.req && io.fcIcache.mask.orR){ //写，一定需要stall
        Icache_stall := 1.B
    }.elsewhen(io.fcIcache.state === 0.U && io.fcIcache.req && !io.fcIcache.mask.orR && !io.fcDcache.hit){ //读，且没有命中，一定需要stall
        Icache_stall := 1.B
    }.otherwise{
        Icache_stall := 0.B
    }


    
    when(io.fcDcache.state === CacheState.s_hitWrite){ //写命中提前一周期释放
        Dcache_stall := 0.B
    }.elsewhen(io.fcDcache.state === CacheState.s_WriteAllocate && io.fcDcache.axi_valid){ //写分配提前释放
        Dcache_stall := 0.B
    }.elsewhen(io.fcDcache.state === CacheState.s_ReadAck && io.fcDcache.axi_valid){ //读提前释放
        Dcache_stall := 0.B
    }.elsewhen(io.fcDcache.state =/= 0.U){
        Dcache_stall := 1.B
    }.elsewhen(io.fcDcache.state === 0.U && io.fcDcache.req && io.fcDcache.mask.orR){ //写，一定需要stall
        Dcache_stall := 1.B
    }.elsewhen(io.fcDcache.state === 0.U && io.fcDcache.req && !io.fcDcache.mask.orR && !io.fcDcache.hit){ //读，且没有命中，一定需要stall
        Dcache_stall := 1.B
    }.elsewhen(io.fcDcache.cpu_valid){ //恢复  优先级低于上面
        Dcache_stall := 0.B
    }
    .otherwise{
        Dcache_stall := 0.B
    }

    
    when(io.fcio.req && io.fcio.state === IoforMem.s_Idle){
        IO_stall := 1.B
    }.elsewhen(io.fcio.state === IoforMem.s_req){
        IO_stall := 1.B
    }.elsewhen(io.fcio.stall === IoforMem.s_wait){
        IO_stall := 0.B
    }.otherwise{
        IO_stall := 0.B
    }

    val SFBundle = MuxCase(FlowControl.default,
        Seq(
            IO_stall -> FlowControl.IOAXI_SFBundle,
            Icache_stall -> FlowControl.Icache_SFBundle,
            Dcache_stall -> FlowControl.Dcache_SFBundle, //优先级高于load_use
            (io.fcde.load_use === 1.B) -> FlowControl.LoadUse_SFBundle,
            (io.fctr.trap_state === s_MSTATUS || io.fctr.trap_state  === s_MRET) -> FlowControl.TrapJump_SFBundle,
            (io.fctr.pop_NOP === 1.B || io.fctr.trap_state === s_WAIT || io.fctr.trap_state === s_MEPC
             || io.fctr.trap_state === s_MCAUSE || io.fctr.trap_state === s_MRET_WAIT || io.fctr.trap_state === s_CLRMIP)
                -> FlowControl.TrapWait_SFBundle,
            (io.fctr.jump_flag === 1.B) -> FlowControl.JUMP_SFBundle,
            (io.fcex.jump_flag === 1.B) -> FlowControl.BRANCH_SFBundle,
            (io.fcde.jump_flag === 1.B) -> FlowControl.JUMP_SFBundle,
        )
    )

    

    io.fcfe.stall := SFBundle(0)
    io.fcfe.flush := SFBundle(5)
    io.fcfe.jump_pc := MuxCase(
        "h80000000".U,
        Seq(
            io.fctr.jump_flag -> io.fctr.jump_pc,
            io.fcex.jump_flag -> io.fcex.jump_pc,  //ex优先于de
            io.fcde.jump_flag -> io.fcde.jump_pc
        )
    )
    io.fcfe.jump_flag := io.fcde.jump_flag || io.fcex.jump_flag || io.fctr.jump_flag

    io.fcde.stall := SFBundle(1)
    io.fcde.flush := SFBundle(6)

    io.fcex.stall := SFBundle(2)
    io.fcex.flush := SFBundle(7)

    io.fcmem.stall := SFBundle(3)
    io.fcmem.flush := SFBundle(8)

    io.fcwb.stall := SFBundle(4)
    io.fcwb.flush := SFBundle(9)

    io.sdb_stall := io.fcfe.stall & io.fcde.stall & io.fcex.stall & io.fcwb.stall

    io.fcio.stall := io.fcex.stall



}
