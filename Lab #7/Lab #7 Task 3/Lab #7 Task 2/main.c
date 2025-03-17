#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void revenue(int time, double *revenue);

void predict(double target_revenue, int *time, FILE* outfile);

int main(void) {
	FILE* output_stream = fopen("output.txt", "w");
	double revenue = 0.0;
	int time = 0;
	predict(1000000, &time, output_stream);
	printf("Will surpass 1 trillion in %d", time + 1984);


	return 0;
}

void revenue(int time, double *revenue) {
	*revenue = 203.265;
	for (int i = 0; i < time; i++) {
		*revenue *= 1.071;
	}
	
}

void predict(double target_revenue, int* time, FILE*outfile) {
	double expected_revenue = 0.0;
	int year = 0;
	while (expected_revenue < target_revenue) {
		year++;
		revenue(year, &expected_revenue);
		fprintf(outfile,"Year: %d    Revenue:: $%lf\n", year + 1984, expected_revenue);
	}
	*time = year;
}