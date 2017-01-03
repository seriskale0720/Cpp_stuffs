//============================================================================
// Name        : Pointers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int* sum(int* a, int* b){
	int *c;
	c=new int;
	*c = *a + *b;
	return c;
}


int main(){
	int a=4, b=2;
	int* ptr;
	ptr = sum(&a, &b);
	cout << *ptr << endl;
	delete ptr;
}
