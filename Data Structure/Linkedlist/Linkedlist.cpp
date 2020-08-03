#include<iostream>
using namespace std;

class Node {
public:
	int value;
	Node* next;
	
};
/*Linear Linkedlist*/
class Linkedlist {
private:
	Node *first;
	
public:
	Linkedlist() {
		first = NULL;
	}
	Linkedlist(int A[], int n) {
		Node *last, *t;
		first = new Node;
		first->value = A[0];
		first->next = NULL;
		last = first;
		for (int i = 1; i < n; i++) {
			t = new Node;
			t->value = A[i];
			t->next = NULL;
			last->next = t;
			last = t;
		}
	}
	~Linkedlist() {
		Node* p = first;
		while (first) {
			first = first->next;
			delete p;
			p = first;
		}
	}

	Node* getFirst() {
		return first;
	}

	void insert(int index, int num) {
		Node *t, *p = first;
		if (index<0 || index>length()) {
			return;
		}
		else {
			t = new Node;
			t->value = num;
			t->next = NULL;

			if (index == 0) {
				first = t;
			}
			else {
				for (int i = 0; i < index; i++) {
					p = p->next;
				}
				t->next = p->next;
				p->next = t;
			}

		}
	}

	int Delete(Node *p, int index) {
		if (index<0 || index>length()) {
			return -1;
		}
		else {
			Node* q;
			int x = 0, i;
			for (i = 0; i < index; i++) {
				q = p;
				p = p->next;

			}
			q->next = p->next;
			x = p->value;
			delete p;
			return x;
		}
	}

	int Max() {
		Node* p = first;
		int max=0;
		while (p) {
			if (p->value > max) {
				max = p->value;
			}
			p = p->next;
		}
		return max;
	}

	Node* search(Node *n,int num) {
		if (n == NULL) {
			return NULL;
		}
		else {
			Node *p = first;
			while (p) {
				if (p->value == num) {
					return p;
				}
				p = p->next;
			}
		}
	}

	Linkedlist* Concat(Linkedlist* n) {
		Linkedlist *out;
		Node *p = first;
		int count = 1;
		int i;
		while (p) {
			out->insert(i, p->value);
			if (p->next == NULL && count > 0) {
				p->next = n->getFirst();
				count--;
			}
			p = p->next;
			i++;
		}
		return out;
	}

	int Sum() {
		Node *p = first;
		int sum = 0;
		while (p) {
			sum+=p->value;
			p = p->next;
		}
		return sum;
	}

	int length() {
		Node* p = first;
		int count = 0;
		while (p) {
			count++;
			p = p->next;
		}
		return count;
	}

	friend ostream& operator<<(ostream& a, Linkedlist& b) {
		Node *p = b.first;
		while (p) {
			cout << p->value << " ";
			p = p->next;
		}
		cout << endl;
		return a;
	}

};

/*Circular linkedlist*/
class CircularLinkedlist {
private:
	 Node *first;
public:
	CircularLinkedlist(int A[], int num) {

		int i;
		Node *t, *last;
		first = new Node;
		first->value = A[0];
		first->next = first;
		last = first;
		for (int i = 1; i < num; i++) {
			t = new Node;
			t->value = A[i];
			t->next = last->next;
			last->next = t;
			last = t;
		}
	}

	friend ostream & operator<<(ostream& a, CircularLinkedlist& b) {

		Node* p = b.first;

		do {
			cout << p->value << " ";
			p = p->next;
		} while (p != b.first);
		cout << endl;
		return a;
	}

	int length() {
		Node* p = first;
		int count = 0;
		do{
			count++;
			p = p->next;
		} while (p != first);
		return count;
	}

	void insert(Node *n,int index) {

		Node* t;
		if (index<0 || index>length()) {
			return;
		}
		else if(index==0) {
			t = new Node;
			t->value = n->value;
			if (first == NULL) {
				first = t;
				first->next = first;
			}
			else {
				while (n != first) {
					n = n->next;
				} 
				n->next = t;
				t->next = first;
				first = t;
			}

		}
		else {
			for (int i = 0; i < index - 1; i++) {
				t = new Node;
				t->value = n->value;
				t->next = n->next;
				n->next = t->next;
			}
		}
	}
	int Delete(Node* p, int index) {
		int out=-1;
		if (index<0 || index>length()) {
			return out;
		}
		else if (index==1) {
			while (p->next != first) {
				p = p->next;
			}
			out = first->value;
			if (first == p) {
				free(first);
				first = NULL;
			}
			else {
				p->next = first->next;
				free(first);
				first = p->next;
			}

		}
		else {
			Node* t = first;
			for (int i = 0; i < index - 2; i++) {
				p = p->next;
			}
			t = p->next;
			p->next = t->next;
			out = t->value;
			free(t);

		}
		return out;
	}
};