#include<iostream>
using namespace std;
/*Basic Tailor Series*/
double TailorSeires(int e, int term) {
	static double r=0,p = 1, f = 1;
	if (term == 0){
		return 1;
	}
	else {
		r = TailorSeires(e, term - 1);
		p = p * e;
		f = f * term;
		return r + p / f;
	}
}

/*Tailor Series using Horner's rule*/

int main() {
	double out = TailorSeires(4, 100);
	cout << out << endl;
	return 0;
}