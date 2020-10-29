/*
 Ao, Ivan

 September 23, 2020

 CS A250

 Test#1
*/
#include "DoublyList.h"

#include <iostream>
#include <string>
using namespace std;



int main()
{
	DoublyList d1, d2;
	int a[] = { 30, 40, 50 };

	d1.insertFront(3);
	d1.insertFront(2);
	d1.insertFront(1);

	
	d1.print(true);


	d2.insertFront(60);
	d2.insertFront(70);
	d2.insertFront(80);

	
	cout << endl;
	cout << endl;
	d1.swapFirstNodes(d2);
	d1.print(true);
	cout << endl;
	cout << endl;
	d2.print(true);
	//d1.print(true);
	//d2.print(true);
	// Write your own tests for the functions you wrote
	DoublyList* obj = new DoublyList;
	obj->print(true);
	cout << endl;
	system("Pause");
	return 0;
}