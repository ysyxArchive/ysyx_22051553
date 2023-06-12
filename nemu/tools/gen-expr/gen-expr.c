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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static uint16_t count = 0;

static char buf[65536] = {};     //存表达式
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

static uint32_t choose(uint32_t n){
  return rand()%n;
}

static void gen_num(){

    uint32_t val = 0;
    while(val == 0)
      val = choose(65536);
    sprintf(buf+count, "%d", val);
    while(buf[count] != 0)
      count ++;
}

static void gen(char c){
  sprintf(buf+count, "%c", c);
  count ++;
}

static void gen_rand_op(){
  switch (choose(4))
  {
  case 0: 
    sprintf(buf+count, "%c", '+');
    count ++;
    break;
  case 1: 
    sprintf(buf+count, "%c", '-');
    count ++;
    break;
  case 2: 
    sprintf(buf+count, "%c", '*');
    count ++;
    break;
  case 3: 
    sprintf(buf+count, "%c", '/');
    count ++;
    break;

  default:
    break;
  }

}

static void gen_rand_expr() {
  int choice = choose(3);
  if(count > 40)
    choice = 0;
  
  switch (choice)
  {
    case 0: gen_num(); break;
    case 1: gen('('); gen_rand_expr(); gen(')'); break;
    default: gen_rand_expr(); gen_rand_op(); gen_rand_expr(); break;
  }

}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {

    count = 0;
    gen_rand_expr();

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -Wall -Werror -o /tmp/.expr");   //Wall Werror
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    ret = fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
