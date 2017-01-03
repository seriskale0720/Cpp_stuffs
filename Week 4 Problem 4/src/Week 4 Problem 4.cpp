//============================================================================
// Name        : Week.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int arr[5][5], i, j, shift, l=0;
string direction;

void RA(int arr[5][5], string direction, int shift)
{
	int temp[16],temp2[8], T, t;
	for (i=0;i<5;i++)
	{
		temp[i]=arr[0][l];
		l++;
	}
	l=1;
	for (i=5;i<9;i++)
	{
		temp[i]=arr[l][4];
		l++;
	}
	l=3;
	for (i=9;i<13;i++)
	{
		temp[i]=arr[4][l];
		l--;
	}
	l=3;
	for (i=13;i<16;i++)
	{
		temp[i]=arr[l][0];
		l--;
	}
	l=1;
	for (i=0;i<3;i++)
	{
		temp2[i]=arr[1][l];
		l++;
	}
	l=2;
	for (i=3;i<5;i++)
	{
		temp2[i]=arr[l][3];
		l++;
	}
	l=2;
	for (i=5;i<7;i++)
	{
		temp2[i]=arr[3][l];
		l--;
	}
	l=0;
	temp2[7]=arr[2][1];
	if (direction == "-")
	{
		for (j=0; j < shift; j++)
		{
			T=temp[0];
			for (i=0;i<15;i++)
			{
				temp[i]=temp[i+1];
			}
			temp[i]=T;
			t=temp2[0];
			for (i=0;i<7;i++)
			{
				temp2[i]=temp2[i+1];
			}
			temp2[i]=t;
		}
	}
	else if (direction == "+")
	{
		for (j=0; j < shift; j++)
		{
			T=temp[15];
			for (i=15;i>0;i--)
			{
				temp[i]=temp[i-1];
			}
			temp[i]=T;
			t=temp2[7];
			for (i=7;i>0;i--)
			{
				temp2[i]=temp2[i-1];
			}
			temp2[i]=t;
		}
	}
	for (i=0; i<5; i++)
	{
		arr[0][l]=temp[i];
		l++;
	}
	l=1;
	for (i=5; i<9; i++)
	{
		arr[l][4]=temp[i];
		l++;
	}
	l=3;
	for (i=9; i<13; i++)
	{
		arr[4][l]=temp[i];
		l--;
	}
	l=3;
	for (i=13; i<16; i++)
	{
		arr[l][0]=temp[i];
		l--;
	}
	l=1;
	for (i=0;i<3;i++)
	{
		arr[1][l]=temp2[i];
		l++;
	}
	l=2;
	for (i=3;i<5;i++)
	{
		arr[l][3]=temp2[i];
		l++;
	}
	l=2;
	for (i=5;i<7;i++)
	{
		arr[3][l]=temp2[i];
		l--;
	}
	l=0;
	arr[2][1]=temp2[7];
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			cout << left << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int k=1;
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			arr[i][j]=k;
			k++;
		}
	}
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			cout << left << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Please input the direction." << endl;
	cout << "+=clockwise, -=counter clockwise" << endl;
	cin >> direction;
	cout << "Please input the number of steps you would like to rotate" << endl;
	cin >> shift;
	RA(arr, direction, shift);
}
