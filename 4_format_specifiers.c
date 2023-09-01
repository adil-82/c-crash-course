#include <stdio.h>

int main (int argc, char *argv[])
{
  // format specifier % = defines and format a type of data to be displayed

  // %c = charcter
  // %s = string (array of charcters)
  // %f = float
  // %lf = double
  // %d = integer

  // %.1 = decimal precision
  // %1 = minimum field width
  // %- = left align

  float item1 = 5.75;
  float item2 = 10.00;
  float item3 = 100.99;

  printf("item1 :>> $%.2f\n", item1);
  printf("item1 :>> %.2f Dhs\n", item1);

  printf("item1 :>> $%8.2f\n", item1);
  printf("item2 :>> $%8.2f\n", item2);
  printf("item3 :>> $%8.2f\n", item3);

  printf("item1 :>> %8.2f Dhs\n", item1);
  printf("item2 :>> %8.2f Dhs\n", item2);
  printf("item3 :>> %8.2f Dhs\n", item3);


  printf("item1 :>> $%-8.2f\n", item1);
  printf("item2 :>> $%-8.2f\n", item2);
  printf("item3 :>> $%-8.2f\n", item3);

  printf("item1 :>> %-8.2f Dhs\n", item1);
  printf("item2 :>> %-8.2f Dhs\n", item2);
  printf("item3 :>> %-8.2f Dhs\n", item3);

  return 0;
}
