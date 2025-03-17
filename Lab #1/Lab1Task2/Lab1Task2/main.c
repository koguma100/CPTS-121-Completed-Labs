/*
* William Fralia
* CptS 121; Fall 2023; Lab Section 18
* Programming Assignment: Lab1Task1
* Date: August 30, 2023
* Description: This program prints out a simple
* "hello world" message.
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int number1_int, number2_int, sum, ohmI, ohmR, jouleV, jouleR, a, b, c, d, x, radius;
	double number1_float, number2_float, difference, PI = 3.1415;

	printf("Enter two integers: ");
	scanf("%d", &number1_int);
	scanf("%d", &number2_int);

	printf("Enter two floats: ");
	scanf("%lf", &number1_float);
	scanf("%lf", &number2_float);

	sum = number1_int + number2_int;
	printf("The sum of integer 1 and integer 2 is %d\n", sum);

	difference = number1_float - number2_float;
	printf("the difference between float 1 and float 2 is %lf\n", difference);

	printf("Float 1 multiplied by integer 1 is %d\n", (int)(number1_float * number1_int));

	printf("Integer 1 divided by integer 2 is %d(int)\n and %f (float)", (number1_int / number2_int), (float)(number1_int / number2_int));

	printf("Integer 1 divided by integer 2 is %f\n", ((float)number1_int) / number2_int);

	printf("Float 1 %(mod) float 2 is %lf (int)\n", (int)number1_float % (int)number2_float);

	printf("Integer 1 = %d, integer 2 = %d\n", number1_int % 2, number2_int % 2);

	//Ohm's Law
	printf("Input I for Ohm's Law: ");
	scanf("%d", &ohmI);
	printf("Input R for Ohm's Law: ");
	scanf("%d", &ohmR);
	printf("Voltage = %d", ohmI * ohmR);
	
	//Joule's Law
	printf("\nInput V for Joule's Law: ");
	scanf("%d", &jouleV);
	printf("\nInput R for Joule's Law: ");
	scanf("%d", &jouleR);
	printf("\nPower = %d\n", (jouleV * jouleV) / jouleR);

	//Polynomial Function
	printf("For the function y = 3 * ax^3 + (1/4) * bx^2 + 10 * cx + (-5) * d input the following: ");
	printf("\na: ");
	scanf("%d", &a);
	printf("\nb: ");
	scanf("%d", &b);
	printf("\nc: ");
	scanf("%d", &c);
	printf("\nd: ");
	scanf("%d", &d);
	printf("\nx: ");
	scanf("%d", &x);

	printf("y = %lf", 3 * a * x * x * x + (1 / 4.0) * b * x * x + 10 * c * x + (-5) * d);

	printf("\nInput radius to calculate circumference: ");
	scanf("%d", &radius);
	printf("\nCircumference: %lf", (2 * PI) * radius);


}