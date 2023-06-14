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

#include "sdb.h"

#define NR_WP 32

static bool full = 0;
static bool success = true;

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */
  char name[20];
  bool using;
  word_t value;

} WP;

static WP wp_pool[NR_WP] = {};                  //使用数组
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = 0;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
    wp_pool[i].using = false;
  }

  head = NULL;
  free_ = wp_pool;              //指向第0个
}

/* TODO: Implement the functionality of watchpoint */

/* 0<-1<-2<-3
            head

  0 -> 1 -> 2 ->3 ...
free
*/

void new_wp(char* string){
  if(full == 1){
    assert(0);
  }

  WP* temp = free_;

  free_ = free_ -> next;
  if(free_ == NULL)
    full = 1;
  
  
  if(head == NULL){
    temp->NO = 1;
    temp->next = NULL;
    strcpy(temp->name, string);
    temp->using = true;
    temp->value = expr(temp->name,&success);
    head = temp;
  }
  else {
    temp->NO = head->NO ++;
    temp->next = head;
    strcpy(temp->name, string);
    temp->using = true;
    temp->value = expr(temp->name,&success);

    head = temp;
  }
}



void free_wp(int n){
  WP* temp = head;

  if(temp->NO == n){             //删除头
    if(temp->next == NULL)
      head = NULL;
    else{
      head = temp->next;
    }

    temp->next = free_;
    temp->using = false;

    free_ = temp;
  }
  else {
    

    while(temp->next->NO != n && temp->next->next != NULL){
      temp = temp->next;
    }

    if(temp->next->NO == n){
      temp->next = temp->next->next;

      temp->next->next = free_;
      temp->next->using = false;
    }
    else if(temp->next->next == NULL){
      printf("No such watchpoint!\n");
    }
  }

}

void watchpoints_diff(){
  WP* temp = head;
  word_t old_value = 0;
  word_t new_value = 0;
  while(temp != NULL){
    old_value = temp->value;
    new_value = expr(temp->name,&success);

    if(old_value != new_value){
      printf("watchpoint: NO%d, %s\n", temp->NO, temp->name);
      printf("old_value: %ld\nnew_value: %ld\n", old_value, new_value);
    }
    temp = temp->next;
  }
}

