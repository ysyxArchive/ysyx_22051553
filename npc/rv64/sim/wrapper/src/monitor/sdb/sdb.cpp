#include <stdlib.h>
#include "macro.h"
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




bool difftest_step(uint64_t pc);
void single_cycle();

uint64_t expr(char *e, bool *success);


static bool sync_pc = 0;
static bool sync_inst = 0;
static std::queue<unsigned long> old_pc;  //同一条指令从uptate函数中获得pc和inst的时间不是同步的
static std::queue<uint32_t> old_inst;
static uint64_t pc_disasm;


extern "C" {
  void update_debuginfo(
    const svLogicVecVal* pc,
    svLogic pc_req,
    const svLogicVecVal* inst,
    svLogic inst_valid,
    const svLogicVecVal* op_a,
    const svLogicVecVal* op_b,
    const svLogicVecVal* result,
    const svLogicVecVal* rd,
    const svLogicVecVal* reg_wdata,
    svLogic reg_wen);

  long long pmem_read(const svLogicVecVal* raddr);

  void pmem_write(const svLogicVecVal* waddr, const svLogicVecVal* wdata, char wmask);
}

void update_debuginfo(
  const svLogicVecVal* pc,
  svLogic pc_req,
  const svLogicVecVal* inst,
  svLogic inst_valid,
  const svLogicVecVal* op_a,
  const svLogicVecVal* op_b,
  const svLogicVecVal* result,
  const svLogicVecVal* rd,
  const svLogicVecVal* reg_wdata,
  svLogic reg_wen)
{
    
  
  debug_ins.update(
    (unsigned long)pc[1].aval << 32 | pc[0].aval,
    (bool)pc_req,
    (unsigned int)inst[0].aval,
    (bool)inst_valid,
    (unsigned long)op_a[1].aval << 32 | op_a[0].aval,
    (unsigned long)op_b[1].aval << 32 | op_b[0].aval,
    (unsigned long)result[1].aval << 32 | result[0].aval,
    (unsigned int)rd[0].aval,
    (unsigned long)reg_wdata[1].aval << 32 | reg_wdata[0].aval,
    (bool)reg_wen);
  


  old_pc.push((unsigned long)pc[1].aval << 32 | pc[0].aval);
  if(old_pc.size() == 4)
    sync_pc = true;

  if(sync_pc){
    unsigned long set_pc = old_pc.front();
    pc_disasm = old_pc.front();

    old_pc.pop();
    cpu_ins.set_value(32, set_pc);
  }

  old_inst.push((unsigned int)inst[0].aval);
  if(old_inst.size() == 3)
    sync_inst = true;
  if(sync_inst){
    old_inst.pop();
  }


  if((bool)reg_wen && ((unsigned int)rd[0].aval != 0)){
    cpu_ins.set_value((unsigned int)rd[0].aval,(unsigned long)reg_wdata[1].aval << 32 | reg_wdata[0].aval);
  }



}

long long pmem_read(const svLogicVecVal* raddr){

  uint64_t value =  pmem.mem_read(
    (unsigned long)raddr[1].aval << 32 | raddr[0].aval
  );

  printf("0x%lx: %016lx\n", (unsigned long)raddr[1].aval << 32 | raddr[0].aval, value);
  return (long long) value;
}

  void pmem_write(const svLogicVecVal* waddr, const svLogicVecVal* wdata, char wmask){
    pmem.mem_write(
        (unsigned long)waddr[1].aval << 32 | waddr[0].aval,
        (unsigned long)wdata[1].aval << 32 | wdata[0].aval,
        wmask
    );
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
    cpu_ins.gpr_display();
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
    //-----disasmble
  printf("pc: 0x%lx\n", pc_disasm);
  printf("inst: 0x%08x\n", old_inst.front());


    
    single_cycle();   //update之后，pc变成下一条指令的pc


    unsigned long pc_comp = ((struct diff_context_t*)(cpu_ins.get_reg_bundle()))->pc;
    printf("dut pc after exec is 0x%lx\n", pc_comp);

    if(! difftest_step(pc_comp)){
      printf("not equal\n");
      Verilated::gotFinish(1);
    }
      
  }
  else {
    uint64_t n = atoi(args);
    while(n > 0){
      single_cycle();
      unsigned long pc_comp = ((struct diff_context_t*)(cpu_ins.get_reg_bundle()))->pc;
      if(! difftest_step(pc_comp)){
        printf("not equal\n");
        Verilated::gotFinish(1);
        break;
      }
        
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

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  // { "help", "Display information about all supported commands", cmd_help },
  // { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "Execute N insts, default 1 inst", cmd_s },
  { "info", "print state, including regs and watchpoints", cmd_i },
  { "x", "print mem", cmd_x },
  // { "p", "print expr", cmd_p },
  // { "w", "set a watchpoint", cmd_w },
  // { "d", "delete a watchpoint", cmd_d },


};

#define NR_CMD ARRLEN(cmd_table)


void sdb_mainloop(){
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

