/*
* William Fralia
* CptS 121 Lab-18
* 
* Lab 4 Task 1: Program that calculates recommended calorie intake based on data of person (age, gender, weight, height, activity level)
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

double get_double_data(FILE* input);

char get_char(FILE* input);

double calculate_male_BMR(double height, double weight, double age);

double calculate_female_BMR(double height, double weight, double age);

double calculate_daily_calories(double BMR, char activity);