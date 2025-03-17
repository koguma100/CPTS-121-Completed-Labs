#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void task2(void);

void hangman(void);

int removeWhitespace(char arr[], int size);

int main(void) {
	/*char example[] = {'a', 'b', ' ', 'c', 'd', ' ', 'e', 'f'};
	int size = 8, count = 0;

	printf("Original string: ");
	for (int i = 0; i < size; ++i)
	{
		printf("%c", example[i]);
	}

	count = removeWhitespace(example, size);
	printf("\nWhite space removed: %d  Updated array: ", count);

	for (int i = 0; i < size - count; ++i)
	{
		printf("%c", example[i]);
	}*/

	hangman();


}

int removeWhitespace(char arr[], int size)
{
	int count = 0;

	for (int i = 0; i < size; ++i)
	{
		if (arr[i] == ' ')
		{
			for (int j = i; j < size - 1; ++j)
			{
				arr[j] = arr[j + 1];
			}
			count++;
		}
	}
	return count;
}


 
void task3(void) {
	int arr1[20], arr2[101] = { 0 }, count = 0;

	srand((unsigned int)time(NULL));

	for (;count < 20; ++count) {
		arr1[count] = rand() % 100 + 1;
		arr2[arr1[count]]++;
	}
	for (count = 0; count < 101; ++count) {
		printf("arr[%d] = %d\n", count, arr2[count]);
	}
}

// This was written by me during freshman year, I did not follow top-down design as well as I should have,
// could have broken it down into functions
void hangman(void) {
	int count = 0, guesses = 0, guessed[9] = {0}, won = 0, wrong = 0;
	char word[] = { 'a','a','r','d','v','a','r','k','s' }, guess = '\0';

	while (guesses < 6 && !won) {
		wrong = 1;

		printf("\nGuesses Left: %d\n", 6 - guesses);

		for (count = 0; count < 9; ++count) {
			if (guessed[count]) {
				printf(" %c", word[count]);
			}
			else {
				printf(" _");
			}
		}
		printf("\nGuess a Letter: ");
		scanf(" %c", &guess);

		for (count = 0; count < 9; ++count) {
			if (guess == word[count]) {
				guessed[count] = 1;
				wrong = 0;
			}
		}
		if (wrong) {
			guesses++;
		}

		won =  1;
		for (count = 0; count < 9; ++count) {
			if (guessed[count] != 1) {
				won = 0;
			}
		}
		if (won) {
			printf("\nYou Win! Word was Aardvarks.");
		}
		else if (guesses == 6) {
			printf("\n You Lose. The word was Aardvarks, do better next time.");
		}
	}
}