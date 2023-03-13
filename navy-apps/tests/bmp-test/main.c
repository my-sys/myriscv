#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <NDL.h>
#include <BMP.h>
int main() {
  asm volatile("ebreak");
  printf(" main 0x ll\n");
  NDL_Init(0);
  int w, h;
  void *bmp = BMP_Load("/share/pictures/projectn.bmp", &w, &h);
  printf(" main 0x%x\n",bmp);
  assert(bmp);
  NDL_OpenCanvas(&w, &h);
  NDL_DrawRect(bmp, 0, 0, w, h);
  free(bmp);
  NDL_Quit();
  printf("Test ends! Spinning...\n");
  while (1);
  return 0;
}
