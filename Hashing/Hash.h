#pragma once
#ifndef HASH_H
#define HASH_H
class Node {

public:
	int data;
	Node* next;
};

class HashTable {

public:
	Node** HT;
	HashTable();
	int hash(int key);
	void Insert(int key);
	int Search(int key);
	~HashTable();
};

#endif // !HASH_H

