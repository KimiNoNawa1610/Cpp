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
Array findmultiple(Array s) {
	int diff = s.getArray()[0];
	Array* c = new Array(10);
	for (int i = 0; i < s.getLength(); i++) {
		if (s.getArray()[i] - i != diff) {
			c->append(diff + i);
			diff = s.getArray()[i] - i;
		}
	}
	return *c;
}

/* Find missing element in Unsorted Array*/
Array UnsortedFind(Array s){
	int low = s.min();
	int height = s.max();
	Array* c = new Array(height);
	Array* out = new Array(height);
	for (int i = 0; i < height; i++) {
		c->getArray()[i]++;
	}
	for (int i = low; i < height; i++) {
		if (c->getArray()[i] == 0) {
			out->append(i);
		}
	}
	return *out;
}

/*Find duplication number*/
Array findduplicate(Array s) {
	int n = s.getLength();
	Array* C = new Array(n);
	for (int i = 0; i < n; i++) {
		if (s.getArray()[i] == s.getArray()[i + 1] && C->contains(s.getArray()[i]) == false) {
			C->append(s.getArray()[i]);
		}
	}
	return *C;
}

/*Finding duplicate number using hash*/
Array findduplicatehash(Array s) {
	int n = s.getLength();
	int height = s.max();
	Array* c = new Array(height);
	Array* out = new Array(height);
	for (int i = 00; i < n; i++) {
		c->getArray()[s.getArray()[i]]++;
	}
	for (int i = 0; i < height; i++) {
		if (c->getArray()[i] > 1) {
			out->append(c->getArray()[i]);
		}
	}
	return *out;
}

/*Finding the elements of sum k*/
Array findElementofSum(int number,Array s) {
	int i = 0, j = s.getLength()-1;
	Array* out = new Array(j);
	while (i < j) {
		if (s.getArray()[i] + s.getArray()[j] == number) {
			out->append(s.getArray()[i]);
			out->append(s.getArray()[j]);
			i++;
			j--;
		}
		else if(s.getArray()[i] + s.getArray()[j]<number){
			i++;
		}
		else {
			j--;
		}
	}
	return *out;
}

/*Fiding maximum and minimum in a single scan*/
Array findMaxMin(Array s) {
	int min, max, limit;
	Array* out = new Array(limit);
	max = min = s.getArray()[0];
	limit = s.getLength();
	for (int i = 0; i < limit; i++) {
		if (s.getArray()[i] < min) {
			min = s.getArray()[i];
		}
		else if (s.getArray()[i] > max) {
			max = s.getArray()[i];
		}
	}
	out->append(max);
	out->append(min);
	return *out;
}