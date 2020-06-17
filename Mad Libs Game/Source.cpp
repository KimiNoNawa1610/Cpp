//Math libs is a game where you enter some number and the program will put it into a poem.

#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
using namespace std;

int main() {

	string flower, color, name;

	cout << "please enter a flower:";

	getline(cin, flower);

	cout << "please enter a color of the flower:";

	getline(cin, color);

	cout << "please enter a name:";

	getline(cin, name);

	cout << flower << " is " << color<<endl;

	cout << "And I love "<<name;

}

