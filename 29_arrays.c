#include <stdio.h>

int main() {
  // array = a data stucture that can store many values of the same data type.

  double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 30.0};
  char name[] = "Adil";

  // printf("$%.2lf\n", prices[0]);
  printf("bytes: %d \n",
         sizeof(prices)); // We have 6 element made up of doubles (6*8=48)

  // for (int i = 0; i < 5; i++) {
  for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++) {
    printf("$%.2lf\n", prices[i]);
  }
}
