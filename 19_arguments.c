#include <stdio.h>

void birthday(char x[], int y) {
  printf("Happy birthday dear %s\n", x);
  printf("You are %d years old\n", y);
}

int main(int argc, char *argv[]) {
  char name[] = "Adil";
  int age = 21;

  birthday(name, age);

  return 0;
}
