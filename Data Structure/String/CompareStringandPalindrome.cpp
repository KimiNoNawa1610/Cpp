#include<iostream>
#include"ReverseString.h"
using namespace std;
/*Compare two strings*/
bool isEqual(char* A, char* B) {
	int i, j;
	for (i = 0,j=0; A[i] != '\0'&&B[j]!='\0'; i++,j++) {
		if (A[i] != B[j]) {
			return false;
		}
	}
	return true;
}
/*Check palindrome*/
bool checkPalindrome(char* A) {
	char* B = A;
	Reverse(A);
	if (isEqual(A, B) == true) {
		return true;
	}
	return false;
}
