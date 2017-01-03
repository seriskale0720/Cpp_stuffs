//============================================================================
// Name        : Week.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <time.h>
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

void selectionsort(int arr[100])
{
	int temp, repeat=100;
	for (int i=0;i<repeat-1;i++)
	{
		int Min = i;
		for (int j=i+1;j<repeat;j++)
		{
			if(arr[j]<arr[Min])
			{
				Min=j;
			}
		}
		temp = arr[i];
		arr[i]=arr[Min];
		arr[Min]=temp;
	}
}

void insertionsort(int arr[100])
{
	int j, temp, repeat=100;
	for (int i=1;i<repeat;i++)
	{
		j=i;
		while (j>0 && arr[j] < arr[j-1])
		{
			temp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
			j--;
		}
	}
}

void merge(int arr[100], int begin, int midpoint, int end)
{
	int temp[100];
	for (int i=0;i<100;i++)
	{
		temp[i]=arr[i];
	}
	int i=begin, j=midpoint+1, k=begin;
	while (i<=midpoint && j<=end)
	{
		if (temp[i]<=temp[j])
		{
			arr[k]=temp[i];
			i++;
		}
		else
		{
			arr[k]=temp[j];
			j++;
		}
		k++;
	}
	while (i<=midpoint)
	{
		arr[k]=temp[i];
		i++;
		k++;
	}
}

void mergesort(int arr[100], int begin, int end)
{
	if (begin < end)
	{
		int midpoint = (begin+end)/2;
		mergesort(arr, begin, midpoint);
		mergesort(arr, midpoint+1,end);
		merge(arr,begin,midpoint,end);
	}
}

void printsort(int arr[100])
{
	for (int i=0; i<100; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int arr[100];
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
	cout << "Please select sorting" << endl << "1 = bubble sort" << endl << "2 = selection sort" << endl << "3 = insertion sort" << endl << "4 = merge sort" << endl;
	clock_t T1 = clock();
	int typesort;
	cin >> typesort;
	if (typesort == 1)
	{
		bubblesort(arr);
	}
	else if (typesort == 2)
	{
		selectionsort(arr);
	}
	else if (typesort == 3)
	{
		insertionsort(arr);
	}
	else if (typesort == 4)
	{
		mergesort(arr,0,99);
	}
	else
	{
		cout << "Invalid value" << endl;
		return 0;
	}
	clock_t T2 = clock();
	double MS = double(T2-T1)/(CLOCKS_PER_SEC/1000);
	cout << "Operation time for sorting " << MS << " Milliseconds" << endl;
	cout << "After sorting" << endl;
	printsort(arr);
}
