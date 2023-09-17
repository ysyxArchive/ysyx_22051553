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
import os.group
import java.awt.BufferCapabilities.FlipContents


object CacheState { //有的会产生没必要的延迟周期，但是状态机更清晰
    val s_Idle :: s_ReadCache :: s_WriteCache :: s_Write :: s_wWriteBack :: s_WriteAllocate ::  s_Read ::   s_rWriteBack ::      s_ReadAck :: Nil = Enum(9)
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
    val addr = UInt(ADDRWIDTH.W)
    val data = UInt(X_LEN.W)
    val mask = UInt((X_LEN/8).W)
}

class CacheResp extends Bundle{ //来自总线
    val data = UInt(X_LEN.W)
}


class CacheIO extends Bundle{
    val req = Flipped(ValidIO(new CacheReq))
    val resp = ValidIO(new CacheResp)
}

class AxiCacheReq extends Bundle{
    val rw = Bool()  //0w-1r
    val addr = UInt(ADDRWIDTH.W)
    val data = UInt(X_LEN.W)
}

class AxiCacheResp extends Bundle{
    val data = UInt(X_LEN.W)
}

class AxiCacheIO extends Bundle{
    val req = ValidIO(new AxiCacheReq)
    val resp = Flipped(ValidIO(new AxiCacheResp))
}

class CacheModuleIO extends Bundle{
    val cpu = new CacheIO   //cpu侧
    val axi = new AxiCacheIO    //总线接口侧
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
    val DataArray = SyncReadMem(setnum*2, UInt(bytenum.W))
    //命中
    val hit = Wire(UInt(2.W))  //2路
    // hit(0) := (TagArray(index * 2.U) === tag) && valid(index * 2.U)
    // hit(1) := (TagArray(index * 2.U + 1.U) === tag) && valid(index * 2.U + 1.U)

    hit := Cat((TagArray(index * 2.U + 1.U) === tag) && valid(index * 2.U + 1.U), (TagArray(index * 2.U) === tag) && valid(index * 2.U))

    val replace_wire = Wire(Bool())
    val victim = Reg(Bool()) //未命中时，选择victim
 
    //缓存地址和数据
    val addr = RegInit(0.U(ADDRWIDTH.W))
    val data = RegInit(0.U(X_LEN.W))
    val mask = RegInit(0.U((X_LEN/8).W))



    //FSM
    switch(state){
        is(s_Idle){
            //重置
            io.cpu.resp.valid := 0.B
            io.cpu.resp.bits.data := 0.U
            victim := 0.U
            
            
            when(io.cpu.req.valid){
                state := Mux(io.cpu.req.bits.mask.orR, s_WriteCache, s_ReadCache)
                
                //缓存
                tag := io.cpu.req.bits.addr(31, 11)
                index := io.cpu.req.bits.addr(10, 3)
                offset := io.cpu.req.bits.addr(2, 0)

                data := io.cpu.req.bits.data
                addr := io.cpu.req.bits.addr
                mask := io.cpu.req.bits.mask
            }
        }
        is(s_ReadCache){
            when(hit.orR){
                state := s_Idle

                when(hit(0)){   //读命中后改变replace
                    io.cpu.resp.bits.data := DataArray(index * 2.U)
                    replace(index * 2.U) := 0.B
                    replace(index * 2.U + 1.U) := 1.B
                }.otherwise{
                    io.cpu.resp.bits.data := DataArray(index * 2.U + 1.U)
                    replace(index * 2.U) := 1.B
                    replace(index * 2.U + 1.U) := 0.B
                }
                io.cpu.resp.valid := 1.B
            }.otherwise{
                state := s_Read
            }
        }
        is(s_Read){ //未命中读
            
            //选择替代，00选0,01选0,10选1   --根据replace选择，若选择的是dirty,则需要写回
            replace_wire := Mux(replace(index*2.U), 1.B, 0.B)
            victim := replace_wire

            when(dirty(index*2.U + replace_wire)){ //如果选择的为dirty,需要写回
                state := s_rWriteBack

                io.axi.req.valid := 1.B
                io.axi.req.bits.addr := Cat(TagArray(index*2.U + replace_wire), index, 0.U(3.W))
                io.axi.req.bits.data := DataArray(index*2.U + replace_wire)
                io.axi.req.bits.rw := 0.B
            }.otherwise{ //如果选择的不是dirty,可以直接使用
                state := s_ReadAck
            
                io.axi.req.valid := 1.B
                io.axi.req.bits.addr := addr
                io.axi.req.bits.rw := 1.B
            }
        }
        is(s_rWriteBack){
            when(io.axi.resp.valid){  //写回成功
                state := s_ReadAck
                
                io.axi.req.valid := 1.B
                io.axi.req.bits.addr := addr
                io.axi.req.bits.rw := 1.B
            }
        }
        is(s_ReadAck){
            when(io.axi.resp.valid){
                state := s_Idle

                io.axi.req.valid := 0.B //取消仲裁竞争

                //获得数据后，更新
                when(victim){   //选择替换1
                    valid(index * 2.U + 1.U) := 1.B
                    dirty(index * 2.U + 1.U) := 0.B
                    replace(index * 2.U) := 1.B
                    replace(index * 2.U + 1.U) := 0.B
                    

                    TagArray(index * 2.U + 1.U) := tag
                    DataArray(index * 2.U + 1.U) := io.axi.resp.bits.data

                }.otherwise{  //选择替换0
                    valid(index * 2.U) := 1.B
                    dirty(index * 2.U) := 0.B
                    replace(index * 2.U) := 0.B
                    replace(index * 2.U + 1.U) := 1.B
                    

                    TagArray(index * 2.U) := tag
                    DataArray(index * 2.U) := io.axi.resp.bits.data
                }

                //响应cpu
                io.cpu.resp.valid := 1.B
                io.cpu.resp.bits.data := io.axi.resp.bits.data
            }
        }
        is(s_WriteCache){
            when(hit.orR){
                state := s_Idle
                when(hit(0)){   //写命中后改变replace，及dirty
                    DataArray(index * 2.U) := data
                    
                    dirty(index * 2.U) := 1.B
                    replace(index * 2.U) := 0.B
                    replace(index * 2.U + 1.U) := 1.B
                }.otherwise{
                    DataArray(index * 2.U + 1.U) := data

                    dirty(index * 2.U + 1.U) := 1.B
                    replace(index * 2.U) := 1.B
                    replace(index * 2.U + 1.U) := 0.B
                }
            }.otherwise{
                state := s_Write
            }
        }
        is(s_Write){
            //选择替代，00选0,01选0,10选1   --根据replace选择，若选择的是dirty,则需要写回
            replace_wire := Mux(replace(index*2.U), 1.B, 0.B)
            victim := replace_wire

            when(dirty(index*2.U + replace_wire)){ //如果选择的为dirty,需要写回
                state := s_wWriteBack

                io.axi.req.valid := 1.B
                io.axi.req.bits.addr := Cat(TagArray(index*2.U + replace_wire), index, 0.U(3.W))
                io.axi.req.bits.data := DataArray(index*2.U + replace_wire)
                io.axi.req.bits.rw := 0.B
            }.otherwise{ //如果选择的不是dirty,可以直接使用
                state := s_WriteAllocate
            
                io.axi.req.valid := 1.B
                io.axi.req.bits.addr := addr
                io.axi.req.bits.rw := 1.B
            }
        }
        is(s_wWriteBack){
            when(io.axi.resp.valid){
                state := s_WriteAllocate

                io.axi.req.valid := 1.B
                io.axi.req.bits.addr := addr
                io.axi.req.bits.rw := 1.B
            }
        }
        is(s_WriteAllocate){ //写分配，并将cpu的data写入刚从ram读出的DataArray中
            when(io.axi.resp.valid){
                state := s_Idle

                io.axi.req.valid := 0.B

                when(victim){
                    valid(index * 2.U + 1.U) := 1.B
                    dirty(index * 2.U + 1.U) := 1.B  //读出即写
                    replace(index * 2.U) := 1.B
                    replace(index * 2.U + 1.U) := 0.B

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
                    valid(index * 2.U) := 1.B
                    dirty(index * 2.U) := 1.B  //读出即写
                    replace(index * 2.U) := 0.B
                    replace(index * 2.U + 1.U) := 1.B

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
            }
        }
    }





    





  
}
