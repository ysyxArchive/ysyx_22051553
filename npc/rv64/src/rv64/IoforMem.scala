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
    val axi = new AXIMasterIO
    val excute = new IOex
    val mem = new IOmem

    val fc = new IOfc //当外部还有stall时，保持valid
}

import IoforMem._
class IoforMem extends Module{
    val io = IO(new IomemIO)

    val state = RegInit(s_Idle)


    val axi_req_valid = RegInit(0.B)   //模仿verilog输出reg
    val axi_req_bits_rw = RegInit(0.B)
    val axi_req_bits_addr = RegInit(0.U(ADDRWIDTH.W))
    val axi_req_bits_data = RegInit(0.U(X_LEN.W))
    val axi_req_bits_mask = RegInit(0.U((X_LEN/8).W))

    val mem_data_valid = RegInit(0.B)
    val mem_data_bits = RegInit(0.U(X_LEN.W))

    io.axi.req.valid := axi_req_valid
    io.axi.req.bits.addr := axi_req_bits_addr
    io.axi.req.bits.data := axi_req_bits_data
    io.axi.req.bits.mask := axi_req_bits_mask
    io.axi.req.bits.rw := axi_req_bits_rw

    io.mem.data.valid := mem_data_valid
    io.mem.data.bits := mem_data_bits

    //顶层
    io.fc.req := (io.excute.load | io.excute.store) && ((io.excute.waddr | io.excute.raddr) >= "ha0000000".U)
    io.fc.state := state
    io.fc.valid := io.mem.data.valid


    switch(state){
        is(s_Idle){
            mem_data_valid := 0.B

            when( (io.excute.load | io.excute.store) && ((io.excute.waddr | io.excute.raddr) >= "ha0000000".U) ){
                state := s_req
                
                axi_req_valid := 1.B
                axi_req_bits_addr := io.excute.waddr | io.excute.raddr
                axi_req_bits_data := io.excute.wdata
                axi_req_bits_mask := io.excute.wmask
                axi_req_bits_rw := Mux(io.excute.load, 1.B, 0.B)
            }
        }
        is(s_req){
            

            when(io.axi.resp.valid){
                io.axi.req.valid := 0.B   //停止申请总线，防止死锁
                
                mem_data_valid := 1.B
                mem_data_bits := io.axi.resp.bits.data

                when(io.fc.stall){
                    state := s_wait
                }.otherwise{
                    state := s_Idle
                }
                
            }
        }
        is(s_wait){
            when(!io.fc.stall){
                state := s_Idle
            }
        }
    }
  
}
