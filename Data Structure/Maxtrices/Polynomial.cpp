#include<iostream>
#include"Polynomial.h"
using namespace std;


Polynomial::Polynomial(int pow, int *num) {
	this->pow = pow;
	this->num = num;
}


ostream& operator<<(ostream& a, Polynomial& b){
	for (int i = 0; i <=b.pow; i++) {
		cout << b.num[i] <<"x^"<<b.pow-i;
		if (i != b.pow) {
			cout << " + ";
		}
	}
	return a;
	
}


