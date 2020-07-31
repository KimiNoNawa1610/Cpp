#pragma once
#ifndef LOWER_TRIANGULAR_H
#define LOWER_TRIANGULAR_H
#include<iostream>
using namespace std;

class LowerTriangular {
private:
    int n;
    int* A;
public:
    LowerTriangular(int n) {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }
    ~LowerTriangular() { delete[] A; }
    void Display(bool row = true);
    void setRowMajor(int i, int j, int x);
    void setColMajor(int i, int j, int x);
    int getRowMajor(int i, int j);
    int getColMajor(int i, int j);
    int getN() { return n; }

};
#endif // !LOWER_TRIANGULAR_H
