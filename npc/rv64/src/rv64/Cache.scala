//2-way 8-set 
//Cache_line:128 Byte
//Cache Memory Mapping:| Tag | Index |   Offset | --但是8字节对齐
//                       21      4          7  
//Tag Unit:|Valid|Replace|Tag|
//            1      2    21
//Get 4 Btye for each time


package rv64

import chisel3._
import chisel3.util._
import Define._
import firrtl.bitWidth



object CacheState { //有的会产生没必要的延迟周期，但是状态机更清晰
    val s_Idle :: s_Choose  :: s_WriteBack :: s_RefillReady :: s_Refill :: s_WriteAfterRefill :: Nil = Enum(6)
//                                               等待AR的周期
}

object Cache{
    val nWays = 4
    val nSets = 8
    val bBytes = 128 //Cacheline长度
    val bBits = bBytes << 3
    val blen = log2Ceil(bBytes) //offset位域7位
    val slen = log2Ceil(nSets) //3
    val tlen = ADDRWIDTH - slen - blen
    val nWords = bBits/X_LEN //16->一个Cacheline中包含16个Word
    val wBytes = X_LEN/8 
    val byteOffsetBits = log2Ceil(wBytes)
    val dataBeats = bBits / X_LEN
}

class CacheReq extends Bundle{  //来自CPU
    val addr = UInt(ADDRWIDTH.W)
    val data = UInt(X_LEN.W)
    val mask = UInt((X_LEN/8).W)
}

class CacheResp extends Bundle{ 
    val data = UInt(X_LEN.W)
}


class CacheIO extends Bundle{  //cpu<>cache
    val req = Flipped(ValidIO(new CacheReq))
    val resp = ValidIO(new CacheResp)
}

class CacheModuleIO extends Bundle{
    val cpu = new CacheIO   //cpu侧
    val axi = Flipped(new AXIMasterIO)    //仲裁器件侧

    val fccache = Output(new FcCacheIO)
}

import Cache._
import CacheState._

class Cache extends Module{
    val io = IO(new CacheModuleIO)

    //Counters
    val r_count = RegInit(0.U(4.W))
    val w_count = RegInit(0.U(4.W))

    //cache_state
    val state = RegInit(s_Idle)

    val is_idle = state === s_Idle
    val is_alloc = state === s_Refill && r_count===15.U
    val is_alloc_reg = RegNext(is_alloc)


    //缓存地址
    val addr_reg = Reg(chiselTypeOf(io.cpu.req.bits.addr))
    val cpu_data = Reg(chiselTypeOf(io.cpu.req.bits.data))
    val cpu_mask = Reg(chiselTypeOf(io.cpu.req.bits.mask))

    val addr_buf = RegInit(0.U(ADDRWIDTH.W))
    val rw_buf = RegInit(0.B)
    //标记项
    val valid = RegInit(0.U((nWays*nSets).W))
    val dirty = RegInit(0.U((nWays*nSets).W))

    val replace = Mem(nWays*nSets, UInt(2.W)) //LRU算法，11 10 01 00
    val rep0 = Wire(UInt(2.W))
    val rep1 = Wire(UInt(2.W))
    val rep2 = Wire(UInt(2.W))
    val rep3 = Wire(UInt(2.W))

    val victim = RegInit(0.U(2.W))
    dontTouch(victim)
    rep0 := 0.U
    rep1 := 0.U
    rep2 := 0.U
    rep3 := 0.U


    val TagArray = Mem(nSets*nWays, UInt(tlen.W))
    val DataArray = Seq.fill(nWords)(SyncReadMem(nWays*nSets, Vec(wBytes, UInt(8.W))))

    //控制信号
    val hit0 = Wire(Bool())
    val hit1 = Wire(Bool())
    val hit2 = Wire(Bool())
    val hit3 = Wire(Bool())
    val hit0_reg = RegNext(hit0)
    val hit1_reg = RegNext(hit1)
    val hit2_reg = RegNext(hit2)
    val hit3_reg = RegNext(hit3)


    val hit = Wire(Bool())
    dontTouch(hit0)
    dontTouch(hit1)
    dontTouch(hit2)
    dontTouch(hit3)

    val w_req = io.cpu.req.bits.mask.orR
    val wen = (is_idle && hit && w_req) || (is_alloc) || (is_alloc_reg && cpu_mask.orR)
    // 1.写命中
    // 2.从AXI读出，一定需要写
    // 3.Refill结束后，写入数据
    
    val ren = !wen && (is_idle && hit && !w_req)
    // 1.保证单端口
    // 2.读命中

    val ren_reg = RegNext(ren)
    
    /*
    1.idle需要读出:
        对于Tag,idle就需要申请同步读出,在ReadCache或WriteCache判断是否命中
        对于Data,idle就需要申请同步读出,用于在命中时获取或修改数据
    2.
    */

    val addr = io.cpu.req.bits.addr
    val idx = addr(slen+blen-1,blen)
    val tag = addr(ADDRWIDTH-1,slen+blen)

    val tag_reg = addr_reg(ADDRWIDTH-1,slen+blen)  //需要缓存吗
    val idx_reg = addr_reg(slen+blen-1, blen)
    val off_reg = addr_reg(blen-1, byteOffsetBits) //选择某个XLEN,某个8Byte对齐的数据
    dontTouch(addr)
    dontTouch(idx)
    dontTouch(tag)
    dontTouch(tag_reg)
    dontTouch(idx_reg)
    dontTouch(off_reg)

    val way0 = nWays.U*idx
    val way1 = nWays.U*idx + 1.U
    val way2 = nWays.U*idx + 2.U
    val way3 = nWays.U*idx + 3.U
    val way0_buf = nWays.U*idx_reg   //需要吗
    val way1_buf = nWays.U*idx_reg + 1.U
    val way2_buf = nWays.U*idx_reg + 2.U
    val way3_buf = nWays.U*idx_reg + 3.U

    dontTouch(way0)
    dontTouch(way1)
    dontTouch(way2)
    dontTouch(way3)
    val rtag0 = TagArray(way0)
    val rtag1 = TagArray(way1)
    val rtag2 = TagArray(way0)
    val rtag3 = TagArray(way1)
    dontTouch(rtag0)
    dontTouch(rtag1)
    dontTouch(rtag2)
    dontTouch(rtag3)


    val rdata0 = Cat((DataArray.map(_.read(way0,ren).asUInt)).reverse) //读出
    val rdata1 = Cat((DataArray.map(_.read(way1,ren).asUInt)).reverse) //读出
    val rdata2 = Cat((DataArray.map(_.read(way2,ren).asUInt)).reverse) //读出
    val rdata3 = Cat((DataArray.map(_.read(way3,ren).asUInt)).reverse) //读出
    val rdata0_buf = RegEnable(rdata0, ren_reg)
    val rdata1_buf = RegEnable(rdata1, ren_reg)
    val rdata2_buf = RegEnable(rdata2, ren_reg)
    val rdata3_buf = RegEnable(rdata3, ren_reg)
    //refill
    val refill_buffer = Reg(Vec(dataBeats, UInt(X_LEN.W)))

    val read = Mux(is_alloc_reg,   //已经全部Refill到Cacheline,且Refill_buf中是完整的数据 //读不命中
        refill_buffer.asUInt,
        Mux(ren_reg,   
            MuxCase(0.B,  //读命中
                Seq(
                    (hit0_reg) -> rdata0,
                    (hit1_reg) -> rdata1,
                    (hit2_reg) -> rdata2,
                    (hit3_reg) -> rdata3,
                )
            ),
            MuxLookup(victim, 0.U,  //写回的数据
                Seq(
                    0.U -> rdata0_buf,
                    1.U -> rdata1_buf,
                    2.U -> rdata2_buf,
                    3.U -> rdata3_buf,
                )
            )
        )
    )

    //立即判断
    hit0 := valid(way0) && rtag0 === tag
    hit1 := valid(way1) && rtag1 === tag
    hit2 := valid(way2) && rtag2 === tag
    hit3 := valid(way3) && rtag3 === tag

    hit := hit0 | hit1 | hit2 | hit3


    //读出
    io.cpu.resp.bits.data := Mux(
        is_alloc_reg, refill_buffer(off_reg),
        VecInit.tabulate(nWords)(i => read((i + 1) * X_LEN - 1, i * X_LEN))(off_reg)  //命中
    )
        
    val hit_reg = RegNext(hit)
    io.cpu.resp.valid := hit_reg || (is_alloc_reg && !cpu_mask.orR) || (is_idle && cpu_mask.orR)
    //1.读命中或写命中
    //2.Refill后无需写入
    //3.Refill后需要写入
    


    when(is_idle & io.cpu.req.valid){ //1.未命中
        addr_reg := addr                 
        cpu_data := io.cpu.req.bits.data
        cpu_mask := io.cpu.req.bits.mask

        victim := MuxCase(0.U,  //优先选0   太复杂
            Seq(
                (replace(way0) === 3.U) -> 0.U,
                (replace(way1) === 3.U) -> 1.U,
                (replace(way2) === 3.U) -> 2.U,
                (replace(way3) === 3.U) -> 3.U,
                (replace(way0) === 2.U) -> 0.U,
                (replace(way1) === 2.U) -> 1.U,
                (replace(way2) === 2.U) -> 2.U,
                (replace(way3) === 2.U) -> 3.U,
                (replace(way0) === 1.U) -> 0.U,
                (replace(way1) === 1.U) -> 1.U,
                (replace(way2) === 1.U) -> 2.U,
                (replace(way3) === 1.U) -> 3.U
            )
        )
        


    }.elsewhen(!io.cpu.req.valid & is_idle){  //复位
        addr_reg := 0.U                                 
        cpu_data := 0.U
        cpu_mask := 0.U
    }

    //在写回阶段判定
    val dirty0 = valid(way0_buf) && dirty(way0_buf)
    val dirty1 = valid(way1_buf) && dirty(way1_buf)
    val dirty2 = valid(way2_buf) && dirty(way2_buf)
    val dirty3 = valid(way3_buf) && dirty(way3_buf)


    //写入-----------
    val wtag = Wire(UInt(tlen.W))
    wtag := Mux(is_idle, tag, tag_reg)

    val wmask = Mux(
        is_idle, io.cpu.req.bits.mask.asSInt, //写命中
        Mux(
            is_alloc, (-1).S,   //从AXI读取完所有数据
            (cpu_mask << Cat(off_reg, 0.U(byteOffsetBits.W))).zext //写不命中，写入cache //off_reg用于选择Cacheline中某个对齐的8Byte
        )
    )
    
    dontTouch(wmask)

    val wdata = Mux(
        is_idle, Fill(nWords, io.cpu.req.bits.mask),  //写命中
        Mux(
            is_alloc, Cat(io.axi.resp.bits.data, Cat(refill_buffer.init.reverse)),  //注意init.reverse
            Fill(nWords, cpu_data)   //写不命中，写入Cache
        )
    )

    when(wen){
        when(hit){//1.写命中，不涉及写valid   2.写不命中，alloc后，写入

            //dirty---------------
            dirty := MuxCase(0.B, 
                Seq(
                    (hit0) -> dirty.bitSet(way0, 1.B),
                    (hit1) -> dirty.bitSet(way1, 1.B),
                    (hit2) -> dirty.bitSet(way2, 1.B),
                    (hit3) -> dirty.bitSet(way3, 1.B), 
                )
            )
            //-----------------replace
            replace(way0) := Mux(hit0, 0.U, replace(way0) + 1.U)  //可以这么写吗
            replace(way1) := Mux(hit1, 0.U, replace(way1) + 1.U)
            replace(way2) := Mux(hit2, 0.U, replace(way2) + 1.U)
            replace(way3) := Mux(hit3, 0.U, replace(way3) + 1.U)
            //-----------data
            val choose_dataway = MuxCase(0.U,
                Seq(
                    (hit0) -> way0,
                    (hit1) -> way1,
                    (hit2) -> way2,
                    (hit3) -> way3, 
                )
            )

            DataArray.zipWithIndex.foreach{
                case(mem, i) => 
                    val data = VecInit.tabulate(wBytes)(k => wdata(i * X_LEN + (k + 1) * 8 - 1, i * X_LEN + k * 8))
                    mem.write(choose_dataway, data, wmask((i + 1) * wBytes - 1, i * wBytes).asBools)
            }
        }.otherwise{  //alloc
            //--------------valid
            valid := MuxLookup(victim, valid,
                Seq(
                    0.U -> valid.bitSet(way0_buf, 1.B),
                    1.U -> valid.bitSet(way1_buf, 1.B),
                    2.U -> valid.bitSet(way2_buf, 1.B),
                    3.U -> valid.bitSet(way3_buf, 1.B),
                )
            )
            //--------------dirty
            dirty := MuxLookup(victim, dirty,
                Seq(
                    0.U -> valid.bitSet(way0_buf, 0.B),
                    1.U -> valid.bitSet(way1_buf, 0.B),
                    2.U -> valid.bitSet(way2_buf, 0.B),
                    3.U -> valid.bitSet(way3_buf, 0.B),
                )
            )
            //--------------replace
            replace(way0_buf) := Mux(victim === 0.U, 0.U, replace(way0_buf) + 1.U)  //可以这么写吗
            replace(way1_buf) := Mux(victim === 1.U, 0.U, replace(way1_buf) + 1.U)
            replace(way2_buf) := Mux(victim === 2.U, 0.U, replace(way2_buf) + 1.U)
            replace(way3_buf) := Mux(victim === 3.U, 0.U, replace(way3_buf) + 1.U)
            //-------------Tag
            val choose_tagway = MuxLookup(0.U, victim,
                Seq(
                    0.U -> way0_buf,
                    1.U -> way1_buf,
                    2.U -> way2_buf,
                    3.U -> way3_buf,
                )
            )
            TagArray(choose_tagway) := tag_reg
            //------------data
            val choose_dataway = MuxLookup(0.U, victim,
                Seq(
                    0.U -> way0_buf,
                    1.U -> way1_buf,
                    2.U -> way2_buf,
                    3.U -> way3_buf,
                )
            )
            DataArray.zipWithIndex.foreach{
                case(mem, i) => 
                    val data = VecInit.tabulate(wBytes)(k => wdata(i * X_LEN + (k + 1) * 8 - 1, i * X_LEN + k * 8))
                    mem.write(choose_dataway, data, wmask((i + 1) * wBytes - 1, i * wBytes).asBools)
            }
        }
    }



    //-------------------------------------------------------------------

    //顶层
    io.axi.req.valid := 0.B
    io.axi.req.bits.rw := 0.B
    io.axi.req.bits.data := VecInit.tabulate(dataBeats)(i => read((i+1)*X_LEN-1, i*X_LEN))(w_count)
    io.axi.req.bits.addr := 0.U
    io.axi.req.bits.mask := "b11111111".U

    io.fccache.hit := hit
    io.fccache.mask := io.cpu.req.bits.mask
    io.fccache.cpu_valid := io.cpu.resp.valid
    io.fccache.req := io.cpu.req.valid
    io.fccache.state := state
    io.fccache.axi_valid := is_alloc_reg


    switch(state){
        is(s_Idle){  //判断读写是否hit
            when(io.cpu.req.valid){
                when(hit){
                    state := s_Idle
                }.otherwise{
                    state := s_Choose
                }
            }
        }
        is(s_Choose){  //判断是否需要写回
            //未命中
            io.axi.req.valid := 1.B
            
            state := MuxLookup(victim, s_Idle,   //victim为脏时需要写回
                Seq(
                    0.U -> Mux(dirty0, s_WriteBack, s_RefillReady),
                    1.U -> Mux(dirty1, s_WriteBack, s_RefillReady),
                    2.U -> Mux(dirty2, s_WriteBack, s_RefillReady),
                    3.U -> Mux(dirty3, s_WriteBack, s_RefillReady),
                )
            )

            io.axi.req.bits.rw := MuxLookup(victim, s_Idle,  
                Seq(
                    0.U -> Mux(dirty0, 0.B, 1.B),
                    1.U -> Mux(dirty1, 0.B, 1.B),
                    2.U -> Mux(dirty2, 0.B, 1.B),
                    3.U -> Mux(dirty3, 0.B, 1.B),
                )
            )

            io.axi.req.bits.addr := MuxLookup(victim, s_Idle,  
                Seq(
                    0.U -> Mux(dirty0, Cat(rtag0, idx_reg) << blen.U  , Cat(tag_reg, idx_reg) << blen.U),
                    1.U -> Mux(dirty1, Cat(rtag1, idx_reg) << blen.U  , Cat(tag_reg, idx_reg) << blen.U),
                    2.U -> Mux(dirty2, Cat(rtag2, idx_reg) << blen.U  , Cat(tag_reg, idx_reg) << blen.U),
                    3.U -> Mux(dirty3, Cat(rtag3, idx_reg) << blen.U  , Cat(tag_reg, idx_reg) << blen.U),
                )
            )

            addr_buf := io.axi.req.bits.addr
            rw_buf := io.axi.req.bits.rw
        }
        is(s_WriteBack){
            io.axi.req.valid := 1.B //写回的最后一周期仍然为高,进入refill写地址

            when(io.axi.resp.bits.choose){
                when(io.axi.resp.valid){
                    w_count := 0.U
                    state := s_RefillReady
                    io.axi.req.bits.addr := (Cat(tag_reg, idx_reg) << blen.U).asUInt
                    io.axi.req.bits.rw := 1.B

                    addr_buf := io.axi.req.bits.addr
                    rw_buf := io.axi.req.bits.rw
                }.otherwise{
                    when(w_count === 15.U){
                        w_count := w_count
                    }.otherwise{
                        w_count := w_count + 1.U
                    }
                }
            }.otherwise{ //可能没选上
                io.axi.req.bits.addr := addr_buf
                io.axi.req.bits.rw := rw_buf
            }
        }
        is(s_RefillReady){
            when(io.axi.resp.bits.choose){
                state := s_Refill
            }.otherwise{
                io.axi.req.valid := 1.B
                io.axi.req.bits.addr := addr_buf
                io.axi.req.bits.rw := rw_buf
            }
            
        }
        is(s_Refill){
            when(io.axi.resp.bits.choose){
                when(io.axi.resp.valid){
                    io.axi.req.valid := 0.B
                    r_count := 0.U
                    refill_buffer(15) := io.axi.resp.bits.data
                    state := Mux(cpu_mask.orR, s_WriteAfterRefill, s_Idle)
                }.otherwise{
                    r_count := r_count + 1.U
                    refill_buffer(r_count) := io.axi.resp.bits.data
                }
            }.otherwise{
                state := state
                r_count := r_count
            }
        }
        is(s_WriteAfterRefill){
            state := s_Idle
        }

    }
}