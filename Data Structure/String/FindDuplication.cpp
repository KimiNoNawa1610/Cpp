#include<iostream>
using namespace std;
/*Find duplicate in a string using bitwise operation*/

void FindDuplication(char* A) {
	long int temp = 0,x=0;
	int i;
	for (i = 0; A[i] != '\0'; i++) {
		x = 1;
		x = x << A[i] - 97;
		if ((x & temp)> 0) {
			printf("%c is Duplicate ", A[i]);
		}
		else {
			temp = x||temp;
		}
	}
}