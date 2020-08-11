#include<iostream>
using namespace std;


int partition(int A[], int start, int end) {
	int pivot = A[start];
	int i = start, j = end;
	do {
		do {
			i++;
		} while (A[i] <= pivot);
		do {
			j--;
		} while (A[j] > pivot);

		if (i < j) {
			int temp = A[j];
			A[j] = A[i];
			A[i] = temp;
		}
	} while (i < j);
	int temp = A[start];
	A[start] = A[j];
	A[j] = temp;
	return j;
}

void QuickSort(int A[], int start, int end) {
	int j = 0;
	if (start != end) {

		j=partition(A, start, end);
		QuickSort(A, start, j);
		QuickSort(A, j + 1, end);
	}
	
}

