//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <time.h>
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
			cout << endl;
		}
		return 0;
}
int specific99 (int j)
{
	int i,k;
	for (i=1; i<=9; i++)
	{
		k=j*i;
		cout << j << "�� " << j << "x" << i << "=" << k << endl;
	}
	return 0;
}
int googame (int a)
{
	label1:srand(time(NULL));
	int b = (rand() % 9) + 2;
	int c = (rand() % 9) + 1;
	int f;
	int ans;
	label2:cout << "99���� �ܿ��� " << b << "x" << c << "?" << endl;
	cin >> ans;
	if (ans == b*c)
	{
		cout << "�¾ҽ��ϴ�!, �� �� �غ����? ���� �Ͻ÷��� 0�� �����ּ���";
		cin >> f;
		if (f != 0)
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
	label:cout << "99���� �����մϴ�. ��ü�� ���÷��� ���δ� 99��, ��ü���� ���� ���÷��� 2~9������ ���ڸ� ���ּ���." << endl << "99�� ������ �����Ͻ÷��� 10�̶�� ���ּ���" << endl;
	int trig;
	cin >> trig;
	if (trig == 99)
	{
		basic99 ();
	}
	else if (trig >= 2 && trig <= 9)
	{
		specific99 (trig);
	}
	else if (trig == 10)
	{
		googame (trig);
	}
	else
	{
		cout << "�߸� �� Ű �Դϴ�." << endl;
		while (trig !=99 || trig !=10 || !(trig>= 2 && trig <=9))
			goto label;
	}
return 0;
}
