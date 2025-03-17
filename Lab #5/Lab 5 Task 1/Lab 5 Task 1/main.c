#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

double get_data(FILE* infile);
char determine_tax_bracket(double income);

int main(void)
{
	FILE* input_stream = fopen("salaries.txt", "r");
	double sum = 0.0;
	char tax_bracket = NULL;

	for (int i = 0; i < 4; i++)
	{
		sum += get_data(input_stream);
	}
	tax_bracket = determine_tax_bracket(sum);
	printf("Tax bracket: %c", tax_bracket);

	return 0;

}

double get_data(FILE* infile)
{
	double data = 0.0;
	fscanf(infile, "%lf", &data);
	return data;
}

char determine_tax_bracket(double income)
{
	char tax_bracket = 'h';

	if (income < 15000) {
		tax_bracket = 'l';
	}
	else if (income <= 200000) {
		tax_bracket = 'm';
	}

	return tax_bracket;
}