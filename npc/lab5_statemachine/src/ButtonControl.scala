import chisel3._
import chisel3.util._



object ButtonControl {  //ASCII
    val a = "h61".U(8.W)
    val b = "h62".U(8.W)
    val c = "h63".U(8.W)
    val d = "h64".U(8.W)
    val e = "h65".U(8.W)
    val f = "h66".U(8.W)
    val g = "h67".U(8.W)
    val h = "h68".U(8.W)
    val i = "h69".U(8.W)
    val j = "h6a".U(8.W)
    val k = "h6b".U(8.W)
    val l = "h6c".U(8.W)
    val m = "h6d".U(8.W)
    val n = "h6e".U(8.W)
    val o = "h6f".U(8.W)
    val p = "h70".U(8.W)
    val q = "h71".U(8.W)
    val r = "h72".U(8.W)
    val s = "h73".U(8.W)
    val t = "h74".U(8.W)
    val u = "h75".U(8.W)
    val v = "h76".U(8.W)
    val w = "h77".U(8.W)
    val x = "h78".U(8.W)
    val y = "h79".U(8.W)
    val z = "h7a".U(8.W)

    val none = "hff".U(8.W)
}



class BCIO extends Bundle{
    val     validButton         =  Input(UInt(4.W))
    val     count               =  Output(UInt(8.W))

    val     code                =  Output(UInt(8.W))
    val     ASCIIO              =  Output(UInt(8.W))
}


class ButtonControl extends Module{
    
    val io  = IO(new BCIO)

    val sIDLE :: sTap :: Nil = Enum(2)
    val state = RegInit(sIDLE)

    val count = RegInit(0.U(8.W))
    val code  = RegInit(Button.none)
    val ASCII = RegInit(ButtonControl.none)

    val waiton = RegInit(false.B)


    switch(state) {
        is(sIDLE){
            when(io.validButton =/= Button.none && io.validButton =/= Button.tap){
                state := sTap

                code := io.validButton

                count := count + 1.U

                ASCII := 
                    MuxCase(
                        ButtonControl.none,
                        Seq(
                            (io.validButton === Button.a) -> ButtonControl.a,
                            (io.validButton === Button.b) -> ButtonControl.b,
                            (io.validButton === Button.c) -> ButtonControl.c,
                            (io.validButton === Button.d) -> ButtonControl.d,
                            (io.validButton === Button.e) -> ButtonControl.e,
                            (io.validButton === Button.f) -> ButtonControl.f,
                            (io.validButton === Button.g) -> ButtonControl.g,
                            (io.validButton === Button.h) -> ButtonControl.h,
                            (io.validButton === Button.i) -> ButtonControl.i,
                            (io.validButton === Button.j) -> ButtonControl.j,
                            (io.validButton === Button.k) -> ButtonControl.k,
                            (io.validButton === Button.l) -> ButtonControl.l,
                            (io.validButton === Button.m) -> ButtonControl.m,
                            (io.validButton === Button.n) -> ButtonControl.n,
                            (io.validButton === Button.o) -> ButtonControl.o,
                            (io.validButton === Button.p) -> ButtonControl.p,
                            (io.validButton === Button.q) -> ButtonControl.q,
                            (io.validButton === Button.r) -> ButtonControl.r,
                            (io.validButton === Button.s) -> ButtonControl.s,
                            (io.validButton === Button.t) -> ButtonControl.t,
                            (io.validButton === Button.u) -> ButtonControl.u,
                            (io.validButton === Button.v) -> ButtonControl.v,
                            (io.validButton === Button.w) -> ButtonControl.w,
                            (io.validButton === Button.x) -> ButtonControl.x,
                            (io.validButton === Button.y) -> ButtonControl.y,
                            (io.validButton === Button.z) -> ButtonControl.z
                        )
                    )
            }

        }

        is(sTap){
            
            when(io.validButton === Button.tap){
                waiton := true.B
            }

            when(waiton && io.validButton === code){
                waiton := false.B
                state := sIDLE
                ASCII := ButtonControl.none
                code := Button.none
            }

        }
    }



    io.count := count
    io.ASCIIO := ASCII
    io.code := code
}
