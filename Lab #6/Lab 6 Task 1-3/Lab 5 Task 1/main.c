#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int get_data(FILE *infile);

int is_prime(int num);

int factorial(int num);

int fibonacci(int num);

int main(void) {
	FILE* input_stream = fopen("input.txt", "r");
	int total = 0, result1 = 0, result2 = 0;

	if (input_stream != NULL) {
		while (!feof(input_stream)) {
			total += get_data(input_stream);
		}
	} 
	else {
		printf("File not opened succesfully");
	}
	
	result1 = is_prime(total);
	result2 = individual_digits_prime(total);

	printf("%d   %d   %d   %d\n", factorial(0), factorial(1), factorial(5), factorial(11));
	printf("%d   %d   %d   %d\n", fibonacci(0), fibonacci(3), fibonacci(11), fibonacci(21));

	printf("Is total prime?  %d     Is sum of individual digits prime? = %d", result1, result2);

	return 0;
}

int get_data(FILE* infile) {
	int data = 0;
	fscanf(infile, "%d", &data);
	return data;
}

int is_prime(int num)
{
	int result = 1;
	for (int i = 2; i <= (num / 2 + 1); i++)
	{
		if (num % i == 0) {
			result = 0;
		}
	}

	return result;
}

int individual_digits_prime(int sum) {
	int total = 0;
	while (sum != 0) {
		total += sum % 10;
		sum /= 10;
	}
	return is_prime(total);
}

int factorial(int num)
{
	int result = 1;
	for (int i = num; i > 1; i--) {
		result *= i;
	}
	return result;
}

int fibonacci(int num)
{
	int n1 = 0, n2 = 1, temp = 0;
	for (int i = 1; i < num; i++) {
		temp = n1;
		n1 = n2;
		n2 += temp;
	}
	return n2;
}