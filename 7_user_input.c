#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

  char name[25]; //bytes

  printf("What's your name ?\n");
  // scanf("%s", &name);
  fgets(name, 25, stdin);

  name[strlen(name)-1] = '\0';

  int age;

  printf("How old are you ?\n");
  scanf("%d", &age);

  printf("Hello %s, I'm Mr. Robot 🦖\n", name);
  printf("Your are %d years old", age);

  return 0;
}
