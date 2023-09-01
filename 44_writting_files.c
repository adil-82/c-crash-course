#include <stdio.h>

int main () {
  FILE *pF = fopen("test.md", "w");
  // FILE *pF = fopen("C:\\Users\\Lenovo\\Desktop\\test.txt", "w");
  // FILE *pF = fopen("test.md", "a");

  fprintf(pF, "Patrick Star\n");
  fprintf(pF, "Spongebob Squarenpants\n");

  fclose(pF);

  // if (remove("test.md") == 0) {
  //   printf("That file was deleted successfully!\n");
  // } else {
  //   printf("That file was NOT deleted!\n");
  // }
}
