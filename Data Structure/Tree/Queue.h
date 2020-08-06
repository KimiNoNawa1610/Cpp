#pragma once
#ifndef QUEUE_H
#define QUEUE_H
using namespace std;

class Node{
public:
	Node *leftchild, *rightchild;
	int value;

};
class Queue {
private:
	int size, front, rear;
	Node *Q;

public:
	Queue(int size);

	bool isEmpty();

	void ResetPointer();

	void enQueue(Node i);

	Node deQueue();

	friend ostream& operator<<(ostream& a, Queue& b);
};
#endif // !QUEUE_H

