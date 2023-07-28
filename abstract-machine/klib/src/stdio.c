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
  
  const char *in = fmt;

  va_list valist;
  va_start(valist,fmt);

  int fmt_off = 0;
  int partial_off = 0;
  int total = 0;

  char control[10] = {};
  int ctrl_off = 0;

  while(fmt[fmt_off] != '\0'){
    if(fmt[fmt_off] != '%'){
      putch(fmt[fmt_off]);
      fmt_off ++;
      total ++;
    }
    else{
      char str[20];
      while(in[fmt_off+1] != 's' && in[fmt_off+1] != 'd'){
        control[ctrl_off] = in[fmt_off+1];
        ctrl_off ++;
        fmt_off++;
        total++;
      }
      control[ctrl_off] = '\0';

      switch(in[fmt_off+1]){
        case 's':
          const char * src = va_arg(valist,const char*);
          if(src == NULL){
            fmt_off += 2;
            break;
          }
          else {
            strcpy(str,src);
            while(str[partial_off] != '\0'){
              putch(str[partial_off]);
              partial_off ++;
              total ++;
            }
            fmt_off+=2;
            partial_off=0;
            break;
          }
          
        case 'd':
          int value = va_arg(valist,int);
          int2str(value, str);

          if(control[0] == '0'){   //%02d
            int len = control[1] - 48;
            int maxvalue = 1;
            if(value == 0){
              while(len > 0){
                putch('0');
                len --;  
              }
            }
            else{
              while(len > 1){
                maxvalue *= 10;
                len --;
              }
            
              for(int v = value; v < maxvalue; v*=10){
                putch('0');
              }
            }
          }


          while(str[partial_off] != '\0'){
            putch(str[partial_off]);
            partial_off ++;
            total ++;
          }
          fmt_off+=2;
          partial_off=0;
          break;
        default:assert(0);break;
      }
    }
  }

  va_end(valist);

  return total;
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
