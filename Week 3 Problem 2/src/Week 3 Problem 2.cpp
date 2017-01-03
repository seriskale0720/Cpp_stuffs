//============================================================================
// Name        : Week.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main()
{
	int c [10][10];
	int count=0;
	for (int i=0;i<10;i++)
	{
		for (int j=0;j<10;j++)
		{
			count++;
			c[j][i]=count;
		}
	}

for(int i=0;i<10;i++)
{
	for (int j=0;j<10;j++)
	{
		cout << c[i][j] << " ";
	}
}
}
