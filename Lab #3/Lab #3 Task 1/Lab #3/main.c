#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double get_weight(void);

double get_height(void);

double convert_feet_to_inches(double height_in_feet);

double calculate_bmi(double height_in_inches, double weight_in_pounds);

void display_bmi(double bmi);

int main(void)
{
	double weight = get_weight();
	double height = get_height();

	height = convert_feet_to_inches(height);

	double bmi = calculate_bmi(height, weight);

	display_bmi(bmi);

	return 0;
}

double get_weight(void)
{
	double weight = 0.0;
	
	printf("Enter your weight in pounds: ");
	scanf("%lf", &weight);
	return weight;
}

double get_height(void)
{
	double height = 0.0;

	printf("Enter your height in feet: ");
	scanf("%lf", &height);
	return height;
}

double convert_feet_to_inches(double height_in_feet)
{
	return height_in_feet * 12;
}

double calculate_bmi(double height_in_inches, double weight_in_pounds)
{
	return (weight_in_pounds / pow(height_in_inches, 2)) * 703;
}


void display_bmi(double bmi)
{
	printf("BMI: %lf", bmi);
}