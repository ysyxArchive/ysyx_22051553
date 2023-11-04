package rv64

import chisel3.Bundle
import chisel3._
import chisel3.util._
import Define._
import dataclass.data


object IoforMem{
    val s_Idle :: s_singlereq :: s_multireq :: Nil = Enum(3)
}
//s_multiready:与Cache一致，等待Arbitor写地址结束

class IOde extends Bundle{
    val inst = ValidIO(UInt(X_LEN.W))
}


class IOex extends Bundle{
    val req = Input(Bool())
    val addr = Input(UInt(ADDRWIDTH.W))
    val data = Input(UInt(X_LEN.W))
    val mask = Input(UInt((X_LEN/8).W))
}

class IOfe extends Bundle{
    val req = Input(Bool())
    val addr = Input(UInt(ADDRWIDTH.W))
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

    val excute_keep = Output(Bool())
}

class IomemIO extends Bundle{  //io访存模块
    val axi = Flipped(new AXIMasterIO)
    val excute = new IOex
    val fetch = new IOfe
    val decode = new IOde
    val mem = new IOmem

    val fc = new IOfc //当外部还有stall时，保持valid
}

import IoforMem._
class IoforMem extends Module{
    val io = IO(new IomemIO)

    val state = RegInit(s_Idle)


    val excute_req = io.excute.req
    val excute_rw = io.excute.mask.orR
    val excute_addr = Cat(io.excute.addr(31,3), 0.U(3.W)) //修改后，对齐8字节
    val excute_mask = io.excute.mask
    val excute_data = io.excute.data

    val fetch_req = io.fetch.req
    val fetch_addr = io.fetch.addr
    
    //仲裁逻辑：0.写外设等请求 1.fetch的读指令请求  --读取指令优先级如果比访问外设高，可能会一直读取，不写外设
    val master_choose = WireInit(0.U(2.W)) //10代表master0申请访问，0？代表无访问
    val choose_buffer = RegInit(0.U(2.W))
    

    dontTouch(master_choose)
    master_choose := MuxCase(
        "b00".U,
        Seq(
            (excute_req) -> "b10".U,
            (fetch_req) -> "b11".U
        )
    )

    val rw = WireInit(0.B)
    val addr = WireInit(0.U(ADDRWIDTH.W))  //保持
    val data = WireInit(0.U((X_LEN).W))
    val mask = WireInit(0.U((X_LEN/8).W)) 


    rw := Mux(master_choose(1), 
        Mux(master_choose(0), 1.B,               //fetch请求一定是读
            excute_rw                            //excute请求看情况
        ),
        0.B
    )

    addr := Mux(master_choose(1), 
        Mux(master_choose(0), fetch_addr, excute_addr),
        0.U
    )

    data := Mux(master_choose(1), 
        Mux(master_choose(0), 0.U, excute_data),
        0.U
    )

    mask := Mux(master_choose(1), 
        Mux(master_choose(0), 0.U, excute_mask),
        0.U
    )

    
    //---------------------------
    
    
    val mem_data_valid = RegInit(0.B)
    val mem_data_bits = RegInit(0.U(X_LEN.W))

    val decode_inst_valid = RegInit(0.B)
    val decode_inst = RegInit(0.U(X_LEN.W))

    //Vmem缓冲
    val VmemBuffer = Mem(16, Vec(8, UInt(8.W)))  //128Bytes
    // val maskbuffer = Mem(16, UInt(8.W))
    val maskbuffer = RegInit(VecInit.tabulate(16)(i => 0.U(8.W)))

    val r_count = RegInit(0.U(4.W))
    val read = WireInit(0.U(X_LEN.W))
    val mask_forVmem = WireInit(0.U(8.W))
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
    mask_forVmem := maskbuffer(r_count)


    io.axi.req.valid := 0.B
    io.axi.req.bits.rw := 0.B
    io.axi.req.bits.addr := 0.U
    io.axi.req.bits.data := 0.U
    io.axi.req.bits.mask := 0.U
    io.axi.req.bits.len := 0.U
    io.axi.req.bits.size := 0.U



    io.mem.data.valid := mem_data_valid
    io.mem.data.bits := mem_data_bits

    io.decode.inst.valid := decode_inst_valid
    io.decode.inst.bits := decode_inst

    //顶层
    io.fc.req := excute_req | fetch_req
    io.fc.state := state
    io.fc.valid := io.axi.resp.valid
    io.fc.vmem_range := 0.B 
    io.fc.excute_keep := mem_data_valid


    val addr_buf = RegInit(0.U(ADDRWIDTH.W))
    val rw_buf = RegInit(0.B)

    switch(state){
        is(s_Idle){

                mem_data_valid := 0.B
                decode_inst_valid := 0.B

                
                when(excute_req && !mem_data_valid){  //避免连续请求
                    choose_buffer := master_choose

                    addr_buf := io.axi.req.bits.addr
                    rw_buf := io.axi.req.bits.rw

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
                            io.axi.req.bits.len := 15.U
                            data_count := data_count - 1.U
                            wait_cycle := 0.U
                        }
                    }

                     


                    when(!excute_rw && excute_addr === "h00000000".U){ //vmem写请求，直到1.满、2.时间到达3.地址跳跃
                        io.fc.vmem_range := 1.B

                        when(begin_flag && (last_addr =/= excute_addr)){ //data_in_buffer代表第一个数据已经写入buffer
                            state := s_multireq
                            io.axi.req.valid := 1.B 
                            io.axi.req.bits.addr := Cat(begin_waddr(31,3), 0.U(3.W) ).asUInt //修改后，对齐8字节
                            io.axi.req.bits.rw := 0.B
                            io.axi.req.bits.len := 15.U
                            data_count := data_count - 1.U

                            jump_data := excute_data
                            jump_addr := excute_addr
                            jump_mask := excute_mask
                        }.otherwise{

                            when(begin_flag === 0.B){
                                begin_waddr := excute_addr
                                begin_flag := 1.B
                            }

                            val data = VecInit.tabulate(8)(k => excute_data((k+1)*8 - 1, k*8))
                            VmemBuffer.write(data_count, data, excute_mask.asBools)  //需要写成asBools成为Seq
                            maskbuffer(data_count) :=  excute_mask
                            last_addr := excute_addr + 8.U
                            data_count := data_count + 1.U
                            wait_cycle := 0.U //若有写，则重新计数
                            
                            when(wait_cycle === 15.U || data_count === 15.U){
                                state := s_multireq
                                io.axi.req.valid := 1.B 
                                io.axi.req.bits.addr := Cat(begin_waddr(31,3), 0.U(3.W) ).asUInt //修改后，对齐8字节
                                io.axi.req.bits.rw := 0.B
                                io.axi.req.bits.len := 15.U
                                data_count := data_count
                            }
                        }

                    }.otherwise{ //普通读写请求，同步进行

                        state := s_singlereq
                        io.axi.req.valid := 1.B 
                        io.axi.req.bits.rw := excute_rw
                        io.axi.req.bits.addr := Cat(excute_addr(31,2), 0.U(2.W)).asUInt //修改后，对齐4字节，存疑
                        io.axi.req.bits.data := excute_data
                        io.axi.req.bits.mask := excute_mask
                        io.axi.req.bits.len := 0.U
                        io.axi.req.bits.size := "b10".U //存疑
                    }

                }.elsewhen(fetch_req){
                    choose_buffer := master_choose

                    state := s_singlereq
                    io.axi.req.valid := 1.B 
                    io.axi.req.bits.rw := 1.B
                    io.axi.req.bits.addr := Cat(fetch_addr(31,2), 0.U(2.W)).asUInt //修改后，对齐4字节，存疑
                    io.axi.req.bits.len := 0.U
                    io.axi.req.bits.size := "b10".U //存疑

                    addr_buf := io.axi.req.bits.addr
                    rw_buf := 1.B
                }


        }
        is(s_singlereq){
            when(io.axi.resp.valid){
                when(choose_buffer(0)){  //fetch_req
                    decode_inst_valid := 1.B
                    decode_inst := io.axi.resp.bits.data
                }.otherwise{
                    mem_data_valid := 1.B
                    mem_data_bits := io.axi.resp.bits.data
                }

                state := s_Idle

            }.otherwise{
                io.axi.req.valid := 1.B 
                io.axi.req.bits.addr := addr_buf 
                io.axi.req.bits.data := excute_data
                io.axi.req.bits.mask := excute_mask
                io.axi.req.bits.rw := rw_buf
            }
        }
        is(s_multireq){
            when(io.axi.resp.valid){
                state := s_Idle

                io.axi.req.valid := 0.B

                r_count := 0.U
                begin_flag := 0.B
                data_count := 0.U
                wait_cycle := 0.U
                jump_addr := 0.U

                when(jump_addr =/= 0.U){
                    val data = VecInit.tabulate(8)(k => jump_data((k+1)*8 - 1, k*8))
                    VmemBuffer.write(0.U, data, jump_mask.asBools)  //需要写成asBools成为Seq
                    maskbuffer(0) := jump_mask
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
                io.axi.req.bits.mask := Mux(r_count <= data_count, mask_forVmem, 0.U)   //因为没有清空mask的操作

                io.axi.req.bits.len := 15.U
                r_count := r_count + 1.U
            }
        }
    }
  
}


