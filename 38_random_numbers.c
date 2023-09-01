#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // pseudo random numbers = A set of values or elements that are statisticlly,
  // random (Don't use these for any sort of cryptographic security)

  srand(time(0));

  int number_1 = (rand() % 6) + 1;
  int number_2 = (rand() % 6) + 1;
  int number_3 = (rand() % 6) + 1;

  printf("%d\n", number_1);
  printf("%d\n", number_2);
  printf("%d\n", number_3);
}
