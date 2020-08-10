#include<iostream>
using namespace std;

void BubbleSort(int A[],int n) {
	int term;
	for (int i = 0; i < n; i++) {
		term = 0;
		for (int j = 0; j < n; j++) {
			if (A[j] > A[j+1]) {
				int temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
				term = 1;
			}
		}
		if (term == 0) {
			break;
		}
	}
}