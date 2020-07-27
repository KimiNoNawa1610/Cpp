#include<iostream>
using namespace std;

int Factorial(int n) {
	if (n <= 0) {
		return 1;
	}
	else {
		return n * Factorial(n - 1);
	}
}

/*Selection formula using iterative methods*/
int Select(int x, int y) {
	int a, b, c;
	a = Factorial(x);
	b = Factorial(y);
	c = Factorial(x - y);
	return a / (b * c);
}// run n time-- O(n);

/* Or */
int nCr(int n, int r)
{
	int num, den;

	num = Factorial(n);
	den = Factorial(r) * Factorial(n - r);

	return num / den;
}

/*Selection formula using pascal triangle--recursive methods*/
int NCR(int n, int r)
{
	if (n == r || r == 0)
		return 1;
	return NCR(n - 1, r - 1) + NCR(n - 1, r);

}
