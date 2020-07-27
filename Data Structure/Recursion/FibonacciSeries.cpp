#include<iostream>
using namespace std;


/* Fibonacci using recursive methods*/
int Fibonacci(int term) {
	if (term <= 1) {
		return 1;
	}
	else {
		return Fibonacci(term - 2) + Fibonacci(term - 1);
	}
}// run exponential time-- O(2^n)

/* Fibonacci using iterative methods*/
int ItFibonacci(int term) {
	int out = 0, term0=0,term1=1;
	if (term <= 1) {
		return term;
	}
	else {
		for (int i = 0; i < term; i++) {
			out = term0 + term1;
			term0 = term1;
			term1 = out;
		}
		return out;
	}
}// run n time-- O(n)



