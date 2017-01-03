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

string whatever;;

void printstring()
{
	for (int j = whatever.length()-1;j>=0;j--)
	{
		cout << whatever.at(j) << " ";
	}
}

int main()
{
	int b, c;
	cin >> b;
	for (int i=0;i<b;i++)
	{
		stringstream stream;
		cin >> c;
		stream << c;
		whatever= whatever + stream.str();
	}
	printstring();
	return 0;
}
