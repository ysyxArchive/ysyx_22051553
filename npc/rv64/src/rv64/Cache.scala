//4-way 32-set 
//Cache_line:32 Byte
//Cache Memory Mapping:| Tag | Index | Word offset + Byte Offset | --但是8字节对齐
//                       22      4          3             3
//Tag Unit:|Valid|Replace|Tag|
//            1      2    22

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
    val nSets = 16
    val bBytes = 64 //Cacheline长度  --block Bytes
    val bBits = bBytes << 3 
    val blen = log2Ceil(bBytes) //offset位域6位
    val slen = log2Ceil(nSets) //4
    val tlen = ADDRWIDTH - slen - blen //22
    val nWords = bBits/X_LEN //8 ---一个Block内包含8个Word
    val wBytes = X_LEN/8  //8 ---一个Word内包含8个字节
    val byteOffsetBits = log2Ceil(wBytes)   //3, byteoffset的长度，byteoffset前，是word offset
    val dataBeats = bBits / X_LEN //8 ---一次AXI事务突发长度为8
}

class CacheReq extends Bundle{  //来自CPU
    val addr = UInt(ADDRWIDTH.W)
    val data = UInt(X_LEN.W)
    val mask = UInt((X_LEN/8).W)
}

class CacheResp extends Bundle{ 
    val data = UInt(X_LEN.W)
}

class SramIO extends Bundle{
    val addr = Output(UInt(6.W))   //地址
    val cen = Output(Bool())  //使能信号，低电平有效
    val wen = Output(Bool()) //写使能信号，低电平有效
    val wmask = Output(UInt(128.W)) //写掩码信号，掩码粒度1bit,低电平有效
    val wdata = Output(UInt(128.W)) //写数据
    val rdata = Input(UInt(128.W)) //读数据
}


class CacheIO extends Bundle{  //cpu<>cache
    val req = Flipped(ValidIO(new CacheReq))
    val resp = ValidIO(new CacheResp)
    // val srams = VecInit(Seq.fill(4)(new SramIO))
    val sram0 = new SramIO
    val sram1 = new SramIO
    val sram2 = new SramIO
    val sram3 = new SramIO
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
    //顶层
    io.cpu.sram0.addr := 0.U
    io.cpu.sram0.cen := 1.U
    io.cpu.sram0.wen := 1.U
    io.cpu.sram0.wmask := 0.U
    io.cpu.sram0.wdata := 0.U
    io.cpu.sram1.addr := 0.U
    io.cpu.sram1.cen := 1.U
    io.cpu.sram1.wen := 1.U
    io.cpu.sram1.wmask := 0.U
    io.cpu.sram1.wdata := 0.U
    io.cpu.sram2.addr := 0.U
    io.cpu.sram2.cen := 1.U
    io.cpu.sram2.wen := 1.U
    io.cpu.sram2.wmask := 0.U
    io.cpu.sram2.wdata := 0.U
    io.cpu.sram3.addr := 0.U
    io.cpu.sram3.cen := 1.U
    io.cpu.sram3.wen := 1.U
    io.cpu.sram3.wmask := 0.U
    io.cpu.sram3.wdata := 0.U
    //Counters
    val r_count = RegInit(0.U(3.W))  //突发长度为8
    val w_count = RegInit(0.U(3.W))

    //cache_state
    val state = RegInit(s_Idle)

    val is_idle = state === s_Idle
    val is_choose = state === s_Choose
    val is_alloc = state === s_Refill && r_count===7.U
    val is_alloc_reg = RegNext(is_alloc, 0.B)
    val is_war = state === s_WriteAfterRefill


    //缓存地址
    val addr_reg = RegInit(0.U(ADDRWIDTH.W))
    val cpu_data = RegInit(0.U(X_LEN.W))
    val cpu_mask = RegInit(0.U((X_LEN/8).W))

    val addr_buf = RegInit(0.U(ADDRWIDTH.W))
    val rw_buf = RegInit(0.B)
    //标记项
    // val valid = RegInit(0.U((nWays*nSets).W))
    // val dirty = RegInit(0.U((nWays*nSets).W))
    val valid = RegInit(VecInit.tabulate(nSets)(i => 0.U(nWays.W)))  //每次都会比较一个set的状态位
    val dirty = RegInit(VecInit.tabulate(nSets)(i => 0.U(nWays.W)))

    // val replace = Mem(nSets, UInt(3.W)) //Tree-PLRU算法
    val replace = RegInit(VecInit.tabulate(nSets)(i => 0.U(3.W)))

    val victim = RegInit(0.U(2.W))
    dontTouch(victim)

    // val TagArray = RegInit(VecInit.tabulate(nSets)(i => VecInit.tabulate(nWays)(m => 0.U(tlen.W)))) //nSets*(nWasy*tlen)
    val TagArray = VecInit.tabulate(nSets)(i => VecInit.tabulate(nWays)(m => RegInit(0.U(tlen.W))))


    // val DataArray = Seq.fill(nWords)(SyncReadMem(nWays*nSets, Vec(wBytes, UInt(8.W))))
    //控制信号
    val hit0 = Wire(Bool())
    val hit1 = Wire(Bool())
    val hit2 = Wire(Bool())
    val hit3 = Wire(Bool())
    val hit0_reg = RegNext(hit0, 0.B)
    val hit1_reg = RegNext(hit1, 0.B)
    val hit2_reg = RegNext(hit2, 0.B)
    val hit3_reg = RegNext(hit3, 0.B)


    val hit = Wire(Bool())
    val hit_reg = RegNext(hit, 0.B)
    dontTouch(hit0)
    dontTouch(hit1)
    dontTouch(hit2)
    dontTouch(hit3)

    val w_req = io.cpu.req.bits.mask.orR
    val wen = (is_idle && hit && w_req) || (is_alloc) || (is_alloc_reg && cpu_mask.orR)
    // 1.写命中
    // 2.从AXI读出，一定需要写
    // 3.Refill结束后，写入数据
    val ren = !wen && ( (is_idle && hit && !w_req) || (is_choose) )
    // 1.保证单端口
    // 2.读命中
    // 3.写回判断
    val ren_reg = RegNext(ren, 0.B)
    

    val addr = io.cpu.req.bits.addr
    val idx = addr(slen+blen-1,blen)
    val tag = addr(ADDRWIDTH-1,slen+blen)
    val off = addr(blen-1, byteOffsetBits) //3位，对应8个word

    val tag_reg = addr_reg(ADDRWIDTH-1,slen+blen)  //需要缓存吗
    val idx_reg = addr_reg(slen+blen-1, blen)
    val off_reg = addr_reg(blen-1, byteOffsetBits) //选择某个word,某个8Byte对齐的数据
    dontTouch(addr)
    dontTouch(idx)
    dontTouch(tag)
    dontTouch(tag_reg)
    dontTouch(idx_reg)
    dontTouch(off_reg)

    val Tag_idx = TagArray(idx)
    val Tag_idxreg = TagArray(idx_reg)

    val rtag0 = Tag_idx(0.U)
    val rtag1 = Tag_idx(1.U)
    val rtag2 = Tag_idx(2.U)
    val rtag3 = Tag_idx(3.U)
    val rtag0_buf = RegNext(rtag0, 0.U(tlen.W))
    val rtag1_buf = RegNext(rtag1, 0.U(tlen.W))
    val rtag2_buf = RegNext(rtag2, 0.U(tlen.W))
    val rtag3_buf = RegNext(rtag3, 0.U(tlen.W))
    dontTouch(rtag0)
    dontTouch(rtag1)
    dontTouch(rtag2)
    dontTouch(rtag3)

    when(ren){ //读Cache逻辑
        val addr_temp = Mux(hit, 
            Cat(
                MuxCase(0.U(2.W),
                    Seq(
                        hit0 -> 0.U(2.W),
                        hit1 -> 1.U(2.W),
                        hit2 -> 2.U(2.W),
                        hit3 -> 3.U(2.W),
                    )
                ),
                idx
            ),
            Cat(victim, idx)
        )
            
        io.cpu.sram0.addr := addr_temp
        io.cpu.sram0.cen := 0.B
        io.cpu.sram1.addr := addr_temp
        io.cpu.sram1.cen := 0.B 
        io.cpu.sram2.addr := addr_temp
        io.cpu.sram2.cen := 0.B
        io.cpu.sram3.addr := addr_temp
        io.cpu.sram3.cen := 0.B
    }


    val rdata = Cat(io.cpu.sram3.rdata, io.cpu.sram2.rdata, io.cpu.sram1.rdata, io.cpu.sram0.rdata)
    val rdata_buf = RegEnable(rdata, 0.U, ren_reg)

    //refill
    // val refill_buffer = Reg(Vec(dataBeats, UInt(X_LEN.W))) //vec中只能填chisel类型
    val refill_buffer = RegInit(VecInit(0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U))  //vecinit可以用字面量来初始化, 有更好的写法吗 --tabulate

    //read中是一个Cacheline的数据
    val read = Mux(is_alloc_reg,   //已经全部Refill到Cacheline,且Refill_buf中是完整的数据 //读不命中
        refill_buffer.asUInt,
        Mux(hit_reg,   
            rdata, //读命中
            Mux(ren_reg, //写回数据
                rdata,
                rdata_buf
            )
        )
    )

    //立即判断
    val valid_idx = valid(idx)
    val dirty_idx = dirty(idx)

    hit0 := valid_idx(0) && rtag0 === tag && is_idle  //不能让其他周期的命中影响当前cache状态机进行
    hit1 := valid_idx(1) && rtag1 === tag && is_idle
    hit2 := valid_idx(2) && rtag2 === tag && is_idle
    hit3 := valid_idx(3) && rtag3 === tag && is_idle

    hit := hit0 | hit1 | hit2 | hit3
    //读出
    io.cpu.resp.bits.data := Mux(
        is_alloc_reg, refill_buffer(off_reg),
        VecInit.tabulate(nWords)(i => read((i + 1) * X_LEN - 1, i * X_LEN))(off_reg)  //命中
    )
        
    io.cpu.resp.valid := (hit_reg && is_idle) || (is_alloc_reg && !cpu_mask.orR) || (is_idle && cpu_mask.orR)
    //1.读命中或写命中且此时在idle ----可能当前不在idle,新的dcache请求命中
    //2.Refill后无需写入
    //3.Refill后写入
    

    when(is_idle & io.cpu.req.valid){ //1.未命中，为之后的状态缓存 2.命中，在下一周期需要off_reg
        addr_reg := addr                 
        cpu_data := io.cpu.req.bits.data
        cpu_mask := io.cpu.req.bits.mask

        victim := MuxCase(
            MuxLookup(replace(idx), 0.U,  //若无valid
                Seq(
                    "b000".U -> 0.U,
                    "b001".U -> 0.U,
                    "b010".U -> 1.U,
                    "b011".U -> 1.U,
                    "b100".U -> 2.U,
                    "b101".U -> 3.U,
                    "b110".U -> 2.U,
                    "b111".U -> 3.U,
                )
            ),
            Seq(  //若有valid
                (!valid_idx(0)) -> 0.U,
                (!valid_idx(1)) -> 1.U,
                (!valid_idx(2)) -> 2.U,
                (!valid_idx(3)) -> 3.U,
            )
        )
    }.elsewhen(!io.cpu.req.valid & is_idle){  //复位
        addr_reg := 0.U                                 
        cpu_data := 0.U
        cpu_mask := 0.U
    }

    //在写回阶段判定
    val valid_idxreg = valid(idx_reg)
    val dirty_idxreg = dirty(idx_reg)

    val dirty0 = valid_idxreg(0) && dirty_idxreg(0)
    val dirty1 = valid_idxreg(1) && dirty_idxreg(1)
    val dirty2 = valid_idxreg(2) && dirty_idxreg(2)
    val dirty3 = valid_idxreg(3) && dirty_idxreg(3)


    //写入-----------
    val wtag = Wire(UInt(tlen.W))
    wtag := Mux(is_idle, tag, tag_reg)


    val idle_mask = ~io.cpu.req.bits.mask //---------可能有问题
    val hit_mask = VecInit.tabulate(8)(  //64bit的mask,对某个block使用
        i => 
        Mux(idle_mask(i) === 0.B, "b00000000".U, "b11111111".U) 
    )

    val after_alloc_mask = ~cpu_mask //---------可能有问题
    val aa_mask = VecInit.tabulate(8){
        i =>
        Mux(after_alloc_mask(i) === 0.B, "b00000000".U, "b11111111".U)
    }
    // val hit_mask = VecInit.tabulate(8)(  //when不能直接返回值
    //     i => 
    //     when(idle_mask(i) === 1.B)
    //     {"b1111 1111".U}
    //     .otherwise
    //     {"b0000 0000".U} 
    // )

    val wmask = Mux(                        //---------可能有问题  
        is_idle, (Cat(hit_mask) << Cat(off, 0.U(6.W))).zext, //写命中 //off是block off,用于选择某个word
        Mux(
            is_alloc, (0).S,   //从AXI读取完所有数据
            (Cat(aa_mask) << Cat(off_reg, 0.U(6.W))).zext //写不命中，写入cache //off_reg用于选择某个word
        )
    )
    dontTouch(wmask)


    val wdata = Mux( 
        is_idle, Fill(nWords, io.cpu.req.bits.data),  //写命中
        Mux(
            is_alloc, Cat(io.axi.resp.bits.data, Cat(refill_buffer.init.reverse)),  //注意init.reverse
            Fill(nWords, cpu_data)   //写不命中，写入Cache
        )
    )

    val choose_tagway = Wire(UInt(5.W))
    val choose_dataway = Wire(UInt(5.W))
    choose_dataway := 0.U
    choose_tagway := 0.U
    dontTouch(choose_dataway)
    dontTouch(choose_tagway)


    //读写hit都修改replace
    when(hit){
        replace(idx) := MuxCase(0.U,
            Seq(
                hit0 -> Cat(1.U, 1.U, replace(idx)(0)),  //竟然有这种语法
                hit1 -> Cat(1.U, 0.U, replace(idx)(0)),
                hit2 -> Cat(0.U, replace(idx)(1), 1.U),
                hit3 -> Cat(0.U, replace(idx)(1), 0.U),
            )
        )
    }


    when(wen){
        val addr_temp = Mux(
            hit, Cat( //---------可能有问题
                MuxCase(0.U(2.W),
                    Seq(
                        hit0 -> 0.U(2.W),
                        hit1 -> 1.U(2.W),
                        hit2 -> 2.U(2.W),
                        hit3 -> 3.U(2.W),
                    )
                ),
                idx
            ),
            Cat(victim,idx)
        )

        io.cpu.sram0.addr := addr_temp
        io.cpu.sram0.cen := 0.B
        io.cpu.sram0.wen := 0.B
        io.cpu.sram0.wmask := wmask(127, 0)
        io.cpu.sram0.wdata := wdata(127, 0)
        io.cpu.sram1.addr := addr_temp
        io.cpu.sram1.cen := 0.B
        io.cpu.sram1.wen := 0.B
        io.cpu.sram1.wmask := wmask(255, 128)
        io.cpu.sram1.wdata := wdata(255, 128)
        io.cpu.sram2.addr := addr_temp
        io.cpu.sram2.cen := 0.B
        io.cpu.sram2.wen := 0.B
        io.cpu.sram2.wmask := wmask(383, 256)
        io.cpu.sram2.wdata := wdata(383, 256)
        io.cpu.sram3.addr := addr_temp
        io.cpu.sram3.cen := 0.B
        io.cpu.sram3.wen := 0.B
        io.cpu.sram3.wmask := wmask(511, 384)
        io.cpu.sram3.wdata := wdata(511, 384)


        when(hit){//1.写命中，不涉及写valid   

            //dirty---------------
            dirty(idx) := MuxCase(dirty(idx), 
                Seq(
                    hit0 -> dirty(idx).bitSet(0.U, 1.B),
                    hit1 -> dirty(idx).bitSet(1.U, 1.B),
                    hit2 -> dirty(idx).bitSet(2.U, 1.B),
                    hit3 -> dirty(idx).bitSet(3.U, 1.B)
                )
            )
        }.elsewhen(is_war){ //2.写不命中，alloc后，写入  --修改后
            dirty(idx_reg) := MuxLookup(victim, dirty(idx_reg),    //Mux实际上资源消耗挺大的，每一路都需要生成对应的电路
                Seq(
                    0.U -> dirty(idx_reg).bitSet(0.U, 1.B),
                    1.U -> dirty(idx_reg).bitSet(1.U, 1.B),
                    2.U -> dirty(idx_reg).bitSet(2.U, 1.B),
                    3.U -> dirty(idx_reg).bitSet(3.U, 1.B)
                )
            )
        }
        .otherwise{  //alloc
            valid(idx_reg) := MuxLookup(victim, valid(idx_reg),    //Mux实际上资源消耗挺大的，每一路都需要生成对应的电路
                Seq(
                    0.U -> valid(idx_reg).bitSet(0.U, 1.B),
                    1.U -> valid(idx_reg).bitSet(1.U, 1.B),
                    2.U -> valid(idx_reg).bitSet(2.U, 1.B),
                    3.U -> valid(idx_reg).bitSet(3.U, 1.B)
                )
            )

            dirty(idx_reg) := MuxLookup(victim, dirty(idx_reg),    //Mux实际上资源消耗挺大的，每一路都需要生成对应的电路
                Seq(
                    0.U -> dirty(idx_reg).bitSet(0.U, 1.B),
                    1.U -> dirty(idx_reg).bitSet(1.U, 1.B),
                    2.U -> dirty(idx_reg).bitSet(2.U, 1.B),
                    3.U -> dirty(idx_reg).bitSet(3.U, 1.B)
                )
            )
            //--------------replace
            replace(idx_reg) := MuxLookup(victim, 0.U,  //可以这么写
                Seq(
                    0.U -> Cat(1.U, 1.U, replace(idx_reg)(0)),
                    1.U -> Cat(1.U, 0.U, replace(idx_reg)(0)),
                    2.U -> Cat(0.U, replace(idx_reg)(1), 1.U),
                    3.U -> Cat(0.U, replace(idx_reg)(1), 0.U),
                )
            )
            
            //-------------Tag
            Tag_idxreg(victim) := tag_reg
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

            io.axi.req.bits.rw := MuxLookup(victim, 0.U,  
                Seq(
                    0.U -> Mux(dirty0, 0.B, 1.B),
                    1.U -> Mux(dirty1, 0.B, 1.B),
                    2.U -> Mux(dirty2, 0.B, 1.B),
                    3.U -> Mux(dirty3, 0.B, 1.B),
                )
            )

            io.axi.req.bits.addr := MuxLookup(victim, 0.U,  
                Seq(
                    0.U -> Mux(dirty0, Cat(rtag0_buf, idx_reg) << blen.U  , Cat(tag_reg, idx_reg) << blen.U),
                    1.U -> Mux(dirty1, Cat(rtag1_buf, idx_reg) << blen.U  , Cat(tag_reg, idx_reg) << blen.U),
                    2.U -> Mux(dirty2, Cat(rtag2_buf, idx_reg) << blen.U  , Cat(tag_reg, idx_reg) << blen.U),
                    3.U -> Mux(dirty3, Cat(rtag3_buf, idx_reg) << blen.U  , Cat(tag_reg, idx_reg) << blen.U),
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
                    refill_buffer(7) := io.axi.resp.bits.data
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