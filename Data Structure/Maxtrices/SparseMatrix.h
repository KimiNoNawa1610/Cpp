#pragma once
#ifndef SPARSE_MATRIX_H
#define SPARSE_MATRIX_H
#include<iostream>
using namespace std;

class Element {
public:
	int row, col, num;
};

class SparseMatrix {
private:
	int row, col, num;
	Element* A;

public:
	SparseMatrix(int i, int j, int n);

	~SparseMatrix();

	SparseMatrix operator+(SparseMatrix& s);

	friend istream& operator>>(istream& a, SparseMatrix& b);

	friend ostream& operator<<(ostream& a, SparseMatrix& b);
};
#endif // !SPARSE_MATRIX_H

