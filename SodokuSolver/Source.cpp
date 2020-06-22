#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class input {
private:
	string Filename;

public:

	input(string file) {

		Filename = file;

	}

	string getInput() {

		string Text;

		ifstream OpenFile(Filename);

		while (getline(OpenFile, Text)) {

			cout<< Text;

		}

		OpenFile.close();

		return Text;

	}

};


