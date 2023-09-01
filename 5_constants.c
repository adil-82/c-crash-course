#include <stdio.h>

int main(int argc, char *argv[]) {
  // constant = fixed value taht cannot be altered by the program during its
  // execution

  float pi = 3.14159;
  pi = 420.39;
  printf("pi :>> %f\n", pi);

  const float PI = 3.14159;
  // PI = 420.39;
  printf("PI :>> %f\n", PI);

  return 0;
}
