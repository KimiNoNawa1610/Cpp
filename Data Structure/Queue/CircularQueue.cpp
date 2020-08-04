#include<iostream>
using namespace std;

class CircularQueue {

private:
	int size, front, rear, * Q;

public:
	CircularQueue(int size) {
		this->size = size;
		Q = new int[size];
		front = rear = 0;
	}
	void enQueue(int i) {
		if ((rear+1)%size ==front ) {
			cout << "Queue is full";
		}
		else {
			rear = (rear + 1) % size;
			Q[rear] = i;
		}
	}

	int deQueue() {
		int x = -1;
		if (rear == front) {
			cout << "Queue is empty";
		}
		else {
			front = (front + 1) % size;
			x = Q[front];	
		}
		return x;
	}

	friend ostream& operator<<(ostream& a, CircularQueue& b) {
		int i = b.front + 1;
		do {
			cout << b.Q[i];
			i = (i + 1) % b.size;
		} while (i != (b.rear + 1) % b.size);
		return a;
	}
};