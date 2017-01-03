//============================================================================
// Name        : Sorting.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#define N 8
using namespace std;

int arr[N];

void printarray(int arr[N])
{
	for (int i=0; i<N; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void bubblesort (int arr[N])
{
	for (int i=0; i<N-1; i++)
	{
		for (int j=0; j<N-1-i; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int temp;
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
void selectionsort (int arr[N])
{
	for (int i=0; i<N-1; i++)
	{
		int Min = i;
		for (int j=i+1; j<N; j++)
		{
			if (arr[Min]>arr[j])
			{
				Min = j;
			}
		}
		int temp;
		temp=arr[Min];
		arr[Min]=arr[i];
		arr[i]=temp;
	}
}
/*
Another way of selection sort:
void selectionsort (int arr[N])
{
	for (int i=0; i<N-1; i++)
	{
		for (int j=i+1; j<N; j++)
		{
			if (arr[i]>arr[j])
			{
				int temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
*/
void insertionsort(int arr[])
{
	for (int i=1; i<N;i++)
	{
		int j=i;
		while (j>0 && arr[j]<arr[j-1])
		{
			int temp;
			temp=arr[j-1];
			arr[j-1]=arr[j];
			arr[j]=temp;
			j--;
		}
	}
}
//non-recursive
/*
void heapify(int arr[], int parent, int n)
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
			int temp=arr[parent];
			arr[parent]=arr[child];
			arr[child]=temp;
			parent=child;
		}
		else
			return;
	}
}
*/
//recursive
void heapify(int arr[], int parent, int n)
{
	int child=2*parent+1, child2=child+1, max=parent;
	if (child < n && arr[child]>arr[max])
	{
		max=child;
	}
	if (child2 < n && arr[child2]>arr[max])
	{
		max=child2;
	}
	if (max!=parent)
	{
		int temp=arr[max];
		arr[max]=arr[parent];
		arr[parent]=temp;
		heapify(arr, max, n);
	}
}
void heapsort(int arr[], int n)
{
	for (int i=n/2; i>=0; i--)
	{
		heapify(arr,i,n);
	}
	for (int i=n-1;i>=1; i--)
	{
		int temp=arr[i];
		arr[i]=arr[0];
		arr[0]=temp;
		heapify(arr,0,i-1);
	}
}
void merge(int arr[], int start, int mid, int end)
{
	int temp[end];
	for (int i=start; i<=end; i++)
	{
		temp[i]=arr[i];
	}
	int i=start, j=mid+1, k=start;
	while (i <= mid && j <= end)
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
	while (i <= mid)
	{
		arr[k]=temp[i];
		i++;
		k++;
	}
}

void mergesort(int arr[], int start, int end)
{
	if (end>start)
	{
		int mid = (start+end)/2;
		mergesort(arr, start, mid);
		mergesort(arr, mid+1, end);
		merge(arr, start, mid, end);
	}
}
int main()
{
	for (int i=0; i<1000; i++)
	{
		int element=rand()%N;
		arr[element]++;
	}
	printarray(arr);
	mergesort(arr,0,N-1);
	printarray(arr);
}
