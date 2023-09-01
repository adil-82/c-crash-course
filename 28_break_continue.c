#include <stdio.h>

int main() {
  // continue = skips rest of code & forces the next iteration of the loop
  // breac = exits a loop/switch 

  for (int i = 1; i <= 20; i++) {
    if (i == 13) {
      // continue;
      break;
    }
    printf("%d\n", i);
  }
}
