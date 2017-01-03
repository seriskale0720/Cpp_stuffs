//============================================================================
// Name        : Recurse99.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void recurse99(int i, int j)
{
int k=i*j;
if (i<=9)
{
	cout << i << "x" << j << "=" << k << " ";
	j++;
		if (j<=9)
		{
			recurse99(i, j);
		}
		else
		{
			cout << i << "´Ü ³¡" << endl;
			i++;
			j=1;
			recurse99(i, j);
		}
}
}
int main()
{
	int i = 2;
	int j = 1;
	recurse99(i,j);
	return 0;
}
