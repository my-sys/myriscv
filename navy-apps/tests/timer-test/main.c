#include <stdio.h>
#include <sys/time.h>
int main(){
    struct timeval tv_begin, tv_end;
    
    for(int i = 0; i<500;i++){
        gettimeofday(&tv_begin,NULL);

        do{
            gettimeofday(&tv_end,NULL);
        }while((tv_end.tv_usec-tv_begin.tv_usec) < 500000);
        printf("hello \n");
    }
    
    return 0;
}