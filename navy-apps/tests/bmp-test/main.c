#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <NDL.h>
#include <BMP.h>

int main() {

  NDL_Init(0);
  int w, h;
  // void *bmp = BMP_Load("/share/pictures/projectn.bmp", &w, &h);
  void *bmp = BMP_Load("/share/slides/slides-0.bmp", &w, &h);
  printf("bmp addr is %p\n", bmp);
  assert(bmp);
  NDL_OpenCanvas(&w, &h);   //128, 128   该函数用于向NDL输出画布大小
  NDL_DrawRect(bmp, 0, 0, w, h);
  free(bmp);
  NDL_Quit();
  printf("Test ends! Spinning...\n");
  while (1);
  return 0;
}
