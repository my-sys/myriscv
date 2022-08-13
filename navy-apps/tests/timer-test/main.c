#include <stdio.h>
#include <sys/time.h>
int main(){
    struct timeval tv_begin, tv_end;
    __uint64_t temp,temp1;
    for(int i = 0; i<500;i++){
        gettimeofday(&tv_begin,NULL);
        temp =  tv_begin.tv_sec*1000000 + tv_begin.tv_usec;
        do{
            
            gettimeofday(&tv_end,NULL);
            temp1 = tv_end.tv_sec*1000000 + tv_end.tv_usec;
            printf("ha %d\n",temp1-temp);
        }while((temp1-temp) < 500000);
        printf("hello1 \n");
    }
    
    return 0;
}