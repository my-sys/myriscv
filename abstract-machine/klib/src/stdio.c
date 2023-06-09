#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  //panic("Not implemented");
  char buf[2048];
  int ret = 0;
  va_list ap;
  char *temp = buf;  
  memset(buf, 0, sizeof(buf));
  //获取可变参数的参数列表
  va_start(ap,fmt);
  vsprintf(buf, fmt, ap);
  va_end(ap);

  while(*temp){
      putch(*temp);
      temp++;
  }
 return ret;
} 

int vsprintf(char *out, const char *fmt, va_list ap) {
  //panic("Not implemented");
    char* temp = out;
    va_list args; //parameters
	//拷贝可变参数列表
    va_copy(args,ap);

    for(;*fmt;fmt++){
        if(*fmt != '%'){
            *temp++ = *fmt;
        }else{
            fmt++;
            switch(*fmt){
                case 'd':
                    itoa(va_arg(args, int),temp,10);
                    temp = temp + strlen(temp);
                    break;
                case 'x':
                    uitoa(va_arg(args,unsigned int),temp,16);

                    temp = temp + strlen(temp);
                    break;


                case 'c':
                    *temp++ = va_arg(args,int);
                    break;

                case 's':
                    *temp = '\0';
                    strcat(temp, va_arg(args, char *));
                    temp += strlen(temp);
                    break;

                // case 'f':
                //     gcvt(va_arg(args,double),7, temp);
                //     temp += strlen(temp);
                //     break;

                case 'p':
                    ultoa(va_arg(args,unsigned long int),temp,16);
                    temp = temp + strlen(temp);                    
                    break;
                default:
                    break;

            }
        }
    }
    *temp = '\0';
	va_end(args);
    return 0;
}

int sprintf(char *out, const char *fmt, ...) {
 // panic("Not implemented");
 int ret;
 va_list ap;
 va_start(ap,fmt);
 ret = vsprintf(out, fmt, ap);
 va_end(ap);
 return ret;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
