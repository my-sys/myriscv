#include <am.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
Area heap;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_EVENT, FD_INFO, FD_FB, FD_AM}; //xingk
void putch(char ch) {
    write(FD_STDOUT,&ch,1);
}

void halt(int code) {
    printf("halt %d\n",code);
    while(1);
}
