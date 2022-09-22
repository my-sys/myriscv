#include <am.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
bool ioe_init() {
  return true;
}

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_EVENT, FD_INFO, FD_FB, FD_AM}; //xingk
void ioe_read (int reg, void *buf) { read(FD_AM,buf,reg);}
void ioe_write(int reg, void *buf) { write(FD_AM,buf,reg);}
