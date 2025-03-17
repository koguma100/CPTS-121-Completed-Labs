#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
	int answer = 0, guess = 0, guessed = 0, guess_num = 1;
	srand((unsigned int)time(NULL));

	answer = rand() % 201 - 100;

	while (!guessed) {
		printf("Guess number between -100 and 100  (guess %d): ", guess_num);
		scanf("%d", &guess);
		if (guess == answer) {
			guessed = 1;
		}
		else if (guess > answer) {
			printf("\nYou guessed too high\n");
		}
		else {
			printf("\nYou guessed too low.\n");
		}
		guess_num++;
	}

	
	printf("you win");
	return 0;
}