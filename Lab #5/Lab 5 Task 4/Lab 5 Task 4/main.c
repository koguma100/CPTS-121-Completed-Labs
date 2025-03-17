#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int get_data(FILE* infile);

int main(void) {

	FILE* input_stream = fopen("input.txt", "r"), * output_stream = fopen("output.txt", "w");
	double min = 0.0, max = 0.0, temp = 0.0;

	if (input_stream != NULL) {
		min = get_data(input_stream);
		max = min;
		while (!feof(input_stream)) {
			temp = get_data(input_stream);
			if (temp > max) {
				max = temp;
			}
			if (temp < min) {
				min = temp;
			}
		}
	}
	
	printf("Min: %lf   Max: %lf", min, max);
	return 0;
}

int get_data(FILE* infile)
{
	int data = 0;
	fscanf(infile, "%d", &data);
	return data;
}