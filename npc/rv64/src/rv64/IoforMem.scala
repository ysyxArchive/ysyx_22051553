package rv64

import chisel3.Bundle
import chisel3._
import chisel3.util._
import Define._
import dataclass.data


object IoforMem{
    val s_Idle :: s_singlereq :: s_multireq :: s_wait :: Nil = Enum(4)
}
//s_multiready:与Cache一致，等待Arbitor写地址结束


class IOex extends Bundle{
    val waddr = Input(UInt(ADDRWIDTH.W))
    val raddr = Input(UInt(ADDRWIDTH.W))
    val wdata = Input(UInt(X_LEN.W))
    val wmask = Input(UInt((X_LEN/8).W))
    val ld_type = Input(UInt(3.W))
    val sd_type = Input(UInt(3.W))
}

class IOmem extends Bundle{
    val data = ValidIO(UInt(X_LEN.W))
}

class IOfc extends Bundle{
    val stall = Input(Bool())

    val req = Output(Bool())
    val state = Output(UInt(2.W))
    val valid = Output(Bool())

    val vmem_range = Output(Bool())
}

class IomemIO extends Bundle{  //io访存模块
    val axi = Flipped(new AXIMasterIO)
    val excute = new IOex
    val mem = new IOmem

    val fc = new IOfc //当外部还有stall时，保持valid

    val multiwrite = Output(Bool())
}

import IoforMem._
class IoforMem extends Module{
    val io = IO(new IomemIO)

    val state = RegInit(s_Idle)

    val mem_data_valid = RegInit(0.B)
    val mem_data_bits = RegInit(0.U(X_LEN.W))

    //Vmem缓冲
    val VmemBuffer = Mem(16, Vec(8, UInt(8.W)))  //128Bytes
    val maskbuffer = Mem(16, UInt(8.W))

    val r_count = RegInit(0.U(4.W))
    val read = WireInit(0.U(X_LEN.W))
    val mask = WireInit(0.U(8.W))
    dontTouch(read)
    dontTouch(mask)

    val last_addr = RegInit(0.U(ADDRWIDTH.W))
    val begin_flag = RegInit(0.B)  //代表是否有第一个数据已经写入buffer
    val begin_waddr = RegInit(0.U(ADDRWIDTH.W))

    val data_count = RegInit(0.U(4.W)) //16个8字节 --虽然写vmem会有写4字节情况，但是写4字节情况都是无法8字节对齐的情况
    val wait_cycle = RegInit(0.U(4.W))

    
    val jump_data = RegInit(0.U((X_LEN.W))) //支持vmem跳跃的情况
    val jump_mask = RegInit(0.U((X_LEN/8).W))
    val jump_addr = RegInit(0.U(ADDRWIDTH.W))  //记录跳跃地址


    read := VmemBuffer.read(r_count).asUInt //Vec转为UInt
    mask := maskbuffer.read(r_count)


    io.axi.req.valid := 0.B
    io.axi.req.bits.addr := 0.U
    io.axi.req.bits.data := 0.U
    io.axi.req.bits.mask := 0.U
    io.axi.req.bits.rw := 0.B


    io.mem.data.valid := mem_data_valid
    io.mem.data.bits := mem_data_bits

    //顶层
    io.fc.req := (io.excute.ld_type.orR | io.excute.sd_type.orR) && ((io.excute.waddr | io.excute.raddr) >= "ha0000000".U)
    io.fc.state := state
    io.fc.valid := io.axi.resp.valid
    io.fc.vmem_range := 0.B

    io.multiwrite := 0.B


    switch(state){
        is(s_Idle){
                when(begin_flag){ //记时16个周期后，申请写入vmem
                    wait_cycle := wait_cycle + 1.U
                }

                when(begin_flag && wait_cycle === 15.U){
                    when(io.fc.stall === 1.B){
                        wait_cycle := 15.U
                    }.otherwise{
                        state := s_multireq
                        io.axi.req.valid := 1.B 
                        io.axi.req.bits.addr := Cat(begin_waddr(31,3), 0.U(3.W) ).asUInt //修改后，对齐8字节
                        io.axi.req.bits.rw := 0.B
                        io.multiwrite := 1.B
                        data_count := data_count - 1.U
                        wait_cycle := 0.U
                    }
                }

                mem_data_valid := 0.B 

                when( (io.excute.ld_type.orR | io.excute.sd_type.orR) && ((io.excute.waddr | io.excute.raddr) >= "ha0000000".U) ){

                    when(io.excute.sd_type.orR && io.excute.waddr >= "ha1000000".U){ //vmem写请求，直到1.满、2.时间到达3.地址跳跃
                        io.fc.vmem_range := 1.B

                        when(begin_flag && (last_addr =/= io.excute.waddr)){ //data_in_buffer代表第一个数据已经写入buffer
                            state := s_multireq
                            io.axi.req.valid := 1.B 
                            io.axi.req.bits.addr := Cat(begin_waddr(31,3), 0.U(3.W) ).asUInt //修改后，对齐8字节
                            io.axi.req.bits.rw := 0.B
                            io.multiwrite := 1.B
                            data_count := data_count - 1.U

                            jump_data := io.excute.wdata
                            jump_addr := io.excute.waddr
                            jump_mask := io.excute.wmask
                        }.otherwise{

                            when(begin_flag === 0.B){
                                begin_waddr := io.excute.waddr
                                begin_flag := 1.B
                            }

                            val data = VecInit.tabulate(8)(k => io.excute.wdata((k+1)*8 - 1, k*8))
                            VmemBuffer.write(data_count, data, io.excute.wmask.asBools)  //需要写成asBools成为Seq
                            maskbuffer.write(data_count, io.excute.wmask)
                            last_addr := io.excute.waddr + 8.U
                            data_count := data_count + 1.U
                            wait_cycle := 0.U //若有写，则重新计数
                            
                            when(wait_cycle === 15.U || data_count === 15.U){
                                state := s_multireq
                                io.axi.req.valid := 1.B 
                                io.axi.req.bits.addr := Cat(begin_waddr(31,3), 0.U(3.W) ).asUInt //修改后，对齐8字节
                                io.axi.req.bits.rw := 0.B
                                io.multiwrite := 1.B
                                data_count := data_count
                            }
                        }

                    }.otherwise{ //普通读写请求，同步进行

                        state := s_singlereq
                        io.axi.req.valid := 1.B 
                        io.axi.req.bits.addr := Cat( (io.excute.waddr(31,3) | io.excute.raddr(31,3)), 0.U(3.W) ).asUInt //修改后，对齐8字节
                        io.axi.req.bits.data := io.excute.wdata
                        io.axi.req.bits.mask := io.excute.wmask
                        io.axi.req.bits.rw := Mux(io.excute.ld_type.orR, 1.B, 0.B)
                    }
                }    
        }
        is(s_singlereq){
            when(io.axi.resp.valid){
                mem_data_valid := 1.B
                mem_data_bits := io.axi.resp.bits.data

                when(io.fc.stall){
                    state := s_wait
                    // axi_req_valid := 0.B  //停止申请总线，防止死锁
                }.otherwise{
                    state := s_Idle
                    // mem_data_valid := 0.B  //多stall一个周期
                }    
            }.otherwise{
                io.axi.req.valid := 1.B 
                io.axi.req.bits.addr := Cat( (io.excute.waddr(31,3) | io.excute.raddr(31,3)), 0.U(3.W) ).asUInt //修改后，对齐8字节
                io.axi.req.bits.data := io.excute.wdata
                io.axi.req.bits.mask := io.excute.wmask
                io.axi.req.bits.rw := Mux(io.excute.ld_type.orR, 1.B, 0.B)
            }
        }
        is(s_multireq){
            when(io.axi.resp.valid){
                state := s_Idle

                io.axi.req.valid := 0.B

                // for(i <- 0 until 16)yield{
                //     VmemBuffer.write(i.U, VecInit.fill(8)(0.U))
                // }
                r_count := 0.U
                begin_flag := 0.B
                data_count := 0.U
                wait_cycle := 0.U
                jump_addr := 0.U

                when(jump_addr =/= 0.U){
                    val data = VecInit.tabulate(8)(k => jump_data((k+1)*8 - 1, k*8))
                    VmemBuffer.write(0.U, data, jump_mask.asBools)  //需要写成asBools成为Seq
                    maskbuffer.write(0.U, jump_mask)
                    last_addr := jump_addr + 8.U
                    data_count := 1.U

                    begin_flag := 1.B
                    begin_waddr := jump_addr
                }.otherwise{   //上面的写法会产生冲突，两个操作写同第一个地址
                    for(i <- 0 until 16)yield{
                        VmemBuffer.write(i.U, VecInit.fill(8)(0.U))
                    }
                }


            }.otherwise{
                io.axi.req.valid := 1.B
                io.axi.req.bits.data := read
                io.axi.req.bits.mask := Mux(r_count <= data_count, mask, 0.U)   //因为没有清空mask的操作

                io.multiwrite := 1.B
                r_count := r_count + 1.U
            }
        }
        is(s_wait){
            when(!io.fc.stall){
                state := s_Idle
                // mem_data_valid := 0.B //延长有效一个周期
            }
        }
    }
  
}


