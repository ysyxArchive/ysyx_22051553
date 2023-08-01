package rv64

import circt.stage._

object Elaborate extends App {
  def top = new Core()
  val useMFC = false  // use MLIR-based firrtl compiler  -- 无法实例化loadMemory
  val generator = Seq(chisel3.stage.ChiselGeneratorAnnotation(() => top))
  if (useMFC) {
    (new ChiselStage).execute(args, generator :+ CIRCTTargetAnnotation(CIRCTTarget.Verilog))
  } else {
    (new chisel3.stage.ChiselStage).execute(args, generator)
  }
}