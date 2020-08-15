#include<iostream>
#include"Hash.h"
using namespace std;

HashTable::HashTable() {
	HT = new Node * [10];
	for (int i = 0; i < 10; i++) {
		HT[i] = nullptr;
	}
}

int HashTable::hash(int key) {
	return key % 10;
}

void HashTable::Insert(int key) {
	int hIdx = hash(key);
	Node* t = new Node;
	t->data = key;
	t->next = nullptr;
	if (HT[hIdx] == nullptr) {
		HT[hIdx] = t;
	}
	else {
		Node* p = HT[hIdx];
		Node* q = HT[hIdx];
		while (p && p->data < key) {
			q = p;
			p = p->next;
		}
		if (q == HT[hIdx]) {
			t->next = HT[hIdx];
			HT[hIdx] = t;
		}
		else {
			t->next = q->next;
			q->next = t;
		}
	}
}

int HashTable::Search(int key) {
	int hIdx = hash(key);
	Node* p = HT[hIdx];
	while (p) {
		if (p->data == key) {
			return p->data;
		}
		p = p->next;
	}
	return -1;
}

HashTable::~HashTable() {
	for (int i = 0; i < 10; i++) {
		Node* p = HT[i];
		while (HT[i]) {
			HT[i] = HT[i]->next;
			delete p;
			p = HT[i];
		}
	}
	delete[] HT;
}

