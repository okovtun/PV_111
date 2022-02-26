//Operators
#include<iostream>
using namespace std;

//#define ARITHMETICAL_OPERATORS//1)
//#define ASSIGNMENT_OPERATOR	//2) оператор присваивания =
//#define INCREMENT_DECREMENT	//3)
//#define COMPOUND_ASSIGNMENTS	//4) Составные присваивания
#define COMPARISON_OPERATORS

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined ARITHMETICAL_OPERATORS
	cout << 17 / 5 << endl;	//Результат от деления
	cout << 17 % 5 << endl;	//Остаток от деления
	cout << 5. % 17 << endl;//	float, double
#endif

#ifdef ASSIGNMENT_OPERATOR
	//		l-value = r-value;
	//l-value - переменная слева. Это переменная, 
	//			в которую производится запись значения
	//r-value - выражение справа. Это значение, 
	//			которое записывается в переменну слева (l-value)

	//l - left  (левый)
	//r - right (правый)
	//value - значение
	//int a = 2;	//в переменную 'a' записываем значение '2'
	//int b = 3;	//переменной 'b' присваиваем значение '3'
	//int c = a + b;	//переменной 'c' присываиваем значение выражения 'a + b'

	int a, b, c;	//Объявление переменных
	a = b = c = 0;	//инициализация переменных
	cout << a << "\t" << b << "\t" << c << endl;
#endif

#ifdef INCREMENT_DECREMENT
	//Increment(++)
	//Decrement(--)

	int i = 0;
	++i;	//Prefix increment
	i++;	//Postfix increment
	--i;	//Prefix decrement
	i--;	//Postfix (Suffix) decrement

	int j = i++;
	cout << i << endl;
	cout << j << endl;
#endif // INCREMENT_DECREMENT

#ifdef COMPOUND_ASSIGNMENTS
	int a = 2;
	int b = 3;
	//a = a + b;
	a += b;
	cout << a << endl;
#endif // COMPOUND_ASSIGNMENTS

#ifdef COMPARISON_OPERATORS
	//cout << (!true == false) << endl;
	cout << (true && false) << endl;
#endif // COMPARISON_OPERATORS

}