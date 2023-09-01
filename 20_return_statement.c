#include <stdio.h>

// return - returnes a value back to a calling function

double square(double x) {
  // double result = x * x;
  // return result;
  return x * x;
}

int main() {
  double x = square(3.14);
  printf("%.2lf\n", x);
  return 0;
}
