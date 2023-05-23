import chisel3._
import chiseltest._
import chisel3.experimental.BundleLiterals._

import utest._

/**
  * This is a trivial example of how to run this Specification
  * From within sbt use:
  * {{{
  * testOnly gcd.GcdDecoupledTester
  * }}}
  * From a terminal shell use:
  * {{{
  * sbt 'testOnly gcd.GcdDecoupledTester'
  * }}}
  */
object GCDSpec extends ChiselUtestTester {
  val tests = Tests {
    test("GCD") {
      testCircuit(new DecoupledGcd(16)) {                 //第一个参数应该是一个无参函数
        dut =>
          dut.input.initSource()                   //初始化
          dut.input.setSourceClock(dut.clock)
          dut.output.initSink()
          dut.output.setSinkClock(dut.clock)
          val testValues = for {x <- 0 to 10; y <- 0 to 10} yield (x, y)
          val inputSeq = testValues.map { case (x, y) => (new GcdInputBundle(16)).Lit(_.value1 -> x.U, _.value2 -> y.U) }  //inputSeq是一个Bundle数组
          val resultSeq = testValues.map { case (x, y) =>                                                               //Lit用于将(x,y)转化为chisel字面量
            (new GcdOutputBundle(16)).Lit(_.value1 -> x.U, _.value2 -> y.U, _.gcd -> BigInt(x).gcd(BigInt(y)).U)        //传递给InputBundle
          }
          fork {
            // push inputs into the calculator, stall for 11 cycles one third of the way
            val (seq1, seq2) = inputSeq.splitAt(resultSeq.length / 3)
            dut.input.enqueueSeq(seq1)         //Seq里的Bundle,每次握手成功时，消耗一个
            dut.clock.step(11)
            dut.input.enqueueSeq(seq2)
          }.fork {
            // retrieve computations from the calculator, stall for 10 cycles one half of the way
            val (seq1, seq2) = resultSeq.splitAt(resultSeq.length / 2)
            dut.output.expectDequeueSeq(seq1)
            dut.clock.step(10)
            dut.output.expectDequeueSeq(seq2)
          }.join()
      }
    }
  }
}
