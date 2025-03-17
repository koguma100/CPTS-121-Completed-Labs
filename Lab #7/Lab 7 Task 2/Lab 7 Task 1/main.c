#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

void charges(double hours, double* total_cost, double* cost_per_hour);


double get_data(FILE* infile);

int main(void)
{
	FILE* input_stream = fopen("input.txt", "r"), * output_stream = fopen("output.txt", "w");
	double hours = 0.0, cost = 0.0, cost_per_hour = 0.0;

	if (input_stream != NULL) {
		hours = get_data(input_stream);
		charges(hours, &cost, &cost_per_hour);


		fprintf(output_stream, "Total cost: %.2lf   Cost per hour: %.2lf", cost, cost_per_hour);
		fclose(input_stream);
		fclose(output_stream);
	}
	

}

void charges(double hours, double* total_cost, double* cost_per_hour)
{
	hours = ceil(hours);
	*total_cost = 7.99;
	if (hours > 10) {
		*total_cost += 1.99 * (hours - 10);
	}

	*cost_per_hour = *total_cost / hours;
}



double get_data(FILE* infile)
{
	double data = 0.0;
	fscanf(infile, "%lf", &data);
	return data;
}

