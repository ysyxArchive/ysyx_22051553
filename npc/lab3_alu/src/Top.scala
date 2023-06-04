import chisel3._
import chisel3.util._

class Top extends Module{              
    val io = IO(new Bundle {
        val ps2_clk         =   Input(Bool())
        val ps2_data        =   Input(Bool())

        val sw_input        =   Input(UInt(8.W))

        val seg3            =   Output(UInt(7.W))
        val seg2            =   Output(UInt(7.W))
        val seg1            =   Output(UInt(7.W))
        val seg0            =   Output(UInt(7.W))

        val led0            =   Output(Bool()) //carry
        val led1            =   Output(Bool()) //zero
        val led2            =   Output(Bool()) //overflow
    })


    val A = io.sw_input(7,4).asSInt
    val B = io.sw_input(3,0).asSInt


    
    

    val Button = Module(new Button)
    Button.io.ps2_clk := io.ps2_clk
    Button.io.ps2_data := io.ps2_data
    
    
    val Alu = Module(new Alu)
    Alu.io.A := A
    Alu.io.B := B
    Alu.io.alu_op := Button.io.button_out

    val result = Alu.io.result

    val Seg = Module(new Seg)
    // Seg.io.dataIn(0) := Cat(0.U(3.W), result(0))
    // Seg.io.dataIn(1) := Cat(0.U(3.W), result(1))
    // Seg.io.dataIn(2) := Cat(0.U(3.W), result(2))
    // Seg.io.dataIn(3) := Cat(0.U(3.W), result(3))
    Seg.io.dataIn(0) := Cat("b000".U, result(0).asUInt)
    Seg.io.dataIn(1) := Cat("b000".U, result(1).asUInt)
    Seg.io.dataIn(2) := Cat("b000".U, result(2).asUInt)
    Seg.io.dataIn(3) := Cat("b000".U, result(3).asUInt)


    io.seg3 := Seg.io.encodeOut(3)
    io.seg2 := Seg.io.encodeOut(2)
    io.seg1 := Seg.io.encodeOut(1)
    io.seg0 := Seg.io.encodeOut(0)

    io.led2 := Alu.io.carry
    io.led1 := Alu.io.zero
    io.led0 := Alu.io.overflow
}
