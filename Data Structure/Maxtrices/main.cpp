#include<iostream>
using namespace std;
#include"DiagonalMatrix.h";
#include"LowerTriangular.h";
#include"SparseMatrix.h";
#include"Polynomial.h";

int main() {

    int d = 4;

    DiagonalMatrix dm(d);

    dm.set(1, 1, 1);
    dm.set(2, 2, 1);
    dm.set(3, 3, 1);
    dm.set(4, 4, 1);

    dm.display();

    cout << endl;

    LowerTriangular cm(4);
    cm.setColMajor(1, 1, 1);
    cm.setColMajor(2, 1, 2);
    cm.setColMajor(2, 2, 3);
    cm.setColMajor(3, 1, 4);
    cm.setColMajor(3, 2, 5);
    cm.setColMajor(3, 3, 6);
    cm.setColMajor(4, 1, 7);
    cm.setColMajor(4, 2, 8);
    cm.setColMajor(4, 3, 9);
    cm.setColMajor(4, 4, 10);

    cm.Display(false);

   /*cout << endl;
    SparseMatrix sm(5, 5, 5);
    cin >> sm;
    cout << sm;*/
    cout << endl;
    int A[] = { 1,2,3 };
    Polynomial pl(2, A);
    cout << pl;

    return 0;
}