#include <stdio.h>

int main(int argc, char *argv[]) {
  // switch = A more efficient alternative to using many "  else if" statements
  //          allows a value to be tested for equality against many cases

  char grade;

  printf("Enter a letter grade: \n");
  scanf("%c", &grade);

  // if (grade == 'A') {
  //   printf("perfect!\n");
  // } else if (grade == 'B') {
  //   printf("You did good!\n");
  // } else if (grade == 'C') {
  //   printf("You did Ok!\n");
  // } else if (grade == 'D') {
  //   printf("At least it's not an F\n");
  // } else if (grade == 'F') {
  //   printf("YOU FAILED\n");
  // } else {
  //   printf("That's not a valid grade!\n");
  // }

  switch (grade) {
  case 'A':
    printf("perfect!\n");
    break;
  case 'B':
    printf("You did good!\n");
    break;
  case 'C':
    printf("You did Ok!\n");
    break;
  case 'D':
    printf("At least it's not an F\n");
    break;
  case 'F':
    printf("YOU FAILED\n");
    break;
  default:
    printf("That's not a valid grade!\n");
  }

  return 0;
}
