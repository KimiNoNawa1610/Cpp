#include<iostream>
using namespace std;
void TowerofHanoi(int n, int a, int b, int c) {
	if (n > 0) {
		TowerofHanoi(n - 1, a, c, b);
		printf("(%d,%d)\n", a, c);
		TowerofHanoi(n - 1, b, a, c);
	}
}


