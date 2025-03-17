#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// problem constant
#define G 32.17

double get_double(void);

double calculate_time(double distance, double velocity, double theta);

double calculate_height(double velocity, double theta, double time);

void display_results(double time, double height);
