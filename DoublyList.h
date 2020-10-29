/*
 Ao, Ivan

 September 23, 2020

 CS A250

 Test#1
*/
#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H

#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
	Node() : data(0), prev(nullptr), next(nullptr) {}
	Node(int newData, Node *newPrev, Node *newNext)
		: data(newData), prev(newPrev), next(newNext) {}
	int getData() const { return data; }
	Node *getPrev() const { return prev; }
	Node *getNext() const { return next; }
	void setData(const int& newData) { data = newData; }
	void setPrev(Node *newPrev) { prev = newPrev; }
	void setNext(Node *newNext) { next = newNext; }
	~Node() {}
private:
	int data;
	Node *prev;
	Node *next;
};


class DoublyList
{
public:
	DoublyList() : first(nullptr), last(nullptr), count(0) {}
	void insertFront(int elem);
	void destroyList();
	~DoublyList();

	// Write your function declarations below.

	// Declaration print
	void print(bool direction) const;
	// Declaration deleteSecondNode
	void deleteSecondNode();
	// Declaration moveLastToFirst
	void moveLastToFirst();
	// Declaration appendArrayToList
	void appendArrayToList(const int a[], int n);
	// Declaration swapFirstNodes
	void swapFirstNodes(DoublyList & dList);


private:
	Node *first;
	Node *last;
	int count;
};

#endif
