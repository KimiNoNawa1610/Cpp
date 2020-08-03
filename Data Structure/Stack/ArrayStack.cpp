#include<iostream>
using namespace std;

class Stack {

private:

	int size, top;
	char *S;

public:

	Stack(int size) {
		this->size = size;
		S =new char[size];
		top = -1;
	}

	friend ostream& operator<<(ostream &a, Stack &b) {
		cout << "Stack" << endl;
		cout << endl;
		for (int i = b.top; i >= 0; i--) {
			cout << b.S[i]<<endl;
			
			cout << "---" << endl;
			
		}
		return a;
	}

	void push(char x) {
		if (top == size - 1) {
			cout << "Stack Overflow";
		}
		else {
			top++;
			S[top] = x;
		}
	}

	char pop() {
		char x=NULL;
		if (top == -1) {
			cout << "Empty Stack";
		}
		else {
			x = S[top];
			top--;
		}
		return x;
	}

	char peek(int index) {
		if (top - index + 1 < 0) {
			cout << "Invalid index";
		}
		else {
			return S[top - index + 1];
		}
	}

	bool isEmpty() {
		if (top == -1) {
			return true;
		}
		return false;
	}

	bool isFull() {
		if (top == size - 1) {
			return true;
		}
		return false;
	}

	char Stacktop() {
		if (!isEmpty()) {
			return S[top];
		}
		return -1;
	}

	void settop(int num) {
		top = num;
	}
};

bool ParenthesisMatching(const char* characters) {
	Stack st = Stack(sizeof(characters));
	st.settop(-1);
	for (int i = 0; characters[i] != '\0'; i++) {
		if (characters[i] == '('||characters[i]=='['|| characters[i] == '{') {
			st.push(characters[i]);
		}
		else if (characters[i] == ')'|| characters[i] == ']'|| characters[i] == '}') {
			if (st.isEmpty()) {
				return false;
			}
			st.pop();
		}
	}
	if (st.isEmpty()) {
		return true;
	}
	else {
		return false;
	}
}

bool isOperrand(char x) {
	if (x == '+' || x == '*' || x == '/' || x == '-') {
		return false;
	}
	return true;
}

int value(const char x) {
	if (x == '+' || x == '-') {
		return 1;
	}
	else if (x == '*' || x == '/') {
		return 2;
	}
	return 0;
}

char* ConvertInfixtoPostfix(const char* characters) {
	Stack st = Stack(sizeof(characters));
	char* postfix = new char[sizeof(characters) + 2];
	int i,j;
	i = j = 0;
	while (characters[i] != '\0') {
		if (isOperrand(characters[i])) {
			postfix[j++] = characters[i++];
		}
		else {
			if (value(st.Stacktop()) < value(characters[i])) {
				st.push(characters[i++]);
			}
			else {
				postfix[j++] = st.pop();
			}
		}
	}
	while (!st.isEmpty()) {
		postfix[j++] = st.pop();
	}
	postfix[j] = '\0';
	return postfix;
}

int evaluation(const char* postfix) {

}

int main() {
	const char *example1="((a+b)*(c+d))";
	cout << ParenthesisMatching(example1)<<endl;
	const char* example2 = "a+b*c-d/e";
	cout << ConvertInfixtoPostfix(example2);
	return 0;
}

