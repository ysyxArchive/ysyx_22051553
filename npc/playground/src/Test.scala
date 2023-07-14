import chisel3._
import chisel3.util._
import chisel3.experimental.BundleLiterals._


class FetchExecutePipelineRegister(xlen: Int) extends Bundle {
  val pc = UInt(xlen.W)
}


object Test extends App{
    println(new FetchExecutePipelineRegister(32).pc)
}