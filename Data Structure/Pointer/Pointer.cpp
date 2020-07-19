#include<iostream>
#include<stdlib.h>
using namespace std;

struct Rectangle {

	int length;

	int width;

};

void main() {

	int a = 10;

	int* pA = &a;

	cout << pA << endl;//Print memory address of A

	cout << *pA << endl;// Same as cout<<a. Print value of a

	struct Rectangle newRec = { 10,5 };

	struct Rectangle* pNewRec = &newRec;// declare a pointer for the rectangle

	cout << pNewRec->length;// print out the length of the rectangle



}