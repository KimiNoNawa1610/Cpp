/*
5 Recursive Types:

*Tail Recursion-- Linear recursive function calling itself at the last statement of the function.

*Head Recursion-- Linear recursive function calling itself at the first statement of the function (after the base condition).

*Tree Recursion-- Recursive function calling itself more than one time in the function.

*Indirect Recursion-- More than one recursive function that call each other in a circular pattern.

*Nested Recursion-- Recursive call inside another recursive call. A recursive call take a recursive call as a parameter.
*/

/* Example of tree recursion*/

#include<iostream>
using namespace std;
void fun(int n) {
	if (n > 0) {
		cout << n << endl;
		fun(n - 1);
		fun(n - 1);
	}
}// Take 2^n calls--O(2^n)


/* Example of indirect recursion*/

void funB(int n);

void funA(int n) {
	if (n > 0) {
		cout << n << endl;
		funB(n - 1);
	}
}
void funB(int n) {
	if (n > 1) {
		cout << n << endl;
		funA(n / 2);
	}
}

/* Example of nested recursive*/
int funC(int n) {
	if (n > 100) {
		return n - 10;
	}
	else {
		return funC(funC(n + 11));

	}
}


