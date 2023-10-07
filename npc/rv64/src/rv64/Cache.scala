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


object CacheState { //有的会产生没必要的延迟周期，但是状态机更清晰
    val s_Idle :: s_ReadCache :: s_WriteCache :: s_WriteBack :: s_Refill :: Nil = Enum(5)
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

    //cache_state
    val state = RegInit(s_Idle)

    val is_idle = state === s_Idle
    val is_read = state === s_ReadCache
    val is_write = state === s_WriteCache
    val is_alloc = state === s_Refill //
    val is_alloc_reg = RegNext(is_alloc)


    //缓存地址
    val addr_reg = Reg(chiselTypeOf(io.cpu.req.bits.addr))
    val cpu_data = Reg(chiselTypeOf(io.cpu.req.bits.data))
    val cpu_mask = Reg(chiselTypeOf(io.cpu.req.bits.mask))
    //标记项
    val valid = RegInit(0.U((nWays*nSets).W))
    val dirty = RegInit(0.U((nWays*nSets).W))
    val replace = RegInit(0.U((nWays*nSets).W))  //LRU算法，0新1旧
    
    val TagArray = SyncReadMem(nSets*nWays, UInt(tlen.W))
    val DataArray = Seq.fill(nWords)(SyncReadMem(nWays*nSets, Vec(wBytes, UInt(8.W))))


    //控制信号
    val hit0 = Wire(Bool())
    val hit1 = Wire(Bool())
    dontTouch(hit0)
    dontTouch(hit1)
    val wen = is_write && (hit0 || hit1 || is_alloc_reg) || is_alloc
    val ren = !wen && (is_idle || is_read) && io.cpu.req.valid   //cpu申请读出
    /*
    1.idle需要读出:
        对于Tag,idle就需要申请同步读出,在ReadCache或WriteCache判断是否命中
        对于Data,idle就需要申请同步读出,用于在命中时获取或修改数据
    2.
    */


    val ren_reg = RegNext(ren)

    val addr = io.cpu.req.bits.addr
    val idx = addr(slen+blen-1,blen)
    val tag_reg = addr_reg(ADDRWIDTH-1,slen+blen)
    val idx_reg = addr_reg(slen+blen-1, blen)
    val off_reg = addr_reg(blen-1, byteOffsetBits) //选择某个XLEN,某个8Byte对齐的数据


    val way0 = nWays.U*idx_reg      //idx_reg是缓存过的
    val way1 = nWays.U*idx_reg + 1.U
    
    
    val rtag0 = TagArray.read(way0,ren)
    val rtag1 = TagArray.read(way1,ren)
    val rdata0 = Cat((DataArray.map(_.read(way0,ren).asUInt)).reverse) //读出
    val rdata1 = Cat((DataArray.map(_.read(way1,ren).asUInt)).reverse) //读出
    val read = Mux(is_alloc && io.axi.resp.valid, //未命中
        io.axi.resp.bits.data,
        Mux(hit0,   //命中
            rdata0,
            rdata1
        )
    )
        
    hit0 := valid(way0) && rtag0 === tag_reg
    hit1 := valid(way1) && rtag1 === tag_reg

    //读出
    io.cpu.resp.bits.data := VecInit.tabulate(nWords)(i => read((i + 1) * X_LEN - 1, i * X_LEN))(off_reg)
    io.cpu.resp.valid := is_read && (hit0 || hit1) || is_alloc_reg && !cpu_mask.orR


    val dirty0 = valid(way0) && dirty(way0)
    val dirty1 = valid(way1) && dirty(way1)
    //选择替代，00选0,01选0,10选1   --根据replace选择，若选择的是dirty,则需要写回
    val replace_wire = Mux(replace(way1), 1.B, 0.B)


    //写入-----------
    val wtag = Wire(UInt(tlen.W))
    wtag := tag_reg

    
    val wmask = Mux(!is_alloc, (cpu_mask << Cat(off_reg, 0.U(byteOffsetBits.W))).zext, (-1).S)  //off_reg用于选择Cacheline中某个对齐的8Byte
    val wdata = Mux(
        !is_alloc, //is_alloc为0->写命中, is_alloc为1->写分配
        Fill(nWords, cpu_data),
        io.axi.resp.bits.data
    )

    when(wen){
        when(!replace_wire){
            valid := valid.bitSet(way0, 1.B)
            dirty := dirty.bitSet(way0, !is_alloc) //写命中为脏,写分配为不脏

            replace.bitSet(way0, 0.B)
            replace.bitSet(way1, 1.B)

            when(is_alloc){
                TagArray.write(way0, tag_reg)
            }
            DataArray.zipWithIndex.foreach{
                case(mem, i) =>
                    val data = VecInit.tabulate(wBytes)(k => wdata(i * X_LEN + (k + 1) * 8 - 1, i * X_LEN + k * 8))
                    mem.write(way0, data, wmask((i + 1) * wBytes - 1, i * wBytes).asBools)
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
            valid := valid.bitSet(way1, 1.B)
            dirty := dirty.bitSet(way1, !is_alloc) //写命中为脏,写分配为不脏

            replace.bitSet(way0, 1.B)
            replace.bitSet(way1, 0.B)

            when(is_alloc){
                TagArray.write(way1, tag_reg)
            }
            DataArray.zipWithIndex.foreach{
                case(mem, i) =>
                    val data = VecInit.tabulate(wBytes)(k => wdata(i * X_LEN + (k + 1) * 8 - 1, i * X_LEN + k * 8))
                    mem.write(way1, data, wmask((i + 1) * wBytes - 1, i * wBytes).asBools)
            }
        }
    }
    //-------------------------------------------------------------------


    switch(state){
        is(s_Idle){
            when(io.cpu.req.valid){
                addr_reg := addr
                state := Mux(io.cpu.req.bits.mask.orR, s_WriteCache, s_ReadCache)
            }
        }
        is(s_ReadCache){
            when(hit0 | hit1){ //命中即读出
                state := s_Idle
            }.otherwise{ //未命中
                when( (~replace_wire && dirty0) | (replace_wire && dirty1)){ //写回
                    state := s_WriteBack
                }.otherwise{ //直接读Ram
                    state := s_Refill
                }
            }
        }
        is(s_WriteCache){
            when((hit0 | hit1) || is_alloc_reg){ //1.命中 2.刚从Refill转移(写分配)过来
                state := s_Idle
            }.otherwise{
                when( (~replace_wire && dirty0) | (replace_wire && dirty1)){ //写回
                    state := s_WriteBack
                }.otherwise{ //直接读Ram
                    state := s_Refill
                }
            }
        }
        is(s_WriteBack){
            when(io.axi.resp.valid){
                state := s_Refill
            }
        }
        is(s_Refill){
            when(io.axi.resp.valid){
                state := Mux(cpu_mask.orR, s_WriteCache, s_Idle)
            }
        }
    }

    
}