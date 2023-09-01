#include <stdio.h>
#include <string.h>

int main() {
  char x = 'X';
  char y = 'Y';
  char temp;

  temp = x;
  x = y;
  y = temp;

  printf("x = %c\n", x);
  printf("y = %c\n", y);
  // printf("temp = %c\n", temp);

  char cup_1[15] = "water";
  // char cup_2[] = "lemonade";
  char cup_2[15] = "soda";
  char cup_3[15];
  
  strcpy(cup_3, cup_1);
  strcpy(cup_1, cup_2);
  strcpy(cup_2, cup_3);

  printf("cup_1 : %s\n", cup_1);
  printf("cup_2 : %s\n", cup_2);
  // printf("cup_3 : %s\n", cup_3);
}
