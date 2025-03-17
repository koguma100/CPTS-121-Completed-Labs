#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int get_data(FILE* infile);
void output_data(FILE* outfile, int data);
int greatest_common_divisor(int val1, int val2);

int main(void) {
	FILE* input_stream = fopen("input.txt", "r"), *output_stream = fopen("output.txt", "w");
	int val1 = 0, val2 = 0, gcd = 0;
	val1 = get_data(input_stream);
	val2 = get_data(input_stream);

	gcd = greatest_common_divisor(val1, val2);

	output_data(output_stream, gcd);

	fclose(input_stream);
	fclose(output_stream);
}

int get_data(FILE* infile)
{
	int data = 0;
	fscanf(infile, "%d", &data);
	return data;
}

void output_data(FILE* outfile, int data)
{
	fprintf(outfile, "%d", data); 
}

int greatest_common_divisor(int val1, int val2)
{
	int temp = 0, result = 0, mod = 0;
	val1 = abs(val1);
	val2 = abs(val2);
	if (val2 > val1) {
		temp = val2;
		val2 = val1;
		val1 = temp;
	}
	do {
		mod = val1 % val2;
		val1 = val2;
		val2 = mod;
	} while (mod != 0);

	return val1;
}