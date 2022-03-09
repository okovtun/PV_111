//FOR
#include<iostream>
//using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define FOR_SYNTAX
//#define FACTORIAL
//#define POWER
//#define ASCII

void main()
{
	setlocale(LC_ALL, "");
#ifdef FOR_SYNTAX
	int n = 10;
	cout << "Введите количество итераций: "; cin >> n;
	for (
		int i = 0;
		i < n;
		i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR_SYNTAX

#ifdef FACTORIAL
	//С клавиатуры вводится число, 
//нужно вычислить факториал этого числа.
	int n;	//Число, введенное с клавиатуры
	double f = 1;	//Факториал числа
	cout << "Введите число: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;		//Основание степени
	int n;			//Показатель степени
	double N = 1;	//Степень
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	cout << a << " ^ " << n << " = ";
	if (n < 0)
	{
		n = -n;		//меняем знак показателя на противоположный
		a = 1 / a;	//переносим основание степени в знаменатель
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER

#ifdef ASCII
	cout << "Таблица ASCII-символов:\n";
	setlocale(LC_ALL, "C");	//Устанавливает кодировку по умолчанию
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
		//(char)i - это явное преоразование переменной 'i' в тип 'char'.
	}
	cout << endl;
	setlocale(LC_ALL, "Russian");
	cout << "Вот и сказочке конец" << endl;

	/*int i = 0;
	while (i < 256)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
		i++;
	}
	cout << endl;*/
#endif // ASCII

	/*double a = 0;
	double b = 1;
	double c = a + b;*/
	//double a = 0, b = 1, c = a + b;
	int n;	//предел
	cout << "Введите количество чисел из ряда Фибоначчи: "; cin >> n;
	/*for (int i = 0; i < n; i++)
	{
		cout << a << "\n";
		a = b;
		b = c;
		c = a + b;
	}*/

	for (double a = 0, b = 1, c = a + b, i = 0; i < n; i++)
	{
		cout << a << "\n";
		a = b;
		b = c;
		c = a + b;
	}
}

/*
------------------------------------
Ctrl + Z - отмена действия
Ctrl + Y - вернуть отмененное действие
Ctrl + D - duplicate line (дублировать строку)
Ctrl + K,C - закомментировать.
Ctrl + K,U - раскомментировать.
------------------------------------
*/