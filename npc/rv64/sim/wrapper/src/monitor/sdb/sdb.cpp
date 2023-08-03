#include <stdlib.h>
#include <stdint.h>
#include "../../../include/macro.h"
#include <readline/readline.h>
#include <readline/history.h>
#include <verilated_dpi.h>

uint64_t cpu_gpr[32] = {};

extern "C" void get_gpr(uint64_t gpr0, uint64_t gpr1)){
  for(int i = 0; i < 2; i++)
    cpu_gpr[i] = gpr##i;
}

void single_cycle();
int exam_exit();

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

static int cmd_s(char *args){
  if(args == NULL){
    single_cycle();
  }
  else {
    uint64_t n = atoi(args);
    while(n > 0){
      single_cycle();
      n --;
    }
  }
  return 0;
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  // { "help", "Display information about all supported commands", cmd_help },
  // { "c", "Continue the execution of the program", cmd_c },
  // { "q", "Exit NEMU", cmd_q },
  { "si", "Execute N insts, default 1 inst", cmd_s },
  // { "info", "print state, including regs and watchpoints", cmd_i },
  // { "x", "print mem", cmd_x },
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

