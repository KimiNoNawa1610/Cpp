#include<iostream>
using namespace std;

class Node {
public:
	int value;
	Node *next;
};

class LinkedlistStack {
private:
	Node* top;
public:
	LinkedlistStack() {
		top = NULL;
	}
	void push(int x) {
		Node* t = new Node;
		if (t == NULL) {
			cout << "Stack is full";
		}
		else {
			t->value = x;
			t->next = top;
			top = t;
		}
	}
	int pop() {
		int x=-1;
		if (top == NULL) {
			cout << "Stack is empty";
		}
		else {
			x = top->value;
			Node* t = top;
			top = top->next;
			delete t;
		}
		return x;
	}
	friend ostream& operator<<(ostream& a, LinkedlistStack& b) {
		Node* p = b.top;
		cout << "Stack"  << endl;
		cout << endl;
		while (p != NULL) {
			cout <<" "<< p->value <<" "<< endl;
			cout << "---"<<endl;
			p = p->next;
		}

		return a;
	}
};


