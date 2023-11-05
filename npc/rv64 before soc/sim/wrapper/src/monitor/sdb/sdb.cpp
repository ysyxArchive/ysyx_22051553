#include <stdlib.h>
#include "macro.h"
#include <common.h>
#include <cstring>
#include <readline/readline.h>
#include <readline/history.h>
#include <verilated_dpi.h>
#include <verilated.h>
#include "isa-def.hpp"
#include "VSoc__Dpi.h"
#include "debug.hpp"
#include "svdpi.h"
#include "memory.hpp"
#include <queue>
#include <list>
#include <npc.h>
#include <sys/time.h>
#include <define.h>
#include <display.hpp>
#include <SDL2/SDL.h>

extern bool vcd_flag;

//性能
uint64_t start_time = 0;
uint64_t end_time = 0;
uint64_t inst_num = 0;
uint64_t stall_num = 0;

uint64_t cycles = 0;


uint64_t Icache_hit_num = 0;
uint64_t Icache_req_num = 0;

uint64_t Dcache_hit_num = 0;
uint64_t Dcache_req_num = 0;
//



int clear_cnt = 0; 

int in_ecall = 0;
int after_ecall = 0;

int in_mret = 0;
int after_mret = 0;


uint64_t get_time();
void send_key(uint8_t scancode, bool is_keydown);
uint32_t key_dequeue();
uint8_t k;
bool is_keydown;

int decode_func(uint32_t inst, uint64_t dnpc, uint64_t pc);
uint64_t pc_buf = 0x80000000;

void event_update(){
  static uint64_t last = 0;
  uint64_t now = inst_num;
  if (now - last < 250) {
    return;
  }
  // double Icache_hitrate = 1 - ((double)(Icache_req_num - Icache_hit_num) / (double)Icache_req_num);
  //     double Dcache_hitrate = 1 - ((double)(Dcache_req_num - Dcache_hit_num) / (double)Dcache_req_num);


  //     printf("Icache------\n");
  //     printf("access num:%d, hit num:%d, hit rate:%0.4f\n", Icache_req_num, Icache_hit_num, Icache_hitrate);
  //     printf("Dcache------\n");
  //     printf("access num:%d, hit num:%d, hit rate:%0.4f\n", Dcache_req_num, Dcache_hit_num, Dcache_hitrate);


  last = now;

  SDL_Event event;
  if(SDL_PollEvent(&event)){  //while改成了if 只识别一次
    switch (event.type)
    {
      case SDL_QUIT:
        Verilated::gotFinish(1);
        break;
      case SDL_KEYDOWN:
      case SDL_KEYUP:
        k = event.key.keysym.scancode;
        is_keydown = (event.key.type == SDL_KEYDOWN);
        send_key(k, is_keydown);
        break;

      default:break;
    }
  }
}




static uint64_t rtc_time = 0;


#ifdef ITRACE
typedef struct fetch{  //同步到单周期，即fetch、decode、excute对应的是一条指令
  unsigned int pc;
}fetch;

typedef struct decode{
  unsigned int inst;
  bool load_use; //该指令是load后的use指令，应该立即空过一个周期
  bool branch;   //该指令是branch成功的下一条指令，应该被冲刷
  bool valid;
}decode;

typedef struct execute{
  bool skip_ref_one_inst;
}execute;

std::list<fetch> fetch_list;
std::list<decode> decode_list;
std::list<execute> execute_list;

static bool sync_diff = 0;

bool stall_flag = 0;
#endif

#ifdef DIFFTEST

bool difftest_step();
extern void (*ref_difftest_regcpy)(void *dut, bool direction);
extern void (*ref_difftest_raise_intr)(uint64_t NO);
extern void (*ref_difftest_mret)();
void difftest_skip_ref();


#endif

#ifdef ITRACE
char log_itrace[128];
char iringbuf [16][64];  //32会导致溢出，所以调整到64
uint8_t irb_pos = 0;

void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
#endif

void single_cycle();
uint64_t expr(char *e, bool *success);




extern "C" {
  void update_debuginfo(
    const svLogicVecVal* pc,
    svLogic pc_req,
    const svLogicVecVal* inst,
    svLogic inst_valid,
    svLogic load_use,
    const svLogicVecVal* op_a,
    const svLogicVecVal* op_b,
    const svLogicVecVal* result,
    svLogic br_yes,
    svLogic mem_access,
    const svLogicVecVal* mem_addr,
    const svLogicVecVal* rd,
    const svLogicVecVal* reg_wdata,
    svLogic reg_wen,
    svLogic csr_wen,
    const svLogicVecVal* csr_wdata,
    const svLogicVecVal* csr_waddr,
    svLogic sdb_stall,
    const svLogicVecVal* trap_state,
    svLogic Icache_hit,
    svLogic Icache_req,
    svLogic fcfe_stall,
    svLogic Dcache_hit,
    svLogic Dcache_req,
    svLogic fcex_stall
  );

  long long pmem_read(const svLogicVecVal* raddr);

  void pmem_write(const svLogicVecVal* waddr, const svLogicVecVal* wdata, char wmask);
}

void update_debuginfo(
  const svLogicVecVal* pc,
  svLogic pc_req,
  const svLogicVecVal* inst,
  svLogic inst_valid,
  svLogic load_use,
  const svLogicVecVal* op_a,
  const svLogicVecVal* op_b,
  const svLogicVecVal* result,
  svLogic br_yes,
  svLogic mem_access,
  const svLogicVecVal* mem_addr,
  const svLogicVecVal* rd,
  const svLogicVecVal* reg_wdata,
  svLogic reg_wen,
  svLogic csr_wen,
  const svLogicVecVal* csr_wdata,
  const svLogicVecVal* csr_waddr,
  svLogic sdb_stall,
  const svLogicVecVal* trap_state,
     svLogic Icache_hit,
    svLogic Icache_req,
    svLogic fcfe_stall,
    svLogic Dcache_hit,
    svLogic Dcache_req,
    svLogic fcex_stall
  )
{
  cycles ++;

  debug_ins.update(
    (unsigned long)pc[0].aval,
    (bool)pc_req,
    (unsigned int)inst[0].aval,
    (bool)inst_valid,
    (bool)load_use,
    (unsigned long)op_a[1].aval << 32 | op_a[0].aval,
    (unsigned long)op_b[1].aval << 32 | op_b[0].aval,
    (unsigned long)result[1].aval << 32 | result[0].aval,
    (bool)br_yes,
    (unsigned int)rd[0].aval,
    (unsigned long)reg_wdata[1].aval << 32 | reg_wdata[0].aval,
    (bool)reg_wen);


  #ifdef ITRACE
  fetch fe_ins = {
    .pc = pc[0].aval
  };

  decode de_ins = {
    .inst = (unsigned int)inst[0].aval,
    .load_use = (bool)load_use,
    .branch = (bool)br_yes,          //该指令被branch掉
    .valid = (bool)inst_valid
  };

  execute ex_ins = {
    .skip_ref_one_inst = ((bool)mem_access) && ((((unsigned long)mem_addr[1].aval << 32 | mem_addr[0].aval) >= 0xa0000000 ) || (((unsigned long)mem_addr[1].aval << 32 | mem_addr[0].aval) <= 0x0200bfff))
  };
  

  if(de_ins.inst == 0x73 && (unsigned int)trap_state[0].aval == 0){ //第一条ecall指令
    clear_cnt = 2; //需要继续比较ecall前面的两条指令
  }

  if((unsigned int)trap_state[0].aval == 1 && clear_cnt == 0) 
  {
    in_ecall = 1;
  }

  if((unsigned int)trap_state[0].aval == 4){  //mstatus,此时,npc中,fetch段有正常值
    after_ecall = 1;
  }else{
    after_ecall = 0;
  }

  if(de_ins.inst == 0x30200073 && (unsigned int)trap_state[0].aval == 0){ //mret指令
    clear_cnt = 2; //需要继续比较ecall前面的两条指令
  }

  if((unsigned int)trap_state[0].aval == 5 && clear_cnt == 0){
    in_mret = 1;
  }

  if((unsigned int)trap_state[0].aval == 7){
    after_mret = 1;
  }else{
    after_mret = 0;
  }




  if(de_ins.inst != 0x13 && de_ins.inst != 0 && !(bool)sdb_stall && //需要记录dut所有有效允许周期,因为load_use,branch只会flushdecdoe,不会暂停流水线
    (clear_cnt == 0) && (!in_ecall) && (!in_mret)
  ){ 
    fetch_list.push_back(fe_ins);                                   //去除暂停流水线的周期
    decode_list.push_back(de_ins);
    execute_list.push_back(ex_ins);
  }

  if((unsigned int)trap_state[0].aval == 4){
    in_ecall = 0;
  }

  if((unsigned int)trap_state[0].aval == 7){
    in_mret = 0;
  }


  #endif
  if((unsigned int)inst[0].aval == 0x13 || (unsigned int)inst[0].aval == 0 || (bool)sdb_stall){
    stall_num ++;
  }else{
    inst_num ++;
  }



  if((bool)(Icache_req) && !(bool)(fcfe_stall)){
    Icache_req_num ++;
  }
  if((bool)(Icache_hit) && !(bool)(fcfe_stall)){
    Icache_hit_num ++;
  }


  
  if((bool)(Dcache_hit && !(bool)(fcex_stall))){
    Dcache_hit_num ++;
  }
  if((bool)(Dcache_req) && !(bool)(fcex_stall)){
    Dcache_req_num ++;
  }

  #ifdef FTRACE
  if(!(bool)sdb_stall && !(bool)(br_yes) && !(bool)(load_use)){  //应对branch和load_use
    decode_func((unsigned int)inst[0].aval, (unsigned long)pc[0].aval, pc_buf);
    pc_buf = (unsigned long)pc[0].aval;
  }
  #endif

  #ifdef VCD_ON
//   if((unsigned long)pc[0].aval == 0x83013ab0){
//     printf("begin vcd\n");
//     vcd_flag = 1;
//   }
  #endif


  if((bool)reg_wen && ((unsigned int)rd[0].aval != 0)){
    cpu_ins.set_value((unsigned int)rd[0].aval,(unsigned long)reg_wdata[1].aval << 32 | reg_wdata[0].aval);      //update里没有改写pc
  }

  if((bool)csr_wen){
    cpu_ins.set_csr((unsigned int)csr_waddr[0].aval,(unsigned long)csr_wdata[1].aval << 32 | csr_wdata[0].aval);      //update里没有改写pc
  }

}

long long pmem_read(const svLogicVecVal* raddr){

    #ifdef MTRACE
    printf(ANSI_FMT("read mem at " "0x%016lx" " for %d bytes\n", ANSI_FG_YELLOW),raddr[0].aval, 8);
    #endif

    if( ((unsigned long)raddr[0].aval) == RTC_BASE){
        struct timespec now;
        clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
        // rtc_time = now.tv_sec * 1000000 + now.tv_nsec / 1000;
        rtc_time = now.tv_sec * 1000;
        return  (long long) (rtc_time);
    }
    else if(((unsigned long)raddr[0].aval) == VGACTL_ADDR){
      uint32_t vga_ctrl_bundle = SCREEN_W << 16 | SCREEN_H;
      return vga_ctrl_bundle;
    }
    else if(((unsigned long)raddr[0].aval) == KBD_ADDR){
      uint32_t key = key_dequeue();
      return key;
    }

    uint64_t value =  pmem.mem_read(
        (unsigned long)raddr[0].aval
    );

    return (long long) value;
}

  void pmem_write(const svLogicVecVal* waddr, const svLogicVecVal* wdata, char wmask){

    #ifdef MTRACE
    printf("wmask is 0x%x\n", (uint8_t)wmask);
    printf(ANSI_FMT("write mem at " "0x%016lx" " for %d bytes\n", ANSI_FG_YELLOW),(waddr[0].aval), 
    ((uint8_t)wmask == 0xff) ? 8 : 
    ((uint8_t)wmask == 0x0f) ? 4 : 
    ((uint8_t)wmask == 0x03) ? 2 : 
    ((uint8_t)wmask == 0x01) ? 1 : 0
    );

    printf("write data is 0x%lx\n", (unsigned long)wdata[1].aval << 32 | wdata[0].aval);
    #endif


    if( ((unsigned long)waddr[0].aval) == SERIAL_PORT){  
      putchar((unsigned long)wdata[1].aval << 32 | wdata[0].aval);
      return ;
    }
    else if( (FB_ADDR <= ((unsigned long)waddr[0].aval)) 
      && (((unsigned long)waddr[0].aval) <= FB_ADDR + SCREEN_W*SCREEN_H*sizeof(uint32_t))){

        // printf("write at 0x%x\n", (unsigned long)waddr[0].aval);
        // printf("write data is 0x%lx\n", (unsigned long)wdata[1].aval << 32 | wdata[0].aval);
      display.vmem_write(
        (unsigned long)waddr[0].aval,
        (unsigned long)wdata[1].aval << 32 | wdata[0].aval,
        wmask
      );
      return ;
    }
    else if(((unsigned long)waddr[0].aval) == VGACTL_ADDR){  //实际上是+4
      // printf("update screen\n");
      display.update_screen();
    }
    else {
      pmem.mem_write(
        (unsigned long)waddr[0].aval,
        (unsigned long)wdata[1].aval << 32 | wdata[0].aval,
        wmask
      );
    }
    
    return ;
  }



int exam_exit(){
  if(Verilated::gotFinish()){
    return 1;
  }
  else {
    return 0;
  }
}

static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_q(char *args) {
  Verilated::gotFinish(true);

  return 0;
}


static int cmd_i(char *args) {
  
  if(strcmp(args, "r") == 0){
    printf("--------gpr----------\n");
    cpu_ins.gpr_display();
    printf("--------csr----------\n");
    cpu_ins.csr_display();
  }
  else if(strcmp(args, "w") == 0){
    return 0;
  }
    else if(strcmp(args, "debug") == 0){
      debug_ins.show();
  }

  return 0;
}

static int cmd_s(char *args){
  


  if(args == NULL){

    #ifdef ITRACE

    if(clear_cnt > 0 || in_ecall || after_ecall || in_mret || after_mret){
    
    }else{
      while(decode_list.size() < 3){  //对齐dut和ref
        single_cycle();
        if(clear_cnt > 0 || in_ecall || after_ecall || in_mret || after_mret){
          break;
        }
      }
    }
    #endif

      
    #ifdef SHOW_LIST
    for(auto arg : fetch_list){
      printf("pc:0x%lx\n", arg.pc);
    }

    for(auto arg : decode_list){
      printf("inst:0x%x, br:%d, load_use:%d\n", arg.inst, arg.branch, arg.load_use);
    }

    for(auto arg : execute_list){
      printf("skip:%d\n", arg.skip_ref_one_inst);
    }
    #endif

    #ifdef ITRACE
    if( decode_list.front().load_use){  //去掉第一条指令，然后再填充序列
      fetch_list.pop_front();
      decode_list.pop_front();
      execute_list.pop_front();

      while(decode_list.size() < 3){
        single_cycle();
      }

    }else if(decode_list.front().branch){
      
      
      fetch_list.pop_front();
      decode_list.pop_front();
      execute_list.pop_front();

      while(decode_list.size() < 3){
        single_cycle();
      }
      
    }
    #endif


  //-----disasmble

    #ifdef ITRACE
    char* p = log_itrace;
    p += snprintf(p, sizeof(log_itrace), "0x%016lx" ":", fetch_list.front().pc);
    int ilen = 4;
    uint8_t* inst = (uint8_t *)(&decode_list.front().inst);
    for(int i = ilen - 1; i >= 0; i--){
      p += snprintf(p, 4, "%02x", inst[i]);
    }

    p += snprintf(p, 4, " ");

    disassemble(p, log_itrace + sizeof(log_itrace) - p, fetch_list.front().pc,
    (uint8_t *)(&decode_list.front().inst), ilen);

    printf("%s\n", log_itrace);

    p = iringbuf[irb_pos];
    strcpy(p, "0x");
    p += 2;
    strcpy(p, log_itrace + 10);
    irb_pos = (irb_pos == 15) ? 0 : irb_pos+1;
    #endif

      //-----------------

    #ifdef ITRACE
      if(clear_cnt > 0 || in_ecall || in_mret){
        single_cycle();
      }
      else if(!after_ecall && !after_mret){
        while(decode_list.size() < 4){
          single_cycle();   
          if(clear_cnt > 0|| in_ecall || after_ecall || in_mret || after_mret){
            break;
          }
        }  //跳过无效周期，decode_list.size()为4表示，wb段的指令被执行完成，即执行了一条指令
      }
    #else
        single_cycle();   
    #endif
        
      #ifdef ITRACE

      #ifdef DIFFTEST
      if(after_ecall || after_mret){
        if(after_ecall){
          ref_difftest_raise_intr(11);
        }

        if(after_mret){
          ref_difftest_mret();
        }
        

        // ref_difftest_regcpy(&cpu_ins.regs_state,1);  --似乎不需要复制一次

        while(decode_list.size() < 4){  //对齐dut和ref,并让dut执行一条指令,即mtvec的第一条指令
          
          single_cycle();
        }
      }


      int skip = (*(++execute_list.begin())).skip_ref_one_inst || in_ecall || in_mret;
      if(skip){
        difftest_skip_ref();
      }
      else
      if(! difftest_step()){
          //dut_regs
          printf("-----------dut_regs--------------\n");
          printf("pc\t\t0x%-16lx\t\t%-20ld\n", fetch_list.front().pc, fetch_list.front().pc);
          cpu_ins.gpr_display();
          //ref_regs
          struct diff_context_t ref_r;
          ref_difftest_regcpy(&ref_r, 0);
          printf("-----------ref_regs---------------\n");
          printf("dnpc\t\t0x%-16lx\t\t%-20ld\n", ref_r.pc, ref_r.pc);
          for(int i = 0; i < 32; i ++){
            printf("%s\t\t0x%-16lx\t\t%-20ld\n", cpu::regs[i], ref_r.gpr[i], ref_r.gpr[i]);
          }    

        
          //-----itrace
          #ifdef ITRACE
          printf("-----------itrace--------------\n");
            for(int i = 0; i < 16; i ++){
              if((i== 15 && irb_pos == 0) || (i == irb_pos - 1))
                printf("  --> ");
              else 
                printf("      ");

              printf("%s\n", iringbuf[i]);
            }
          #endif
          //---------------
              Verilated::gotFinish(1);
      }
      #endif

      if(clear_cnt > 0){
        clear_cnt --;
      }
      

      if(!decode_list.empty()){
        decode_list.pop_front(); //single_cycle和difftest_step使用后丢弃
      }
      if(!fetch_list.empty()){
        fetch_list.pop_front(); //single_cycle和difftest_step使用后丢弃
      }
      if(!execute_list.empty()){
        execute_list.pop_front();
      }

      #endif      


      event_update();
      
  }
  else {

    uint64_t n = atoi(args);

    while(n > 0){

    #ifdef ITRACE

    if(clear_cnt > 0 || in_ecall || after_ecall || in_mret || after_mret){
    
    }else{
      while(decode_list.size() < 3){  //对齐dut和ref
        single_cycle();
        if(clear_cnt > 0 || in_ecall || after_ecall || in_mret || after_mret){
          break;
        }
      }
    }
    #endif

      
    #ifdef SHOW_LIST
    for(auto arg : fetch_list){
      printf("pc:0x%lx\n", arg.pc);
    }

    for(auto arg : decode_list){
      printf("inst:0x%x, br:%d, load_use:%d\n", arg.inst, arg.branch, arg.load_use);
    }

    for(auto arg : execute_list){
      printf("skip:%d\n", arg.skip_ref_one_inst);
    }
    #endif

    #ifdef ITRACE
    if( decode_list.front().load_use){  //去掉第一条指令，然后再填充序列
      fetch_list.pop_front();
      decode_list.pop_front();
      execute_list.pop_front();

      while(decode_list.size() < 3){
        single_cycle();
      }

    }else if(decode_list.front().branch){
      
      
      fetch_list.pop_front();
      decode_list.pop_front();
      execute_list.pop_front();

      while(decode_list.size() < 3){
        single_cycle();
      }
      
    }
    #endif


  //-----disasmble

    #ifdef ITRACE
    char* p = log_itrace;
    p += snprintf(p, sizeof(log_itrace), "0x%016lx" ":", fetch_list.front().pc);
    int ilen = 4;
    uint8_t* inst = (uint8_t *)(&decode_list.front().inst);
    for(int i = ilen - 1; i >= 0; i--){
      p += snprintf(p, 4, "%02x", inst[i]);
    }

    p += snprintf(p, 4, " ");

    disassemble(p, log_itrace + sizeof(log_itrace) - p, fetch_list.front().pc,
    (uint8_t *)(&decode_list.front().inst), ilen);

    printf("%s\n", log_itrace);

    p = iringbuf[irb_pos];
    strcpy(p, "0x");
    p += 2;
    strcpy(p, log_itrace + 10);
    irb_pos = (irb_pos == 15) ? 0 : irb_pos+1;
    #endif

      //-----------------

    #ifdef ITRACE
      if(clear_cnt > 0 || in_ecall || in_mret){
        single_cycle();
      }
      else if(!after_ecall && !after_mret){
        while(decode_list.size() < 4){
          single_cycle();   
          if(clear_cnt > 0|| in_ecall || after_ecall || in_mret || after_mret){
            break;
          }
        }  //跳过无效周期，decode_list.size()为4表示，wb段的指令被执行完成  --表示，填充list后，执行一条指令，通常情况下，decode_list的长度是3
      }
    #else
        single_cycle();   
    #endif
        
      #ifdef ITRACE

      #ifdef DIFFTEST
      if(after_ecall || after_mret){
        if(after_ecall){
          ref_difftest_raise_intr(11);
        }

        if(after_mret){
          ref_difftest_mret();
        }
        

        ref_difftest_regcpy(&cpu_ins.regs_state,1);

        while(decode_list.size() < 4){  //对齐dut和ref,并让dut执行一条指令,即mtvec的第一条指令
          
          single_cycle();
        }
      }


      int skip = (*(++execute_list.begin())).skip_ref_one_inst || in_ecall || in_mret;
      if(skip){
        difftest_skip_ref();
      }
      else
      if(! difftest_step()){
          //dut_regs
          printf("-----------dut_regs--------------\n");
          printf("pc\t\t0x%-16lx\t\t%-20ld\n", fetch_list.front().pc, fetch_list.front().pc);
          cpu_ins.gpr_display();
          //ref_regs
          struct diff_context_t ref_r;
          ref_difftest_regcpy(&ref_r, 0);
          printf("-----------ref_regs---------------\n");
          printf("dnpc\t\t0x%-16lx\t\t%-20ld\n", ref_r.pc, ref_r.pc);
          for(int i = 0; i < 32; i ++){
            printf("%s\t\t0x%-16lx\t\t%-20ld\n", cpu::regs[i], ref_r.gpr[i], ref_r.gpr[i]);
          }    

        
          //-----itrace
          #ifdef ITRACE
          printf("-----------itrace--------------\n");
            for(int i = 0; i < 16; i ++){
              if((i== 15 && irb_pos == 0) || (i == irb_pos - 1))
                printf("  --> ");
              else 
                printf("      ");

              printf("%s\n", iringbuf[i]);
            }
          #endif
          //---------------
              Verilated::gotFinish(1);
              break;
      }
      #endif

      if(clear_cnt > 0){
        clear_cnt --;
      }
      

      if(!decode_list.empty()){
        decode_list.pop_front(); //single_cycle和difftest_step使用后丢弃
      }
      if(!fetch_list.empty()){
        fetch_list.pop_front(); //single_cycle和difftest_step使用后丢弃
      }
      if(!execute_list.empty()){
        execute_list.pop_front();
      }

      #endif      

      if(Verilated::gotFinish())
        break;


      event_update();
      n --;
    }
  }
  return 0;
}

static int cmd_x(char *args){
  char * arg[2];

  arg[0] = strtok(args, " ");
  arg[1] = strtok(NULL, " ");

  int length = atoi(arg[0]);
  
  bool success = true;
  unsigned long addr = expr(arg[1], &success);

  pmem.mem_display(addr, length);


  return 0;
}

static int cmd_c(char *args){
  start_time = get_time();
  cycles = 0;
  char num[] = "-1";
  cmd_s(num);
  return 0;
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  // { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "Execute N insts, default 1 inst", cmd_s },
  { "info", "print state, inc#define BATCH_MODEluding regs and watchpoints", cmd_i },
  { "x", "print mem", cmd_x },
  // { "p", "print expr", cmd_p },
  // { "w", "set a watchpoint", cmd_w },
  // { "d", "delete a watchpoint", cmd_d },


};

#define NR_CMD ARRLEN(cmd_table)


void sdb_mainloop(){

  #ifdef BATCH_MODE
    char str[10] = "any";
    cmd_c(str);
    if(exam_exit() == 1)
      return ;
  #endif

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);    // 指向\0

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;               //指向空格后第一个字符，如为空格则指向空格

    while(*args == ' ') args ++;

    if (args >= str_end) {                            
      args = NULL;                                    
    }

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }

    if(exam_exit() == 1){
      end_time = get_time();
      uint64_t total_time = (end_time - start_time); //us
      uint64_t ips = (float)((float)inst_num/(float)total_time) * 1000000;
      float ipc = (float)inst_num / (stall_num + inst_num);
      uint64_t freq = (cycles*1000000) / total_time;

      double Icache_hitrate = 1 - ((double)(Icache_req_num - Icache_hit_num) / (double)Icache_req_num);
      double Dcache_hitrate = 1 - ((double)(Dcache_req_num - Dcache_hit_num) / (double)Dcache_req_num);


      printf("Icache------\n");
      printf("access num:%d, hit num:%d, hit rate:%0.4f\n", Icache_req_num, Icache_hit_num, Icache_hitrate);
      printf("Dcache------\n");
      printf("access num:%d, hit num:%d, hit rate:%0.4f\n", Dcache_req_num, Dcache_hit_num, Dcache_hitrate);
      printf("perf--------\n");
      printf("freq is %d\n", freq);
      printf("stall_num is %d, inst_num is %d\n", stall_num, inst_num);
      printf("verilator inst: %d inst/s\n", ips);
      printf("npc ipc: %0.4f\n", ipc);

      return ;
    }
      
  }

  
}

