#include<iostream>
using namespace std;

void InsertionSort(int A[],int n) {
	int i, j, key;
	for (i = 1; i < n; i++) {
		key = A[i];
		j = i - 1;
		while (j >= 0 && A[j] > key) {
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = key;
	}
}
