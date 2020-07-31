#pragma once
#ifndef DIAGONAL_MATRIX_H
#define DIAGONAL_MATRIX_H
#include<iostream>
using namespace std;

class DiagonalMatrix {
private:
	int n, * A;

public:
	DiagonalMatrix(int num);

	~DiagonalMatrix();

	void set(int i, int j, int x);

	int get(int i, int j);

	void display();
};
#endif // !DIAGONAL_MATRIX_H

