#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static 	char number_table[] = "0123456789abcdef";
//判断字符串长度，不包含空字符串
size_t strlen(const char *s) {
  //  panic("Not implemented");
  const char *start = s;
  while (*s){
      s++;
  }
  return (s - start);
}

char *strcpy(char *dst, const char *src) {
  //panic("Not implemented");
  char *s = dst;
  while(*src){
	*dst++ = *src++;
  }
  //while((*dst++ = *src++));
  return s;
}

char *strncpy(char *dst, const char *src, size_t n) {
 // panic("Not implemented");
 char *dscan;
 const char *sscan;

 dscan = dst;
 sscan = src;

 while(n > 0){
     n--;
	 if(*sscan){
		*dscan++ = *sscan++;
	 }else{
		*dscan++ = '\0';
	 }
    //  if((*dscan++ = *sscan++) == '\0'){
    //      break;
    //  }
 }
//n--是一个整体，即使判断循环的条件是n > 0,但仍然会执行最后的一次减法
//  while(n-- >0){
//      *dscan++ = '\0';
//  }
 return dst;
}

//把src所指向的字符串追加到dest所指向的字符串的结尾
char *strcat(char *dst, const char *src) {
//  panic("Not implemented");
    char *s = dst;
    while (*dst){
        dst++;
    }
    while((*dst++ = *src++));
    return s;
}

//字符串比较，区分大小写
int strcmp(const char *s1, const char *s2) {
  //panic("Not implemented");
    while ((*s1 != '\0') && (*s1 == *s2)){
        s1++;
        s2++;
    }
    return (*(unsigned char *)s1) - (*(unsigned char *) s2);
}

int strncmp(const char *s1, const char *s2, size_t n) {
 // panic("Not implemented");
 if (n == 0)return 0;
 
 // 先判断后n--
 while (n != 0 && *s1 == *s2){
     n--;
     if (n == 0 || *s1 == '\0')break;
     s1++;
     s2++;
 }

 return (*(unsigned char *)s1) - (*(unsigned char *)s2);
}

//复制n个字符串c，到s
void *memset(void *s, int c, size_t n) {
  //panic("Not implemented");
    char *temp = s;
    while(n > 0){
        n--;
        *temp++ = (char) c;
    }

    return s;

}

// 从src复制n个字符到dst,并且避免覆盖的情况
// 覆盖情况只有在src地址小于dst地址,并且中间有重叠时发生
// 只需要调换拷贝方向就可以避免
void *memmove(void *dst, const void *src, size_t n) {
  //panic("Not implemented");
  char *dst_temp = dst;
  const char *src_temp = src;

  if(src_temp < dst_temp && dst_temp < src_temp + n){
      
      src_temp += (n-1);
      dst_temp += (n-1);
      while(n--){
          *dst_temp-- = *src_temp--;
      }

  } else{
      while(n--){
          *dst_temp++ = *src_temp++;
      }
  }
  return dst;
}

void *memcpy(void *out, const void *in, size_t n) {
  //panic("Not implemented");
  char *dst_temp = (char *)out;
  char *src_temp = (char *)in;

  while (n--){
      *dst_temp++ = *src_temp++;
  }
  return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  //panic("Not implemented");
  unsigned char *temp1 = (unsigned char *)s1;
  unsigned char *temp2 = (unsigned char *)s2;

  while(n--){
      if(*temp1 != *temp2)
      {
          return *temp1 - *temp2;
      }
      temp1++;
      temp2++;
  }

  return 0;
}

char* itoa(int value, char *str, int base){
	char* temp_str = str;
    char reverse[42];
    char *temp = reverse;
	char num_table[] = "0123456789abcdf";
    bool sign = (value >= 0)?true:false;

    value = (value >= 0)?value:-value;
    *temp++ = '\0';
    while (value >= 0){
        *temp++ = num_table[value%base];
        value = value / base;
        if (value == 0)break;

    }
    if(!sign){
        *temp = '-';
    }else{
        temp--;
    }

    while (temp >= reverse){
        *temp_str++ = *temp--;
    }

    return str;
}

char* uitoa(uint32_t value, char *str, int base){
    char* temp_str = str;
	//char number_table[] = "0123456789abcdef";
	char reverse[32];
    char* temp = reverse;
    *temp++ = '\0';

    while(value >=0){
        *temp++ = number_table[value%base];
        value = value / base;
        if(value ==0)break;
    }
    temp--;
    while(temp >= reverse){
        *temp_str++ = *temp--;
    }

    return str;

}


char* ltoa(int64_t value, char *str, int base){
    char* temp_str = str;
	//char number_table[] = "0123456789abcdef";
	char reverse[65];
    char* temp = reverse;
    *temp++ = '\0';

    while(value >=0){
        *temp++ = number_table[value%base];
        value = value / base;
        if(value ==0)break;
    }
    temp--;
    while(temp >= reverse){
        *temp_str++ = *temp--;
    }

    return str;

}

char* ultoa(uint64_t value, char *str, int base){
	char* temp_str = str;
    char reverse[64];
    char* temp = reverse;
    *temp++ = '\0';

    while(value >=0){
        *temp++ = number_table[value%base];
        value = value / base;
        if(value ==0)break;
    }
    temp--;
    while(temp >= reverse){
        *temp_str++ = *temp--;
    }

    return str;

}

#endif
