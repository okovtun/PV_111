#include<iostream>
using namespace std;

//#define IF_CALC

void main()
{
	setlocale(LC_ALL, "");
	double a, b;	//„исла, введенные с клавиатуры
	char s;	//Sign - знак операции
	cout << "¬ведите выражение: ";
	cin >> a >> s >> b;

#ifdef IF_CALC
	if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << " / " << b << " = " << a / b << endl;
	}
	else
	{
		cout << "Error: No operation" << endl;
	}
#endif // IF_CALC

	switch (s)
	{
	case '+':cout << a << " + " << b << " = " << a + b << endl; ;
	case '-':cout << a << " - " << b << " = " << a - b << endl; ;
	case '*':cout << a << " * " << b << " = " << a * b << endl; ;
	case '/':cout << a << " / " << b << " = " << a / b << endl; ;
	default: cout << "No operation" << endl;
	}



	int var=0;
	int code1;
	int code2;
	int codeN;
	int default_code;
#define CONST_1	1
#define CONST_2	2
#define CONST_N	'N'




	switch (var)
	{
	case CONST_1: code1; break;
	case CONST_2: code2; break;
		//......
		//......
	case CONST_N: codeN; break;
	default: default_code;
	}
}