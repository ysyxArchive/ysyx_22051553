#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <NDL.h>
#include <BMP.h>

int main() {

  NDL_Init(0);
  int w, h;
  printf("time0\n");
  void *bmp = BMP_Load("/share/pictures/projectn.bmp", &w, &h);
  printf("time1\n");
  assert(bmp);
  NDL_OpenCanvas(&w, &h);   //128, 128   该函数用于向NDL输出画布大小
  printf("time2\n");
  NDL_DrawRect(bmp, 0, 0, w, h);
  printf("time3\n");
  free(bmp);
  NDL_Quit();
  printf("Test ends! Spinning...\n");
  while (1);
  return 0;
}
