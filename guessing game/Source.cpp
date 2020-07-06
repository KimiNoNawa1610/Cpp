#include<iostream>
#include<random>

using namespace std;

int main() {
	
	std::random_device ran;
	
	std::mt19937 gen(ran());
	
	std::uniform_int_distribution<> distr(0, 10);
	
	int answer=distr(gen);
	
	int userInput=-1;
	
	int guessLimit = 0;
	
	while (answer != userInput && guessLimit<3) {
		
		cout << "You have " << 3 - guessLimit<<" guesses"<< endl;
		
		cout << "Please enter your guessing number: ";
		
		cin >> userInput;
		
		guessLimit++;
	}
	
	if (guessLimit == 3) {
		
		cout << "you are out of guess, the number is "<<answer;
		
	}
	
	else {
		
		cout << "you guessed the number " << answer;
		
	}


}
