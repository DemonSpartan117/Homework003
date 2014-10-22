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
	return 0;
}
