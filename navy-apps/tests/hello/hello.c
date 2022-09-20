#include <unistd.h>
#include <stdio.h>
#include <fixedptc.h>
int main() {
  write(1, "Hello World!\n", 13);
  int i = 2;
  volatile int j = 0;
  // while (1) {
  //   j ++;
  //   if (j == 10000) {
  //     printf("Hello World from Navy-apps for the %dth time!\n", i ++);
  //     j = 0;
  //   }
  // }
  fixedpt A = 5<<8;
  printf(" %d\n",(fixedpt_muli(A,5)>>8));
  fixedpt B = (9.3)*(1<<8);
  printf(" %d \n",(fixedpt_abs(B)>>8));

  fixedpt C = (-15.9)*(1<<8);
  printf(" %d \n",(fixedpt_floor(C)>>8));

  fixedpt D = (-15.9)*(1<<8);
  printf(" %d \n",(fixedpt_ceil(D)>>8));
  return 0;
}
