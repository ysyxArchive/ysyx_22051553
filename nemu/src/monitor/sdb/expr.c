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

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ, TK_DEC, TK_HEX

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},      // spaces
  {"\\+", '+'},           // plus
  {"-", '-'},             // sub
  {"\\*", '*'},           // mul
  {"/", '/'},             // div
  {"==", TK_EQ},          // equal
  {"\\(", '('},           // left
  {"\\)", ')'},           // right
  {"[1-9][0-9]+", TK_DEC}, // DEC
  {"(0x)[0-9]+", TK_HEX}  // HEX
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
          case '+': tokens[nr_token].type = rules[i].token_type ; 
                    nr_token ++;
                    break;
          case '-': tokens[nr_token].type = rules[i].token_type ; 
                    nr_token ++;
                    break;
          case '*': tokens[nr_token].type = rules[i].token_type ; 
                    nr_token ++;
                    break;
          case '/': tokens[nr_token].type = rules[i].token_type ; 
                    nr_token ++;
                    break;
          case TK_EQ: tokens[nr_token].type = rules[i].token_type ; 
                      nr_token ++;
                      break;
          case TK_DEC : tokens[nr_token].type = rules[i].token_type ; 
                        strncpy(tokens[nr_token].str,substr_start,substr_len);
                        nr_token ++;
                        break;
          

          default: break;
        }
      }


      if (i == NR_REGEX) {
        printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
        return false;
      }

    }
    
  }

  return true;
}



static bool check_parantheses(int begin, int end){

  if(begin >= end)
    return false;
  else if(tokens[begin].type == '(' && tokens[end].type == ')')
    return true;
  else 
    return false;

}

static int find_priority(int begin, int end, bool *success){     //优先找2+ -， 其次找1* /，作为主运算符 
                                                  //找括号外的运算符
  
  if(begin >= end)
    return 0;
  else if(check_parantheses(begin,end)){
    return find_priority(begin+1,end-1,success);
  }

  int position = begin;

  int single_token = 0;

  int paren_layers = 0;
  int left_paren = 0;
  int right_paren =0;

  
  while(position < end){

    if(tokens[position].type == left_paren){
      paren_layers = 1;
      position ++;

      while(paren_layers > 0 ){
        if(tokens[position].type == left_paren)
          paren_layers ++;
        else if(tokens[position].type == right_paren)
          paren_layers --;

        position ++;
      }

      if(tokens[position].type == left_paren || tokens[position].type == right_paren){
        *success = false;
        return 0;
      }
        
    }      

    else if(tokens[position].type == '+' || tokens[position].type == '-')
      return position;

    else if(tokens[position].type == '*' || tokens[position].type == '/'){
      
      single_token = position;
      position ++;

      while(position < end){
        
        if(tokens[position].type == '+' || tokens[position].type == '-')
          return position;
        else if(tokens[position].type == '(')
          return single_token;
      }
    }

    position ++;

  }

  assert(0);
  return 0;
  
}


static word_t eval(int begin, int end, bool *success){

  int op_pos = 0;
  int op_type = 0;
  word_t val1 = 0;
  word_t val2 = 0;

  if(*success == false)
    return 0;
  if(begin > end){
    *success = false;
    return 0;
  }
  else if( (tokens[begin].type == '(' && tokens[end].type != ')') || 
    (tokens[begin].type != '(' && tokens[end].type == ')') ||
    tokens[begin].type == ')'){
    
    *success = false;
    return 0;
  }
  else if(begin == end){
    switch (tokens[begin].type)
    {
    case TK_DEC:
      return strtol(tokens[begin].str, NULL, 10);
    case TK_HEX:
      return strtol(tokens[begin].str, NULL, 16);
    default:
      break;
    }
  }
  else if(check_parantheses(begin, end) == true){
    return eval(begin+1, end-1, success);
  }
  else {

    op_pos = find_priority(begin, end, success);
    if(*success == false)
      return 0;

    op_type = tokens[op_pos].type;

    
    val1 = eval(begin, op_pos-1, success);
    val2 = eval(op_pos+1, end, success);

    switch (op_type)
    {
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/': return val1 / val2;
        
      default: *success = false;
    }

  }

  assert(0);
  return 0;
}



word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  *success = true;

  word_t val = eval(0, nr_token, success);

  if(*success == false)
    assert(0);

  return val;
}
