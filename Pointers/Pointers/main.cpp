//Pointers
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define POINTERS_BASICS

void main()
{
	setlocale(LC_ALL, "");
#ifdef POINTERS_BASICS
	int a = 2;		//объявление переменной
	int* pa = &a;	//объявление указателя
	//p - pointer (Венгерская нотация)
	//https://ru.wikipedia.org/wiki/%D0%92%D0%B5%D0%BD%D0%B3%D0%B5%D1%80%D1%81%D0%BA%D0%B0%D1%8F_%D0%BD%D0%BE%D1%82%D0%B0%D1%86%D0%B8%D1%8F
	cout << a << endl;	//вывод значения переменной 'a' на экран
	cout << &a << endl;	//взятие адреса переменной 'a' прямо при выводе
	cout << pa << endl;	//вывод на экран адреса переменной 'a', хранящегося в указателе 'pa'
	cout << *pa << endl;//разыменование указателя 'pa', и вывод на экран значения по адресу.

	int* pb;
	int b = 3;
	pb = &b;
	cout << b << endl;
	cout << &b << endl;
	cout << pb << endl;
	cout << *pb << endl;

	//int - int
	//int* - указатель на int
	//double - double
	//double* - указатель на double
	//char - char
	//char* - указатель на char
#endif // POINTERS_BASICS

	const int n = 5;
	int arr[n] = { 3,5,-8,13,21 };
	cout << arr << endl;
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr + i << "\t";
		//cout << *(arr + i) << "\t";
	}
	cout << endl;
	for (int* p_arr = arr; *p_arr != 0xCCCCCCCC; p_arr++)
	{
		cout << *p_arr << "\t";
	}
	cout << endl;
}

/*
----------------------------------------
& - Address-of operator (Оператор взятия адреса)
* - Dereference operator(Оператор разыменования)
----------------------------------------
*/

/*
----------------------------------------
+
-
++
--
char	- 1 Byte
short	- 2 Byte
int		- 4 Byte
double	- 8 Byte
----------------------------------------
*/

