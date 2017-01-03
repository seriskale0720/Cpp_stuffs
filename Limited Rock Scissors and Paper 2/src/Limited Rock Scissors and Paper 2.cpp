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

int count (int c, string dec)
{
	if (c>0)
	{
		cout << "You have chosen " << dec << endl;
		c--;
	}
	else
	{
		cout << "Not enough energy " << endl;
		c=0;
	}
	return c;
}
int cdecision ()
{
	srand(time(NULL));
	int cdec=rand()%3;
	return cdec;
}


int rspgame (int pr, int ps, int pp, int cr, int cs, int cp)
{
	string decision;
	while (pr>0 || ps>0 || pp>0)
		{
			label:int cdec=cdecision();
			if (cdec==0)
			{
				if (cr==0)
				{
					goto label;
				}
				else
				{
					cr--;
				}
			}
			else if (cdec==1)
			{
				if (cs==0)
				{
					goto label;
				}
				else
				{
					cs--;
				}
			}
			else if (cdec==2)
			{
				if (cs==0)
				{
					goto label;
				}
				else
				{
					cp--;
				}
			}
			cin >> decision;
			if (decision == "rock")
			{
				pr=count (pr, decision);
				cout << pr << " " << ps << " " << pp << endl;
			}
			else if (decision == "scissors")
			{
				ps=count (ps, decision);
				cout << pr << " " << ps << " " << pp << endl;
			}
			else if (decision == "paper")
			{
				pp=count (pp, decision);
				cout << pr << " " << ps << " " << pp << endl;
			}
			else
			{
				cout << "You have chosen incorrect power!" << endl;
			}
		}
	return 0;
}
int main ()
{
	srand(time(NULL));
	int countpp=0, countps=0, countpr=0, countcp=0, countcs=0, countcr=0;
	for (int i=0;i<=8;i++)
	{
		int r=rand()%1000;
		if (r%3==0)
		{
			countpp++;
		}
		else if (r%3==1)
		{
			countps++;
		}
		else if (r%3==2)
		{
			countpr++;
		}
	}
	cout << countpr << " " << countps << " " << countpp << " " << endl;
	for (int j=0;j<=8;j++)
	{
		int r=rand()%1000;
		if (r%3==0)
		{
			countcp++;
		}
		else if (r%3==1)
		{
			countcs++;
		}
		else if (r%3==2)
		{
			countcr++;
		}
	}
	cout << countcr << " " << countcs << " " << countcp << " " << endl;
	cout << "Please choose your weapon." << endl;
	rspgame(countpr,countps,countpp,countcr,countcs,countcp);
	return 0;
}
