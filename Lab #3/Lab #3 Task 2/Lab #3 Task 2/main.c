#include "projectile.h";

int main(void)
{
	double distance = 0.0, velocity = 0.0, theta = 0.0;

	printf("Enter distance in feet: ");
	distance = get_double();

	printf("Enter velocity in ft/sec: ");
	velocity = get_double();

	printf("Enter theta in radians: ");
	theta = get_double();

	double time = calculate_time(distance, velocity, theta);

	double height = calculate_height(velocity, theta, time);

	display_results(time, height);


	return 0;
}