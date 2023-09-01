#include <stdio.h>

int main(int argc, char *argv[]) {
  int x = 5;
  int y = 2;

  // int z = x / y;
  // float z = x / (float) y;
  float z = x / (double)y;

  // printf("z :>> %d\n", z);
  printf("z :>> %f\n", z);

  int w = x % y;

  printf("w :>> %d\n", w);

  x++;
  y--;

  printf("x++ :>> %d\ny-- :>> %d\n", x, y);
  printf("x++ :>> %d\ny-- :>> %d\n", x, y);

  x+=1;
  y-=1;

  printf("x+=1 :>> %d\ny-=1 :>> %d\n", x, y);

  return 0;
}
