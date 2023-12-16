#include <stdio.h>

int main() {
  int secret_number;
  int guess_number;

  secret_number = 17;

  int i;
  int guess_limit;

  guess_limit = 5;

  for (i = 1; i <= guess_limit; i++) 
  {
    printf("Guess Number %d : ", i);
    scanf("%d", &guess_number);

    if (guess_number == secret_number)
    {
      printf("Congratulations! You Won\n");
      break;
    }
    else
    {
      printf("Wrong guess. Try again.\n");
    }
  }

  if (i > guess_limit)
  {
    printf("Sorry, you lost. The correct number was %d\n", secret_number);
  }

  return 0;
}
