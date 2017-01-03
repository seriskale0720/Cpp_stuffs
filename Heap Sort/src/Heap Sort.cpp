//============================================================================
// Name        : Heap.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <time.h>
#define N 20000

using namespace std;

void printarray(int arr[])
{
	for (int i=0; i<N; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
/*
//non-recursive call
void heapify(int arr[], int parent, int n)
{
	while (2*parent+1 < n)
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
//recursive call
void heapify(int arr[], int parent, int n)
{
	int child=2*parent+1, child2=child+1, max=parent;
	if (child<n && arr[child]>arr[max])
	{
		max=child;
	}
	if (child2<n && arr[child2]>arr[max])
	{
		max=child2;
	}
	if (max!=parent)
	{
		int temp=arr[parent];
		arr[parent]=arr[max];
		arr[max]=temp;
		heapify(arr,max,n);
	}
}

void heapsort(int arr[], int n)
{
	for (int i=n/2; i>=0; i--)
	{
		heapify(arr,i,n);
	}
	for (int i=n-1; i>=1; i--)
	{
		int temp=arr[0];
		arr[0]=arr[i];
		arr[i]=temp;
		heapify(arr,0,i-1);
	}
}
void merge (int arr[], int low, int mid, int high)
{
	int temp[high];
	for (int i=low;i<=high;i++)
	{
		temp[i]=arr[i];
	}
	int i=low, j=mid+1, k=low;
	while (i<=mid && j<=high)
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
	while (i<=mid)
	{
		arr[k]=temp[i];
		i++;
		k++;
	}
}
void mergesort (int arr[], int low, int high)
{
	if (high > low)
	{
		int mid=(low+high)/2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}
int main ()
{
	int arr[N];
	for (int i=0; i<N; i++)
	{
		arr[i]=rand()%N;
	}
	printarray(arr);
	mergesort(arr,0,N-1);
	printarray(arr);
}

