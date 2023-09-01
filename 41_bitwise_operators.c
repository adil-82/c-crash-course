#include <stdio.h>

int main() {
  // bitwise operators = special operators used in bit level programming
  // (knowing binary is important for this topic)

  // & = AND
  // | = OR
  // ^ = XOR exclusive
  // << left shift
  // >> right shift

  int z = 0;  //  0 = 00000000

  int x = 6;  //  6 = 00000110
  int y = 12; // 12 = 00001100

  z = x & y;  //  4 = 00000100 both of x and y bits needs to be 1
  printf("AND = %d\n", z);

  z = x | y;  // 14 = 00001110 only one of x OR y bits needs to be 1  
  printf("OR = %d\n", z);

  z = x ^ y;  // 10 = 00001010 only one of x OR y bits can be 1  
  printf("XOR = %d\n", z);

  z = x << 1; // 12 = 00001100 shift bits so many spaces to the left 
  printf("x << 1 = %d\n", z);

  z = x << 2; // 24 = 00011000 shift bits so many spaces to the left 
  printf("x << 2 = %d\n", z);

  z = x >> 1; // 3 = 00000011 shift bits so many spaces to the right 
  printf("x >> 1 = %d\n", z);

  z = x >> 2; // 1 = 00000001 shift bits so many spaces to the right 
  printf("x >> 2 = %d\n", z);
}
