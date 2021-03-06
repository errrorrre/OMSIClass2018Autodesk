// DuckInheritanceC++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

class Duck
{
	public : 
		Duck()	{ cout << "Duck class is constructed" << endl; };
		~Duck() { cout << "Duck class is destroyed" << endl; };
		virtual void swim () { cout << "All ducks can swim" << endl; };
};

class MallardDuck : public Duck
{
	public:
		virtual void swim() { cout << "Mallard ducks can swim" << endl; };
};

void Test()
{
	MallardDuck mduck;
	Duck	duck;
	mduck.swim();
	duck.swim();
};

int main()
{
	cout << "Hello World! We are testing Inheritance here." << endl;

	Test();

	string readone;
	getline(cin, readone);
    return 0;
}

