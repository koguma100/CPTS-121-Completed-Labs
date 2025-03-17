#include "poop.h"

double read_double(FILE* infile)
{
	double value = 0.0;
	fscanf(infile, "%lf", &value);
	return value;
}

char find_calculation(void)
{
	char calculation = "\0";
	printf("Do you want to Average, find High value, or find Low value for values in input.txt? (A/H/L) ");
	scanf(" %c", &calculation);
	return calculation;
}

double calculate_sum(double number1, double number2, double number3, double number4, double number5)
{
	double sum = 0.0;
	sum = number1 + number2 + number3 + number4 + number5;
	return sum;
}

double calculate_mean(double sum, int number)
{
	if (number <= 0) {
		return -1.0;
	}
	else
	{
		return sum / number;
	}
}

double find_max(double number1, double number2, double number3, double number4, double number5)
{
	double max = 0.0;
	if (number1 > max) {
		max = number1;
	}
	if (number2 > max) {
		max = number2;
	}
	if (number3 > max) {
		max = number3;
	}
	if (number4 > max) {
		max = number4;
	}
	if (number5 > max) {
		max = number5;
	}
	return max;

}

double find_min(double number1, double number2, double number3, double number4, double number5)
{
	double min = 4.0;
	if (number1 < min) {
		min = number1;
	}
	if (number2 < min) {
		min = number2;
	}
	if (number3 < min) {
		min = number3;
	}
	if (number4 < min) {
		min = number4;
	}
	if (number5 < min) {
		min = number5;
	}
	return min;

}