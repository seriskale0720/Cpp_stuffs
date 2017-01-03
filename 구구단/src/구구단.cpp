//============================================================================
// Name        : 구구단.cpp
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
			cout << j << "단" << " ";
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
	cout << "2~9의 숫자를 써주세요." << endl;
	label:cin >> j;
	if (!(j>=2 && j<9))
	{
		cout << "2~9가 아닙니다. 2~9의 숫자를 써주세요." << endl;
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
		cout << j << "단 " << j << "x" << i << "=" << k << endl;
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
	label2:cout << "99단을 외우자 " << b << "x" << c << "?" << endl;
	cin >> ans;
	if (ans == b*c)
	{
		cout << "맞았습니다! 좀 더 해볼까요? 종료 하시려면 n을 눌러주세요";
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
		cout << "아쉽게도 틀렸네요!, 한번 더 해볼까요?" << endl;
		while (ans != b*c)
		{
			goto label2;
		}
	}
	return 0;
}

int main()
{
	label:cout << "99단을 시작합니다. 전체를 보시려면 전부는 99를, 구체적인 단을 보시려면 '단'을 써주세요." << endl << "99단 게임을 시작하시려면 'game'이라고 써주세요" << endl;
	string trig;
	cin >> trig;
	if (trig == "99")
	{
		basic99 ();
	}
	else if (trig == "단")
	{
		specific99 (trig);
	}
	else if (trig == "game")
	{
		googame (trig);
	}
	else
	{
		cout << "잘못 된 키 입니다." << endl;
		while (trig !="99" || trig !="game" || trig != "단")
			goto label;
	}
return 0;
}
