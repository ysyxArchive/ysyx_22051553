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


static uint64_t rtc_time = 0;


#ifdef ITRACE
typedef struct fetch{  //同步到单周期，即fetch、decode、excute对应的是一条指令
  unsigned long pc;
}fetch;

typedef struct decode{
  unsigned int inst;
  bool load_use; //该指令是load后的use指令，应该立即空过一个周期
  bool branch;   //该指令是branch成功的下一条指令，应该被冲刷
}decode;

typedef struct execute{
  bool skip_ref_one_inst;
}execute;

std::list<fetch> fetch_list;
std::list<decode> decode_list;
std::list<execute> execute_list;

static bool sync_diff = 0;
#endif

#ifdef DIFFTEST

bool difftest_step();
extern void (*ref_difftest_regcpy)(void *dut, bool direction);
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
    const svLogicVecVal* csr_waddr);

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
  const svLogicVecVal* csr_waddr
  )
{
  

  debug_ins.update(
    (unsigned long)pc[1].aval << 32 | pc[0].aval,
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
    .pc = (unsigned long)pc[1].aval << 32 | pc[0].aval
  };

  decode de_ins = {
    .inst = (unsigned int)inst[0].aval,
    .load_use = (bool)load_use,
    .branch = (bool)br_yes          //该指令被branch掉
  };

  execute ex_ins = {
    .skip_ref_one_inst = ((bool)mem_access) && (((unsigned long)mem_addr[1].aval << 32 | mem_addr[0].aval) >= 0xa0000000 )
  };


  fetch_list.push_back(fe_ins);
  decode_list.push_back(de_ins);
  execute_list.push_back(ex_ins);


  if(decode_list.size() == 5){ 
    sync_diff = true;
    execute_list.pop_front();
    execute_list.pop_front();
    execute_list.pop_front();

    decode_list.pop_front();
    decode_list.pop_front();

    fetch_list.pop_front();
  }


  if((bool)reg_wen && ((unsigned int)rd[0].aval != 0)){
    cpu_ins.set_value((unsigned int)rd[0].aval,(unsigned long)reg_wdata[1].aval << 32 | reg_wdata[0].aval);      //update里没有改写pc
  }

  if((bool)csr_wen){
    cpu_ins.set_csr((unsigned int)csr_waddr[0].aval,(unsigned long)csr_wdata[1].aval << 32 | csr_wdata[0].aval);      //update里没有改写pc
  }

  #endif

}

long long pmem_read(const svLogicVecVal* raddr){

  if( ((unsigned long)raddr[1].aval << 32 | raddr[0].aval) == RTC_ADDRH || ((unsigned long)raddr[1].aval << 32 | raddr[0].aval) == RTC_ADDRL){
    if(((unsigned long)raddr[1].aval << 32 | raddr[0].aval) == RTC_ADDRH){
        struct timespec now;
        clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
        rtc_time = now.tv_sec * 1000000 + now.tv_nsec / 1000;

        return  (long long) (rtc_time >> 32);
    }
    else
      return (long long) (rtc_time & 0xffffffff);

  }

  uint64_t value =  pmem.mem_read(
    (unsigned long)raddr[1].aval << 32 | raddr[0].aval
  );

  return (long long) value;
}

  void pmem_write(const svLogicVecVal* waddr, const svLogicVecVal* wdata, char wmask){


    if( ((unsigned long)waddr[1].aval << 32 | waddr[0].aval) == SERIAL_PORT){
      // printf("here\n");
      putchar((unsigned long)wdata[1].aval << 32 | wdata[0].aval);
      return ;
    }

    pmem.mem_write(
        (unsigned long)waddr[1].aval << 32 | waddr[0].aval,
        (unsigned long)wdata[1].aval << 32 | wdata[0].aval,
        wmask
    );
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
  
    #ifdef SHOW_LIST
    for(auto arg : fetch_list){
      printf("pc:0x%lx\n", arg.pc);
    }

    for(auto arg : decode_list){
      printf("inst:0x%x, br:%d, load_use:%d\n", arg.inst, arg.branch, arg.load_use);
    }
    #endif

    #ifdef ITRACE
    if( decode_list.front().load_use){
      single_cycle();

      fetch_list.pop_front();       //三个pop对应的是同一条指令
      decode_list.pop_front();
      execute_list.pop_front();

    }else if(decode_list.front().branch){
      single_cycle();
      
      fetch_list.pop_front();
      decode_list.pop_front();
      execute_list.pop_front();
    }
    #endif

    //-----disasmble     --对当前wb中的pc
    #ifdef ITRACE
    char* p = log_itrace;
    p += snprintf(p, sizeof(log_itrace), "0x%016lx" ":", fetch_list.front().pc);
    int ilen = 4;
    uint8_t* inst = (uint8_t *)(&(decode_list.front().inst));
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
    single_cycle();   


    #ifdef DIFFTEST
    if(execute_list.front().skip_ref_one_inst){
      difftest_skip_ref();
    }
    if(! difftest_step()){  //比较当前的通用寄存器状态和下一条指令的pc
  
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
    
    #ifdef ITRACE
    decode_list.pop_front(); //single_cycle和difftest_step使用后丢弃
    fetch_list.pop_front(); //single_cycle和difftest_step使用后丢弃
    execute_list.pop_front();
    #endif
      
  }
  else {

    uint64_t n = atoi(args);

    while(n > 0){
      
    #ifdef SHOW_LIST
    for(auto arg : fetch_list){
      printf("pc:0x%lx\n", arg.pc);
    }

    for(auto arg : decode_list){
      printf("inst:0x%x, br:%d, load_use:%d\n", arg.inst, arg.branch, arg.load_use);
    }
    #endif

    #ifdef ITRACE
    if( decode_list.front().load_use){
      single_cycle();

      fetch_list.pop_front();
      decode_list.pop_front();
      execute_list.pop_front();

    }else if(decode_list.front().branch){
      single_cycle();
      
      fetch_list.pop_front();
      decode_list.pop_front();
      execute_list.pop_front();
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
      single_cycle();

      #ifdef DIFFTEST
      if(execute_list.front().skip_ref_one_inst){
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

      #ifdef ITRACE
      
      decode_list.pop_front(); //single_cycle和difftest_step使用后丢弃
      fetch_list.pop_front(); //single_cycle和difftest_step使用后丢弃
      execute_list.pop_front();

      #endif      

      if(Verilated::gotFinish())
        break;

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

    if(exam_exit() == 1)
      return ;
  }

  
}

