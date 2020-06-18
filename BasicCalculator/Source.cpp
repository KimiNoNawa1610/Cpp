#include<iostream>
#include<string.h>

using namespace std;

double BasicCalculator(int num1, int num2, string operation) {

	if (operation == "+") {
		return num1 + num2;
	}

	else if(operation=="-"){
		return num1 - num2;
	}
	else if (operation == "x") {
		return num1 * num2;
	}
	else {
		return num1 / num2;
	}

	return 0;

}

int main() {

	cout<<BasicCalculator(1, 2,"-");
	
	return 0;
}