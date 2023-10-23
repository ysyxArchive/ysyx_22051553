package rv64
import chisel3._
import chisel3.util._
import Define._

object BMState{
    val s_Idle :: s_mul :: Nil = Enum(2)
}

class BMIO extends Bundle{
    val mul_valid = Input(Bool())
    val flush = Input(Bool())
    val mulw = Input(Bool()) //1-32位 0-64位
    val mul_signed = Input(UInt(2.W)) //2’b11（signed x signed）；2’b10（signed x unsigned）；2’b00（unsigned x unsigned）；
    val multiplicand = Input(UInt(X_LEN.W))  //被乘数
    val multiplier = Input(UInt(X_LEN.W)) //乘数
    val mul_ready = Output(Bool())
    val out_valid = Output(Bool())
    val result_hi = Output(UInt(X_LEN.W))
    val result_lo = Output(UInt(X_LEN.W))
}

import BMState._

class BoothMul extends Module{
    val io = IO(new BMIO)

    //顶层
    val mul_ready = RegInit(0.B)
    val out_valid = RegInit(0.B)
    val result_hi = RegInit(0.U(X_LEN.W))
    val result_lo = RegInit(0.U(X_LEN.W))

    io.mul_ready := mul_ready
    io.out_valid := out_valid
    io.result_hi := result_hi
    io.result_lo := result_lo


    //内部


    val multiplierReg = RegInit(0.U(67.W))  //无符号数扩展两位0 2 + 64 + 1(补充0)
    val multiplicandReg = RegInit(0.U(132.W))
    val resultReg = RegInit(0.U(132.W))

    val state = RegInit(s_Idle)

    val choose = WireInit(0.U(3.W))
    choose := Cat(io.mulw, io.mul_signed)

    val shiftCounter = RegInit(0.U(6.W))
    val total = RegInit(0.U(6.W))

    switch(state){
        is(s_Idle){
            out_valid := 0.B
            result_hi := 0.U
            result_lo := 0.U
            mul_ready := 1.B
            shiftCounter := 0.U
            total := 0.U

            when(io.mul_valid && !out_valid){  //防止一直进入
                state := s_mul

                total := MuxLookup(choose, 0.U,
                    Seq(
                        //64位
                        "b000".U -> 33.U, //无符号乘数
                        "b010".U -> 33.U, //无符号乘数
                        "b011".U -> 32.U, //有符号乘数
                        //32位
                        "b100".U -> 17.U, //无符号乘数
                        "b110".U -> 17.U, //无符号乘数
                        "b111".U -> 16.U, //有符号乘数
                    )
                )

                multiplierReg := MuxLookup(choose, 0.U,
                    Seq(
                        //64位
                        "b000".U -> Cat(0.U(2.W), io.multiplier, 0.U(1.W)), //无符号乘数
                        "b010".U -> Cat(0.U(2.W), io.multiplier, 0.U(1.W)), //无符号乘数
                        "b011".U -> Cat(Fill(2, io.multiplier(63)) , io.multiplier, 0.U(1.W)), //有符号乘数
                        //32位
                        "b100".U -> Cat(0.U(34.W), io.multiplier(31,0), 0.U(1.W)), //无符号乘数
                        "b110".U -> Cat(0.U(34.W), io.multiplier(31,0), 0.U(1.W)), //无符号乘数
                        "b111".U -> Cat(0.U(32.W) , Fill(2, io.multiplier(31)), io.multiplier(31,0), 0.U(1.W)), //有符号乘数
                    )
                )

                multiplicandReg := MuxLookup(choose, 0.U,
                    Seq(
                        //64位
                        "b000".U -> Cat(0.U(68.W), io.multiplicand), //无符号被乘数
                        "b010".U -> Cat(Fill(68, io.multiplicand(63)), io.multiplicand), //有符号被乘数
                        "b011".U -> Cat(Fill(68, io.multiplicand(63)), io.multiplicand), //有符号被乘数
                        //32位
                        "b100".U -> Cat(0.U(100.W), io.multiplicand(31,0)), //无符号被乘数
                        "b110".U -> Cat(Fill(100, io.multiplicand(31)), io.multiplicand(31,0)), //有符号被乘数
                        "b111".U -> Cat(Fill(100, io.multiplicand(31)), io.multiplicand(31,0)), //有符号被乘数
                    )
                )


                resultReg := 0.B

                mul_ready := 0.U
            }
        }
        is(s_mul){

            when(shiftCounter === total){
                state := s_Idle
                out_valid := 1.B
                result_hi := resultReg(127, 64)
                result_lo := resultReg(63, 0)

            }.otherwise{
                resultReg := resultReg + MuxLookup(multiplierReg(2,0), 0.U(132.W), 
                    Seq(
                        "b000".U -> 0.U(132.W),
                        "b001".U -> multiplicandReg,
                        "b010".U -> multiplicandReg,
                        "b011".U -> (multiplicandReg << 1.U),
                        "b100".U -> (-(multiplicandReg << 1.U)),
                        "b101".U -> (-multiplicandReg),
                        "b110".U -> (-multiplicandReg),
                        "b111".U -> 0.U(132.W)
                    )
                )

                multiplicandReg := multiplicandReg << 2.U
                multiplierReg := multiplierReg >> 2.U

                shiftCounter := shiftCounter + 1.U
            }
        }
    }

}
