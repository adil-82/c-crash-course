#include <stdio.h>

int main() {
  // nested loop - a loop inside of another loop

  int rows;
  int colums;
  char symbol;
  // int symbol;

  printf("Enter # of rows: ");
  scanf("%d", &rows);

  printf("Enter # of colums: ");
  scanf("%d", &colums);

  scanf("%c"); // getting rid of the new line character after last time using
               // scanf("%d", &colums); because that's still within our buffer.

  printf("Enter a symbol to use: ");
  scanf("%c", &symbol);
  // scanf("%d", &symbol);

  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= colums; j++) {
      // printf("%d", j);
      printf("%c", symbol);
      // printf("%d", symbol);
    }
    printf("\n");
  }
}
