package rv64

import chisel3.Bundle
import chisel3._
import chisel3.util._
import Define._


object IoforMem{
    val s_Idle :: s_req :: s_wait :: Nil = Enum(3)
}


class IOex extends Bundle{
    val waddr = Input(UInt(ADDRWIDTH.W))
    val raddr = Input(UInt(ADDRWIDTH.W))
    val wdata = Input(UInt(X_LEN.W))
    val wmask = Input(UInt((X_LEN/8).W))
    val load = Input(Bool())
    val store = Input(Bool())
}

class IOmem extends Bundle{
    val data = ValidIO(UInt(X_LEN.W))
}

class IOfc extends Bundle{
    val stall = Input(Bool())

    val req = Output(Bool())
    val state = Output(UInt(2.W))
    val valid = Output(Bool())
}

class IomemIO extends Bundle{  //io访存模块
    val axi = Flipped(new AXIMasterIO)
    val excute = new IOex
    val mem = new IOmem

    val fc = new IOfc //当外部还有stall时，保持valid
}

import IoforMem._
class IoforMem extends Module{
    val io = IO(new IomemIO)

    val state = RegInit(s_Idle)

    val mem_data_valid = RegInit(0.B)
    val mem_data_bits = RegInit(0.U(X_LEN.W))

    io.axi.req.valid := 0.B
    io.axi.req.bits.addr := 0.U
    io.axi.req.bits.data := 0.U
    io.axi.req.bits.mask := 0.U
    io.axi.req.bits.rw := 0.B


    io.mem.data.valid := mem_data_valid
    io.mem.data.bits := mem_data_bits

    //顶层
    io.fc.req := (io.excute.load | io.excute.store) && ((io.excute.waddr | io.excute.raddr) >= "ha0000000".U)
    io.fc.state := state
    io.fc.valid := io.axi.resp.valid


    switch(state){
        is(s_Idle){
            when(io.fc.stall){
                state := s_Idle
            }.otherwise{
                when( (io.excute.load | io.excute.store) && ((io.excute.waddr | io.excute.raddr) >= "ha0000000".U) ){
                    state := s_req
                    io.axi.req.valid := 1.B 
                    io.axi.req.bits.addr := Cat( (io.excute.waddr(31,3) | io.excute.raddr(31,3)), 0.U(3.W) ).asUInt //修改后，对齐8字节
                    io.axi.req.bits.data := io.excute.wdata
                    io.axi.req.bits.mask := io.excute.wmask
                    io.axi.req.bits.rw := Mux(io.excute.load, 1.B, 0.B)
                }
            }

            
        }
        is(s_req){
            when(io.axi.resp.valid){
                mem_data_valid := 1.B
                mem_data_bits := io.axi.resp.bits.data

                when(io.fc.stall){
                    state := s_wait
                    // axi_req_valid := 0.B  //停止申请总线，防止死锁
                }.otherwise{
                    state := s_Idle
                    mem_data_valid := 0.B  //多stall一个周期
                }
                
            }
        }
        is(s_wait){
            when(!io.fc.stall){
                state := s_Idle
                mem_data_valid := 0.B
            }
        }
    }
  
}


