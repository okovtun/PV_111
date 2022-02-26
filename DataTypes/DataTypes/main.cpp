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
	//endl (endline) - ������� � ������ ����� ������, ��� �� ��� "\n"
	cout << true << "\n";
	cout << false << endl;
	//false - ��� 0
	//true - ��� ��� �� 0
#endif

#if defined INTEGRAL_TYPES
	//sizeof(type or value)
	cout << "short:\n";
	cout << sizeof(short) << endl;
	cout << SHRT_MIN << "..." << SHRT_MAX << endl;
	cout << 0 << "..." << USHRT_MAX << endl;
#endif

#ifdef DATA_TYPES
	//float		- ������� ����� ��������� ��������	4 Bytes
//double	- ������� ����� ������� ��������	8 Bytes
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
	//�������������������
	//������������� - ��� ���������� ���������� ��������.
	cout << "������� ��������� ����: ";
	cin >> price_of_coffee;
	//cin - Console Input, ����� ����� � ����������  
#endif // DATA_TYPES

#ifdef CONSTANTS
	int t;
	unsigned int speed = 0;			//���������� ��������
	const unsigned int MAX_SPEED = 250;	//���������� ��������

	5;	//�������� ��������� ���� int
	5.;	//�������� ��������� ���� double
	5.f;//�������� ��������� ���� float
	5U;	//unsigned int
	5ULL;//unsigned long long
	5ull;//unsigned long long

	//ASCII-���
	'+';	//��������� ��������� (���� char)
	"+";	//��������� ���������
	cout << sizeof('+') << endl;
	cout << sizeof("+") << endl;
	cout << sizeof("Hello") << endl;
#endif // CONSTANTS

	-3;		//unary minus
	8 - 3;	//binary minus
	8 * 3;	//multiply
	//*3;	//
}