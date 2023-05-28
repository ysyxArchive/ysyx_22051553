import circt.stage._

object Elaborate extends App {
  def top = new Mux()
  val useMFC = true // use MLIR-based firrtl compiler  //报错 --因为firtool路径在npc的makefile中被声明
  val generator = Seq(chisel3.stage.ChiselGeneratorAnnotation(() => top))
  if (useMFC) {
    (new ChiselStage).execute(args, generator :+ CIRCTTargetAnnotation(CIRCTTarget.Verilog))
  } else {
    (new chisel3.stage.ChiselStage).execute(args, generator)
  }
}