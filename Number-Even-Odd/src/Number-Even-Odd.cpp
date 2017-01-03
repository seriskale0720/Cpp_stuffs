//============================================================================
// Name        : Number-Even-Odd.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int determine(int i)
{
	if (i==1)
	{
		cout << "one" << endl;
	}
	else if (i==2)
	{
		cout << "two" << endl;
	}
	else if (i==3)
	{
		cout << "three" << endl;
	}
	else if (i==4)
	{
		cout << "four" << endl;
	}
	else if (i==5)
	{
		cout << "five" << endl;
	}
	else if (i==6)
	{
		cout << "six" << endl;
	}
	else if (i==7)
	{
		cout << "seven" << endl;
	}
	else if (i==8)
	{
		cout << "eight" << endl;
	}
	else if (i==9)
	{
		cout << "nine" << endl;
	}
	else if (i==0)
	{
		cout << "zero" << endl;
	}
	else
	{
		if (i%2==0)
		{
			cout << "even" << endl;
		}
		else
		{
			cout << "odd" << endl;
		}
	}
	return 0;
}

int main()
{
	int a,b,i;
	cin >> a;
	cin >> b;
	if (a<b)
	{
		for (i=a; i<=b; i++)
	{
		determine(i);
	}
	}
	else if (a>b)
	{
		for (i=b; i<=a; i++)
		{
			determine(i);
		}
	}
	else
	{
		i=a;
		determine(i);
	}
	return 0;
}
