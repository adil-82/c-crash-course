#include <stdio.h>

int main() {
  FILE *pF = fopen("test.md", "r");
  char buffer[255];

  // fgets(buffer, 255, pF);
  // printf("%s", buffer);

  if (pF == NULL) {
    printf("Unable to open file!\n");
  } else {
    while (fgets(buffer, 255, pF) != NULL) {
      printf("%s", buffer);
    }
  }

  fclose(pF);
}
