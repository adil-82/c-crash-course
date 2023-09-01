#include <stdio.h>
#include <string.h>

int main()
{
  char string_1[] = "Adil";
  char string_2[] = "Bobrahim";

  // strlwr(string_1); //converts a string to lowercase
  // strupr(string_1); // converts a string to uppercase
  // strcat(string_1, string_2); //appends string_2 to end of string_1
  // strncat(string_1, string_2, 1); //appends n characters from string_2 to string_1
  // strcpy(string_1, string_2); // copy string_2 to string_1
  // strncpy(string_1, string_2, 1); // copy n characters of string_2 to string_1

  // strset(string_1, '?'); // sets all characters of string to a given character
  // strnset(string_1, 'x', 1); // sets first characters of a string to a given character
  strrev(string_1); // reverses a string

  // int result = strlen(string_1); // return string length as int
  // int result = strcmp(string_1, string_2); // string compare all characters 0 or 1
  // int result = strncmp(string_1, string_2, 1); // string compare n characters
  // int result = strcmpi(string_1, string_2); // string compare all (ignore case)
  int result = strnicmp(string_1, string_2, 1); // string comparen characters (ignore case)


  printf("%s\n", string_1);
  // printf("%d\n", result);

  if (result == 0) {
    printf("they are the same\n");
  } else {
    printf("they are different\n");
  }
}
