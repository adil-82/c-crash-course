#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[])
{
  double A = sqrt(9);
  double B = pow(2, 4);
  int C = round(3.14);
  int D = ceil(3.14);
  int E = floor(3.99);
  // double F = fabs(-100);
  int F = fabs(-100);
  double G = log(3);
  double H = sin(45);
  double I = cos(45);
  double J = tan(45);

  printf("double A = sqrt(9) :>> %lf\n", A);
  printf("double B = pow(2, 4) :>> %lf\n", B);
  printf("int C = round(3.14) :>> %d\n", C);
  printf("int D = ceil(3.14) :>> %d\n", D);
  printf("int E = floor(3.99) :>> %d\n", E);
  // printf("double F = fabs(-100) :>> %lf\n", F);
  printf("double F = fabs(-100) :>> %d\n", F);

  return 0;
}
