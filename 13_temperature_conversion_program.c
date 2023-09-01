#include <ctype.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  char unit;
  float temp;

  printf("Is the temperature is in (F) or (C)\n");
  scanf("%c", &unit);

  unit = toupper(unit);

  if (unit == 'C') {
    printf("Enter the temp in Celsius: \n");
    scanf("%f", &temp);
    temp = (temp * 9 / 5) + 32;
    printf("The temp in Farenheit is: %.1fF°\n", temp);
  } else if (unit == 'F') {
    printf("Enter the temp in Farenheit: \n");
    scanf("%f", &temp);
    temp = ((temp - 32) * 5) / 9;
    printf("The temp in Celsius is: %.1fC°\n", temp);
  } else {
    printf("%c is not a valid unit of measurement!", unit);
  }

  return 0;
}
