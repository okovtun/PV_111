//DataTypes
#include<iostream>
using namespace std;

//#define BOOLEAN
//#define INTEGRAL_TYPES

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined BOOLEAN
	//endl (endline) - переход в начало новой строки, так же как "\n"
	cout << true << "\n";
	cout << false << endl;
	//false - это 0
	//true - все что Ќ≈ 0
#endif

#if defined INTEGRAL_TYPES
	//sizeof(type or value)
	cout << "short:\n";
	cout << sizeof(short) << endl;
	cout << SHRT_MIN << "..." << SHRT_MAX << endl;
	cout << 0 << "..." << USHRT_MAX << endl;
#endif

	//float		- дробное число одинарной точности	4 Bytes
	//double	- дробное число двойной точности	8 Bytes
	cout << "float:\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << " ... " << FLT_MAX << endl;
	cout << endl;

	cout << "double:\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << " ... " << DBL_MAX << endl;
	cout << endl;

	int a;
	double price;
	double price_of_coffee;
	//проинициализировать
	//инициализаци€ - это присвоение начального значени€.
	cout << "¬ведите стоимость кофе: ";
	cin >> price_of_coffee;
	//cin - Console Input, поток ввода с клавиатуры
}