package rv64

import chisel3._
import chisel3.util._
import Define._

class ClExIO extends Bundle{
    val valid = Input(Bool())

    val ld_type = Input(UInt(3.W))
    val raddr = Input(UInt(X_LEN.W))

    val sd_type = Input(UInt(3.W))
    val waddr = Input(UInt(X_LEN.W))
    val wmask = Input(UInt(8.W))
    val wdata = Input(UInt(X_LEN.W))
}

class ClMemIO extends Bundle{
    val Clrvalue = ValidIO(UInt(X_LEN.W))
}

class CLINT extends Module{
    val io = IO(new Bundle {
        val clex = new ClExIO
        val clmem = new ClMemIO

        //to Trap
        val timer_int = Output(Bool())
    })

    //内部逻辑
    val MSIP = RegInit(0.U(32.W))
    val MTIMECMP = RegInit(0.U(64.W))
    val MTIME = RegInit(0.U(64.W))

    //ld指令下一周期才给Mem
    val rvalue_buf = RegInit(0.U(64.W))
    val valid_buf = RegInit(Bool())




    valid_buf := 0.B
    rvalue_buf := 0.U

    MSIP := MSIP
    MTIMECMP := MTIMECMP
    MTIME := MTIME

    when(io.clex.valid){ //ls指令是8字节对齐的

        valid_buf := 0.B
        rvalue_buf := 0.U

        MSIP := MSIP
        MTIMECMP := MTIMECMP
        MTIME := MTIME

        when(io.clex.ld_type.orR){
            
            switch(io.clex.raddr){
                is(MSIP_ADDR.U){
                    valid_buf := 1.B
                    rvalue_buf := MSIP //读哪些字节由Mem部分处理
                }
                is(MTIMECMP_ADDR.U){
                    valid_buf := 1.B
                    rvalue_buf := MTIMECMP
                }
                is(MTIME_ADDR.U){
                    valid_buf := 1.B
                    rvalue_buf := MTIME
                }
            }
        }.elsewhen(io.clex.sd_type.orR){



            switch(io.clex.waddr){
                is(MSIP_ADDR.U){

                    MSIP := MSIP
                    switch(io.clex.wmask){
                        is(0xff.U){
                            MSIP := io.clex.wdata(31,0)
                        }
                        is(0x0f.U){
                            MSIP := io.clex.wdata(31,0)
                        }
                        is(0x03.U){
                            MSIP := Cat(MSIP(31,16), io.clex.wdata(15,0))
                        }
                        is(0x01.U){
                            MSIP := Cat(MSIP(31,1), io.clex.wdata(0))
                        }
                    }
                }
                is(MTIMECMP_ADDR.U){

                    MTIMECMP := MTIMECMP
                    switch(io.clex.wmask){
                        is(0xff.U){
                            MTIMECMP := io.clex.wdata
                        }
                        is(0x0f.U){
                            MTIMECMP := Cat(MTIMECMP(63,32), io.clex.wdata(31,0))
                        }
                        is(0x03.U){
                            MTIMECMP := Cat(MTIMECMP(63,16), io.clex.wdata(15,0))
                        }
                        is(0x01.U){
                            MTIMECMP := Cat(MTIMECMP(63,1), io.clex.wdata(0))
                        }
                    }
                }
                is(MTIME_ADDR.U){

                    MTIME := MTIME
                    switch(io.clex.wmask){
                        is(0xff.U){
                            MTIME := io.clex.wdata
                        }
                        is(0x0f.U){
                            MTIME := Cat(MTIME(63,32), io.clex.wdata(31,0))
                        }
                        is(0x03.U){
                            MTIME := Cat(MTIME(63,16), io.clex.wdata(15,0))
                        }
                        is(0x01.U){
                            MTIME := Cat(MTIME(63,1), io.clex.wdata(0))
                        }
                    }
                }
            }


        }
    }
    //外部端口
    io.clmem.Clrvalue.bits := rvalue_buf
    io.clmem.Clrvalue.valid := valid_buf

    io.timer_int := (MTIME >= MTIMECMP)

}
