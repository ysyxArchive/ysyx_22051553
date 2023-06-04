import chisel3._
import chisel3.util._

// ps_clk是由ps从设备驱动的，严格而言不算是周期性的时钟信号，所以使用Bool类型，当作控制信号
// 该scala程序描述的是主接口协议

object Button{
    val a = "0x1C".U(8.W)
    val b = "0x32".U(8.W)
    val c = "0x21".U(8.W)
    val d = "0x23".U(8.W)
    val e = "0x24".U(8.W)
    val f = "0x2B".U(8.W)
    val g = "0x34".U(8.W)
    val h = "0x33".U(8.W)
    //---
    
}


class ButtonIO extends Bundle{
    val ps2_clk         = Input(Bool())
    val ps2_data        = Input(Bool())
    val button_out      = Output(UInt(3.W))  
}

import Alu._

class Button extends Module{
    
    val io              =   IO(new ButtonIO)

    val buffer          =   RegInit(0.U(10.W))  //
    val count           =   RegInit(0.U(4.W))    //count是UInt类型，同时具有了一些性质，如被时钟驱动
    val ps2_clk_sync    =   RegInit(0.U(3.W))    //意思是，创建了一个寄存器，同时其中各位数据视为无符号


    val sampling        =   Mux(ps2_clk_sync(2) & ~ps2_clk_sync(1), true.B, false.B)

    ps2_clk_sync := Cat(ps2_clk_sync(1,0), io.ps2_clk)


    io.button_out := 0.U(3.W)

    when(sampling === true.B){   //时序逻辑不需要写完整
        when(count === 10.U){
            
        
            count := 0.U

        }.otherwise {
            buffer(count) := io.ps2_data
            count := count + 1.U
        }
    }



  
}
