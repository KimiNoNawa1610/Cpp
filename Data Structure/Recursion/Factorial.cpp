#include<iostream>
using namespace std;
/* Find factorial using Recursion*/
int factorial(int n) {
	if (n <= 0) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}

/*Find factorial using loop*/

int facloop(int n) {
	int out = 0;
	for (int i = 0; i <= n; i++) {
		out *= i;
	}
	return out;
}