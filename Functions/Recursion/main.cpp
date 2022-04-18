//Recursion
#include<iostream>
using namespace std;

void elevator(int floor);
int factorial(int n);
double power(double a, int n);

//#define ELEVATOR

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello World!";
	//main();
	//Stack - это модель памяти, из которой последний 
	//записанный элемент считывается первым.

#ifdef ELEVATOR
	int n;
	cout << "Введите номер этажа: "; cin >> n;
	elevator(n);
#endif // ELEVATOR

	/*int n;
	cout << "Введите число для вычисления Факториала: "; cin >> n;
	cout << factorial(n) << endl;*/

	int a;
	int n;
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	cout << power(a, n) << endl;
	main();
}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на " << floor << " этаже\n";
	elevator(floor - 1);
	cout << "Вы на " << floor << " этаже\n";
}
int factorial(int n)
{
	/*if (n < 0)
	{
		return 0;
	}
	if (n == 0)
	{
		cout << n << endl;
		cout << "-----------------------\n";
		return 1;
	}
	cout << n << endl;
	int f = n * factorial(n - 1);
	cout << f << endl;
	return f;*/

	return n < 0 ? 0 : n == 0 ? 1 : n * factorial(n - 1);
}
double power(double a, int n)
{
	/*if (n == 0)return 1;
	else if (n > 0)return a * power(a, n - 1);
	else return 1 / a * power(a, n + 1);*/
	//return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / a * power(a, n + 1);
	return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / power(a, -n);
}