/*
 Ao, Ivan

 September 23, 2020

 CS A250

 Test#1
*/


#include "DoublyList.h"


// Define print
// Your code here...
void DoublyList::print(bool direction) const
{
	if (count == 0)
	{
		cerr << "List is empty." << endl;
	}
	else
	{
		Node* temp = first;
		if (direction)
		{
			while (temp->getNext() != nullptr)
			{
				cout << temp->getData() << "-";
				temp = temp->getNext();
			}
			cout << temp->getData();
		}
		else
		{
			temp = last;
			while (temp->getPrev() != nullptr)
			{
				cout << temp->getData() << "-";
				temp = temp->getPrev();
			}
			cout << temp->getData();
		}
		cout << "\n";
	}
}

// Define deleteSecondNode
// Your code here...
void DoublyList::deleteSecondNode()
{
	if (count == 2)
	{
		delete last;
		last = first;
		first->setNext(nullptr);
		--count;
	}
	else if (count > 2)
	{
		Node* temp = first->getNext();
		first->setNext(temp->getNext());
		temp->getNext()->setPrev(first);

		delete temp;
		--count;
		temp = nullptr;
	}
}

// Define moveLastToFirst
// Your code here...
void DoublyList::moveLastToFirst()
{
		first->setPrev(last);
		last->setNext(first);
		last = last->getPrev();
		first = first->getPrev();
		first->setPrev(nullptr);
		last->setNext(nullptr);
}

// Define appendArrayToList
// Your code here...
void DoublyList::appendArrayToList(const int a[], int n)
{
	/*for (int i = (n-1); i >= 0; --i)
	{
		this->insertFront(a[i]);
	}*/
	for (int i = n; i >= 0; --i)
	{
		first->setPrev(new Node(a[i], nullptr, first));
		first = first->getPrev();
	}
	count += n;
}

// Define swapFirstNodes
// Your code here...
void DoublyList::swapFirstNodes(DoublyList& dList)
{
	Node* temp = dList.first->getNext();
	
	/*
	temp->setNext(first->getNext());
	first->getNext()->setPrev(temp);



	first->setNext(dList.first->getNext());
	dList.first->getNext()->setPrev(first);
	*/
	first->getNext()->setPrev(dList.first);
	dList.first->setNext(first->getNext());

	temp->setPrev(first);
	first->setNext(temp);

	temp = temp->getPrev();
	first = dList.first;
	dList.first = temp;
}



