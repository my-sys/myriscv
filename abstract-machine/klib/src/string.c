#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {

  //  panic("Not implemented");
  const char *start = s;
  while (*s){
      s++;

  }
  return s - start;
}

char *strcpy(char *dst, const char *src) {
  //panic("Not implemented");
  char *s = dst;
  while((*dst++ = *src++));
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
     if((*dscan++ = *sscan++) == '\0'){
         break;
     }
 }
 while(n-- >0){
     *dscan++ = '\0';
 }
 return dst;
}

char *strcat(char *dst, const char *src) {
//  panic("Not implemented");
    char *s = dst;

    while (*dst){
        dst++;
    }

    while((*dst++ = *src++));

    return s;
}

int strcmp(const char *s1, const char *s2) {
  //panic("Not implemented");
    while (*s1 != '\0' && *s1 == *s2){
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

void *memset(void *s, int c, size_t n) {
  //panic("Not implemented");
    char *temp = s;
    while(n > 0){
        n--;
        *temp++ = (char) c;
    }

    return s;

}

void *memmove(void *dst, const void *src, size_t n) {
  //panic("Not implemented");
  char *dst_temp = dst;
  const char *src_temp = src;

  if(src_temp < dst_temp && dst_temp < src_temp + n){
      
      src_temp += n;
      dst_temp += n;
      while(n--){
          *--dst_temp = *--src_temp;
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
    char reverse[42];
    char *temp = reverse;
    bool sign = (value >= 0)?true:false;

    value = (value >= 0)?value:-value;
    *temp++ = '\0';
    while (value >= 0){
        *temp++ = "0123456789abcdf"[value%base];
        value = value / base;
        if (value == 0)break;

    }
    if(!sign){
        *temp = '-';
    }else{
        temp--;
    }

    while (temp >= reverse){
        *str++ = *temp--;
    }

    return str;
}

char* uitoa(uint32_t value, char *str, int base){
    char reverse[32];
    char* temp = reverse;
    *temp++ = '\0';

    while(value >=0){
        *temp++ = "0123456789abcdef"[value%base];
        value = value / base;
        if(value ==0)break;
    }
    temp--;
    while(temp >= reverse){
        *str++ = *temp--;
    }

    return str;

}

char* gcvt(double value, int n, char* str ){
    /*char tbuf[80];
    char*p = tbuf;

    int int_part = (int)value;
    double folat_part = value - int_part;
    itoa(int_part,tbuf,10);

    if(*p == 0 || *p == '-'){p++;}

    while(*p != '\0'){p++;n--;}

    *p++ = '.';
    
    int count = 20;
    bool is_valid_int_value = false;
    if(int_part != 0){ is_valid_int_value = true; }
    while (n > 0 && folat_part != 0 && count >0){
        *p++ = (int)(folat_part*10) + '0';
        count --;
        if(*(p-1) > '0'){
            is_valid_int_value = true;
        }
        if(is_valid_int_value == true){
            n--;
        }
    }
    *p = '\0';

    tbuf[71] = '\0';
    strcpy(str,tbuf);*/
    return str;
}

#endif
