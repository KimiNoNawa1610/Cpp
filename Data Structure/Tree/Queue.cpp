#include<iostream>
#include"Queue.h"
using namespace std;

Queue::Queue(int size) {
	this->size = size;
	Q = new Node[size];
	front = rear = -1;
}

void Queue::ResetPointer() {
	front--;
	Q[front].value = NULL;
	for (int i = front; i <= rear; i++) {
		if (Q[i].value == NULL) {
			Q[i] = Q[i + 1];
			Q[i + 1].value = NULL;
		}
	}
	Q[rear].value = NULL;
	rear--;
}

void Queue::enQueue(Node i) {
	if (rear == (size - 1)) {
		cout << "Queue is full";
	}
	else {
		Q[rear++] = i;
	}
}

bool Queue::isEmpty() {
	if (rear == front) {
		return true;
	}
	return false;
}

Node Queue::deQueue() {
	if (rear == front) {
		cout << "Queue is empty";
	}
	else {
		Node x = Q[front++];
		ResetPointer();
		return x;
	}
}

ostream& operator<<(ostream& a, Queue& b) {
	for (int i = b.front; i < b.rear; i++) {
		cout << b.Q[i].value << " ";
	}
	cout << endl;
	return a;
}
