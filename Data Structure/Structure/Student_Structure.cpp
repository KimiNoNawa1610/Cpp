#include<iostream>
using namespace std;
struct Student {
	int id;
	int age;
	string first_name;
	string last_name;
	string major;
	string minor;
};

int main() {
	struct Student newstudent = { 1,15,"Nhan","Vo","Computer Science","Applied Math" };
	cout << newstudent.major << endl;
	return 0;

}