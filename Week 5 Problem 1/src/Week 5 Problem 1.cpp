//============================================================================
// Name        : Week.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
using namespace std;

void bubblesort(int arr[100])
{
	int temp, repeat=100;
	for (int j=0; j<repeat-1; j++)
	{
		for (int i=0; i<repeat-1-j; i++)
		{
			if (arr[i]>arr[i+1])
			{
				temp=arr[i+1];
				arr[i+1]=arr[i];
				arr[i]=temp;
			}
		}
	}
}

void Nfromarray(int arr[100], string decision, int n)
{
	int s=n;
	string endpoint;
	if (s==1)
	{
		endpoint = "st";
	}
	else if (s==2)
	{
		endpoint = "nd";
	}
	else if (s==3)
	{
		endpoint = "rd";
	}
	else
	{
		endpoint = "th";
	}
	if (decision == "s")
	{
		int i;
		for (i=0;i<n;i++)
		{
			if (arr[i]==arr[i+1])
			{
				n++;
			}
		}
		i--;
		cout << arr[i] << " is the " << s << endpoint << " smallest number" << endl;
	}
	else if (decision == "b")
	{
		int i;
		for (i=99;i>(99-n);i--)
		{
			if (arr[i]==arr[i-1])
			{
				n++;
			}
		}
		i++;
		cout << arr[i] << " is the " << s << endpoint << " biggest number" << endl;
	}
}

int main()
{
	int arr[100], n;
	string decision;
	for (int i=0; i<100; i++)
	{
		arr[i]=rand()%100;
	}
	cout << "Before sorting" << endl;
	for (int i=0; i<100; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "After sorting" << endl;
	bubblesort(arr);
	for (int i=0; i<100; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Please choose whether you want to see the biggest=b or smallest=s" << endl;
	cin >> decision;
	cout << "Please enter the number" << endl;
	cin >> n;
	Nfromarray(arr, decision, n);
}
