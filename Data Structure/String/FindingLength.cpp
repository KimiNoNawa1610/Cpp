#include<iostream>
#include<cstring>
using namespace std;

int FindLength(char *s) {
	int count=0;
	for (int i = 0; s[i] != '\0'; i++) {
		count++;
	}
	return count;
}