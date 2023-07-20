package rv64

import chisel3._
import chisel3.util._
import Define._
import ControlUnit._

class EiIO extends Bundle{
    val inst = Input(UInt(INST_LEN.W))
    val imm_type = Input(UInt(2.W))

    val eximm = Output(UInt(X_LEN.W))
}

class Eximm extends Module{
    val io = IO(new EiIO)

    def eximm(inst:UInt, imm_type:UInt): UInt = 
    {
        imm_type match {
            case IMM_I => Cat(Fill(52, inst(31)), inst(31, 20))
            case _ => 0.U
        }
    }

    io.eximm := eximm(io.inst, io.imm_type)
}
