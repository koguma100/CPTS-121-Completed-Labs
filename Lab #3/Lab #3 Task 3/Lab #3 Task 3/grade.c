#include "grade.h"

double get_score(void)
{
	double score = 0.0;
	printf("Enter score: ");
	scanf("%lf", &score);

	return score;
}

double compute_average(double x, double y)
{
	return (x + y) / 2;
}

double compute_weighted_average(double exam_average, double lab_average, double project_average)
{
	return exam_average * 0.6 + lab_average * 0.1 + project_average * 0.3;
}