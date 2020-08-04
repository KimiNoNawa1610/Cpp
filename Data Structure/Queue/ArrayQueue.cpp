#include<iostream>
using namespace std;

class Queue {
private:
	int size, front, rear, *Q;

public:
	Queue(int size) {
		this->size = size;
		Q = new int[size];
		front = rear = -1;
	}

	void ResetPointer() {
		front--;
		Q[front] = NULL;	
		for (int i = front; i <=rear; i++) {
			if (Q[i] == NULL) {
				Q[i] = Q[i+1];
				Q[i + 1] = NULL;
			}
		}
		Q[rear] = NULL;
		rear--;
	}

	void enQueue(int i) {
		if (rear == (size - 1)) {
			cout << "Queue is full";
		}
		else {
			Q[rear++] = i;
		}
	}

	int deQueue() {
		if (rear == front) {
			cout << "Queue is empty";
		}
		else {
			int x = Q[front++];
			ResetPointer();
			return x;
		}
	}

	friend ostream& operator<<(ostream& a, Queue& b) {
		for (int i = b.front; i < b.rear; i++) {
			cout << b.Q[i]<<" ";
		}
		cout << endl;
		return a;
	}
};

