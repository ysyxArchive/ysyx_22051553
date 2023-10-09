//2-way 8-set 
//Cache_line:128 Byte
//Cache Memory Mapping:| Tag | Index |   Offset | --但是8字节对齐
//                       21      4          7  
//Tag Unit:|Valid|Replace|Tag|
//            1      1    25
//Get 4 Btye for each time


package rv64

import chisel3._
import chisel3.util._
import Define._
import firrtl.bitWidth



object CacheState { //有的会产生没必要的延迟周期，但是状态机更清晰
    val s_Idle :: s_ReadCache :: s_WriteCache :: s_WriteBack :: s_RefillReady :: s_Refill :: Nil = Enum(6)
//                                                              等待AR的周期
}

object Cache{
    val nWays = 2
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
    // val inst_type = Bool() //对于Icache,每次都读4字节，对于普通读取，每次都读8字节(XLEN)
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
    val is_read = state === s_ReadCache
    val is_write = state === s_WriteCache
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
    val replace = RegInit(0.U((nWays*nSets).W))  //LRU算法，0新1旧
    val rep0 = Wire(UInt((nWays*nSets).W))
    val rep1 = Wire(UInt((nWays*nSets).W))
    rep0 := 0.U
    rep1 := 0.U
    
    val TagArray = SyncReadMem(nSets*nWays, UInt(tlen.W))
    val DataArray = Seq.fill(nWords)(SyncReadMem(nWays*nSets, Vec(wBytes, UInt(8.W))))

    //控制信号
    val hit0 = Wire(Bool())
    val hit1 = Wire(Bool())
    dontTouch(hit0)
    dontTouch(hit1)
    val wen = is_write && (hit0 || hit1) || is_alloc
    /*
    1.写命中,需要写入
    2.写分配最后一周期,需要写入
    */
    val ren = !wen && (is_idle || is_read) && io.cpu.req.valid   //cpu申请读出 Tag和Data
    val ren_reg = RegNext(ren)
    
    /*
    1.idle需要读出:
        对于Tag,idle就需要申请同步读出,在ReadCache或WriteCache判断是否命中
        对于Data,idle就需要申请同步读出,用于在命中时获取或修改数据
    2.
    */

    val addr = io.cpu.req.bits.addr
    val idx = addr(slen+blen-1,blen)
    val tag_reg = addr_reg(ADDRWIDTH-1,slen+blen)
    val idx_reg = addr_reg(slen+blen-1, blen)
    val off_reg = addr_reg(blen-1, byteOffsetBits) //选择某个XLEN,某个8Byte对齐的数据
    dontTouch(addr)
    dontTouch(idx)
    dontTouch(tag_reg)
    dontTouch(idx_reg)
    dontTouch(off_reg)


    val way0 = nWays.U*idx
    val way1 = nWays.U*idx + 1.U
    val way0_buf = nWays.U*idx_reg
    val way1_buf = nWays.U*idx_reg + 1.U
    dontTouch(way0)
    dontTouch(way1)
    val rtag0 = TagArray.read(way0,ren)
    val rtag1 = TagArray.read(way1,ren)
    dontTouch(rtag0)
    dontTouch(rtag1)
    val rdata0 = Cat((DataArray.map(_.read(way0,ren).asUInt)).reverse) //读出
    val rdata1 = Cat((DataArray.map(_.read(way1,ren).asUInt)).reverse) //读出
    val rdata0_buf = RegEnable(rdata0, ren_reg)
    val rdata1_buf = RegEnable(rdata1, ren_reg)
    val refill_buffer = Reg(Vec(dataBeats, UInt(X_LEN.W)))
    
    val read = Mux(is_alloc_reg,   //已经全部Refill到Cacheline,且Refill_buf中是完整的数据
        refill_buffer.asUInt,
        Mux(ren_reg, //ren_reg有效时,rdata有效,ren_reg无效时,rdata已经存入rdata_buf中
            Mux(rtag0 === tag_reg, rdata0, rdata1),
            Mux(rtag0 === tag_reg, rdata0_buf, rdata1_buf)
        )
    )
        
    hit0 := valid(way0_buf) && rtag0 === tag_reg
    hit1 := valid(way1_buf) && rtag1 === tag_reg

    //读出
    io.cpu.resp.bits.data := VecInit.tabulate(nWords)(i => read((i + 1) * X_LEN - 1, i * X_LEN))(off_reg)
    io.cpu.resp.valid := (hit0 || hit1) || is_alloc_reg && !cpu_mask.orR
    /*
    1.读命中
    2.写命中
    3.写分配完成
    */
    when(io.cpu.req.valid){
        addr_reg := addr
        cpu_data := io.cpu.req.bits.data
        cpu_mask := io.cpu.req.bits.mask
    }


    val dirty0 = valid(way0_buf) && dirty(way0_buf)
    val dirty1 = valid(way1_buf) && dirty(way1_buf)
    //选择替代，00选0,01选0,10选1   --根据replace选择，若选择的是dirty,则需要写回
    val replace_wire = Mux(replace(way1_buf), 1.B, 0.B)


    //写入-----------
    val wtag = Wire(UInt(tlen.W))
    wtag := tag_reg

    
    val wmask = Mux(!is_alloc, (cpu_mask << Cat(off_reg, 0.U(byteOffsetBits.W))).zext, (-1).S)  //off_reg用于选择Cacheline中某个对齐的8Byte
    val wdata = Mux(
        !is_alloc, //is_alloc为0->写命中, is_alloc为1->写分配
        Fill(nWords, cpu_data),
        Cat(io.axi.resp.bits.data, Cat(refill_buffer.init.reverse))
    )

    when(wen){
        when(hit0 | hit1){ //命中就不涉及写valid等
            when(hit0){
                rep0 := replace.bitSet(way0_buf, 0.B)
                rep1 := replace.bitSet(way1_buf, 1.B)
                replace := rep0 | rep1

                DataArray.zipWithIndex.foreach{
                case(mem, i) =>
                    val data = VecInit.tabulate(wBytes)(k => wdata(i * X_LEN + (k + 1) * 8 - 1, i * X_LEN + k * 8))
                    mem.write(way0_buf, data, wmask((i + 1) * wBytes - 1, i * wBytes).asBools)
                }
            }.otherwise{
                rep0 := replace.bitSet(way0_buf, 1.B)
                rep1 := replace.bitSet(way1_buf, 0.B)
                replace := rep0 | rep1

                DataArray.zipWithIndex.foreach{
                case(mem, i) =>
                    val data = VecInit.tabulate(wBytes)(k => wdata(i * X_LEN + (k + 1) * 8 - 1, i * X_LEN + k * 8))
                    mem.write(way1_buf, data, wmask((i + 1) * wBytes - 1, i * wBytes).asBools)
                }
            }
        }.otherwise{

            when(!replace_wire){
                valid := valid.bitSet(way0_buf, 1.B)
                dirty := dirty.bitSet(way0_buf, !is_alloc) //写命中为脏,写分配为不脏

                rep0 := replace.bitSet(way0_buf, 0.B)
                rep1 := replace.bitSet(way1_buf, 1.B)
                replace := rep0 | rep1

                when(is_alloc){
                    TagArray.write(way0_buf, tag_reg)
                }
                DataArray.zipWithIndex.foreach{
                    case(mem, i) =>
                        val data = VecInit.tabulate(wBytes)(k => wdata(i * X_LEN + (k + 1) * 8 - 1, i * X_LEN + k * 8))
                        mem.write(way0_buf, data, wmask((i + 1) * wBytes - 1, i * wBytes).asBools)
                }
                /*
                对DataArray取索引,得到nWords个mem,每个mem都是nSets*nWays个wBytes,
                应该写的位置是way0

                val data = VecInit.tabulate(wBytes)(k => wdata(i * X_LEN + (k + 1) * 8 - 1, i * X_LEN + k * 8)) //字节序列,组成XLEN长度
                i=0时,即nWords为0,取第0个XLEN(8字节对齐数据),
                k从0增长到wBytes-1,
                k=0时,data(0)为wdata(7,0);k=1时,data(1)为wdata(15,8)
                i=1时,即nWords为1,取第1个XLEN(8字节对齐数据),
                k从0增长到wBytes-1,
                k=0时,data(0)为wdata(71,64);k=1时,data(1)为wdata(79,72)

                mem.write(way0, data, wmask((i + 1) * wBytes - 1, i * wBytes).asBools())
                选择way0,即对应的way中的set,写data(8字节),mask为wmask((i + 1) * wBytes - 1, i * wBytes).asBools()

                对于is_alloc,mask全为1,即Cacheline全部需要写
                对于写命中,mask为cpu_mask << Cat(off_reg, 0.U(byteOffsetBits.W)),
                例:cpu_mask为0000_0001 off_reg(选择某个XLEN)为1 ->(off_reg为1时,需要写(127,64))
                则,wmask为1 << 1000即为8,即写第8字节(71,64)
                */
            }.otherwise{
                valid := valid.bitSet(way1_buf, 1.B)
                dirty := dirty.bitSet(way1_buf, !is_alloc) //写命中为脏,写分配为不脏

                rep0 := replace.bitSet(way0_buf, 1.B)
                rep1 := replace.bitSet(way1_buf, 0.B)
                replace := rep0 | rep1

                when(is_alloc){
                    TagArray.write(way1_buf, tag_reg)
                }
                DataArray.zipWithIndex.foreach{
                    case(mem, i) =>
                        val data = VecInit.tabulate(wBytes)(k => wdata(i * X_LEN + (k + 1) * 8 - 1, i * X_LEN + k * 8))
                        mem.write(way1_buf, data, wmask((i + 1) * wBytes - 1, i * wBytes).asBools)
                }
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

    io.fccache.hit := hit0 | hit1
    io.fccache.mask := io.cpu.req.bits.mask
    io.fccache.cpu_valid := io.cpu.resp.valid
    io.fccache.req := io.cpu.req.valid
    io.fccache.state := state
    io.fccache.axi_valid := is_alloc_reg


    switch(state){
        is(s_Idle){
            when(io.cpu.req.valid){
                state := Mux(io.cpu.req.bits.mask.orR, s_WriteCache, s_ReadCache)
            }
        }
        is(s_ReadCache){
            when(hit0 | hit1){ //命中即读出
                when(io.cpu.req.valid){  //应对连续申请
                    state := s_ReadCache
                }
                .otherwise{
                    state := s_Idle
                }
            }.otherwise{ //未命中
                io.axi.req.valid := 1.B
                
                when( (~replace_wire && dirty0) | (replace_wire && dirty1)){ //写回
                    state := s_WriteBack
                    io.axi.req.bits.rw := 0.B
                    when(dirty0){
                        io.axi.req.bits.addr := (Cat(rtag0, idx_reg) << blen.U).asUInt //tag0为原来way0中存在的有效tag
                    }.otherwise{
                        io.axi.req.bits.addr := (Cat(rtag1, idx_reg) << blen.U).asUInt
                    }
                    
                    addr_buf := io.axi.req.bits.addr
                    rw_buf := io.axi.req.bits.rw
                }.otherwise{ //直接读Ram
                    state := s_RefillReady
                    io.axi.req.bits.addr := (Cat(tag_reg, idx_reg) << blen.U).asUInt
                    io.axi.req.bits.rw := 1.B

                    addr_buf := io.axi.req.bits.addr
                    rw_buf := io.axi.req.bits.rw
                }
            }
        }
        is(s_WriteCache){
            when((hit0 | hit1) || is_alloc_reg){ //1.命中 2.刚从Refill转移(写分配)过来
                state := s_Idle
            }.otherwise{
                io.axi.req.valid := 1.B
                when( (~replace_wire && dirty0) | (replace_wire && dirty1)){ //写回
                    state := s_WriteBack
                    io.axi.req.bits.rw := 0.B
                    when(dirty0){
                        io.axi.req.bits.addr := (Cat(rtag0, idx_reg) << blen.U).asUInt //tag0为原来way0中存在的有效tag
                    }.otherwise{
                        io.axi.req.bits.addr := (Cat(rtag1, idx_reg) << blen.U).asUInt
                    }

                    addr_buf := io.axi.req.bits.addr
                    rw_buf := io.axi.req.bits.rw

                }.otherwise{ //直接读Ram
                    state := s_RefillReady
                    io.axi.req.bits.addr := (Cat(tag_reg, idx_reg) << blen.U).asUInt
                    io.axi.req.bits.rw := 1.B

                    addr_buf := io.axi.req.bits.addr
                    rw_buf := io.axi.req.bits.rw
                }
            }
        }
        is(s_WriteBack){
            when(io.axi.resp.bits.choose){
                when(io.axi.resp.valid){
                    w_count := 0.U
                    state := s_RefillReady
                    io.axi.req.bits.addr := (Cat(tag_reg, idx_reg) << blen.U).asUInt
                    io.axi.req.bits.rw := 1.B
                }.otherwise{
                    when(w_count === 15.U){
                        w_count := w_count
                    }.otherwise{
                        w_count := w_count + 1.U
                    }
                }
            }.otherwise{ //可能没选上
                io.axi.req.valid := 1.B
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
                    r_count := 0.U
                    refill_buffer(15) := io.axi.resp.bits.data
                    state := Mux(cpu_mask.orR, s_WriteCache, s_Idle)
                }.otherwise{
                    r_count := r_count + 1.U
                    refill_buffer(r_count) := io.axi.resp.bits.data
                }
            }.otherwise{
                state := state
                r_count := r_count
            }
            
        }

    }
}