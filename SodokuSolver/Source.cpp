#include<iostream>
#include<fstream>
#include<cmath>
#include<string>

using namespace std;

int gameboard[9][9];

int limit = 9;

bool Isrow(int a, int b, int c) {


	for (int x = 0; x < limit; x++) {

		if (gameboard[a][x] == c) {

			return 0;

		}

		return 1;

	}

}

bool Iscolumns(int a, int b, int c) {

	int limit = 9;

	for (int x = 0; x < limit; x++) {

		if (gameboard[x][b] == c) {

			return 0;

		}

		return 1;

	}

}

bool Issquare(int a, int b, int c) {

	int row = ceil((a + 1) / 3.);

	int column = ceil((b + 1) / 3.);

	for (int x = (row - 1) * 3; x < (row - 1) * 3 + 3; x++) {

		for (int y = (column - 1) * 3; y < (column - 1) * 3 + 3; y++) {

			if (gameboard[x][y] == c) {

				return 0;

			}

		}

	}

	return 1;

}

void solving() {

	int unkown = 0, Row, Column, tempval;

	bool b = 1;

	string inputFile;

	cout << "Please enter your file path" << endl;

	getline(cin, inputFile);

	ifstream input(inputFile);

	if (!input.is_open()) {

		cout << "Cannot find the file. Please try again";

	}

	for (int i = 0; i < limit; i++) {

		for (int j = 0; j < limit; j++) {

			input >> gameboard[i][j];

			if (!gameboard[i][j]) {

				unkown++;

				cout << "Unknow: " << unkown<<endl;
			}
		}
	}

	input.close();

	while (unkown && b) {

		b = 0;

		for (int i = 0; i < limit; i++) {

			for (int j = 0; j < limit; j++) {

				if (gameboard[i][j]) {

					continue;

				}

				tempval = 0;

				for (int x = 1; x <= limit; x++) {

					if (Isrow(i, j, x) && Iscolumns(i, j, x) && Issquare(i, j, x)) {

						if (!tempval) {

							tempval = x;

						}
						else {

							tempval = 0;

							break;

						}

					}
				}

				if (tempval) {

					gameboard[i][j] = tempval;

					b = 1;

					unkown--;

				}

			}

		}

	}
	if (!b) {

		cout << "Sodoku is unsovable" << endl;

	}
	else {

		cout << "Sodoku is solved: \n\n\n" << endl;

		for (int i = 0; i < limit; i++) {

			for (int j = 0; j < limit; j++) {

				cout << gameboard[i][j] << " ";


			}
			cout << "\n\n\n";

		}

	}


}

int main() {

	solving();

	return 0;

}


