#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

char hex_char[16] = {'0', '1', '2', '3', '4', '5', 
'6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

void uint2strx(unsigned int num, char* str){
  int length = 0;
  unsigned int temp = num;

  while(temp){
    length ++;
    temp /= 16;
  }

  if(num == 0){
    str[0] = '0';
    str[1] = '\0';
    return ;
  }

  temp = num;
  
  str[length] = '\0';
  length --;
  while(length >= 0){
    str[length] = hex_char[temp%16];
    temp /= 16;
    length --;
  }

  return ;
}

void ulint2strx(unsigned long int num, char* str){
  int length = 0;
  unsigned long int temp = num;

  while(temp){
    length ++;
    temp /= 16;
  }

  if(num == 0){
    str[0] = '0';
    str[1] = '\0';
    return ;
  }

  temp = num;
  
  str[length] = '\0';
  length --;
  while(length >= 0){
    str[length] = hex_char[temp%16];
    temp /= 16;
    length --;
  }

  return ;
}

void uint2str(unsigned int num, char* str){
  int length = 0;
  unsigned int temp = num;

  while(temp){
    length ++;
    temp /= 10;
  }

  if(num == 0){
    str[0] = '0';
    str[1] = '\0';
    return ;
  }

  temp = num;
  
  str[length] = '\0';
  length --;
  while(length >= 0){
    str[length] = temp % 10 + 48;
    temp /= 10;
    length --;
  }
  return ;
}

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

  if(num == 0){
    str[0] = '0';
    str[1] = '\0';
    return;
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
  return ;
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
      char str[100];
      while(in[fmt_off+1] != 's' && in[fmt_off+1] != 'd' && in[fmt_off+1] != 'u' 
      && in[fmt_off+1] != 'x' && in[fmt_off+1] != 'p' && in[fmt_off+1] != 'c'){  //若有其他选项，会报错
        control[ctrl_off] = in[fmt_off+1];
        ctrl_off ++;
        fmt_off++;
        total++;
      }
      control[ctrl_off] = '\0';

      switch(in[fmt_off+1]){
        case 's':
          const char * src = va_arg(valist,const char*);
        
          strcpy(str,src);
          while(str[partial_off] != '\0'){
            putch(str[partial_off]);
            partial_off ++;
            total ++;
          }
          fmt_off+=2;
          partial_off=0;
          break;
        
        case 'd':
          int d_type = va_arg(valist,int);
          int2str(d_type, str);

          if(control[0] == '0'){   //%02d
            int len = control[1] - 48;
            int maxvalue = 1;
            if(d_type == 0){
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
            
              for(int v = d_type; v < maxvalue; v*=10){
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

          case 'x':                          //unsigned int
          unsigned int x_type = va_arg(valist,unsigned int);
          uint2strx(x_type, str);

          if(control[0] == '0'){   //%02x
            int len = control[1] - 48;
            int maxvalue = 1;
            if(x_type == 0){
              while(len > 0){
                putch('0');
                len --;  
              }
            }
            else{
              while(len > 1){
                maxvalue *= 16;
                len --;
              }
            
              for(int v = x_type; v < maxvalue; v*=16){
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

          case 'u':        //unsigned int
          unsigned int u_type = va_arg(valist,unsigned int);
          uint2str(u_type, str);
          if(control[0] == '0'){   //%02d
            int len = control[1] - 48;
            int maxvalue = 1;
            if(u_type == 0){
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
            
              for(int v = u_type; v < maxvalue; v*=10){
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

          case 'p':        //unsigned long int / void*
          unsigned long int p_type = va_arg(valist,unsigned long int);
          ulint2strx(p_type, str);

          putch('0');
          putch('x');

          
          if(control[0] == '0'){   //%02d
            int len = control[1] - 48;
            int maxvalue = 1;
            if(p_type == 0){
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
            
              for(int v = p_type; v < maxvalue; v*=10){
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
        
        case 'c':
          char ch = va_arg(valist,int);
          putch(ch);
          total ++;
          fmt_off+=2;
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
      char str[50] = {};
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
  const char *in = fmt;

  va_list valist;
  va_start(valist,fmt);

  
  int out_off = 0;
  int partial_off = 0;
  int fmt_off = 0;


  while(in[fmt_off] != '\0' && (out_off < n)){
    if(in[fmt_off] != '%'){
      out[out_off] = in[fmt_off];
      out_off++;
      fmt_off++;
    }
    else if(in[fmt_off] == '%'){
      char str[100] = {};
      switch(in[fmt_off+1]){
        case 's':
          strcpy(str,(const char*)(va_arg(valist,const char*)));
          while(str[partial_off] != '\0'){
            if(out_off >= n)
              break;

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
            if(out_off >= n)
              break;

            out[out_off] = str[partial_off];
            out_off ++;
            partial_off ++;

          }
          fmt_off+=2;
          partial_off=0;
          break;
        case 'c':
          char ch = va_arg(valist,int);

          out[out_off] = ch;
          out_off ++;

          fmt_off+=2;
          break;
        default:assert(0);break;
      }
    }
  }
  out[out_off] = '\0';

  return out_off;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
