#include <regex.h>
#include <pcre.h>
#include <stdint.h>
#include <string.h>
#include <assert.h>
#include <macro.h>
#include <stdio.h>
#include "memory.hpp"
#include "isa-def.hpp"


enum {
  TK_NOTYPE = 256, TK_EQ, TK_DEC, TK_HEX, TK_DEREF, TK_REG

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
  {"\\-", '-'},             // sub
  {"\\*", '*'},           // mul or deref
  {"/", '/'},             // div
  {"==", TK_EQ},          // equal
  {"\\(", '('},           // left
  {"\\)", ')'},           // right
  {"(?<!0x)[0-9]+(?!x)", TK_DEC}, // DEC
  {"0x[0-9a-f]+", TK_HEX},  // HEX
  {"\\$(0|ra|sp|gp|t[0-6p]|s\\d+|a[0-7]|pc)", TK_REG}  // REG
};

#define NR_REGEX ARRLEN(rules)

static pcre *re[NR_REGEX] = {};




/* Rules are used for many tnmes.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  const char *error_msg;
  int error_offset;


  for (i = 0; i < NR_REGEX; i ++) {
    re[i] = pcre_compile(rules[i].regex, 0, &error_msg, &error_offset, NULL);
    if (re[i] == NULL) {
      assert(0);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[128] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;


bool is_DEREF(int n){
  if(n == 0 || (tokens[n-1].type == '+' || tokens[n-1].type == '-' || 
    tokens[n-1].type == '*' || tokens[n-1].type == '/' || tokens[n-1].type == TK_EQ ||
    tokens[n-1].type == '(' ))
  
    return true;
  
  else 
    return false;

}

static bool make_token(char *e) {
  int position = 0;
  int i;
  int ovector[3];

  int ret;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      ret = pcre_exec(re[i], NULL, e, strlen(e), position, 0, ovector, 3);
      if (ret >= 0 && ovector[0] == position) {
        char *substr_start = e + position;
        int substr_len = ovector[1] - ovector[0];

        // Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
        //     i, rules[i].regex, position, substr_len, substr_len, substr_start);

        

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
          case '+': tokens[nr_token].type = rules[i].token_type ; 
                    nr_token ++;
                    i = 0;
                    break;
          case '-': tokens[nr_token].type = rules[i].token_type ; 
                    nr_token ++;
                    i = 0;
                    break;
          case '*': if(is_DEREF(position))
                      tokens[nr_token].type = TK_DEREF;
                    else 
                      tokens[nr_token].type = '*';

                    i = 0;
                    nr_token ++;
                    break;
          case '/': tokens[nr_token].type = rules[i].token_type ; 
                    nr_token ++;
                    i = 0;
                    break;
          case '(': tokens[nr_token].type = rules[i].token_type ; 
                    nr_token ++;
                    i = 0;
                    break;
          case ')': tokens[nr_token].type = rules[i].token_type ; 
                    nr_token ++;
                    i = 0;
                    break;
          case TK_EQ: tokens[nr_token].type = rules[i].token_type ; 
                      nr_token ++;
                      i = 0;
                      break;
          case TK_DEC : tokens[nr_token].type = rules[i].token_type ; 
                        strncpy(tokens[nr_token].str,substr_start,substr_len);
                        nr_token ++;
                        i = 0;
                        break;
          case TK_HEX : tokens[nr_token].type = rules[i].token_type ; 
                        strncpy(tokens[nr_token].str,substr_start,substr_len);
                        nr_token ++;
                        i = 0;
                        break;
          case TK_REG : tokens[nr_token].type = rules[i].token_type ; 
                        strncpy(tokens[nr_token].str,substr_start,substr_len);
                        nr_token ++;
                        i = 0;
                        break;
          

          default: break;
        }

        if (i == NR_REGEX) {
        printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
        return false;
        }
        position += substr_len;
      }
    }

    
    
  }

  return true;
}



static bool check_parantheses(int begin, int end){

  int position = begin;
  int paren_layers = 0;

  if(begin >= end)
    return false;
  else if(tokens[begin].type != '(' || tokens[end].type != ')')
    return false;
  else {
    
    paren_layers ++;

    while(paren_layers > 0 && position < end){
      position ++;
      
      if(tokens[position].type == '(')
        paren_layers ++;
      else if(tokens[position].type == ')')
        paren_layers --;

    }

    if(position < end || paren_layers != 0)
      return false;
    else 
      return true;
  }

}

static int find_priority(int begin, int end, bool *success){     //最高3==， 优先找2+ -， 其次找1* /，作为主运算符 
                                                  //找括号外的运算符
  
  if(begin >= end)
    return 0;
  else if(check_parantheses(begin,end)){
    return find_priority(begin+1,end-1,success);
  }

  int position = begin;

  int single_token = 0;

  int paren_layers = 0;

  
  while(position < end){

    if(tokens[position].type == '('){
      paren_layers = 1;
      position ++;

      while(paren_layers > 0 ){
        if(tokens[position].type == '(')
          paren_layers ++;
        else if(tokens[position].type == ')')
          paren_layers --;

        position ++;
      }

      if(tokens[position].type == '(' || tokens[position].type == ')'){
        *success = false;
        return 0;
      }

      continue;
        
    }      
    else if(tokens[position].type == TK_EQ)
      return position;

    else if(tokens[position].type == '+' || tokens[position].type == '-'){
      
      single_token = position;
      position ++;

      while(position < end){
        
        if(tokens[position].type == TK_EQ)
          return position;
        else if(tokens[position].type == '(')
          return single_token;
        
        position ++;
      }

      return single_token;
    }

    else if(tokens[position].type == '*' || tokens[position].type == '/'){
      
      single_token = position;
      position ++;

      while(position < end){

        if(tokens[position].type == TK_EQ)
          return position;
        else if(tokens[position].type == '+' || tokens[position].type == '-')
          single_token = position;
        else if(tokens[position].type == '(')
          return single_token;
        
        position ++;
      }

      return single_token;
    }

    position ++;

  }

  assert(0);
  return 0;
  
}


static uint64_t eval(int begin, int end, bool *success){

  int op_pos = 0;
  int op_type = 0;
  uint64_t val1 = 0;
  uint64_t val2 = 0;
  uint64_t addr = 0;

  if(*success == false)
    return 0;
  if(begin > end){
    *success = false;
    return 0;
  }
  else if(tokens[begin].type == ')'){
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
    case TK_REG:
      return cpu_ins.isa_reg_str2val(tokens[begin].str, success);
    
    default:
      assert(0);
      return 0;
    }
  }
  
  else if(tokens[begin].type == TK_DEREF){

    if(begin + 1 == end){
      switch(tokens[begin+1].type){
        case TK_DEC:
          addr = strtol(tokens[begin+1].str, NULL, 10);
          return pmem.mem_readbylen(addr, 1);
        case TK_HEX:
          addr = strtol(tokens[begin+1].str, NULL, 16);
          return pmem.mem_readbylen(addr, 1);
        default:
          assert(0);
          return 0;
      }
    }
    else {                                            //把DEREF后的()表达式集中到一个str中
      int pos = 1;
      int paren_layer = 0;
      if(tokens[begin + pos].type == '(')
      {
        pos ++;
        paren_layer ++;
      }
      while(paren_layer > 0){
        if(tokens[begin + pos].type == '(')
        {
          paren_layer ++;
        }
        else if(tokens[begin + pos].type == ')')
        {
          paren_layer --;
        }
        pos ++;
      }



      addr = eval(begin+1, begin+pos-1, success);
      uint64_t value = pmem.mem_readbylen(addr, 1);

      tokens[begin+pos-1].type = TK_DEC;
      sprintf(tokens[begin+pos-1].str, "%ld", value);


      return eval(begin+pos-1, end, success);                 //求值无DEREF的表达式
      
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
      case TK_EQ: return (val1 == val2);
        
      default: *success = false;
    }

  }

  assert(0);
  return 0;
}


uint64_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  *success = true;

  uint64_t val = eval(0, nr_token - 1, success);

  if(*success == false)
    assert(0);

  return val;
}
