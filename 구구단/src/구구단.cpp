//============================================================================
// Name        : ������.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstddef>
#include <limits>
using namespace std;

int basic99 ()
{
	int i, j, k;
		for (j=2; j<=9; j++){
			cout << j << "��" << " ";
			for (i=1; i<=9; i++)
		{
			k=j*i;
			cout << j << "x" << i << "=" << k << " ";
		}
			cout << endl;}
		return 0;
}
int specific99 (string x)
{
	int i,k,j;
	cout << "2~9�� ���ڸ� ���ּ���." << endl;
	label:cin >> j;
	if (!(j>=2 && j<9))
	{
		cout << "2~9�� �ƴմϴ�. 2~9�� ���ڸ� ���ּ���." << endl;
		goto label;
	}
	else if (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), 'endl');
		goto label;
	}
	else
	{
	for (i=1; i<=9; i++)
	{
		k=j*i;
		cout << j << "�� " << j << "x" << i << "=" << k << endl;
	}
	}
	return 0;
}
int googame (string a)
{
	label1:srand(time(NULL));
	int b = (rand() % 9) + 2;
	int c = (rand() % 9) + 1;
	string f;
	int ans;
	label2:cout << "99���� �ܿ��� " << b << "x" << c << "?" << endl;
	cin >> ans;
	if (ans == b*c)
	{
		cout << "�¾ҽ��ϴ�! �� �� �غ����? ���� �Ͻ÷��� n�� �����ּ���";
		cin >> f;
		if (f != "n")
		{
			goto label1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		cout << "�ƽ��Ե� Ʋ�ȳ׿�!, �ѹ� �� �غ����?" << endl;
		while (ans != b*c)
		{
			goto label2;
		}
	}
	return 0;
}

int main()
{
	label:cout << "99���� �����մϴ�. ��ü�� ���÷��� ���δ� 99��, ��ü���� ���� ���÷��� '��'�� ���ּ���." << endl << "99�� ������ �����Ͻ÷��� 'game'�̶�� ���ּ���" << endl;
	string trig;
	cin >> trig;
	if (trig == "99")
	{
		basic99 ();
	}
	else if (trig == "��")
	{
		specific99 (trig);
	}
	else if (trig == "game")
	{
		googame (trig);
	}
	else
	{
		cout << "�߸� �� Ű �Դϴ�." << endl;
		while (trig !="99" || trig !="game" || trig != "��")
			goto label;
	}
return 0;
}
