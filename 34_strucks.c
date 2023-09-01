#include <stdio.h>
#include <string.h>

// struct = collection of related members ("variables") they can be of
// different data types listed under one name in a block of memory VERY
// SIMILAR to classes in other languages (but not methodes)

struct Player {
  char name[12];
  int score;
};

int main() {
  struct Player player_1;
  struct Player player_2;

  strcpy(player_1.name, "Adil");
  player_1.score = 4;

  strcpy(player_2.name, "Brahim");
  player_2.score = 6;

  printf("player_1: %s and the score: %d\n", player_1.name, player_1.score);
  printf("player_2: %s and the score: %d\n", player_2.name, player_2.score);


}
