//============================================================================
// Name        : Homework03.cpp
// Author      : Damon Wolfgang Duckett
// Version     :
// Copyright   : What copyright?
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"ChainedHashTable.h"
#include"LinearHashTable.h"
using namespace std;
using namespace ods;

int main() {
	ChainedHashTable<char> list;
	cout << "Time to start Hash Tables for homework" << endl; // prints Time to start Hash Tables for homework
	list.add('t');
	list.add('z');
	cout << "stuff works bro" << endl;
	cout << list.find('z') << endl;
	cout << list.find('t') << endl;
	cout << list.find('a') << endl;
	if (list.find('a') == (char)INT_MIN) { //this makes sure everything is right with the stuff that is returned above
		cout << "it is null bro. It's all OK" << endl;
	}

	cout << list.GetLongestList() << endl;

	list.add('a');
	list.add('b');
	list.add('q');
	list.add('u');// up to this point the code is resizing at the point it should be

	/*time to test some other things using another
	 * object so that I will have less adding to do*/
	ChainedHashTable<int> list2;
	list2.add(2); //ha. I added 2 to list2
	list2.add(5);
	list2.SetLocalFactor(2);
	list2.add(90);
	list2.add(69);
	list2.add(25);
	//there should be a resize called after this next add
	list2.add(43);

	cout << list2.GetLongestList() << endl;
	//this concludes the tests for the ChainedHashTable.h file
	//TODO: when done with LinearHashTable, try to make a better hash function for both


	return 0;
}
