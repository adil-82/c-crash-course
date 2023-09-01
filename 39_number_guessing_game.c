#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
  const int MIN = 1;
  const int MAX = 10;
  int guess;
  int guesses;
  int answer;

  //uses the current time as a seed
  srand(time(0));

  // generate a random number between MIN & MAX
  answer = (rand() % MAX) + MIN;

  do {
    printf("Enter a guess N: ");
    scanf("%d", &guess);

    if (guess > answer) {
      printf("Too high!\n");
    } else if(guess < answer) {
      printf("Too low!\n");
    } else {
      printf("CORRECT !\n");
    }
    guesses++;
  } while(guess != answer);

  printf("*************************\n");
  printf("answer: %d\n", answer);
  printf("guesses: %d\n", guesses);
  printf("*************************\n");

}
