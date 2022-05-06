//NULLTerminatedLines
#include<iostream>
#include<Windows.h>
using namespace std;

int StringLength(const char str[]);

void main()
{
	setlocale(LC_ALL, "");
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);
	//char str[] = { 'H', 'e', 'l', 'l', 'o', 0 };
	//char str[] = "Hello";
	//cout << str << endl;
	const int SIZE = 256;
	char str[SIZE] = {};
	cout << "¬ведите строку: ";
	SetConsoleCP(1251);
	//cin >> str;
	cin.getline(str, SIZE);
	SetConsoleCP(866);
	cout << str << endl;
	cout << "¬веденна€ строка имеет длину: " << StringLength(str) << endl;
}

int StringLength(const char str[])
{
	int i = 0;
	for (; str[i] != 0; i++);
	return i;
}