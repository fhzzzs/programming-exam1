/*
 Ao, Ivan

 September 23, 2020

 CS A250

 Test#1
*/

#include "DoublyList.h"

void DoublyList::insertFront(int elem)
{
	if (count == 0)
	{
		first = last = new Node(elem, nullptr, nullptr);
	}
	else
	{
		first = new Node(elem, nullptr, first);
		first->getNext()->setPrev(first);
	}
	++count;
}

void DoublyList::destroyList()
{
	while (first != nullptr)
	{
		Node  *temp = first;
		first = first->getNext();
		delete temp;
		temp = nullptr;
	}
	last = nullptr;
	count = 0;
}

DoublyList::~DoublyList()
{
	destroyList();
}





