#pragma once
#include<iostream>
#ifndef ARRAYDB_ARRAY_H
#define ARRAYDB_ARRAY_H

using namespace std;

class Array {

private:
	int* A;

	int length, size;

public:
	Array(int si);

	~Array();

	int getLength();

	void insert(int ii, int index);

	void append(int ii);

	void display();

	int drop(int index);

	int get(int index);

	void set(int number, int index);

	int max();

	int min();

	int sum();

	int avg();

	bool isSorted();

	void arrage();

	Array merge(Array S);

	int *getArray();
		

};

#endif // !ARRAYDB_ARRAY_H
