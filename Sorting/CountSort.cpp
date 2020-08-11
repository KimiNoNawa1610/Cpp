#include<iostream>
using namespace std;
int findMax(int A[], int n) {
	int max = A[0];
	for (int i = 0; i < n; i++) {
		if (max < A[i]) {
			max = A[i];
		}
	}
	return max;
}
void CountSort(int A[], int n) {
	int max, i, * C;
	max = findMax(A, n);
	C = new int[max + 1];
	for (i = 0; i < max + 1; i++) {
		C[i] = 0;
	}
	for (i = 0; i < n; i++) {
		C[A[i]]++;
	}
	i = 0; int j = 0;
	while (i < max + 1) {
		if (C[i] > 0) {
			A[j++] = i;
			C[i]--;
		}
		else {
			i++;
		}

	}
}