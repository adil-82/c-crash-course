#include <stdio.h>

int main() {
  // memory = an array of bytes within RAM (street)
  // memory block = a single unit (byte) within memory, used to hold some value (person)
  // memory address = the address of where a memory block is located (house address)

  // char a = 'X';
  // char b = 'Y';
  // char c = 'Z';

  short a = 'X';
  int b = 'Y';
  double c = 'Z';

  printf("%d a: bytes\n", sizeof(a));
  printf("%d b: bytes\n", sizeof(b));
  printf("%d c: bytes\n", sizeof(c));

  printf("a: %p\n", &a);
  printf("b: %p\n", &b);
  printf("c: %p\n", &c);

  char e;
  // char f[2];
  // short f[2];
  // double f[2];
  int f[2];

  printf("e: %d bytes\n", sizeof(e));
  printf("f: %d bytes\n", sizeof(f));

  printf("e: %p\n", &e);
  printf("f: %p\n", &f);
}
