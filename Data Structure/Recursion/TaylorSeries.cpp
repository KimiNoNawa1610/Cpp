#include<iostream>
using namespace std;



/*Basic Tailor Series*/
double TailorSeires(int e, int term) {
	static double r=0,p = 1, f = 1;
	if (term == 0){
		return 1;
	}
	else {
		r = TailorSeires(e, term - 1);
		p = p * e;
		f = f * term;
		return r + p / f;
	}
}





/*Tailor Series using Horner's rule*/
/*
Horner's rule: 

f(x0) = a0 + a1x0 + a2x02 + ... + anx0n

This can, also, be written as:

f(x0) = a0 + x0(a1 + x0(a2 + x0(a3 + ... + (an-1 + anx0)....)
*/
double TailorHorner(int e, int term) {
	static double s = 1;
	if (term == 0) {
		return s;
	}
	else {
		s = 1 + e * s / term;
		return TailorHorner(e, term - 1);
	}
}// They will have the same answer.





/*Tailor Series using iterative(loop) methods*/

double TailorLoop(int e, int term) {
	double s = 1, num = 1, deno = 1;
	int i = 1;
	for (; i <= term; i++) {
		num *= e;
		deno *= i;
		s += num / deno;
	}
	return s;
}// They will have the same answer.

