#include <stdio.h>
#include <string.h>

// typedef = reserved keyword that gives an existing datatype a "nickname"

// typedef char user[25];

// struct User {
typedef struct {
  char name[25];
  char password[12];
  int id;
  // };
} User;

int main() {

  // struct User user_1 = { "Adil", "password123", 123456 };
  // struct User user_2 = { "Brahim", "password321", 654321 };
  User user_1 = {"Adil", "password123", 123456};
  User user_2 = {"Brahim", "password321", 654321};

  printf("user_1: %s\n", user_1.name);
}
