//============================================================================
// Name        : Pointer.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
using namespace std;

void add(int* ptr){
	*ptr+=1;
}

void addptr(int** ptr){
	**ptr+=1;
}

int main(){
	int a=2049;
	int *p;
	char *c;
	p=&a;
	cout << "The address of a is: "<< &a << endl;
	cout << "The address of p is: " << &p << endl;
	cout << "The value of p is: " << p << endl;
	cout << "The value of a is: " << a << endl;
	cout << "The value pointed by p is: " << *p << endl;
	*p=4038;
	cout << "The value of a is now: " << a << endl;
	cout << "The value pointed by p is now: " << *p << endl;
	p++;
	cout << "The value of p is now: " << p << endl;
	p--;
	cout << "The value of p is now: " << p << endl;
	(*p)++;
	cout << "The value of a is now: " << a << endl;
	cout << "The value pointed by p is now: " << *p << endl;
	c=(char*)p;
	printf("The value pointed by c is now: %d\n",*c);
	printf("The value of p is now: %d\n", p);
	printf("The value of c is now: %d\n", c);
	c++;
	printf("THe value of c is now: %d\n", c);
	printf("THe value pointed by c is now: %d\n",*c);
	add(&a);
	cout << "The value of a is now: " << a << endl;
	cout << "The value of p is now: " << *p << endl;
	addptr(&p);
	cout << "The value of p is now: " << *p << endl;
	cout << "The value of a is now: " << a << endl;

}
