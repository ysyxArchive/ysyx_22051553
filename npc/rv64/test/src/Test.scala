import chisel3._
import chiseltest._

import utest._


object Test extends ChiselUtestTester{
  val tests = Tests {
    test("Ram") {
        testCircuit(new Ram){
            dut => 
                dut.io.pc.valid.poke(0.B)
                dut.clock.step(50)
                dut.io.pc.valid.poke(1.B)
                dut.io.pc.bits.poke(1.U)
                val value = dut.io.dataOut.bits.peek()
                println(value)
                dut.clock.step(1)
                dut.io.dataOut.bits.expect(7.U)
        }


    }
  }
}
