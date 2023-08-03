package rv64

import circt.stage._

object Elaborate extends App {
  def top = new Soc()
  val useMFC = true  // use MLIR-based firrtl compiler  -- 无法实例化loadMemory
  val generator = Seq(chisel3.stage.ChiselGeneratorAnnotation(() => top))
  if (useMFC) {
    (new ChiselStage).execute(args, generator :+ CIRCTTargetAnnotation(CIRCTTarget.SystemVerilog))
  } else {
    (new chisel3.stage.ChiselStage).execute(args, generator)
  }
}