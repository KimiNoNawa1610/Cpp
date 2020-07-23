#include<iostream>
using namespace std;

int fun(int n) {
	static int x = 0;// Static variable is created in code section. Different from heap in Java.
	if (n > 0) {
		x++;
		cout << n << endl;
		fun(n - 1);
	}
	return fun(x - 1) + x;
}
