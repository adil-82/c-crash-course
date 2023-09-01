#include <stdbool.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  // logical operators = || (OR) checks if at least one condition is true

  float temp = 35;
  bool sunny = true;

  // if (temp <= 0 || temp >= 30) {
  if (temp <= 0 || temp >= 30 || sunny) {
    printf("\nThe weather is bad!");
  } else {
    printf("\nThe weather is good!");
  }

  return 0;
}
