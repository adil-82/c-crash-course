#include <stdio.h>

// enum - a user defined type of named integer identifiers helps to make a
// program mote readable

enum Day { Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7 };

int main() {
  enum Day today = Sun;
  printf("%d\n", today); // enums are NOT STRINGS, but they can be treated as int.

  // if (today == 1 || today == 7) {
  if (today == Sun || today == Sat) {
    printf("Its the weekend! Party time!\n");
  } else {
    printf("I have work to do!\n");
  }
}
