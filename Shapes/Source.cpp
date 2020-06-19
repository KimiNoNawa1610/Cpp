#define _USE_MATH_DEFINES
#include<iostream>
#include<math.h>
using namespace std;

//The basic shapes class

class Shapes {

public:

	virtual float Perimeter() = 0;

	virtual float Area() = 0;

};

//The Rectangle class inherit from shapes

class Rectangle : public Shapes {

private:

	float Width;

	float Length;

public:

	Rectangle(float w, float l) {

		Width = w;

		Length = l;

	}

	float Perimeter() {

		return (Width + Length) * 2;

	}

	float Area() {

		return Width * Length;

	}

};

// The Circle class inherit from shapes

class Circle :public Shapes {

private:

	float Radius;

public:

	Circle(float r) {

		Radius = r;

	}

	float Perimeter() {

		return 2 * Radius * M_PI;

	}

	float Area() {

		return pow(Radius, 2) * M_PI;

	}
};

//The Triangle class inherit from the Shapes

class Triangle :public Shapes {

private:

	float side1;

	float side2;

	float side3;

public:

	Triangle(float a, float b, float c) {

		side1 = a;

		side2 = b;

		side3 = c;

	}
	float Perimeter() {

		return side1 + side2 + side3;

	}
	float Area() {

		float Height = (side1 + side2 + side3) / 2;

		return sqrt(Height * ((Height - side1) + (Height - side2) + (Height - side3)));
	}
};

int main() {

	//Polymorphism of parent class

	Shapes* shapes[3];

	shapes[0] = new Circle(3.5f);

	shapes[1] = new Rectangle(2, 3);

	shapes[2] = new Triangle(6, 10, 8);

	for (int i = 0; i < 3; i++) {

		cout << "Shape[" << i << "] Area= " << shapes[i]->Area() << endl;

	}

	return 0;

}