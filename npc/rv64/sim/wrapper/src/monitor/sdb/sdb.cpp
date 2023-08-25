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

typedef struct inst_stop{
  uint32_t inst;
  bool br;
}inst_stop;

bool difftest_step(uint64_t pc);
void single_cycle();
extern void (*ref_difftest_regcpy)(void *dut, bool direction);

uint64_t expr(char *e, bool *success);
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

static bool sync_pc = 0;
static bool sync_inst = 0;
static std::list<unsigned long> old_pc;  //同一条指令从uptate函数中获得pc和inst的时间不是同步的
static std::queue<inst_stop> old_inst;
static uint64_t pc_disasm;
static bool stop_nemu;

char log_itrace[128];
char iringbuf [16][64];  //32会导致溢出，所以调整到64
uint8_t irb_pos = 0;



extern "C" {
  void update_debuginfo(
    const svLogicVecVal* pc,
    svLogic pc_req,
    const svLogicVecVal* inst,
    svLogic inst_valid,
    const svLogicVecVal* op_a,
    const svLogicVecVal* op_b,
    const svLogicVecVal* result,
    svLogic br_yes,
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
  svLogic br_yes,
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
    (bool)br_yes,
    (unsigned int)rd[0].aval,
    (unsigned long)reg_wdata[1].aval << 32 | reg_wdata[0].aval,
    (bool)reg_wen);


  old_pc.push_back((unsigned long)pc[1].aval << 32 | pc[0].aval);
  if(old_pc.size() == 4)
    sync_pc = true;

  if(sync_pc){
    unsigned long set_pc = old_pc.front();
    pc_disasm = old_pc.front();

    old_pc.pop_front();
    cpu_ins.set_value(32, set_pc);
  }


  inst_stop ins = {
    .inst = (unsigned int)inst[0].aval,
    .br = (bool)br_yes
  };

  if(ins.br == 1){
    printf("br inst is 0x%x\n", ins.inst);
  }

  old_inst.push(ins);

  if(old_inst.size() == 4)
    sync_inst = true;
  if(sync_inst){
    old_inst.pop();
  }


  if((bool)reg_wen && ((unsigned int)rd[0].aval != 0)){
    cpu_ins.set_value((unsigned int)rd[0].aval,(unsigned long)reg_wdata[1].aval << 32 | reg_wdata[0].aval);
  }



}

long long pmem_read(const svLogicVecVal* raddr){
  printf("is reading from 0x%lx\n",(unsigned long)raddr[1].aval << 32 | raddr[0].aval);
  printf("80000234 value in mem is %lx\n", pmem.mem_readbylen(0x80000234, 4));
  uint64_t value =  pmem.mem_read(
    (unsigned long)raddr[1].aval << 32 | raddr[0].aval
  );

  return (long long) value;
}

  void pmem_write(const svLogicVecVal* waddr, const svLogicVecVal* wdata, char wmask){
    printf("is writing 0x%lx\n", (unsigned long)waddr[1].aval << 32 | waddr[0].aval);
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
    stop_nemu = old_inst.front().br;
    if(stop_nemu){
      single_cycle();
      return 0;
    }
      

  //-----disasmble     --对当前wb中的pc

    char* p = log_itrace;
    p += snprintf(p, sizeof(log_itrace), "0x%016lx" ":", pc_disasm);
    int ilen = 4;
    uint8_t* inst = (uint8_t *)(&old_inst.front().inst);
    for(int i = ilen - 1; i >= 0; i--){
      p += snprintf(p, 4, "%02x", inst[i]);
    }

    p += snprintf(p, 4, " ");

  disassemble(p, log_itrace + sizeof(log_itrace) - p, pc_disasm,
    (uint8_t *)(&old_inst.front().inst), ilen);

    printf("%s\n", log_itrace);

    p = iringbuf[irb_pos];
    strcpy(p, "0x");
    p += 2;
    strcpy(p, log_itrace + 10);
    irb_pos = (irb_pos == 15) ? 0 : irb_pos+1;

    //-----------------
    single_cycle();   //执行当条pc, update之后，pc变成下一条指令的pc

        unsigned long pc_comp = 0;
      if(old_inst.front().br){
        pc_comp = *(old_pc.begin()++);
      }
      else
        pc_comp = ((struct diff_context_t*)(cpu_ins.get_reg_bundle()))->pc;


    if(! difftest_step(pc_comp)){  //比较当前的通用寄存器状态和下一条指令的pc
    //dut_regs
    printf("-----------dut_regs--------------\n");
    cpu_ins.gpr_display();
    //ref_regs
    struct diff_context_t ref_r;
    ref_difftest_regcpy(&ref_r, 0);
    printf("-----------ref_regs---------------\n");
    printf("pc\t\t0x%-16lx\t\t%-20ld\n", ref_r.pc, ref_r.pc);
    for(int i = 0; i < 32; i ++){
      printf("%s\t\t0x%-16lx\t\t%-20ld\n", cpu::regs[i], ref_r.gpr[i], ref_r.gpr[i]);
    }    


    //-----itrace
    printf("-----------itrace--------------\n");
      for(int i = 0; i < 16; i ++){
        if((i== 15 && irb_pos == 0) || (i == irb_pos - 1))
          printf("  --> ");
        else 
          printf("      ");

        printf("%s\n", iringbuf[i]);
      }
    //---------------
      Verilated::gotFinish(1);
    }
      
  }
  else {
    uint64_t n = atoi(args);
    while(n > 0){
  //-----disasmble
    stop_nemu = old_inst.front().br;
    if(stop_nemu){
      printf("pc is 0x%lx\n", pc_disasm);
      single_cycle();
      continue;
    }
      


    char* p = log_itrace;
    p += snprintf(p, sizeof(log_itrace), "0x%016lx" ":", pc_disasm);
    int ilen = 4;
    uint8_t* inst = (uint8_t *)(&old_inst.front().inst);
    for(int i = ilen - 1; i >= 0; i--){
      p += snprintf(p, 4, "%02x", inst[i]);
    }

    p += snprintf(p, 4, " ");

  disassemble(p, log_itrace + sizeof(log_itrace) - p, pc_disasm,
    (uint8_t *)(&old_inst.front().inst), ilen);

    printf("%s\n", log_itrace);

    p = iringbuf[irb_pos];
    strcpy(p, "0x");
    p += 2;
    strcpy(p, log_itrace + 10);
    irb_pos = (irb_pos == 15) ? 0 : irb_pos+1;

    //-----------------

      single_cycle();

      
      unsigned long pc_comp = 0;
      if(old_inst.front().br){
        pc_comp = *(old_pc.begin()++);
      }
      else
        pc_comp = ((struct diff_context_t*)(cpu_ins.get_reg_bundle()))->pc;


      if(! difftest_step(pc_comp)){
    //dut_regs
    printf("-----------dut_regs--------------\n");
    cpu_ins.gpr_display();
    //ref_regs
    struct diff_context_t ref_r;
    ref_difftest_regcpy(&ref_r, 0);
    printf("-----------ref_regs---------------\n");
    printf("pc\t\t0x%-16lx\t\t%-20ld\n", ref_r.pc, ref_r.pc);
    for(int i = 0; i < 32; i ++){
      printf("%s\t\t0x%-16lx\t\t%-20ld\n", cpu::regs[i], ref_r.gpr[i], ref_r.gpr[i]);
    }    


    //-----itrace
    printf("-----------itrace--------------\n");
      for(int i = 0; i < 16; i ++){
        if((i== 15 && irb_pos == 0) || (i == irb_pos - 1))
          printf("  --> ");
        else 
          printf("      ");

        printf("%s\n", iringbuf[i]);
      }
    //---------------
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

