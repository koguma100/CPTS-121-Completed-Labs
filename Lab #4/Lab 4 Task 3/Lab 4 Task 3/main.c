#include "poop.h"



int main(void)
{
	FILE* input_stream = fopen("input.txt", "r");
	char calculation = "\0";
	double sum = 0.0, average = 0.0, min = 0.0, max = 0.0, result = 0.0, val1 = 0.0, val2 = 0.0, val3 = 0.0, val4 = 0.0, val5 = 0.0;

	val1 = read_double(input_stream);
	val2 = read_double(input_stream);
	val3 = read_double(input_stream);
	val4 = read_double(input_stream);
	val5 = read_double(input_stream);

	calculation = find_calculation();
	if (calculation == 'A')
	{
		sum = calculate_sum(val1, val2, val3, val4, val5);
		average = calculate_mean(sum, 5);
		printf("Average: %lf", average);

	}
	else if (calculation == 'H')
	{
		max = find_max(val1, val2, val3, val4, val5);
		printf("High Value: %lf", max);
	}
	else if (calculation == 'L')
	{
		min = find_min(val1, val2, val3, val4, val5);
		printf("Low Value: %lf", min);
	}
}