#include<iostream>
#include"Array.h"
using namespace std;

/* Find missing element in sorted Array*/

/*Single element*/
int findsingle(Array s) {
	int x = s.sum();
	int total, low, height;
	low = s.getArray()[s.getLength()];
	height = low + 1;
	total = (low * height) / 2;
	return total - x;
}

/*Multiple elements*/
