#include<iostream>
using namespace std;

/* Find sum by formula*/
int sumfor(int n) {
	return (n / 2) * (n + 1);
}//Run time =1-- O(1)

/* Find sum by recursion*/
int sumRec(int n) {
	if (n <= 0) {
		return 0;
	}
	else {
		return n + sumRec(n - 1);
	}
}//Run time= n-- O(n)

/* Find sum by for loop*/
int sumloop(int n) {
	int out=0;
	for (int i = 0; i <= n; i++) {
		out+=i;
	}
	return out;
}//Run time= n-- O(n)

