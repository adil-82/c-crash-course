#include <stdio.h>
int main (int argc, char *argv[])
{
  int x; // declaration
  x = 123; // initialization
  int y = 321; // declaration + initialization

  int age = 21; // integer
  float gpa = 2.05; // floating point number
  char grade = 'C'; // single charcters
  char name[] = "Bro"; // array of charcters "STRING"

  printf("You are %d years old\n", age); // decimal
  printf("Your gpa is %f\n", gpa); // float
  printf("Your averge grade is %c\n", grade); // char
  printf("My name is %s\n", name); // string

  return 0;
}
