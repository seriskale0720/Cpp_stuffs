//============================================================================
// Name        : Week.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void printarray(string arr[], int N)
{
	for (int i=0;i<N;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
/*
void heapify(string arr[], int parent, int n)
{
	int child=2*parent+1, child2=child++, max=parent;
	if (child<n&&arr[child]>arr[max])
	{
		max=child;
	}
	if (child2<n&&arr[child2]>arr[max])
	{
		max=child2;
	}
	if (max!=parent)
	{
		string temp=arr[max];
		arr[max]=arr[parent];
		arr[parent]=temp;
		heapify(arr,max,n);
	}
}
*/
void heapify(string arr[], int parent, int n)
{
	while (2*parent+1<n)
	{
		int child=2*parent+1;
		if (child+1<n && arr[child]<arr[child+1])
		{
			child++;
		}
		if (arr[parent]<arr[child])
		{
			string temp=arr[parent];
			arr[parent]=arr[child];
			arr[child]=temp;
			parent=child;
		}
		else
			return;
	}
}
void heapsort(string arr[], int n)
{
	for (int i=n/2;i>=0;i--)
	{
		heapify(arr,i,n);
	}
	for (int i=n-1;i>=1;i--)
	{
		string temp=arr[i];
		arr[i]=arr[0];
		arr[0]=temp;
		heapify(arr,0,i-1);
	}
}
void search(string arr[], int N)
{
	string str;
	cin >> str;
	for (int i=0; i<N; i++)
	{
		string str2=arr[i];
		if (str2.find(str)<10)
		{
			cout << str2 << endl;
		}
	}
}
void search2(string arr[], int N)
{
	string str;
	cin >> str;
	int count=0;
	for (int i=0; i<N; i++)
	{
		string str2=arr[i];
		for (int j=0;j<str.length();j++)
		{
			if (str[j]==str2[j])
			{
				count++;
			}
		}
		if (count == str.length())
		{
			cout << str2 << endl;
		}
		count = 0;
	}
}

int main()
{
	string line;
	ifstream inFile ("words.txt");
	int N=0;
	if (inFile.is_open())
	{
		while(getline(inFile,line))
		{
			N++;
		}
		string arr[N];
		inFile.clear();
		inFile.seekg(0, ios::beg);
		int i=0;
		while(!inFile.eof())
		{
			inFile >> arr[i];
			i++;
		}
		printarray(arr,N);
		heapsort(arr,N);
		printarray(arr,N);
		search(arr,N);
		search2(arr,N);
	}
	else
		cout << "Unable to open file" << endl;
}
