#include<iostream>
using namespace std;

int WordCount(char* A) {
	int count=1;
	for (int i = 0; A[i] != '\0'; i++) {
		if (A[i] == ' ') {
			count++;
		}
	}
	return count;
}