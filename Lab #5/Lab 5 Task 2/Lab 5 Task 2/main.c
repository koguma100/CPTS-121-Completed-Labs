#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

double get_data(FILE* infile);
double get_average(double sum, int count);
void output_data(FILE* outfile, double data);

int main(void)
{
	FILE* infile = fopen("data.txt", "r");
	FILE* outfile = fopen("output.txt", "w");
	double sum = 0.0, average = 0.0;
	int count = 0;

	if (infile != NULL) {
		while (!feof(infile))
		{
			sum += get_data(infile);
			count++;
		}
		
		average = get_average(sum, count);
		output_data(outfile, average);
		return 0;
	}
	
}double get_data(FILE* infile){	double data = 0.0;	fscanf(infile, "%lf", &data);	return data;}double get_average(double sum, int count){	double average = 0.0;	average = (double)sum / count;	return average;}void output_data(FILE* outfile, double data){	fprintf(outfile, "%lf", data);}