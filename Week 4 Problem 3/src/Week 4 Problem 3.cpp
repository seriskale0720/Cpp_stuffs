//============================================================================
// Name        : Week.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	int arr1[100],arr2[100],arrmult[100];
	int i,j,k;
	for (i=0;i<100;i++)
	{
		arr1[i]=0;
		arr2[i]=0;
		arrmult[i]=0;
	}
	string str1;
	cin >> str1;
	j=99;
	for (int i=str1.length()-1;i>=0;i--)
	{
		arr1[j]=str1[i]-'0';
		j--;
	}
	cin >> str1;
	j=99;
	for (int i=str1.length()-1;i>=0;i--)
	{
		arr2[j]=str1[i]-'0';
		j--;
	}
	k=0;
	//multiplication starts
	for (i=99;i>=0;i--)
	{
		for (j=99;j>=0;j--)
		{
			arrmult[j-k]=arrmult[j-k]+arr1[j]*arr2[i];
			if (arrmult[j-k]>=10)
			{
				int r=arrmult[j-k]/10;
				arrmult[j-k]=arrmult[j-k]-(r*10);
				arrmult[j-k-1]+=r;
			}
		}
		k++;
	}
	for (i=0;i<100;i++)
	{
		if (arrmult[i]>0)
		{
			goto print;
		}
	}
	print:for (i;i<100;i++)
	{
		cout << arrmult[i];
	}
}
