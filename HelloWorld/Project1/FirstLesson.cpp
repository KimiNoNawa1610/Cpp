/*The first lesson*/

/* 
			***Basic print***

cout: console out

endl: end line-we want to print a new line

basic print function:

cout<< "Hello my name is Nhan"<<endl

-------------------------------------------
			***Variables***

Variable: Container to store piece of data.

Create a variable:
	
string characterName ="Nhan";

int characterAge=20;

--------------------------------------------

				***Data Types***

char: character- char grade ="A";

string: string academy="csulb";

int: integer- int age=50;

float

double- can store more decimal point than float

float gpa=3.43;

double gpa=3.43;

bool: boolean- bool isMale=true;

---------------------------------------------

			***Working with data types***

***Working with string***

printout: cout<<"String"<<endl

print in the same line: 

cout<<"string";

cout<<"other string"<<endl;

length of string: string.length();

chose a chracter in a string: string[index-number]

assign a new value for a character: string[index-number]="new character";

find a starting position of a string: string.find("string", index);

make a substring: string.substr(0,1)- begin at index 0 and end at index 1;


***Working with numbers***

print out number: cout<<number<<endl;

addition: +

subtraction: -

multiplication: *

division: /

module(remainder): %

-----------------------------------------------------------------

						***Math Functions***

#include<cmath>- tell c++ that we want to use some math functions

now we can use math functions

pow(2,5);- 2 to the power of 5

sqrt(36);-square root of 36= 6

round(4.3);- rounded number= 4

ceil(4.1);- round the number up=5

floor(4.8);- round the number down=4

fmax(3,10);- the bigger of the two number =10;

fmin(3,10); the smallest of the two number =3;

----------------------------------------------------------------------

					***get input from the user***

example: get the user age

int main(){

	int age;

	cout<<"Enter your age:";

	cin>> age;

	cout<<"you are" <<age<<"years old";

}

or 

int main(){

	string name;

	cout<<"Enter your name:";

	getline(cin, name); #getting the entire line of the user input

	cout<<"Hello"<<name;

}

*/