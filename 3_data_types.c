#include <stdbool.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  char Char = 'C';     // single character %c
  char Char_2[] = "Bro"; // array of charcters %s

  float Float = 3.141592; // 4 bytes (32 bits of prcison) 6 - 7 digits %f
  // float c = 3.141592653589793; 
  double Double = 3.141592653589793; // 8 bytes (64 bits of prcison) 15 - 16 digits %lf

  printf("Float: %f\n", Float);
  printf("Double: %lf\n", Double);
  printf("Float 0.15: %0.15f\n", Float);
  printf("Double 0.15: %0.15lf\n", Double);

  bool Bool = true; // 1 byte (true or false) %d
  printf("Bool: %d\n", Bool);

  char Char_3 = 100; // 1 byte (-128 to +127) %d or %c
  printf("Char_3: %d\n", Char_3);
  printf("Char_3: %c\n", Char_3);

  unsigned char unsigned_char = 255; // 1 byte (0 to +255) %d or %c
  printf("unsigned_char: %d\n", unsigned_char);

  short int short_int = 32767; // 2 bytes (-32767 to +32767) %d
  unsigned short int unsigned_short_int = 65535; // 2 bytes (0 to +65535) %d

  printf("short_int :>> %d\n", short_int);
  printf("unsigned_short_int :>> %d\n", unsigned_short_int);

  int Int = 2147483647; // 4 bytes (-2.147.483.648 to +2.147.483.647) %d
  unsigned int unsigned_int = 4294967295; // 4 bytes (0 to +4.294.967.295) %u

  printf("Int :>> %d\n", Int);
  printf("unsigned_int :>> %u\n", unsigned_int);

  long long int long_long_int = 9223372036854775807; // 8 bytes (-9 quintillion to +9 quintillion)
  unsigned long long int unsigned_lg_lg_int = 18446744073709551615U; // 8 bytes (0 to +18 quintillion)

  printf("long_long_int :>> %lld\n", long_long_int);
  printf("unsigned_lg_lg_int :>> %llu\n", unsigned_lg_lg_int);


  
  return 0;
}
