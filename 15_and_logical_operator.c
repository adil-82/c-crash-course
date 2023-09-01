#include <stdbool.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  // logical operators = && (AND) checks if two conditins are true

  float temp = 25;
  bool sunny = false;

  // if (temp >= 0 && temp <= 30) {
  if (temp >= 0 && temp <= 30 && sunny) {
    printf("\nThe weather is good!");
  } else {
    printf("\nThe weather is bad!");
  }

  return 0;
}
