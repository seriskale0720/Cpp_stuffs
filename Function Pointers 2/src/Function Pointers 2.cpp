//============================================================================
// Name        : Function.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int add(int a, int b){
	return a+b;
}

int add2(int s, int(*d)(int,int)){
	return s+(*d)(2,3);
}

int (*add3(int d))(int,int){
	cout << d << endl;
	return add;
}


int main(){
	int (*p)(int, int);
	p=&add;
	int c=5,d=6;
	cout << (*p)(c,d)<< endl;
	cout << add2(2,&add) << endl;
	int (*ptr)(int,int);
	ptr=add3(5);
	cout << (*ptr)(5,6) << endl;
}
