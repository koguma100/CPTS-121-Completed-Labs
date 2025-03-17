#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void reverse(int* arr, int size);

int main(void) {
	FILE* input_stream = fopen("input.txt", "r");

	int arr[1000], found = 0, temp = 0, count = 0;
	
	do {
		found = fscanf(input_stream, "%d", &temp);
		if (found) {
			arr[count] = temp;
		}
		count++;
	} while (found != EOF);

	for (int i = 0; i < count - 1; ++i) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	reverse(arr, count - 1);

	for (int i = 0; i < count - 1; ++i) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}

}

void reverse(int* arr, int size) {
	int half = size / 2, count = 0, temp = 0;
	
	for (; count < half; ++count) {
		temp = arr[count];
		arr[count] = arr[size - count - 1];
		arr[size - count - 1] = temp;
	}
}