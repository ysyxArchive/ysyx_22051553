import chisel3._
import chisel3.util._

// ps_clk是由ps从设备驱动的，严格而言不算是周期性的时钟信号，所以使用Bool类型，当作控制信号
// 该scala程序描述的是主接口协议
// ps_data是rt类型，不是由仿真程序控制，而是由实时外部按键控制

object Button{                         //注意断碼f0
    val a = "h1C".U(8.W)
    val b = "h32".U(8.W)
    val c = "h21".U(8.W)
    val d = "h23".U(8.W)
    val e = "h24".U(8.W)
    val f = "h2B".U(8.W)
    val g = "h34".U(8.W)
    val h = "h33".U(8.W)
    val i = "h43".U(8.W)
    val j = "h3B".U(8.W)
    val k = "h42".U(8.W)
    val l = "h4B".U(8.W)
    val m = "h3A".U(8.W)
    val n = "h31".U(8.W)
    val o = "h44".U(8.W)
    val p = "h4D".U(8.W)
    val q = "h15".U(8.W)
    val r = "h2D".U(8.W)
    val s = "h1B".U(8.W)
    val t = "h2C".U(8.W)
    val u = "h3C".U(8.W)
    val v = "h2A".U(8.W)
    val w = "h1D".U(8.W)
    val x = "h22".U(8.W)
    val y = "h35".U(8.W)
    val z = "h1A".U(8.W)

    val tap  = "hf0".U(8.W)
    val none = "hff".U(8.W)
    //---
    
}


class ButtonIO extends Bundle{
    val ps2_clk         = Input(Bool())
    val ps2_data        = Input(Bool())
    val button_out      = Output(UInt(8.W))  
}



class Button extends Module{
    
    val io              =   IO(new ButtonIO)

    val buffer          =   RegInit(0.U(10.W))  //
    val count           =   RegInit(0.U(4.W))    //count是UInt类型，同时具有了一些性质，如被时钟驱动
    val ps2_clk_sync    =   RegInit(0.U(3.W))    //意思是，创建了一个寄存器，同时其中各位数据视为无符号


    val sampling        =   Mux(ps2_clk_sync(2) & ~ps2_clk_sync(1), true.B, false.B)

    val bufferVec       =   VecInit(buffer.asBools)   //用于修改单个位
                                                        //那么使用或不用Wire,和Vec有什么区别呢
    bufferVec(count) := io.ps2_data.asBool
    
    
    ps2_clk_sync := Cat(ps2_clk_sync(1,0), io.ps2_clk)


    io.button_out := Button.none

    when(sampling === true.B){   //时序逻辑不需要写完整
        when(count === 10.U){
            when(
                buffer(0) === 0.U //start
                && io.ps2_data     //stop
                && (buffer(9,1).xorR) //odd    //R应该是指类似Reduce方法
            ){
                io.button_out := 
                    MuxCase(
                        Button.none,   //重要 若为0,则与ADD混淆
                        Seq(
                            // (buffer(8,1) === "0x11".U) -> ALU_ADD        注意从左到右的优先级  
                            (buffer(8,1) === Button.a) -> Button.a,
                            (buffer(8,1) === Button.b) -> Button.b,
                            (buffer(8,1) === Button.c) -> Button.c,
                            (buffer(8,1) === Button.d) -> Button.d,
                            (buffer(8,1) === Button.e) -> Button.e,
                            (buffer(8,1) === Button.f) -> Button.f,
                            (buffer(8,1) === Button.g) -> Button.g,
                            (buffer(8,1) === Button.h) -> Button.h,
                            (buffer(8,1) === Button.i) -> Button.i,
                            (buffer(8,1) === Button.j) -> Button.j,
                            (buffer(8,1) === Button.k) -> Button.k,
                            (buffer(8,1) === Button.l) -> Button.l,
                            (buffer(8,1) === Button.m) -> Button.m,
                            (buffer(8,1) === Button.n) -> Button.n,
                            (buffer(8,1) === Button.o) -> Button.o,
                            (buffer(8,1) === Button.p) -> Button.p,
                            (buffer(8,1) === Button.q) -> Button.q,
                            (buffer(8,1) === Button.r) -> Button.r,
                            (buffer(8,1) === Button.s) -> Button.s,
                            (buffer(8,1) === Button.t) -> Button.t,
                            (buffer(8,1) === Button.u) -> Button.u,
                            (buffer(8,1) === Button.v) -> Button.v,
                            (buffer(8,1) === Button.w) -> Button.w,
                            (buffer(8,1) === Button.x) -> Button.x,
                            (buffer(8,1) === Button.y) -> Button.y,
                            (buffer(8,1) === Button.z) -> Button.z,

                            (buffer(8,1) === Button.tap) -> Button.tap,
                            (buffer(8,1) === Button.none) -> Button.none
                        )
                    )
            }
        
            count := 0.U

        }.otherwise {
            // bufferNext(count) := io.ps2_data                   //左值可以是 A(n)的形式吗
            buffer := bufferVec.asUInt

            count := count + 1.U
        }
    }



  
}
