package rv64

import circt.stage._

object Elaborate extends App {
  def top = new Soc()
  val useMFC = true  // use MLIR-based firrtl compiler  -- 无法实例化loadMemory
  val generator = Seq(chisel3.stage.ChiselGeneratorAnnotation(() => top))
  if (useMFC) {
    (new ChiselStage).execute(args, generator :+ CIRCTTargetAnnotation(CIRCTTarget.Verilog)) //需要在.v中添加$readmemh("inst", Memory);
  } else {                                                                                  ///* verilator lint_off UNOPTFLAT */需要添加
    (new chisel3.stage.ChiselStage).execute(args, generator)
  }
}