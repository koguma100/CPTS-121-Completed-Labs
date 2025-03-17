#include "grade.h"

int main(void)
{
	double exam1 = 0.0, exam2 = 0.0, lab1 = 0.0, lab2 = 0.0, project1 = 0.0, project2 = 0.0;

	// input scores

	printf("Enter exam scores: \n");
	exam1 = get_score();
	exam2 = get_score();

	printf("Enter lab scores: \n");
	lab1 = get_score();
	lab2 = get_score();

	printf("Enter project scores: \n");
	project1 = get_score();
	project2 = get_score();

	// Average scores

	double exam_average = compute_average(exam1, exam2);
	double lab_average = compute_average(lab1, lab2);
	double project_average = compute_average(project1, project2);

	double weighted_average = compute_weighted_average(exam_average, lab_average, project_average);

	printf("Weighted score: %.2lf%%", weighted_average);
	return 0;
}