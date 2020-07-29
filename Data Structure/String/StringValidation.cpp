#include<iostream>
using namespace std;

bool isValid(char* A) {
	for (int i = 0; A[i] != '\0'; i++) {
		if (!(A[i] >= 65 && A[i] <= 90) && !(A[i] >= 97 && A[i] <= 122) && !(A[i] >= 48 && A[i] <= 57)) {// if a character in a string does not in all of those range, it is a special character.
			return false;
		}
	}
	return true;
}