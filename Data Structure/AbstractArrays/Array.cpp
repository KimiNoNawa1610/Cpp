#include<iostream>
#include"Array.h"
using namespace std;
/* Insert function into an array*/

Array::Array(int si) {
	size = si;
	A = new int[size];// create an array in the heap;
	length = 0;
}
Array::~Array() {
	delete[]A;// destructor of the array class
}

int Array::getLength() {
	return length;
}

int* Array::getArray() {
	return A;
}

void Array::insert(int ii, int index) {
 
	if (index >= 0 && index <= length) {
		for (int i = length - 1; i > index; i--) {
			A[i] = A[i - 1];

		}
		A[index] = ii;
		length++;
	}
}

void Array::append(int ii) {
	if (length < size) {
		A[length] = ii;
		length++;
	}
}

void Array::display() {
	cout << "{";
	for (int i = 0; i < length; i++) {
		cout << A[i];
		if (i != length - 1) {
			cout << ",";
		}
	}
	cout << "}" << endl;
}

int Array::drop(int index) {
	try {
		int x = A[index];
		for (int i = index; i < length - 1; i++) {
			A[i] = A[i + 1];
		}
		length--;
		return x;// return the deleted element
	}
	catch(exception& e){
		cout << e.what() << endl;
	}
}

int Array::get(int index) {
	if (index < 0) {
		return -1;
	}
	else if (index > length) {
		return -1;
	}
	else {
		return A[index];
	}
}

void Array::set(int number, int index) {
	if (index >= 0 && index <= length) {
		A[index] = number;
	}
}

int Array::max() {
	int max = 0;
	for (int i = 0; i < length; i++) {
		if (A[i] > max) {
			max = A[i];
		}
	}
	return max;
}

int Array::min() {
	int min = 0;
	for (int i = 0; i < length; i++) {
		if (A[i] < min) {
			min = A[i];
		}
	}
	return min;
}

int Array::sum() {
	int sum = 0;
	for (int i = 0; i < length; i++) {
		sum += A[i];
	}
	return sum;
}

int Array::avg() {
	return sum() / length;
}

bool Array::isSorted() {
	for (int i = 0; i < length; i++) {
		if (A[i] > A[i + 1]) {
			return false;
		}
	}
	return true;
}

void Array::arrage() {// arange positive and negative number. Negative on the left side and positive number on the right side
	int i = 0;
	int j = length - 1;
	while (i < j) {
		while (A[i] < 0) i++; 
		while (A[j] >= 0) j++; 
		if (i < j) {
			swap(A[i], A[j]);// swap function in LinearSearch.cpp
		}
	}
}

Array Array::merge(Array S) {
	if (isSorted() == true) {// merge only work with sorted array
		int i,j,k;
		i = j = k = 0;
		Array* C = new Array(length + S.getLength());
		while (i < this->length && j < S.getLength()) {
			if (A[i] < S.A[j]) {
				C[k] = A[i];
			}
			else {
				C[k] = S.A[j];
			}
		}
		for (; i < length; i++) {
			C->append(A[i]);
		}
		for (; j < S.getLength(); j++) {
			C->append(A[j]);
		}
		C->length = length + S.length;
		return *C;
	}
		
}




