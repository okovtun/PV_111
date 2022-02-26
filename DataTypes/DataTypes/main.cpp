//DataTypes
#include<iostream>
using namespace std;

//#define BOOLEAN
//#define INTEGRAL_TYPES
//#define DATA_TYPES
//#define CONSTANTS

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

#ifdef DATA_TYPES
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
#endif // DATA_TYPES

#ifdef CONSTANTS
	int t;
	unsigned int speed = 0;			//переменное значение
	const unsigned int MAX_SPEED = 250;	//посто€нное значение

	5;	//„ислова€ константа типа int
	5.;	//„ислова€ константа типа double
	5.f;//„ислова€ константа типа float
	5U;	//unsigned int
	5ULL;//unsigned long long
	5ull;//unsigned long long

	//ASCII-код
	'+';	//символна€ константа (типа char)
	"+";	//строкова€ константа
	cout << sizeof('+') << endl;
	cout << sizeof("+") << endl;
	cout << sizeof("Hello") << endl;
#endif // CONSTANTS

	-3;		//unary minus
	8 - 3;	//binary minus
	8 * 3;	//multiply
	//*3;	//
}