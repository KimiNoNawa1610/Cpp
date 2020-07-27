#include<iostream>
using namespace std;
/* Insert function into an array*/
class Array {
private:
	int* A;// pointer in the heap;
	int length, size;
public:
	Array(int si) {
		size = si;
		A = new int[size];// create an array in the heap;
		length = 0;
	}

	void insert(int ii, int index) {
 
		for (int i = length - 1; i > index; i--) {
			A[i] = A[i - 1];

		}
		A[index] = ii;
		length++;
	}

	void append(int ii) {
		if (length < size) {
			A[length++] = ii;
			length++;
		}
		else {
			throw"Out of bound exception";
		}
	}

	void display() {
		cout << "{";
		for (int i = 0; i < length; i++) {
			cout << A[i];
			if (i != length - 1) {
				cout << ",";
			}
		}
		cout << "}" << endl;
	}

	int drop(int index) {
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

	int get(int index) {
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

	void set(int number, int index) {
		if (index >= 0 && index <= length) {
			A[index] = number;
		}
	}

	int max() {
		int max = 0;
		for (int i = 0; i < length; i++) {
			if (A[i] > max) {
				max = A[i];
			}
		}
		return max;
	}

	int min() {
		int min = 0;
		for (int i = 0; i < length; i++) {
			if (A[i] < min) {
				min = A[i];
			}
		}
		return min;
	}

	int sum() {
		int sum = 0;
		for (int i = 0; i < length; i++) {
			sum += A[i];
		}
		return sum;
	}

	int avg() {
		return sum() / length;
	}


};
