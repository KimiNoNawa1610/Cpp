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

----------------------------------------------------------------------------
					
						***Array***
Use to hold multiple data values.

create an array:

	int lucky[] = {4,8,15,16,23,42};



-----------------------------------------------------------------------------

					***function***

create a basic function:

a function contains: a return type, name following with ( parameter (s)){inside the function}

you need to call the function in order to execute it.

you cannot call the function and then create it. You must create the function before calling it.

you can declare the function and then create it. 

Ex:

void sayHi(string name, int age);

....

void sayHi(string name, int age){

**something for the function to do**

}

--------------------------------------------------------------------------------

					***return***

everything after the return will not be executed.



---------------------------------------------------------------------------------

					***If statement***

create basic if statement:

if(isMale){

	cout<<"you are a male";

} else{ cout<<"you are not a male";}

operators in if:

&&: and

||: or

!: not

>: greater

<: less

==:equal

-----------------------------------------------------------------------------------

						***switch statement***

special use case of if statement

create an switch statement

switch(compare object){

case "condition":

	some action;

	break;

case "condition":

	some other action

	break;

default:
	error output
	
}

-------------------------------------------------------------------------------------
							***while loop***

create a while loop

while(condition){action}-check the condition then execute

*do while loop*

do{action}while(condition)- execute first, then check



---------------------------------------------------------------------------------------

							***pointer***
a memory address.

to print out a pointer:

cout<<& "data";

create a pointer variable:

type *p"Name"=&"Name of a variable";

the pointer and the variable need to have the same type of values.

dereference a pointer:

just add another * when print out the pointer 

example:

int age =20;

int *pAge=&age;

cout<<*pAge;

output: 20

--------------------------------------------------------------------------------------------
				
									***classes/ object***

public: anything public in a class

private: anything private in a class

a class need to have a constructor as Java



*/