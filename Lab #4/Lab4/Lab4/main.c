/*
* William Fralia
* CptS 121 Lab-18
*
* Lab 4 Task 1: Program that calculates recommended calorie intake based on data of person (age, gender, weight, height, activity level)
*/

#include "calories.h"

int main(void)
{
	FILE* input_stream = fopen("input.dat", "r");

	double age = 0, weight = 0, height = 0, BMR = 0.0, calories = 0.0;

	char gender = "\0", activity = "\0";

	age = get_double_data(input_stream);
	gender = get_char(input_stream);
	weight = get_double_data(input_stream);
	height = get_double_data(input_stream);
	activity = get_char(input_stream);

	if (gender == 'M') {
		BMR = calculate_male_BMR(height, weight, age);
	}
	else if (gender == 'F')
	{
		BMR = calculate_female_BMR(height, weight, age);
	}


	calories = calculate_daily_calories(BMR, activity);

	printf("Calories = %lf", calories);
	fclose(input_stream);
	

}