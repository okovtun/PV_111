//Functions
#include<iostream>
using namespace std;

int Add(int a, int b);	//Прототип функции (Объявление функции - Function declaration)
//Прототип нужен для того, чтобы имя функции и ее список принимаемых параметров были известны 
//на момент вызова
int Sub(int a, int b);	//Прототип состоит только из заголовка функции.
int Mul(int a, int b/*принимаемые параметры*/);
double Div(int a, int b);
//						UNRESOLVED EXTERNALS
void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Add(a, b);	//Вызов (исползование) фукнции - Fuction call
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b/*передаваемые параметры*/) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
}

int Add(int a, int b)	//Реализация функции (Определение функции - Function definition)
{//Реализует то что делает функция.
	int c = a + b;
	return c;
}
int Sub(int a, int b)	//Реализация состоит из заголовка и тела функции
{
	return a - b;
}
int Mul(int a, int b/*принимаемые параметры*/)
{
	return a * b;
}
double Div(int a, int b)
{
	return (double)a / b;
}