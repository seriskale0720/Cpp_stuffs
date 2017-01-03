//============================================================================
// Name        : Function.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int compare(int a, int b){
	if(a>b){
		return -1;
	}
	else{
		return 1;
	}
}
int something(int a, int b){
	return 0;
}

void BubbleSort(int *A, int n, int (*c)(int, int)){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if((*c)(A[j],A[j+1])>0){
				swap(A[j],A[j+1]);
			}
		}
	}
}
void print(int *A, int n){
	for(int i=0;i<n;i++){
		cout << *(A+i) << " ";
	}
	cout << endl;
}
int main() {
	int A[]={3,2,1,5,6,4};
	BubbleSort(A,6,&compare);
	print(A,6);
}
