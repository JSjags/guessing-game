#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	const int MIN = 1;
	const int MAX = 100;

	int random;
	int answer;
	int guesses = 0;

	// uses the current time as seed
	srand(time(0));

	// generates random number within the range of MIN to MAX
	random = (rand() % MAX) + MIN;

	do
	{
		printf("Guess the number, Bozo!!! :)\n");
		scanf("%d", &answer);
		guesses++;

		if (answer > random) {
			printf("Oops, your guess is too big :(.\n");
		} else if (answer < random) {
			printf("Try again, your guess is too small :(.\n");
		} else {
			printf("*****************************\n");
			printf("CORRECT!!!\n");
			printf("You guessed it right. %d is the answer.\n", random);
			printf("Guesses: %d\n", guesses);
			printf("*****************************\n");
		}
	} while (answer != random);
	

	return 0;
}