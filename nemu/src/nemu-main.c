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

#include <common.h>

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

word_t expr(char *e, bool *success);

int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM                  
  am_init_monitor();
#else
  init_monitor(argc, argv);             //显现出预处理的效果，如果没有该宏，那么就不编译某些代码
#endif                                  //如果是if else程序，那么会导致编译开销和控制的计算开销


  char str[500] = {};
  uint32_t value = 0;
  
  FILE* fp = fopen("/home/shikye/ysyx-workbench/nemu/tools/gen-expr/input", "r");
  if(fp == NULL)
    assert(0);
  
  bool success = false;

  int i = 0;

  while(1){

    
    
    int a = fscanf(fp,"%u", &value);
    if(a == EOF)
      break;
    int b = fscanf(fp,"%s", str);

    printf("a is %d, b is %d\n", a, b);


    uint32_t como = expr(str, &success);

    if(success == false)
      assert(0);
    
    if(como == value)
      printf("test case %d success!\n", i);
    
    i++;
  }
  
  fclose(fp);



  /* Start engine. */
  engine_start();

  return is_exit_status_bad();
}
