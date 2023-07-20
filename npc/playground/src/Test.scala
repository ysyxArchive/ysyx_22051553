import chisel3._
import chisel3.util._
import chisel3.experimental.BundleLiterals._


class FetchExecutePipelineRegister extends Bundle {
  val pc = UInt(2.W)
  val vir = UInt(2.W)
}

class Test

