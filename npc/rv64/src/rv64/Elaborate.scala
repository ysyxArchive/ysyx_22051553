package rv64

import circt.stage._
import rv64._

object Elaborate extends App {
  def top = new Core()
  val useMFC = false  // use MLIR-based firrtl compiler  -- 无法实例化loadMemory
  val generator = Seq(chisel3.stage.ChiselGeneratorAnnotation(() => top))
  if (useMFC) { //无法使用修改命名
    (new ChiselStage).execute(args, generator :+ CIRCTTargetAnnotation(CIRCTTarget.Verilog)) //需要在.v中添加$readmemh("inst", Memory);
  } else {                                                                                  ///* verilator lint_off UNOPTFLAT */需要添加
    (new chisel3.stage.ChiselStage).execute(args, generator :+ firrtl.stage.RunFirrtlTransformAnnotation(new AddModulePrefix())
    :+ ModulePrefixAnnotation("ysyx_22051553_"))
  }
}