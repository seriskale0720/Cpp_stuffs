//============================================================================
// Name        : Limited.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


int randrsp ()
{
	srand(time(NULL));
	int countr = 0, counts = 0, countp = 0, countrsp;
	for (countrsp=0; countrsp<9; countrsp++)
	{
		int a=rand()%3;
		if (a==0)
		{
			countr++;
		}
		else if (a==1)
		{
			counts++;
		}
		else
		{
			countp++;
		}
	}
	cout << "You have: " << countr << " rocks, " << counts << " scissors, " << countp << " papers, " << endl;
	return countr;
	return counts;
	return countp;
}

int countmin(string rock, string scissors, string paper)
{
	randrsp();
	int countr, counts, countp;
	if (rock == "rock")
	{
		for (countr;countr<1;countr--)
		{
			cout << "You have chosen rock" << endl << "You have: " << countr << " rocks, " << counts << " scissors, " << countp << " papers, " << endl;
		}
	}
	else if (scissors == "scissors")
	{
		for (counts;counts<1;counts--)
		{
			cout << "You have chosen scissors" << endl << "You have: " << countr << " rocks, " << counts << " scissors, " << countp << " papers, " << endl;
		}
	}
	else if (paper == "paper")
	{
		for (countp;countp<1;countp--)
		{
			cout << "You have chosen paper" << endl << "You have: " << countr << " rocks, " << counts << " scissors, " << countp << " papers, " << endl;
		}
	}
	else
	{
		cout << "incorrect key" << endl;
	}
}




int main()
{
	string rock, scissors, paper;
	cin >> rock;
	cin >> scissors;
	cin >> paper;
	countmin (rock, scissors, paper);
}
