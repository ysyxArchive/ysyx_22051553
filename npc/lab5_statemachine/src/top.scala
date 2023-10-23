import chisel3._
import chisel3.util._

class top extends Module{              
    val io = IO(new Bundle {
        val ps2_clk         =   Input(Bool())
        val ps2_data        =   Input(Bool())

        val seg5            =   Output(UInt(7.W))
        val seg4            =   Output(UInt(7.W))
        val seg3            =   Output(UInt(7.W))
        val seg2            =   Output(UInt(7.W))
        val seg1            =   Output(UInt(7.W))
        val seg0            =   Output(UInt(7.W))
    })



    val Button = Module(new Button)
    Button.io.ps2_clk := io.ps2_clk
    Button.io.ps2_data := io.ps2_data
    
    
    val ButtonControl = Module(new ButtonControl)
    ButtonControl.io.validButton := Button.io.button_out
    

    val Seg = Module(new Seg)
    Seg.io.blank := ButtonControl.io.blank
    Seg.io.dataIn(0) := ButtonControl.io.code(3,0)
    Seg.io.dataIn(1) := ButtonControl.io.code(7,4)
    Seg.io.dataIn(2) := ButtonControl.io.ASCIIO(3,0)
    Seg.io.dataIn(3) := ButtonControl.io.ASCIIO(7,4)
    Seg.io.dataIn(4) := ButtonControl.io.count(3,0)
    Seg.io.dataIn(5) := ButtonControl.io.count(7,4)



    io.seg5 := Seg.io.encodeOut(5)
    io.seg4 := Seg.io.encodeOut(4)
    io.seg3 := Seg.io.encodeOut(3)
    io.seg2 := Seg.io.encodeOut(2)
    io.seg1 := Seg.io.encodeOut(1)
    io.seg0 := Seg.io.encodeOut(0)
}
