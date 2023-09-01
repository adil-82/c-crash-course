#include <stdio.h>

int main() {
  // while loop = checks a condition , THEN executes a block of code if
  // condition is true
  // do while llop = always exectes a block of code once, THEN
  // checks a condition

  int number = 0;
  int sum = 0;

  // while loop
  // while (number > 0) {
  //   printf("Enter a # above 0: \n");
  //   scanf("%d", &number);
  //   if (number > 0) {
  //     // sum = sum + number;
  //     sum += number;
  //   }
  // }

  // do while loop
  do {
    printf("Enter a # above 0: \n");
    scanf("%d", &number);
    if (number > 0) {
      // sum = sum + number;
      sum += number;
    }
  } while (number > 0);

      printf("sum: %d\n", sum);
}
