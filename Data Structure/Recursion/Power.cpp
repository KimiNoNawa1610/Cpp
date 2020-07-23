#include<iostream>
using namespace std;

/* Find a power of a number using recursion*/

float powRec(int num, int pow) {
	if (pow == 0) {
		return 1;
	}
	else if(pow<0){
		return 1/(num * powRec(num, abs(pow)- 1));
	}
	else {
		return num * powRec(num, pow - 1);
	}
}// O(n)
