#pragma once
#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include<iostream>
using namespace std;
class Polynomial {
private:
	int pow;
	int* num;

public:
	Polynomial(int pow, int* num);

	friend ostream & operator<<(ostream& a, Polynomial& b);
};

#endif // !POLYNOMIAL_H
