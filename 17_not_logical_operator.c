#include <stdbool.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  // logical operator = ! (NOT) reverses the state of a condition

  bool sunny = true;

  if (!sunny) {
    printf("\nIt's cloudy outside!");
  } else {
    printf("\nIt's sunny outside!");
  }

  return 0;
}
