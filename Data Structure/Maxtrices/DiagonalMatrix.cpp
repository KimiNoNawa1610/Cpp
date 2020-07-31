#include<iostream>
#include"DiagonalMatrix.h"
using namespace std;


DiagonalMatrix::DiagonalMatrix(int num) {
	n = num;
	A = new int[n];
}

DiagonalMatrix::~DiagonalMatrix() {
	delete[]A;
}

void DiagonalMatrix::set(int i, int j, int x) {
	if (i == j) {
		A[i - 1] = x;
	}
}

int DiagonalMatrix::get(int i, int j) {
	if (i == j) {
		return A[i - 1];
	}
	else {
		return 0;// all number in a diagonal matrix except the diagonal is 0;
	}
}

void DiagonalMatrix::display() {
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == j)
				cout << A[i - 1] << " ";
			else
				cout << "0 ";
		}
		cout << endl;
	}
}
