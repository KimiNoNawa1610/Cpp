#include<iostream>
using namespace std;

void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
	
void SelectionSort(int A[], int n) {
	for (int i = 0; i < n; i++) {
		int min = A[i];
		int j = i + 1;
		int k = i;
		while(j<n) {
			if (A[j] < min) {
				min = A[j];
				k = j;
			}
			j++;
		}
		swap(&A[i], &A[k]);
	}
}

