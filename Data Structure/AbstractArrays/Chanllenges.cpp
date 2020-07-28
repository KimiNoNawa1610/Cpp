#include<iostream>
#include"Array.h"
using namespace std;

/* Find missing element in sorted Array*/

/*Single element*/
int findsingle(Array s) {
	int diff = s.getArray()[0];
	for (int i = 0; i < s.getLength(); i++) {
		if (s.getArray()[i] - i != diff) {
			return diff + i;
		}
	}
}

/*Multiple elements*/
int main() {
	cout << "hello";
}