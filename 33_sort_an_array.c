#include <stdio.h>

void sort(int array[], int seize) {
  for (int i = 0; i < seize - 1; i++) {
    for (int j = 0; j < seize - i - 1; j++) {
      // if (array[j] > array[j + 1]) {
      if (array[j] < array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

void printArray(int array[], int seize)
{
  for (int i = 0; i < seize; i++) {
    printf("%d ", array[i]);
  }
}

int main() {
  int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
  int seize = sizeof(array) / sizeof(array[0]);

  sort(array, seize);
  printArray(array, seize);

  return 0;
}
