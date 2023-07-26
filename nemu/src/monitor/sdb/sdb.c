/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"

extern const char *regs[];   //note
extern CPU_state cpu;
word_t paddr_read(paddr_t addr, int len);
void new_wp(char* string);
void free_wp(int n);
void watchpoints_display();

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {              //static还能解决一下命名空间的问题
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_s(char *args) {
  
  if(args == NULL){
    cpu_exec(1);
  }
  else {
    uint64_t n = atoi(args);
    cpu_exec(n);
  }
  return 0;
}

static int cmd_i(char *args) {
  
  if(strcmp(args, "r") == 0){
    isa_reg_display();
  }
  else if(strcmp(args, "w") == 0){
    watchpoints_display();
  }

  return 0;
}

static int cmd_x(char *args) {
  
  char * arg[2];

  arg[0] = strtok(args, " ");

  arg[1] = args + strlen(arg[0]) + 1;

  int length = atoi(arg[0]);
  

  bool success = true;
  paddr_t addr   = expr(arg[1],&success);
  word_t data = 0;
  int    count_4 = 0;

  data = paddr_read(addr,4);
  printf("0x%08x:\n0x%08lx\t",addr,data);
  addr += 4;
  length --;
  count_4 ++;

  while(length > 0){
    data = paddr_read(addr,4);
    printf("0x%08lx\t",data);
    addr += 4;
    length --;
    count_4 ++;
    if(count_4 == 4){
      printf("\n");
      count_4 = 0;    
    }
  }
  printf("\n");


  return 0;
}

static int cmd_p(char *args) {
  
  bool success = true;
  word_t value = expr(args, &success);
  printf("value = %ld or 0x%02lx\n", value, value);
  return 0;
}

static int cmd_w(char *args) {
  
  new_wp(args);
  return 0;
}

static int cmd_d(char *args) {
  
  int n = atoi(args);
  free_wp(n);
  return 0;
}



static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "Execute N insts, default 1 inst", cmd_s },
  { "info", "print state, including regs and watchpoints", cmd_i },
  { "x", "print mem", cmd_x },
  { "p", "print expr", cmd_p },
  { "w", "set a watchpoint", cmd_w },
  { "d", "delete a watchpoint", cmd_d },

  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");                      
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {

  #ifdef BATCH_MODE
    sdb_set_batch_mode();
  #endif

  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

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

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
