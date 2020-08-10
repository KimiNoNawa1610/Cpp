#include<iostream>
using namespace std;

class MaxHeap {
private:
	int *A;
	int size=0;
public:
	MaxHeap(int size) {
		this->size = size;
		A = new int[size];
	}
	void Arrange(int num) {
		int temp = A[num], i=num;
		while (i > 1 && temp > A[i / 2]) {
			A[i] = A[i / 2];
			i /= 2;
		}
		A[i] = temp;
	}
	void insert(int num) {
		if (sizeof(A) == size) {
			cout << "Heap is full";
		}
		A[size] = num;
		size++;
		Arrange(size);
	}
	void Delete(int num) {
		int x=0,i,j;
		x = A[num];
		A[i] = A[num];
		i = 1; j = 2 * i;
		while (j < num - 1) {
			if (A[j + 1] > A[j]) {
				j += 1;
			}
			if (A[i] < A[j]) {
				int temp = A[i];
				A[i] = A[j];
				A[j] = temp;
				i = j;
				j *= 2;
			}
			else {
				break;
			}
		}
		A[num] = x;
	}
};