#include "projectile.h";

double get_double(void)
{
	double value = 0.0;
	scanf("%lf", &value);
	return value;
}

double calculate_time(double distance, double velocity, double theta)
{
	return distance / (velocity * cos(theta));
}

double calculate_height(double velocity, double theta, double time)
{
	return velocity * sin(theta) * time - (G * pow(time, 2) / 2);
}

void display_results(double time, double height)
{
	printf("The projectile will be in flight for %lf seconds and end at a height of %lf feet.", time, height);
}