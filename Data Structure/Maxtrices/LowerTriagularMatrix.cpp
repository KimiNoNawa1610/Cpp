#include<iostream>
#include "LowerTriangular.h"
using namespace std;


void LowerTriangular::setRowMajor(int i, int j, int x) {
    if (i >= j) {
        int index = ((i * (i - 1)) / 2) + j - 1;
        A[index] = x;
    }
}

void LowerTriangular::setColMajor(int i, int j, int x) {
    if (i >= j) {
        int index = (n * (j - 1) - (((j - 2) * (j - 1)) / 2)) + (i - j);
        A[index] = x;
    }
}

int LowerTriangular::getRowMajor(int i, int j) {
    if (i >= j) {
        int index = ((i * (i - 1)) / 2) + j - 1;
        return A[index];
    }
    else {
        return 0;
    }
}

int LowerTriangular::getColMajor(int i, int j) {
    if (i >= j) {
        int index = (n * (j - 1) - (((j - 2) * (j - 1)) / 2)) + (i - j);
        return A[index];
    }
    else {
        return 0;
    }
}

void LowerTriangular::Display(bool row) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i >= j) {
                if (row) {
                    cout << getRowMajor(i, j) << " ";
                }
                else {
                    cout << getColMajor(i, j) << " ";
                }
            }
            else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}