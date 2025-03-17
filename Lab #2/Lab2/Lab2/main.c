/*
* William Fralia
* CptS 121 Lab Section 18
* 9/6/2023
* 
* Description: We will make a program that first finds the equation for the perpendicular bisector of the line segment between two points. Then we will create a BMI calculator.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 

int main(void)
{
	double x1 = 0.0, x2 = 0.0, y1 = 0.0, y2 = 0.0, slope = 0.0, x_mid = 0.0, y_mid = 0.0, p_slope = 0.0, y_int;

	//prompt users for values for two points

	printf("We will find the equation for the perpendicular bisector of the line segment between two points\n Please input the (x,y) of two points.\n");
	printf("x1: ");
	scanf("%lf", &x1);

	printf("y1: ");
	scanf("%lf", &y1);

	printf("x2: ");
	scanf("%lf", &x2);

	printf("y2: ");
	scanf("%lf", &y2);

	//do calculations for given (x,y) values 

	slope = (y2 - y1) / (x2 - x1);  //finds slope of user input points
	//next calculating the (x,y) for the midpoint between the two points
	x_mid = (x1 + x2) / 2;   
	y_mid = (y1 + y2) / 2;

	p_slope = -1 / slope;  // finds slope of perpendicular bisector

	y_int = y_mid - (p_slope * x_mid);  // finds y-intercept of perpendiculat bisector

	printf("The perpendicular bisector is: y = %lfx + %lf", p_slope, y_int);

	double weight = 0.0, height = 0.0, BMI = 0.0;

	// Asks for user input for height and weight
	printf("Now please input your height (in feet only) and weight (in pounds) to calculate your BMI.\n");

	printf("Height: ");
	scanf("%lf", &height);
	printf("Weight: ");
	scanf("%lf", &weight);

	// Does calculations for BMI

	BMI = weight / ((height * 12) * (height * 12)) * 703;

	printf("Your BMI is %lf!", BMI);  // Finally print resulting BMI


}