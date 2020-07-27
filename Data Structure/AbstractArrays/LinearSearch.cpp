#include<iostream>
using namespace std;

int LinearSearch(int number, int A[], int length) {
	for (int i = 0; i < length; i++) {
		if (number == A[i]) {
			return i;// return the index of the number

		}
	}
	return -1;// return -1 if the array does not contain the number;
}

/*Improved linear search*/

void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

int ImprovedLinearSearch(int number, int A[], int length) {
	for (int i = 0; i < length; i++) {
		if (number == A[i]) {
			swap(A[i], A[i - 1]);// move the searched number one index toward the front to reduce steps for next search with the same number;
			return i;// return the index of the number

		}
	}
	return -1;// return -1 if the array does not contain the number;
}