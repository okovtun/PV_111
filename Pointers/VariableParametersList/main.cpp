//VariableParametersList
/*
----------------------------------------
1. Первый паметр - показывает количество передаваемых параметров в списке аргументов;
2. В конце списка передаваемых параметров пишется детерминированное (заранее определенное) значение;
----------------------------------------
*/
#include<iostream>
#include<stdarg.h>
using namespace std;

int sum(int count, int number, ...);
int product(int number...);
void print(double value...);

void main()
{
	setlocale(LC_ALL, "");
	cout << "Сумма: " << sum(5, 3, 5, 8, 13, 21) << endl;
	cout << "Произведение: " << product(3, 5, 8, 13, 21, 0) << endl;
	print(3, 5, 8, 13, 21, 0);
}

int sum(int count, int number, ...)
{
	//count - количество параметров в списке аргументов
	//number - первое слагаемое
	int sum = 0;
	//int* p_number = &number;	//получаем адрес первого слагаемого
	for (int i = 0; i < count; i++)
	{
		//sum += *p_number++;
		//p_number++;
		sum += *(&number + i);
	}
	return sum;
}
int product(int number...)
{
	int product = 1;
	for (int* p_number = &number; *p_number != 0; p_number++)
	{
		product *= *p_number;
	}
	return product;
}
void print(double value...)
{
	va_list list;
	va_start(list, value);	//определяем начало списка аргументов
	for (double i = value; i != 0; i = va_arg(list, double))
	{
		cout << i << "\t";
	}
	va_end(list);
}
//	3	5	8	13	21