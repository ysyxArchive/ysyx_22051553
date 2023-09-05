package rv64

import chisel3._
import chisel3.util._
import Define._
import ControlUnit._

class EiIO extends Bundle{
    val inst = Input(UInt(INST_LEN.W))
    val imm_type = Input(UInt(3.W))

    val eximm = Output(UInt(X_LEN.W))
}

class Eximm extends Module{
    val io = IO(new EiIO)

    // def eximm(inst:UInt, imm_type:UInt): UInt =    verilog中没有模式匹配
    // {
    //     imm_type match {
    //         case IMM_I => Cat(Fill(52, inst(31)), inst(31, 20))
    //         case _ => 0.U
    //     }
    // }

    io.eximm := MuxLookup(
        io.imm_type,
        0.U,
        Seq(
            IMM_I -> Cat(Fill(52, io.inst(31)), io.inst(31,20)),
            IMM_U -> Cat(Fill(32, io.inst(31)), io.inst(31,12), Fill(12, 0.U(1.W))),
            IMM_J -> Cat(Fill(44, io.inst(31)), io.inst(19,12), io.inst(20), io.inst(30,21), 0.U(1.W)),
            IMM_S -> Cat(Fill(52, io.inst(31)), io.inst(31,25), io.inst(11,7)),
            IMM_B -> Cat(Fill(51, io.inst(31)), io.inst(31), io.inst(7), io.inst(30,25), io.inst(11,8), 0.U(1.W)),
            IMM_C -> io.inst(19, 15)        //zext只对SInt使用，因为UInt默认零扩展
        )
    )
    
}
