#include<iostream>
#include"SparseMatrix.h"
using namespace std;


SparseMatrix::SparseMatrix(int i, int j, int n) {
	row = i;
	col = j;
	num = n;
	A = new Element[num];
}

SparseMatrix::~SparseMatrix() {
	delete[]A;
}

SparseMatrix SparseMatrix::operator+(SparseMatrix& s) {
	int i, j, k;
	if (row != s.row || col != s.col)
		return SparseMatrix(0, 0, 0);
	SparseMatrix* sum = new SparseMatrix(row, col, num + s.num);

	i = j = k = 0;
	while (i < num && j < s.num)
	{
		if (A[i].row < s.A[j].col)
			sum->A[k++] = A[i++];
		else if (A[i].row> s.A[j].row)
			sum->A[k++] = s.A[j++];
		else
		{
			if (A[i].col < s.A[j].col)
				sum->A[k++] = A[i++];
			else if (A[i].col > s.A[j].col)
				sum->A[k++] = s.A[j++];
			else
			{
				sum->A[k] = A[i];
				sum->A[k++].num = A[i++].num + s.A[j++].num;
			}
		}
	}
	for (; i < num; i++)sum->A[k++] = A[i];
	for (; j < s.num; j++)sum->A[k++] = s.A[j];
	sum->num = k;

	return *sum;
}
istream & operator >> (istream &a, SparseMatrix &b) {
	cout << "Enter non-zero element"<<endl;
	for (int i = 0; i < b.num; i++) {
		cin >> b.A[i].row >> b.A[i].col >> b.A[i].num;
	}
	return a;
}

ostream & operator << (ostream &a, SparseMatrix &b) {
	int k = 0;
	for (int i = 0; i < b.row; i++) {
		for (int j = 0; j < b.col; j++) {
			if (b.A[k].row == i && b.A[k].col==j) {
				cout << b.A[k++].num << " ";
			}
			else {
				cout << "0 ";
			}
		}
		cout<<endl;
	}
	return a;
}




