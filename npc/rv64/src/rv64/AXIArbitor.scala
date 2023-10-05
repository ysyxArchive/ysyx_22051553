package rv64

import chisel3._
import chisel3.util._

import Define._


class AXIMasterReq extends Bundle{
    val rw = Bool()  //0w-1r
    val addr = UInt(ADDRWIDTH.W)
    val data = UInt((16*X_LEN).W)
    val mask = UInt((X_LEN/8).W) //主要针对IO操作
}

class AXIMasterResp extends Bundle{
    val data = UInt((16*X_LEN).W)
}

class AXIMasterIO extends Bundle{
    val req = Flipped(ValidIO(new AXIMasterReq))
    val resp = ValidIO(new AXIMasterResp)
}


class AXIArbIO extends Bundle{
    val master0 = new AXIMasterIO
    val master1 = new AXIMasterIO
    val master2 = new AXIMasterIO

    val AXI_O = new AXIMasterIf
}

object AXIArbState{
    val s_Idle :: s_W :: s_AR :: s_R :: Nil = Enum(4) //R有两个状态 因为R只能在AR后面
}

import AXIArbState._

class AXIArbitor extends Module{
    val io = IO(new AXIArbIO)

    //仲裁master  --组合逻辑
    //1??? 表示有申请
    //1001 表示master0申请  ---外设,只读取8byte,burst为1
    //1010 表示master1申请
    //1100 表示master2申请

    val master_choose = WireInit(0.U(4.W))  //两位，10代表master0申请访问，11代表master1申请访问，0?代表无访问
    dontTouch(master_choose)
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
    val rw_idle = WireInit(0.B)
    val addr = WireInit(0.U(ADDRWIDTH.W))
    val data = WireInit(0.U((16*X_LEN).W))
    val mask = RegInit(0.U((X_LEN/8).W))
    val burst_len = WireInit(0.U(4.W))


    rw_idle := Mux(master_choose(3), 
        MuxCase(
            0.B,
            Seq(
                master_choose(0) -> io.master0.req.bits.rw,
                master_choose(1) -> io.master1.req.bits.rw,
                master_choose(2) -> io.master2.req.bits.rw,
            )
        )
    ,0.B)


    rw := Mux(choose_buffer(3), 
        MuxCase(
            0.B,
            Seq(
                choose_buffer(0) -> io.master0.req.bits.rw,
                choose_buffer(1) -> io.master1.req.bits.rw,
                choose_buffer(2) -> io.master2.req.bits.rw,
            )
        )
    ,0.B)

    addr := Mux(choose_buffer(3), 
        MuxCase(
            0.B,
            Seq(
                choose_buffer(0) -> io.master0.req.bits.addr,
                choose_buffer(1) -> io.master1.req.bits.addr,
                choose_buffer(2) -> io.master2.req.bits.addr,
            )
        )
    ,0.B)

    data := Mux(choose_buffer(3), 
        MuxCase(
            0.B,
            Seq(
                choose_buffer(0) -> io.master0.req.bits.data,
                choose_buffer(1) -> io.master1.req.bits.data,
                choose_buffer(2) -> io.master2.req.bits.data,
            )
        )
    ,0.B)

    mask := Mux(choose_buffer(3), 
        MuxCase(
            0.B,
            Seq(
                choose_buffer(0) -> io.master0.req.bits.mask,
                choose_buffer(1) -> io.master1.req.bits.mask,
                choose_buffer(2) -> io.master2.req.bits.mask,
            )
        )
    ,0.B)

    burst_len := Mux(choose_buffer(3), 
        MuxCase(
            0.B,
            Seq(
                choose_buffer(0) -> 0.U,
                choose_buffer(1) -> 15.U,
                choose_buffer(2) -> 15.U,
            )
        )
    ,0.B)

    //总线相关
    val state = RegInit(s_Idle)

    
    val aw_comp = RegInit(0.B)
    val w_comp = RegInit(0.B)
    val b_comp = WireInit(0.B)  //不耽误周期
    val w_count = RegInit(0.U(4.W))
    val dataVec = VecInit(Seq.fill(16)(0.U(X_LEN.W)))

    val ar_comp = WireInit(0.B)
    val r_comp = WireInit(0.B)
    val r_buffer = RegInit(0.U((16*X_LEN).W))

    b_comp := 0.B
    ar_comp := 0.B
    r_comp := 0.B

    io.master0.resp.valid := 0.B
    io.master0.resp.bits.data := 0.U
    io.master1.resp.valid := 0.B
    io.master1.resp.bits.data := 0.U
    io.master2.resp.valid := 0.B
    io.master2.resp.bits.data := 0.U

    //--------aw
    io.AXI_O.aw.bits.id := 0.U  //固定
    io.AXI_O.aw.bits.addr := 0.U
    io.AXI_O.aw.bits.len := 0.U
    io.AXI_O.aw.bits.size := 3.U //固定--8bytes
    io.AXI_O.aw.bits.burst := 1.U //固定 --incr
    io.AXI_O.aw.bits.lock := 0.U //固定 --0
    io.AXI_O.aw.bits.cache := 2.U //固定 --2
    io.AXI_O.aw.bits.prot := 0.U   //固定 --0

    io.AXI_O.aw.valid := 0.B
    
    //----------w
    io.AXI_O.w.bits.data := 0.U
    io.AXI_O.w.bits.strb := 0.U //固定
    io.AXI_O.w.bits.last := 0.B

    io.AXI_O.w.valid := 0.B

    //----------b
    io.AXI_O.b.ready := 1.U //常为高

    //-----------ar
    io.AXI_O.ar.bits.id := 0.U  //固定
    io.AXI_O.ar.bits.addr := 0.U
    io.AXI_O.ar.bits.len := 0.U
    io.AXI_O.ar.bits.size := 3.U //固定--8bytes
    io.AXI_O.ar.bits.burst := 1.U //固定 --incr
    io.AXI_O.ar.bits.lock := 0.U //固定 --0
    io.AXI_O.ar.bits.cache := 2.U //固定 --2
    io.AXI_O.ar.bits.prot := 0.U   //固定 --0

    io.AXI_O.ar.valid := 0.B

    //--------------r
    io.AXI_O.r.ready := 1.U  //减少延迟



    switch(state){ //并不符合状态机，状态机中，左边都是reg类型
        is(s_Idle){
            choose_buffer := 0.U

            when(master_choose(3)){
                choose_buffer := master_choose

                when(rw_idle){ //1-r
                    state := s_AR
                }.otherwise{ //0-w
                    state := s_W
                }
            }
        }
        is(s_W){
            //aw channel
            io.AXI_O.aw.bits.addr := addr
            io.AXI_O.aw.bits.len := burst_len  //长度为len+1
            io.AXI_O.aw.valid := Mux(aw_comp, 0.B, 1.B)
            aw_comp := Mux(io.AXI_O.aw.valid && io.AXI_O.aw.ready, 1.B, aw_comp)

            //w_channel
            (0 until 16).map(i => dataVec(i) := data(64*i+63, 64*i))  //可行吗
            io.AXI_O.w.bits.data := dataVec(w_count)
            io.AXI_O.w.bits.strb := mask
            io.AXI_O.w.bits.last := Mux(burst_len === w_count, 1.B, 0.B)  
            io.AXI_O.w.valid := Mux(w_comp, 0.B, 1.B)
            w_comp := Mux(io.AXI_O.w.valid && io.AXI_O.w.ready && io.AXI_O.w.bits.last, 1.B, w_comp)

            w_count := w_count + 1.U

            //b_channel
            b_comp := Mux(io.AXI_O.b.valid && io.AXI_O.b.ready, 1.B, 0.B)

            when(aw_comp && w_comp && b_comp){ //b应该在aw和w之后判断，但是b常为高，就没有必要
                state := s_Idle
                aw_comp := 0.B
                w_comp := 0.B
                w_count := 0.U

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
            io.AXI_O.ar.valid := 1.B
            io.AXI_O.ar.bits.addr := addr
            io.AXI_O.ar.bits.len := burst_len  //长度为len+1
            ar_comp := Mux(io.AXI_O.ar.valid && io.AXI_O.ar.ready, 1.B, 0.B)  //常态保持不变

            when(ar_comp){
                state := s_R
            }
        }
        is(s_R){
            io.AXI_O.r.ready := 1.B
            when(io.AXI_O.r.valid && io.AXI_O.r.ready){
                r_buffer := Cat(r_buffer(959,0), io.AXI_O.r.bits.data)
            }
            
            r_comp := Mux(io.AXI_O.r.valid && io.AXI_O.r.ready && io.AXI_O.r.bits.last, 1.B, 0.B)
            when(r_comp){
                state := s_Idle

                when(choose_buffer(0)){ //选择的master0
                    io.master0.resp.valid := 1.B
                    io.master0.resp.bits.data := Cat(r_buffer(959,0), io.AXI_O.r.bits.data)
                }.elsewhen(choose_buffer(1)){
                    io.master1.resp.valid := 1.B
                    io.master1.resp.bits.data := Cat(r_buffer(959,0), io.AXI_O.r.bits.data)
                }.otherwise{
                    io.master2.resp.valid := 1.B
                    io.master2.resp.bits.data := Cat(r_buffer(959,0), io.AXI_O.r.bits.data)
                }
            }
        }
    }


    
    
  
}
