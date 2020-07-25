#include<iostream>
using namespace std;

/*Static vs Dynamic array

***Array is vector type data***

Static array- size of the memory decide during run time inside a stack

***Size of an array need to be a constant***

Dynamic array- Everything decide at run time--need pointer

*/
int main() {
	
	int A[10];//Created in the stack

	int *p;

	p = new int[5];//Created in the heap

	p[0] = 3;
	p[1] = 2;


	for (int i = 0; i < 2; i++) {
		cout << p[i] << endl;
	}

	/*To increase the size of the array using for loop*/

	int *q = new int[10];

	for (int i = 0; i < sizeof(q); i++) {
		q[i] = p[i];
	}

	

	delete p;// delete the old array of p in heap
	p = q;// make p point to q
	q = NULL;// make q null to erase q from pointing to the array;

	p[5] = 10;
	p[6] = 8;

	for (int i = 0; i < sizeof(p); i++) {
		cout << p[i] << endl;
	}


	/*2D array*/

	int A[3][3] = { {1,2,3},{4,5,6},{7,8,9} };// created inside stack

	int* B[3];//created inside stack;

	B[0] = new int[3];//crated inside heap;
	B[1] = new int[3];//crated inside heap;
	B[2] = new int[3];//crated inside heap;



	return 0;
}



