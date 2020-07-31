#include<iostream>
#include"UpperTriangular.h"

using namespace std;

#include<iostream>
#include "LowerTriangular.h"
using namespace std;


void UpperTriangular::setRowMajor(int i, int j, int x) {
    if (i <= j) {
        int index = ((i - 1) * n - ((i - 1) * (i - 2)) / 2) + (j - i);
        A[index] = x;
    }
}

void UpperTriangular::setColMajor(int i, int j, int x) {
    if (i <= j) {
        int index = (j * (j - 1) / 2) + i - 1;
        A[index] = x;
    }
}

int UpperTriangular::getRowMajor(int i, int j) {
    if (i <= j) {
        int index = ((i - 1) * n - ((i - 1) * (i - 2)) / 2) + (j - i);;
        return A[index];
    }
    else {
        return 0;
    }
}

int UpperTriangular::getColMajor(int i, int j) {
    if (i <= j) {
        int index = (j * (j - 1) / 2) + i - 1;
        return A[index];
    }
    else {
        return 0;
    }
}

void UpperTriangular::Display(bool row) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i <= j) {
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