#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

  double A;
  double B;
  double C;

  printf("Enter side A: \n");
  scanf("%lf", &A);

  printf("Enter side B: \n");
  scanf("%lf", &B);

  C = sqrt(A*A + B*B);

  printf("Side C :>> %lf\n", C);

  return 0;
}
