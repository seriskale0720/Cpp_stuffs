//============================================================================
// Name        : Week.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	string array;
	cin >> array;
	int OneDArray[48], TwoDArray[6][8], ThreeDArray[4][4][3],l=0;
	int BArray[48]
	  {23, 5, 23, 3, 4, 3, 2, 3, 45, 4, 3, 3, 9, 56, 3, 6, 23, 67, 3, 65, 54, 4,
	  3, 3, 23, 75, 4, 75, 23, 5, 3, 56, 3, 3, 756, 34, 53, 43, 23, 4, 34, 76, 54,
	  65, 7, 98, 6, 8};
	if (array == "1D")
	{
		for (int i=0;i<48;i++)
		{
		OneDArray[i]=BArray[i];
		}
		for (int i=0;i<48;i++)
		{
			cout<<OneDArray[i]<<" ";
		}
	}
	else if (array == "2D")
	{
		for (int i=0;i<6;i++)
		{
			for (int j=0;j<8;j++)
			{
				TwoDArray[i][j]=BArray[l];
				l++;
			}
		}
		for (int i=0;i<6;i++)
		{
			for (int j=0;j<8;j++)
			{
				cout<< left << setw(3) << TwoDArray[i][j]<<" ";
			}
			cout << endl;
		}
	}
	else if (array == "3D")
	{
		for (int i=0;i<4;i++)
		{
			for (int j=0;j<4;j++)
			{
				for (int k=0;k<3;k++)
				{
					ThreeDArray[i][j][k]=BArray[l];
					l++;
				}
			}
		}
		for (int i=0;i<4;i++)
		{
			for (int j=0;j<4;j++)
			{
				for (int k=0;k<3;k++)
				{
					cout<< left << setw(3) << ThreeDArray[i][j][k]<<" ";
				}
				cout << endl;
			}
		}
	}

return 0;
}
