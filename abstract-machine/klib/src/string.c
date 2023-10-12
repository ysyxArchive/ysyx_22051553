#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
	assert(s != NULL);
	size_t length = 0;
	while(*(s+length) != '\0') length++;
	return length;
}

char *strcpy(char *dst, const char *src) {
	assert(dst!=NULL && src!= NULL);
	size_t offset = 0;
	while(*(src+offset) != '\0'){
		*(dst+offset) = *(src+offset);
		offset ++;
	}
	*(dst+offset) = '\0';
	return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  size_t offset = 0;
  int 	end_flag = 0;
  while(offset < n){
	if(*(src+offset) == '\0') end_flag = 1;
	*(dst+offset) = (end_flag) ? '\0' : *(src+offset);
	offset ++;
  }
  return dst;
}

char *strcat(char *dst, const char *src) {
  int begin = 0;
  int offset = 0;
  while(*(dst+begin) != '\0') begin ++;
  while(*(src+offset) != '\0'){
    *(dst+begin+offset) = *(src+offset);
    offset ++;
  }
  *(dst+begin+offset) = '\0';

  return dst;
}

int strcmp(const char *s1, const char *s2) {
  int offset = 0;
  while(*(s1+offset) != '\0' && *(s2+offset) != '\0' &&
    (*(s1+offset) == *(s2+offset))) offset ++;
  
  if(*(s1+offset) == '\0' && *(s2+offset) == '\0'){
    return 0;
  }else if(*(s1+offset) == '\0' && *(s2+offset) != '\0'){
    return -1;
  }else if(*(s1+offset) != '\0' && *(s2+offset) == '\0'){
    return 1;
  }
  else return (*(s1 + offset) < *(s2 + offset)) ? -1 : 1;
}

int strncmp(const char *s1, const char *s2, size_t n) {
	int offset = 0;
	while(*(s1+offset) != '\0' && *(s2+offset) != '\0' &&
	(*(s1+offset) == *(s2+offset)) && offset < n) offset ++;

	if(offset == n)
	return 0;
	else if(*(s1+offset) == '\0' && *(s2+offset) == '\0'){
	return 0;
	}else if(*(s1+offset) == '\0' && *(s2+offset) != '\0'){
	return -1;
	}else if(*(s1+offset) != '\0' && *(s2+offset) == '\0'){
	return 1;
	}
	else return (*(s1 + offset) < *(s2 + offset)) ? -1 : 1;
}

void *memset(void *s, int c, size_t n) {
  int offset = 0;
  while(offset < n){
    *((char*)s+offset) = c;
    offset ++;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {  //确保重叠不产生数据损坏
  int offset = 0;
  char *d = (char *)dst;
  const char *s = (const char *)src;

  if (d < s) {
    while (offset < n) {
      d[offset] = s[offset];
      offset++;
    }
  } else {
    offset = n - 1;
    while (offset >= 0) {
      d[offset] = s[offset];
      offset--;
    }
  }

  return dst;
}


// void *memcpy(void *out, const void *in, size_t n) {
//   int offset = 0;
//   while(offset < n){
// 	*(char*)(out+offset) = *(char *)(in+offset);
// 	offset ++;
//   }
//   return out;
// }
// void * memcpy(void *dest, const void *src, size_t n) //优化 --可能有非8字节对齐的sd操作问题
// {
//   char *cdest = (char*) dest;
//   const char *csrc = (const char*) src;
  
//   //搬运字
//   for (; n >= sizeof(long); n -= sizeof(long), csrc += sizeof(long), cdest += sizeof(long)) {
//     *(long*) cdest = *(const long*) csrc;
//   }
  
//   //搬运字节
//   while (n--) {
//     *cdest++ = *csrc++;
//   }
  
//   return dest;
// }
void * memcpy(void *dest, const void *src, size_t n) //优化
{
    char *cdest = (char*) dest;
    const char *csrc = (const char*) src;


    size_t diff = 0;
    if((uintptr_t)cdest - (uintptr_t)csrc){
      diff = (uintptr_t)cdest - (uintptr_t)csrc;
    }else{
      diff = (uintptr_t)csrc - (uintptr_t)cdest;
    }

    while (((uintptr_t)csrc & 7) && n) {  //csrc 8字节对齐
        *cdest++ = *csrc++;
        n--;
    }


    if (diff % 8 == 0) { //如果源和目标地址相差8的倍数，可以使用8字节读写，ld,sd
        while (n >= 8) {
            *((long*)cdest) = *((long*)csrc);
            cdest += 8;
            csrc += 8;
            n -= 8;
        }
    } else if (diff % 4 == 0) {
        while (n >= 4) {
            *((int*)cdest) = *((int*)csrc);
            cdest += 4;
            csrc += 4;
            n -= 4;
        }
    } else if (diff % 2 == 0) {
        while (n >= 2) {
            *((short*)cdest) = *((short*)csrc);
            cdest += 2;
            csrc += 2;
            n -= 2;
        }
    }

    while(n > 8){ //优化，不while(n--)
      cdest[0] = csrc[0];
      cdest[1] = csrc[1];
      cdest[2] = csrc[2];
      cdest[3] = csrc[3];
      cdest[4] = csrc[4];
      cdest[5] = csrc[5];
      cdest[6] = csrc[6];
      cdest[7] = csrc[7];
      cdest += 8;
      csrc += 8;
      n = n - 8;
    }

    while (n--) { //一次写，一次跳转判断
        *cdest++ = *csrc++;
    }

    return dest;
}




int memcmp(const void *s1, const void *s2, size_t n) {
  int offset = 0;
  while( *((char*)s1+offset) == *((char*)s2+offset)  && offset < n){
    offset ++;
  }
  if(offset == n)return 0;
  else if(*((char*)s1+offset) > *((char*)s2+offset))return 1;
  else if(*((char*)s1+offset) < *((char*)s2+offset))return -1;

  return 0;
}

#endif
