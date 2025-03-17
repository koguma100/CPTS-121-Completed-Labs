#include "bonus.h"

char award_input(char* event)
{
	char input = "\0";
	printf("Does the following apply to you: %s  (y/n)", event);
	scanf(" %c", &input);
	return input;
}