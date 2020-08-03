#include<iostream>
using namespace std;
#include"isOperand.h";
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


int evaluation(const char* postfix) {
	LinkedlistStack st = LinkedlistStack();
	int i, x1, x2, r;
	for (i = 0; postfix[i] != '\0'; i++) {
		if (isOperrand(postfix[i])) {
			st.push(postfix[i]-'0');
		}
		else {
			x2 = st.pop();
			x1 = st.pop();
			switch (postfix[i]) {
			case'+':r = x1 + x2; st.push(r); break;
			case'-':r = x1 - x2; st.push(r); break;
			case'*':r = x1 * x2; st.push(r); break;
			case'/':r = x1 / x2; st.push(r); break;
			}
		}
	}
	return st.pop();
}

int main() {
	const char* postfix = "234*+82/-";
	cout <<evaluation(postfix);
	return 0;
}
