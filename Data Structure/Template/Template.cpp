#include<iostream>
using namespace std;

template<class T>//declare a class is a template class
class Arithametic {
private:
	T a, b;
public:
	Arithametic(T a, T b);
	T add();
	T sub();
	/*anything public in the template class need to have an implementation*/
};

template<class T>
Arithametic<T>::Arithametic(T a, T b) {
	this->a = a;
	this->b = b;
}

template<class T>
T Arithametic<T>::add() {
	T c;
	c = a + b;
	return c;
}

template<class T>
T Arithametic<T>::sub() {
	T c;
	c = a - b;
	return c;
}

void main() {
	Arithametic<int> test(10, 5);
	cout << test.add() << endl;
	cout << test.sub() << endl;
}