// FibRabbits.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int rabbit (int n)
{
	if (n <=2)
	{
		return 1;
	}
	else
		return rabbit(n-1) + rabbit (n-2);
}

int  rabbitI (int n)
{
	int current=1, prev=1, next=1;
	for (int i =3; i <= n; i++)
	{
		next = current+prev;
		prev = current;
		current=next;
		cout << " " << current;
	}
	return next;
}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << rabbitI(7) << " ";
	cout << rabbit(4);
	return 0;
}

