#include<iostream>
using namespace std;

//#define SQUARE
//#define SQUARE_1
#define SQUARE_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef SQUARE
	int n;
	cout << "Введите число: "; cin >> n;
	for (int i = 0; i < n; i++)// этот for повторяет вывд строки из звездочек
	{
		for (int i = 0; i < n; i++)//повторяет вывод звездочки, мы получаем строку из звездочек
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE
#ifdef SQUARE_1
	int n;
	cout << "Введите число: "; cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << ('*');
		}
		cout << endl;
	}
#endif // SQUARE_1
#ifdef SQUARE_2
	int n;
	cout << "Введите число: "; cin >> n;
	for (int i = n; i >= 0; i--)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << ('*');
		}
		cout << endl;
	}
#endif // SQUARE_2


}