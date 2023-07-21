// import org.scalatest._
// import chisel3._
// import chiseltest._


// class CoreSpec extends flatspec.AnyFlatSpec with ChiselScalatestTester with matchers.should.Matchers{
//     behavior of "Core"
//     it should "test reset" in {
//     test(new Module {
//       val io = IO(new Bundle {
//         val in = Input(UInt(8.W))
//         val out = Output(UInt(8.W))
//       })
//       io.out := RegNext(io.in, 0.U)
//     }) { c =>
//       c.io.out.expect(0.U)

//       c.io.in.poke(42.U)
//       c.clock.step()
//       c.io.out.expect(42.U)

//       c.reset.poke(true.B)
//       c.io.out.expect(42.U)  // sync reset not effective until next clk
//       c.clock.step()
//       c.io.out.expect(0.U)

//       c.clock.step()
//       c.io.out.expect(0.U)

//       c.reset.poke(false.B)
//       c.io.in.poke(43.U)
//       c.clock.step()
//       c.io.out.expect(43.U)
//     }
//   }
// }

import chisel3._
import chiseltest._
import chisel3.experimental.BundleLiterals._

import utest._
import rv64.Core
                                                        //peek只能查看顶层吗
object CoreSpec extends ChiselUtestTester {            //对象名不能叫test
  val tests = Tests {
    test("Core") {
      testCircuit(new Core) {
        dut => 
          dut.clock.step(1)
          dut.io.ramio.dataOut.valid.poke(1.B)
          dut.io.ramio.dataOut.bits.poke("h00a30313".U)
          val value = dut.decode.io.inst.valid.peek()
          println(value)
          dut.clock.step(5)
          
      }
    }
  }
}