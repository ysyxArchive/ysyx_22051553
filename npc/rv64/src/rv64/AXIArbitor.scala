package rv64

import chisel3._
import chisel3.util._

import Define._


class AXIMasterReq extends Bundle{
    val rw = Bool()  //0w-1r
    val addr = UInt(ADDRWIDTH.W)
    val data = UInt(X_LEN.W)
    val mask = UInt((X_LEN/8).W)
}

class AXIMasterResp extends Bundle{
    val data = UInt(X_LEN.W)
}

class AXIMasterIO extends Bundle{
    val req = Flipped(ValidIO(new AXIMasterReq))
    val resp = ValidIO(new AXIMasterResp)
}


class AXIArbIO extends Bundle{
    val master0 = new AXIMasterIO
    val master1 = new AXIMasterIO
    val master2 = new AXIMasterIO

    val AXI_O = new AXILiteMasterIf
}

object AXIArbState{
    val s_Idle :: s_W :: s_AR :: s_R :: Nil = Enum(4)
}

import AXIArbState._

class AXIArbitor extends Module{
    val io = IO(new AXIArbIO)

    //仲裁master  --组合逻辑
    //1??? 表示有申请
    //1001 表示master0申请
    //1010 表示master1申请
    //1100 表示master2申请

    val master_choose = WireInit(0.U(4.W))  //两位，10代表master0申请访问，11代表master1申请访问，0?代表无访问
    master_choose := MuxCase(
        "b0000".U,
        Seq(
            (io.master0.req.valid) -> "b1001".U,
            (io.master1.req.valid) -> "b1010".U,
            (io.master2.req.valid) -> "b1100".U,
        )
    )
    val choose_buffer = RegInit(0.U(4.W))

    val rw = WireInit(0.B)
    val addr = WireInit(0.U(ADDRWIDTH.W))
    val data = WireInit(0.U(X_LEN.W))
    val mask = WireInit(0.U((X_LEN/8).W))

    rw := Mux(master_choose(3), 
        MuxCase(
            0.B,
            Seq(
                master_choose(0) -> io.master0.req.bits.rw,
                master_choose(1) -> io.master1.req.bits.rw,
                master_choose(2) -> io.master2.req.bits.rw,
            )
        )
    ,0.B)

    addr := Mux(master_choose(3), 
        MuxCase(
            0.B,
            Seq(
                master_choose(0) -> io.master0.req.bits.addr,
                master_choose(1) -> io.master1.req.bits.addr,
                master_choose(2) -> io.master2.req.bits.addr,
            )
        )
    ,0.B)

    data := Mux(master_choose(3), 
        MuxCase(
            0.B,
            Seq(
                master_choose(0) -> io.master0.req.bits.data,
                master_choose(1) -> io.master1.req.bits.data,
                master_choose(2) -> io.master2.req.bits.data,
            )
        )
    ,0.B)

    mask := Mux(master_choose(3), 
        MuxCase(
            0.B,
            Seq(
                master_choose(0) -> io.master0.req.bits.mask,
                master_choose(1) -> io.master1.req.bits.mask,
                master_choose(2) -> io.master2.req.bits.mask,
            )
        )
    ,0.B)

    //总线相关
    val state = RegInit(s_Idle)

    val aw_comp = RegInit(0.B)
    val w_comp = RegInit(0.B)
    // val b_comp = RegInit(0.B)
    val b_comp = Wire(0.B)  //不耽误周期

    // val ar_comp = RegInit(0.B)
    // val r_comp = RegInit(0.B)
    val ar_comp = WireInit(0.B)
    val r_comp = WireInit(0.B)

    b_comp := 0.B
    ar_comp := 0.B
    r_comp := 0.B

    io.master0.resp.valid := 0.B
    io.master0.resp.bits.data := 0.U
    io.master1.resp.valid := 0.B
    io.master1.resp.bits.data := 0.U
    io.master2.resp.valid := 0.B
    io.master2.resp.bits.data := 0.U

    io.AXI_O.aw.valid := 0.B
    io.AXI_O.aw.bits.addr := 0.U
    io.AXI_O.aw.bits.prot := 0.U   //默认为0

    io.AXI_O.w.valid := 0.B
    io.AXI_O.w.bits.data := 0.U
    io.AXI_O.w.bits.strb := 0.U

    io.AXI_O.b.ready := 1.U //常为高

    io.AXI_O.ar.valid := 0.B
    io.AXI_O.ar.bits.addr := 0.U
    io.AXI_O.ar.bits.prot := 0.U   //默认为0

    io.AXI_O.r.ready := 0.U



    switch(state){ //并不符合状态机，状态机中，左边都是reg类型
        is(s_Idle){
            choose_buffer := 0.U

            when(master_choose(3)){
                choose_buffer := master_choose

                when(rw){ //1-r
                    state := s_AR
                }.otherwise{ //0-w
                    state := s_W
                }
            }
        }
        is(s_W){
            //aw channel
            io.AXI_O.aw.valid := Mux(aw_comp, 0.B, 1.B)
            io.AXI_O.aw.bits.addr := addr
            io.AXI_O.aw.bits.prot := 0.U   //默认为0
            aw_comp := Mux(io.AXI_O.aw.valid && io.AXI_O.aw.ready, 1.B, aw_comp)

            //w_channel
            io.AXI_O.w.valid := Mux(w_comp, 0.B, 1.B)
            io.AXI_O.w.bits.data := data
            io.AXI_O.w.bits.strb := mask //对于Cache而言，需要全写
            w_comp := Mux(io.AXI_O.w.valid && io.AXI_O.w.ready, 1.B, w_comp)

            //b_channel
            io.AXI_O.b.ready := 1.B //常为高
            b_comp := Mux(io.AXI_O.b.valid && io.AXI_O.b.ready, 1.B, 0.B)

            when(aw_comp && w_comp && b_comp){ //b应该在aw和w之后判断，但是b常为高，就没有必要
                state := s_Idle
                aw_comp := 0.B
                w_comp := 0.B

                when(choose_buffer(0)){ //选择的master0
                    io.master0.resp.valid := 1.B
                }.elsewhen(choose_buffer(1)){
                    io.master1.resp.valid := 1.B
                }.otherwise{
                    io.master2.resp.valid := 1.B
                }
            }
        }
        is(s_AR){
            //ar_channel
            io.AXI_O.ar.valid := Mux(ar_comp, 0.B, 1.B)
            io.AXI_O.ar.bits.addr := addr
            io.AXI_O.ar.bits.prot := 0.U   //默认为0
            ar_comp := Mux(io.AXI_O.ar.valid && io.AXI_O.ar.ready, 1.B, 0.B)  //常态保持不变

            when(ar_comp){
                state := s_R
            }
        }
        is(s_R){
            io.AXI_O.r.ready := Mux(r_comp, 0.B, 1.B)
            r_comp := Mux(io.AXI_O.r.valid && io.AXI_O.r.ready, 1.B, 0.B)
            when(r_comp){
                state := s_Idle

                when(choose_buffer(0)){ //选择的master0
                    io.master0.resp.valid := 1.B
                    io.master0.resp.bits.data := io.AXI_O.r.bits.data
                }.elsewhen(choose_buffer(1)){
                    io.master1.resp.valid := 1.B
                    io.master1.resp.bits.data := io.AXI_O.r.bits.data
                }.otherwise{
                    io.master2.resp.valid := 1.B
                    io.master2.resp.bits.data := io.AXI_O.r.bits.data
                }
            }
        }
    }


    
    
  
}
