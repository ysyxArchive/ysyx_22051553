import chisel3._
import chiseltest._
import chisel3.experimental.BundleLiterals._

import utest._

object MuxTest extends ChiselUtestTester{
    val tests = Tests {
        test("Mux") {
            testCircuit(new Mux) {
                dut =>
                    val testValues = for{x <- 0 to 7; y <- 0 to 7} yield {          //注意for yield用法
                        val sel = scala.util.Random.nextBoolean()
                        (sel,x,y)
                    } 

                    val inputSeq = testValues.map {case (sel,x,y) => (sel.B,x.U,y.U)}

                    val outputSeq = testValues.map {case (sel,x,y) => {   //模拟硬件逻辑
                        if(sel)
                            x.U
                        else 
                            y.U
                    }}

                    fork {
                        //要为其写enqueueSeq函数？


                    }.fork{



                    }.join()
            }
        }
    }
}
