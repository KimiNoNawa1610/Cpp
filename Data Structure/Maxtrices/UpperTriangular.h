#pragma once
#ifndef UPPER_TRIANGULAR_H
#define UPPER_TRIANGULAR_H

class UpperTriangular {
private:
    int n;
    int* A;
public:
    UpperTriangular(int n) {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }
    ~UpperTriangular() { delete[] A; }
    void Display(bool row = true);
    void setRowMajor(int i, int j, int x);
    void setColMajor(int i, int j, int x);
    int getRowMajor(int i, int j);
    int getColMajor(int i, int j);
    int getN() { return n; }

};
#endif // !UPPER_TRIANGULAR_H

