//============================================================================
// Name        : Merge.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
using namespace std;

void merge(int arr[8], int low, int mid, int high)
{
	int temp[8];
	for (int i=low; i<=high; i++)
	{
		temp[i]=arr[i];
	}
	int i=low;
	int j=mid+1;
	int k=low;
	while (i <= mid && j <= high)
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
		k++;
		i++;
	}

}

void mergesort(int arr[8], int low, int high)
{
	if (low < high)
	{
		int mid = (low + high) / 2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}


int main()
{
	int arr[8];
	for (int i=0;i<8;i++)
	{
		arr[i]=rand()%8;
	}
	for (int i=0;i<8;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	mergesort(arr,0,7);
	for (int i=0;i<8;i++)
	{
		cout << arr[i] << " ";
	}
}
