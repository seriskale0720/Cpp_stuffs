//============================================================================
// Name        : Porints.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void decrement(int *array){
	for(int j=0, i=6; j<5, i>1; j++,i--){
		*(array+j)=i;
	}
}
void print(int *array){
	for (int i=0;i<5;i++){
		cout << *(array+i) << " ";
	}
	cout << endl;
}
void equaltox(int **array,int *x){
	for (int i=0;i<5;i++){
		*(array+i)=x;
	}
}
void printdouble(int **array){
	for (int i=0;i<5;i++){
		cout << "Value pointing to: "<< **(array+i) << " " << "Value: " << *(array+i) << endl;;
	}
}
void printchar(char *c){
	while(*c!='\0'){
		cout << *c;
		c++;
	}
	cout << endl;
}



int main(){
	int arr[5];
		for (int i=0;i<5;i++){
			*(arr+i)=i+1;
		}
		for (int i=0;i<5;i++){
			cout << *(arr+i) << " ";
		}
		cout << endl;
		decrement(arr);
		print(arr);
		int *arr2[5];
		int y=7, x=5;
		for (int i=0;i<5;i++){
			*(arr2+i)=&y;
		}
		for (int i=0; i<5; i++){
			cout << "Value pointing to: " << **(arr2+i) << " " << "Value: " << *(arr2+i) << endl;
		}
		equaltox(arr2,&x);
		printdouble(arr2);
		char* c = "Hello World";
		printchar(c);
		char c2[]= "Hello World";
		printchar(c2);
}
