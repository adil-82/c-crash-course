#include <stdio.h>

void hello(char[], int); // function prototype

int main() {
  // function declaration without a body, befor main()
  // ensures that calls to a function are made with the correct arguments

  // Many C compilers do not check for parameter matching
  // Missing arguments will result in unexpecteed behavior
  // A function prototype causes the compilers to flag an error if aguments are Missing

  // 1. easier to navigate a program with main() at the top
  // 2. helps with debugging
  // 3. commonly used in header files

  char name[] = "Adil";
  int age = 21;

  hello(name, age);

  return 0;
}

void hello(char name[], int age) {
  printf("Hello %s ,\n", name);
  printf("your are %d years old\n", age);
}
