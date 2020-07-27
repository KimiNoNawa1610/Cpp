#include<iostream>
using namespace std;

int BinarySearch(int number,int A[],int low, int height) {
	while (low <= height) {// iterate until low>height
		int middle = (low + height) / 2;
		if (A[middle] == number) {
			return middle;// return the index in number in the array
		}
		else if (number < A[middle]) {
			height = middle - 1;
		}
		else {
			low = middle + 1;
		}
	}
	return -1;//return -1 if the number does not in the array
}