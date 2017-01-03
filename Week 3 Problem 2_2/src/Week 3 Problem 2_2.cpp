//============================================================================
// Name        : Week.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

int main()
{
	int size;
	cin >> size;
	string input;
	cin >> setw(size) >> input;
	input=string(input.rbegin(),input.rend());
	cout << input << endl;
	return 0;
}

