//============================================================================
// Name        : Pointer.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;

void assignarr(int *arr, int size){
	for (int i=0; i<size; i++){
		*(arr+i)=i;
	}
}
void print(int *arr, int size){
	for (int i=0; i<size; i++){
		cout << *(arr+i) << " ";
	}
	cout << endl;
}
void reverse(char* chara){
	for(unsigned int i=0; i<strlen(chara)/2; i++){
		swap(*(chara+i),*(chara+strlen(chara)-1-i));
	}
}
void printstr(char* chara){
	for (unsigned int i=0; i<strlen(chara); i++){
		cout << *(chara+i);
	}
	cout << endl;
}
void reverse(string &s){
	for(unsigned int i=0; i<s.length()/2; i++){
		swap(s[i],s[s.length()-i-1]);
	}
}


int main(){
	int array[5];
	assignarr(array,5);
	print(array,5);
	char c[]="Hello World!";
	reverse(c);
	printstr(c);
	string s="Hello World!";
	reverse(s);
	cout << s << endl;

}
