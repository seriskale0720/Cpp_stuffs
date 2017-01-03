//============================================================================
// Name        : Pointer.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int x=25;
	int *p, **q, ***r;
	p=&x;
	q=&p;
	r=&q;
	cout << x << " " << *p << " " << **q << " " << ***r << endl;
	cout << &x << " " << p << " " << *q << " " << **r << endl;
	cout << &p << " " << q << " " << *r << endl;
	cout << &q << " " << r << endl;
	cout << &r << endl;


}
