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
	string str;
	int arr[100], i;
	for (int i=0;i<100;i++)
	{
		arr[i]=0;
	}
	cout << "Adding numbers. Please enter the number" << endl;
	do
	{
		cin >> str;
		if (str=="x"&&"X")
		{
			goto label;
		}
		else
		{
			int j=99;
			for (i=str.length()-1;i>=0;i--)
			{
				arr[j]=arr[j]+(str[i]-'0');
				if (arr[j]>=10)
				{
					arr[j]=arr[j]-10;
					arr[j-1]++;
				}
				j--;
			}
			cout << "Please type in the numbers to add. Please type x to end the iteration." << endl;
		}
	}
	while (str!="x"&&"X");
	label:for (i=0;i<100;i++)
	{
		if (arr[i]>0)
		{
			goto label2;
		}
	}
	label2:for (i;i<100;i++)
	{
		cout << arr[i];
	}
}
