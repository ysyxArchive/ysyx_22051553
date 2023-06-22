#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

void int2str(int num, char* str){
  int neg = 0;
  int length = 0;
  int temp = num;

  if(temp < 0){
    neg = 1;
    temp = -num;
  }

  while(temp){
    length ++;
    temp /= 10;
  }

  if(length == 0){
    str[0] = '0';
    str[1] = '\0';
  }

  temp = num;


  if(neg){
    length ++;
    str[length] = '\0';
    length --;
    while(length >= 1){
      str[length] = temp % 10 + 48;
      temp /= 10;
      length --;
    }
    str[length] = '-';
  }else {
    str[length] = '\0';
    length --;
    while(length >= 0){
      str[length] = temp % 10 + 48;
      temp /= 10;
      length --;
    }
  }
}


int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  
  const char *in = fmt;

  va_list valist;
  va_start(valist,fmt);

  
  int out_off = 0;
  int partial_off = 0;
  int fmt_off = 0;
  while(in[fmt_off] != '\0'){
    if(in[fmt_off] != '%'){
      out[out_off] = in[fmt_off];
      out_off++;
      fmt_off++;
    }
    else if(in[fmt_off] == '%'){
      char str[20] = {};
      switch(in[fmt_off+1]){
        case 's':
          strcpy(str,(const char*)(va_arg(valist,const char*)));
          while(str[partial_off] != '\0'){
            out[out_off] = str[partial_off];
            out_off ++;
            partial_off ++;
          }
          fmt_off+=2;
          partial_off=0;
          break;
        case 'd':
          int2str(va_arg(valist,int), str);
          while(str[partial_off] != '\0'){
            out[out_off] = str[partial_off];
            out_off ++;
            partial_off ++;
          }
          fmt_off+=2;
          partial_off=0;
          break;
        default:assert(0);break;
      }
    }
  }
  out[out_off] = '\0';

  return out_off;

}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
