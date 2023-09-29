package rv64

import chisel3._
import chisel3.util._
import Define._
import os.temp

object DVState{
    val s_Idle :: s_div32 :: s_div64 :: s_sign :: Nil = Enum(4)
}

class DVIO extends Bundle{
    val div_valid = Input(Bool())
    val flush = Input(Bool())
    val divw = Input(Bool())
    val div_signed = Input(Bool()) //1-signed 0-unsigned
    val dividend = Input(UInt(X_LEN.W))
    val divisor = Input(UInt(X_LEN.W))
    val div_ready = Output(Bool())
    val out_valid = Output(Bool())
    val quotient = Output(UInt(X_LEN.W))
    val remainder = Output(UInt(X_LEN.W))
}


import DVState._

class Divider extends Module{
    val io = IO(new DVIO)

    //顶层
    val div_ready = RegInit(0.B)
    val out_valid = RegInit(0.B)
    val quotient = RegInit(0.S(X_LEN.W))
    val remainder = RegInit(0.S(X_LEN.W))

    io.div_ready := div_ready
    io.out_valid := out_valid
    io.quotient := quotient.asUInt
    io.remainder := remainder.asUInt

    //内部 --根据cpu设计实战实现
    val partial_remainder = RegInit(0.U((2*X_LEN).W))
    val sub65 = RegInit(0.U(65.W))
    val sub33 = RegInit(0.U(33.W)) //扩一位
    val dividend = WireInit(0.U(X_LEN.W))
    val divisor = WireInit(0.U(X_LEN.W))

    val sign_quo = RegInit(0.B) //0-正,1-负
    val sign_rem = RegInit(0.B) //0-正,1-负

    val state = RegInit(s_Idle)

    val choose = WireInit(0.U(2.W))
    choose := Cat(io.divw, io.div_signed)

    val shiftCounter = RegInit(0.U(7.W))


    //中间结果
    val temp_34 = WireInit(0.U(34.W))  //多一位,看是否进位
    val temp_66 = WireInit(0.U(66.W))

    dontTouch(temp_34)
    dontTouch(temp_66)
    

    switch(state){
        is(s_Idle){
            out_valid := 0.B
            quotient := 0.S
            remainder := 0.S
            div_ready := 1.B
            shiftCounter := 0.U
    
            when(io.div_valid && !out_valid){
                div_ready := 0.B
                
                state := Mux(io.divw, s_div32, s_div64)

                dividend := MuxLookup(choose, 0.U,  //取绝对值
                    Seq(
                        //无符号64位
                        "b00".U -> io.dividend,
                        //有符号64位
                        "b01".U -> Mux(io.dividend(63), ~io.dividend + 1.U, io.dividend),
                        //无符号32位
                        "b10".U -> io.dividend(31,0),
                        //有符号32位
                        "b11".U -> Mux(io.dividend(31), ~io.dividend(31,0) + 1.U, io.dividend(31,0)),
                    )
                )

                partial_remainder := Mux(io.divw,
                    Cat(0.U(32.W), dividend(31,0), 0.U(64.W)),//使用高64位
                    Cat(0.U(64.W), dividend)  //使用128位
                )

                divisor := MuxLookup(choose, 0.U,   //取绝对值
                    Seq(
                        //无符号64位
                        "b00".U -> io.divisor,
                        //有符号64位
                        "b01".U -> Mux(io.divisor(63), ~io.divisor + 1.U, io.divisor),
                        //无符号32位
                        "b10".U -> io.divisor(31,0),
                        //有符号32位
                        "b11".U -> Mux(io.divisor(31), ~io.divisor(31,0) + 1.U, io.divisor(31,0)),
                    )
                )

                sub33 := ~Cat(0.U(1.W), divisor(31,0)) + 1.U
                sub65 := ~Cat(0.U(1.W), divisor) + 1.U

                sign_quo := Mux(io.div_signed, 
                    Mux(io.divw, 
                        MuxLookup(Cat(io.dividend(31), io.divisor(31)), 0.B,
                            Seq(
                                "b00".U -> 0.B,
                                "b01".U -> 1.B,
                                "b10".U -> 1.B,
                                "b11".U -> 0.B,
                            )
                        ),
                        MuxLookup(Cat(io.dividend(63), io.divisor(63)), 0.B,
                            Seq(
                                "b00".U -> 0.B,
                                "b01".U -> 1.B,
                                "b10".U -> 1.B,
                                "b11".U -> 0.B,
                            )
                        )
                    ),
                    0.B
                )

                sign_rem := Mux(io.div_signed, 
                    Mux(io.divw, 
                        MuxLookup(Cat(io.dividend(31), io.divisor(31)), 0.B,
                            Seq(
                                "b00".U -> 1.B,
                                "b01".U -> 1.B,
                                "b10".U -> 0.B,
                                "b11".U -> 0.B,
                            )
                        ),
                        MuxLookup(Cat(io.dividend(63), io.divisor(63)), 0.B,
                            Seq(
                                "b00".U -> 1.B,
                                "b01".U -> 1.B,
                                "b10".U -> 0.B,
                                "b11".U -> 0.B,
                            )
                        )
                    ),
                    0.B
                )
            }
        }
        is(s_div32){
            when(shiftCounter === 32.U){
                remainder := partial_remainder(127, 96).asSInt
                quotient := quotient(31,0).asSInt  //符号位扩展


                when(!sign_quo && !sign_rem){
                    state := s_Idle
                    out_valid := 1.B    
                }.otherwise{
                    state := s_sign
                }

            }.otherwise{
                temp_34 := Cat(0.U(1.W), partial_remainder(127, 95)) + Cat(0.U(1.W), sub33)
                when(temp_34(33)){ //为正
                    partial_remainder := Cat(temp_34(31,0), partial_remainder(94,0), 0.U(1.W)) //获取结果并左移一位
                    quotient := Cat(quotient(62,0), 1.U(1.W)).asSInt //获取结果并左移一位
                }.otherwise{ //为负
                    partial_remainder := Cat(partial_remainder(126,0), 0.U(1.W)) //不变并左移一位
                    quotient := Cat(quotient(62,0), 0.U(1.W)).asSInt //获取结果并左移一位
                }

                shiftCounter := shiftCounter + 1.U
            }
        }
        is(s_div64){

            when(shiftCounter === 64.U){
                remainder := partial_remainder(127, 64).asSInt

                when(!sign_quo && !sign_rem){
                    state := s_Idle
                    out_valid := 1.B    
                }.otherwise{
                    state := s_sign
                }

            }.otherwise{
                temp_66 := Cat(0.U(1.W), partial_remainder(127, 63)) + Cat(0.U(1.W), sub65)
                when(temp_66(65)){ //为正
                    partial_remainder := Cat(temp_66(63,0), partial_remainder(62,0), 0.U(1.W)) //获取结果并左移一位
                    quotient := Cat(quotient(62,0), 1.U(1.W)).asSInt //获取结果并左移一位
                }.otherwise{ //为负
                    partial_remainder := Cat(partial_remainder(126,0), 0.U(1.W)) //不变并左移一位
                    quotient := Cat(quotient(62,0), 0.U(1.W)).asSInt //获取结果并左移一位
                }

                shiftCounter := shiftCounter + 1.U
            }
        }
        is(s_sign){
            state := s_Idle
            out_valid := 1.B

            when(sign_quo){
                quotient := ~quotient + 1.S(64.W)
            }
            when(sign_rem){
                remainder := ~remainder + 1.S(64.W)
            }
        }
    }
    
  
}
