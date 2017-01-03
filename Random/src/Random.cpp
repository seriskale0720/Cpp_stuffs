//============================================================================
// Name        : Random.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
	int arr[10];
	srand(time(NULL));
	for (int i=0; i<10; i++)
	{
		arr[i]=0;
	}
	for (int i=0; i<100000; i++)
	{
		int temp=rand()%10;
		arr[temp]=arr[temp]+1;
	}
	for (int i=0; i<10; i++)
	{
		cout << arr[i] << " ";
	}
}
