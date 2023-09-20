//2-way 256-set 
//Cache_line:8 Byte
//Cache Memory Mapping:| Tag | Index | Block Offset | --但是8字节对齐
//                       21      8          3  
//Tag Unit:|Valid|Replace|Tag|
//            1      1    25
//Get 4 Btye for each time


package rv64

import chisel3._
import chisel3.util._
import Define._


object CacheState { //有的会产生没必要的延迟周期，但是状态机更清晰
    val s_Idle :: s_hitWrite :: s_Write :: s_wWriteBack :: s_WriteAllocate ::  s_Read ::   s_rWriteBack ::  s_ReadAck :: Nil = Enum(8)
//                  进行读操作      进行写操作      未命中写    若有需要，先写回        写分配          未命中读     若有需要，先写回，再读出  等待读出后，给cpu
}

object Cache{
    val waynum = 2
    val setnum = 256
    val bytenum = 8

    val taglen = 21
    val indexlen = 8
    val offsetlen = 3
}

class CacheReq extends Bundle{  //来自CPU
    val inst_type = Bool() //对于Icache,每次都读4字节，对于普通读取，每次都读8字节

    val addr = UInt(ADDRWIDTH.W)
    val data = UInt(X_LEN.W)
    val mask = UInt((X_LEN/8).W)
}

class CacheResp extends Bundle{ 
    val data = UInt(X_LEN.W)
}


class CacheIO extends Bundle{
    val req = Flipped(ValidIO(new CacheReq))
    val resp = ValidIO(new CacheResp)
}

class CacheModuleIO extends Bundle{
    val cpu = new CacheIO   //cpu侧
    val axi = Flipped(new AXIMasterIO)    //仲裁器件侧
}

import Cache._
import CacheState._

class Cache extends Module{
    val io = IO(new CacheModuleIO)

    //cache_state
    val state = RegInit(s_Idle)

    //位域
    val tag = Reg(UInt(taglen.W))
    val index = Reg(UInt(indexlen.W))
    val offset = Reg(UInt(offsetlen.W))
    //标记项
    val valid = RegInit(0.U((2*setnum).W))
    val dirty = RegInit(0.U((2*setnum).W))
    val replace = RegInit(0.U((2*setnum).W))  //LRU算法，0新1旧

    val TagArray = Mem(2*setnum, UInt(taglen.W))  //不使用Ram存储，使用寄存器阵列
    //数据
    val DataArray = SyncReadMem(setnum*2, UInt((bytenum*8).W))
    //命中
    // val hit = WireInit(0.U(2.W))  //2路 ---需要使用WireInit设置初始值
    // hit(0) := (TagArray(index * 2.U) === tag) && valid(index * 2.U)   //无法这样写
    // hit(1) := (TagArray(index * 2.U + 1.U) === tag) && valid(index * 2.U + 1.U)

    // hit := hit.bitSet(0.U, (TagArray(index * 2.U) === tag) && valid(index * 2.U))
    // hit := hit.bitSet(1.U, (TagArray(index * 2.U + 1.U) === tag) && valid(index * 2.U + 1.U)) //这样写，只有最后一次赋值有效
    // 只有后一个有效
    //由于以上原因：
    val hit0 = WireInit(0.B)
    val hit1 = WireInit(0.B)

    hit0 := (TagArray(index * 2.U) === io.cpu.req.bits.addr(31, 11)) && valid(index * 2.U)   //在cpu初次访问时就直接比较
    hit1 := (TagArray(index * 2.U + 1.U) === io.cpu.req.bits.addr(31, 11)) && valid(index * 2.U + 1.U)



    //用于修改某两位  --应该如何修改，Wire也会占用资源，用Cat不会，但是写的很不清晰
    val replace0 = WireInit(0.U((2*setnum).W))
    val replace1 = WireInit(0.U((2*setnum).W))


    //-----------------------------------------

    val replace_wire = WireInit(0.B)
    val victim = Reg(Bool()) //未命中时，选择victim
 
    //缓存地址和数据
    val addr = RegInit(0.U(ADDRWIDTH.W))
    val data = RegInit(0.U(X_LEN.W))
    val mask = RegInit(0.U((X_LEN/8).W))

    val inst_type = RegInit(0.B)

    val whitDataArray = RegInit(0.U(64.W))
    val whitNum = RegInit(0.B)


    //FSM
    //输出端口使用寄存器类型，防止combination logic
    val cpu_resp_valid = RegInit(0.B)
    val cpu_resp_bits_data = RegInit(0.U(X_LEN.W))
    val axi_req_valid = RegInit(0.B)
    val axi_req_bits_rw = RegInit(0.B)
    val axi_req_bits_addr = RegInit(0.U(ADDRWIDTH.W))
    val axi_req_bits_data = RegInit(0.U(X_LEN.W))

    cpu_resp_valid := 0.U
    axi_req_valid := 0.U //一般保持无效
    //firtool要求完整initialize
    io.cpu.resp.valid := cpu_resp_valid
    io.cpu.resp.bits.data := cpu_resp_bits_data
    io.axi.req.valid := axi_req_valid
    io.axi.req.bits.rw := axi_req_bits_rw
    io.axi.req.bits.addr := axi_req_bits_addr
    io.axi.req.bits.data := axi_req_bits_data
    

    switch(state){
        is(s_Idle){
            //重置
            victim := 0.U
            cpu_resp_valid := 0.B

            when(io.cpu.req.valid){

                when(io.cpu.req.bits.mask.orR){ //写
                    when(hit0 | hit1){  //写命中
                        state := s_hitWrite

                        //缓存
                        tag := io.cpu.req.bits.addr(31, 11)
                        index := io.cpu.req.bits.addr(10, 3)
                        offset := io.cpu.req.bits.addr(2, 0)

                        data := io.cpu.req.bits.data
                        addr := io.cpu.req.bits.addr
                        mask := io.cpu.req.bits.mask

                        when(hit0){   
                            whitNum := 0.B
                            whitDataArray := DataArray(io.cpu.req.bits.addr(10, 3)*2.U)
                        }.otherwise{
                            whitNum := 1.B
                            whitDataArray := DataArray(io.cpu.req.bits.addr(10, 3)*2.U+1.U)
                        }
                    }.otherwise{ //写不命中
                        state := s_Write
                    
                        //缓存
                        tag := io.cpu.req.bits.addr(31, 11)
                        index := io.cpu.req.bits.addr(10, 3)
                        offset := io.cpu.req.bits.addr(2, 0)

                        data := io.cpu.req.bits.data
                        addr := io.cpu.req.bits.addr
                        mask := io.cpu.req.bits.mask
                    }
                }.otherwise{ //读
                    when(hit0 | hit1){ //若读命中
                        state := s_Idle

                        when(hit0){   //读命中后改变replace
                            when(inst_type){  //如果为读取指令
                                when(offset === 0.U){
                                    cpu_resp_bits_data := Cat(0.U(32.W), DataArray(io.cpu.req.bits.addr(10, 3)* 2.U)(31,0))
                                }.otherwise{
                                    cpu_resp_bits_data := Cat(0.U(32.W), DataArray(io.cpu.req.bits.addr(10, 3)* 2.U)(63,32))
                                }
                                
                            }.otherwise{
                                cpu_resp_bits_data := DataArray(io.cpu.req.bits.addr(10, 3) * 2.U)//在下一周期读出
                            }

                            // cpu_resp_bits_data := DataArray(index * 2.U)  

                            replace0 := replace.bitSet(index * 2.U, 0.B)
                            replace1 := replace.bitSet(index * 2.U + 1.U, 1.B)
                            replace := replace0 | replace1
                        }.otherwise{
                            when(inst_type){  //如果为读取指令
                                when(offset === 0.U){
                                    cpu_resp_bits_data := Cat(0.U(32.W), DataArray(io.cpu.req.bits.addr(10, 3)* 2.U + 1.U)(31,0))
                                }.otherwise{
                                    cpu_resp_bits_data := Cat(0.U(32.W), DataArray(io.cpu.req.bits.addr(10, 3)* 2.U + 1.U)(63,32))
                                }
                                
                            }.otherwise{
                                cpu_resp_bits_data := DataArray(io.cpu.req.bits.addr(10, 3) * 2.U + 1.U)//在下一周期读出
                            }

                            replace0 := replace.bitSet(index * 2.U, 1.B)
                            replace1 := replace.bitSet(index * 2.U + 1.U, 0.B)
                            replace := replace0 | replace1
                        }
                        cpu_resp_valid := 1.B

                    }.otherwise{ //若读不命中
                        state := s_Read
                    
                        //缓存
                        tag := io.cpu.req.bits.addr(31, 11)
                        index := io.cpu.req.bits.addr(10, 3)
                        offset := io.cpu.req.bits.addr(2, 0)

                        data := io.cpu.req.bits.data
                        addr := io.cpu.req.bits.addr
                        mask := io.cpu.req.bits.mask

                        inst_type := io.cpu.req.bits.inst_type
                    }
                }
            }
        }
        is(s_Read){ //未命中读
            //选择替代，00选0,01选0,10选1   --根据replace选择，若选择的是dirty,则需要写回
            replace_wire := Mux(replace(index*2.U), 1.B, 0.B)
            victim := replace_wire

            when(dirty(index*2.U + replace_wire)){ //如果选择的为dirty,需要写回
                state := s_rWriteBack

                axi_req_valid := 1.B
                axi_req_bits_addr := Cat(TagArray(index*2.U + replace_wire), index, 0.U(3.W))  //将dirty写回
                axi_req_bits_data := DataArray(index*2.U + replace_wire)
                axi_req_bits_rw := 0.B
            }.otherwise{ //如果选择的不是dirty,可以直接使用
                state := s_ReadAck
            
                axi_req_valid := 1.B
                axi_req_bits_addr := Cat(addr(31,3), 0.U(3.W)) //读出目标地址,8字节对齐
                axi_req_bits_rw := 1.B
            }
        }
        is(s_rWriteBack){
            axi_req_valid := 1.B //持续为1,直到axi通知写回成功
            axi_req_bits_addr := Cat(TagArray(index*2.U + victim), index, 0.U(3.W))  //将dirty写回
            axi_req_bits_data := DataArray(index*2.U + victim)
            axi_req_bits_rw := 0.B


            when(io.axi.resp.valid){  //写回成功,开始读
                state := s_ReadAck
                
                axi_req_valid := 1.B
                axi_req_bits_addr := Cat(addr(31,3), 0.U(3.W)) //读出目标地址,8字节对齐
                axi_req_bits_rw := 1.B
            }
        }
        is(s_ReadAck){
            axi_req_valid := 1.B //持续为1,直到axi通知读取成功
            axi_req_bits_addr := Cat(addr(31,3), 0.U(3.W)) //读出目标地址,8字节对齐
            axi_req_bits_rw := 1.B

            when(io.axi.resp.valid){
                state := s_Idle

                axi_req_valid := 0.B //取消仲裁竞争
                //获得数据后，更新
                when(victim){   //选择替换1
                    valid := valid.bitSet(index * 2.U + 1.U, 1.B)
                    dirty := dirty.bitSet(index * 2.U + 1.U, 0.B)
                    replace0 := replace.bitSet(index * 2.U, 1.B)
                    replace1 := replace.bitSet(index * 2.U + 1.U, 0.B)
                    replace := replace0 | replace1

                    TagArray(index * 2.U + 1.U) := tag
                    DataArray(index * 2.U + 1.U) := io.axi.resp.bits.data
                }.otherwise{  //选择替换0
                    valid := valid.bitSet(index * 2.U, 1.B)
                    dirty := dirty.bitSet(index * 2.U, 0.B)
                    replace0 := replace.bitSet(index * 2.U, 0.B)
                    replace1 := replace.bitSet(index * 2.U + 1.U, 1.B)
                    replace := replace0 | replace1
                    
                    TagArray(index * 2.U) := tag
                    DataArray(index * 2.U) := io.axi.resp.bits.data
                }

                //响应cpu
                cpu_resp_valid := 1.B
                when(inst_type){  //如果为读取指令

                    when(offset === 0.U){
                        cpu_resp_bits_data := Cat(0.U(32.W), io.axi.resp.bits.data(31,0))
                    }.otherwise{
                        cpu_resp_bits_data := Cat(0.U(32.W), io.axi.resp.bits.data(63,32))
                    }
                    
                }.otherwise{
                    cpu_resp_bits_data := io.axi.resp.bits.data
                }
                
            }
        }
        is(s_hitWrite){
            state := s_Idle

            when(whitNum){ //way1命中,改变replace，及dirty
                DataArray(index * 2.U + 1.U) := MuxCase(
                    0.U,
                    Seq( //如果编译器默认对齐
                        (mask === "b00000001".U) -> Cat(whitDataArray(63,8), data(7,0)),
                        (mask === "b00000011".U) -> Cat(whitDataArray(63,16), data(15,0)),
                        (mask === "b00001111".U) -> Cat(whitDataArray(63,32), data(31,0)),
                        (mask === "b11111111".U) -> data
                    )
                )

                dirty := dirty.bitSet(index * 2.U + 1.U, 1.B)
                replace0 := replace.bitSet(index * 2.U, 1.B)
                replace1 := replace.bitSet(index * 2.U + 1.U, 0.B)
                replace := replace0 | replace1

            }.otherwise{ //way0命中
                DataArray(index * 2.U) := MuxCase(
                    0.U,
                    Seq( //如果编译器默认对齐
                        (mask === "b00000001".U) -> Cat(whitDataArray(63,8), data(7,0)),
                        (mask === "b00000011".U) -> Cat(whitDataArray(63,16), data(15,0)),
                        (mask === "b00001111".U) -> Cat(whitDataArray(63,32), data(31,0)),
                        (mask === "b11111111".U) -> data
                    )
                )

                dirty := dirty.bitSet(index * 2.U, 1.B)
                replace0 := replace.bitSet(index * 2.U, 0.B)
                replace1 := replace.bitSet(index * 2.U + 1.U, 1.B)
                replace := replace0 | replace1
            }


            cpu_resp_valid := 1.B            
        }
        is(s_Write){
            //选择替代，00选0,01选0,10选1   --根据replace选择，若选择的是dirty,则需要写回
            replace_wire := Mux(replace(index*2.U), 1.B, 0.B)
            victim := replace_wire

            when(dirty(index*2.U + replace_wire)){ //如果选择的为dirty,需要写回
                state := s_wWriteBack

                axi_req_valid := 1.B
                axi_req_bits_addr := Cat(TagArray(index*2.U + replace_wire), index, 0.U(3.W))  //写回dirty
                axi_req_bits_data := DataArray(index*2.U + replace_wire)
                axi_req_bits_rw := 0.B
            }.otherwise{ //如果选择的不是dirty,可以直接使用
                state := s_WriteAllocate
            
                axi_req_valid := 1.B
                axi_req_bits_addr := Cat(addr(31,3), 0.U(3.W)) //读出目标地址,8字节对齐
                axi_req_bits_rw := 1.B
            }
        }
        is(s_wWriteBack){
            axi_req_valid := 1.B //持续为1,直到axi通知写回成功
            axi_req_bits_addr := Cat(TagArray(index*2.U + victim), index, 0.U(3.W))
            axi_req_bits_data := DataArray(index*2.U + victim)
            axi_req_bits_rw := 0.B

            when(io.axi.resp.valid){
                state := s_WriteAllocate

                axi_req_valid := 1.B
                axi_req_bits_addr := Cat(addr(31,3), 0.U(3.W)) //读出目标地址,8字节对齐
                axi_req_bits_rw := 1.B
            }
        }
        is(s_WriteAllocate){ //写分配，并将cpu的data写入刚从ram读出的DataArray中

            axi_req_valid := 1.B //持续为1,直到axi通知读取成功
            axi_req_bits_addr := Cat(addr(31,3), 0.U(3.W)) //读出目标地址,8字节对齐
            axi_req_bits_rw := 1.B

            when(io.axi.resp.valid){
                state := s_Idle

                axi_req_valid := 0.B //取消仲裁竞争
                

                when(victim){
                    valid := valid.bitSet(index * 2.U + 1.U, 1.B)
                    dirty := dirty.bitSet(index * 2.U + 1.U, 1.B) //读出即写
                    replace0 := replace.bitSet(index * 2.U, 1.B)
                    replace1 := replace.bitSet(index * 2.U + 1.U, 0.B)
                    replace := replace0 | replace1

                    TagArray(index * 2.U + 1.U) := tag
                    DataArray(index * 2.U + 1.U) := MuxCase(
                        0.U,
                        Seq( //如果编译器默认对齐
                            (mask === "b00000001".U) -> Cat(io.axi.resp.bits.data(63,8), data(7,0)),
                            (mask === "b00000011".U) -> Cat(io.axi.resp.bits.data(63,16), data(15,0)),
                            (mask === "b00001111".U) -> Cat(io.axi.resp.bits.data(63,32), data(31,0)),
                            (mask === "b11111111".U) -> io.axi.resp.bits.data
                        )
                    )
                }.otherwise{
                    valid := valid.bitSet(index * 2.U, 1.B)
                    dirty := dirty.bitSet(index * 2.U, 1.B) //读出即写
                    replace0 := replace.bitSet(index * 2.U, 0.B)
                    replace1 := replace.bitSet(index * 2.U + 1.U, 1.B)
                    replace := replace0 | replace1

                    TagArray(index * 2.U) := tag
                    DataArray(index * 2.U) := MuxCase(
                        0.U,
                        Seq( //如果编译器默认对齐
                            (mask === "b00000001".U) -> Cat(io.axi.resp.bits.data(63,8), data(7,0)),
                            (mask === "b00000011".U) -> Cat(io.axi.resp.bits.data(63,16), data(15,0)),
                            (mask === "b00001111".U) -> Cat(io.axi.resp.bits.data(63,32), data(31,0)),
                            (mask === "b11111111".U) -> io.axi.resp.bits.data
                        )
                    )
                }
                cpu_resp_valid := 1.B
            }
        }
    }





    





  
}
