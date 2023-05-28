import chisel3._
import chisel3.util._

class Top extends Module{
    val io = IO(new Bundle {
        val sw_input        = Input(Vec(8,Bool()))
        val led_output      = Output(Vec(4,Bool()))
        val seg_output      = Output(UInt(7.W))  //是一个逻辑
    })

    val decoder = Module(new Decoder_83_prior)
    // decoder.io.in := io.sw_input
    decoder.io.in <> io.sw_input

    io.led_output(3) := decoder.io.display.asBool
    io.led_output(2) := decoder.io.out(2).asBool
    io.led_output(1) := decoder.io.out(1).asBool
    io.led_output(0) := decoder.io.out(0).asBool
    
    

    val seg = Module(new Seg);
    seg.io.data_in(3) := 0.B                             //不是0.U
    seg.io.data_in(2) := decoder.io.out(2).asBool
    seg.io.data_in(1) := decoder.io.out(1).asBool
    seg.io.data_in(0) := decoder.io.out(0).asBool

    // io.seg_output := seg.io.encode_out
    io.seg_output <> seg.io.encode_out
}
