#include<iostream>
using namespace std;

#define PALINDROM
//#define BILET

void main()
{
	setlocale(LC_ALL, "");

#ifdef PALINDROM
	int x, a, b, c, d, i;
	cout << "Введите число: "; cin >> x;

	if (x >= 0 && x < 10)
		cout << "Данное число - палиндром" << endl;
	else
		cout << "Данное число - не палиндром" << endl;
	x = 0;

	while (x >= 10 && x < 100)
	{
		a = x / 10;
		c = x % 10;

		if (a == c) cout << "Данное число - палиндром" << endl;
		else
			cout << "Данное число - не палиндром" << endl;
		x = 0;
	}

	while (x >= 100 && x < 1000)
	{
		a = x / 100;
		b = x % 100 / 10;
		c = x % 10;

		if (a == c) cout << "Данное число - палиндром" << endl;
		else
			cout << "Данное число - не палиндром" << endl;
		x = 0;
	}

	while (x >= 1000 && x < 10000)
	{
		a = x / 1000;
		b = x % 1000 / 100;
		c = x % 100 / 10;
		d = x % 10;
		if (a == d && b == c) cout << "Данное число - палиндром" << endl;
		else
			cout << "Данное число - не палиндром" << endl;
		x = 0;
	}

	while (x >= 10000 && x < 100000)
	{
		a = x / 10000;
		b = x % 10000 / 1000;
		i = x % 1000 / 100;
		c = x % 100 / 10;
		d = x % 10;
		if (a == d && b == c) cout << "Данное число - палиндром" << endl;
		else
			cout << "Данное число - не палиндром" << endl;
		x = 0;
	}

#endif

#ifdef BILET
	int x, a = 0, b = 0;
	cout << "Введите номер билета: "; cin >> x;
	for (int i = 0; i < 3; i++)
	{
		a = a + x % 10;
		x = x / 10;
	}
	for (int i = 0; i < 3; i++)
	{
		b = b + x % 10;
		x = x / 10;
	}
	if (a == b) cout << "Билет счастливый" << endl;
	else cout << "Билет несчастливый " << endl;
#endif
}