#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

double read_double(FILE* infile);

char find_calculation(void);

double calculate_sum(double number1, double number2, double number3, double number4, double number5);

double calculate_mean(double sum, int number);

double find_max(double number1, double number2, double number3, double number4, double number5);

double find_min(double number1, double number2, double number3, double number4, double number5);
