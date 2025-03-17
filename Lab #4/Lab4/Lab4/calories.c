/*
* William Fralia
* CptS 121 Lab-18
*
* Lab 4 Task 1: Program that calculates recommended calorie intake based on data of person (age, gender, weight, height, activity level)
*/

#include "calories.h"

double get_double_data(FILE* input)
{
	double data = 0;
	fscanf(input, "%lf", &data);
	return data;
}


char get_char(FILE* input)
{
	char data = 0;
	fscanf(input, " %c", &data);
	return data;

}

double calculate_male_BMR(double height, double weight, double age)
{
	double bmr = 0.0;

	bmr = 66 + (6.23 * weight) + (12.7 * height) - (6.8 * age);

	return bmr;
}

double calculate_female_BMR(double height, double weight, double age)
{
	double bmr = 0.0;
	bmr = 655 + (4.35 * weight) + (4.7 * height) - (4.7 * age);
	return bmr;
}

double calculate_daily_calories(double BMR, char activity)
{
	double calories = 0.0;

	if (activity == 's')	
	{
		calories = BMR * 1.2;
	}
	else if (activity == 'l')
	{
		calories = BMR * 1.375;
	}
	else if (activity == 'm')
	{
		calories = BMR * 1.55;
	}
	else if (activity == 'h')
	{
		calories = BMR * 1.725;
	}
	else
	{
		calories = BMR * 1.9;
	}

	return calories;
}

