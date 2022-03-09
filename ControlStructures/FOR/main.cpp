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
	cout << "������� ���������� ��������: "; cin >> n;
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
	//� ���������� �������� �����, 
//����� ��������� ��������� ����� �����.
	int n;	//�����, ��������� � ����������
	double f = 1;	//��������� �����
	cout << "������� �����: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;		//��������� �������
	int n;			//���������� �������
	double N = 1;	//�������
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	cout << a << " ^ " << n << " = ";
	if (n < 0)
	{
		n = -n;		//������ ���� ���������� �� ���������������
		a = 1 / a;	//��������� ��������� ������� � �����������
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER

#ifdef ASCII
	cout << "������� ASCII-��������:\n";
	setlocale(LC_ALL, "C");	//������������� ��������� �� ���������
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
		//(char)i - ��� ����� ������������� ���������� 'i' � ��� 'char'.
	}
	cout << endl;
	setlocale(LC_ALL, "Russian");
	cout << "��� � �������� �����" << endl;

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
	int n;	//������
	cout << "������� ���������� ����� �� ���� ���������: "; cin >> n;
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
Ctrl + Z - ������ ��������
Ctrl + Y - ������� ���������� ��������
Ctrl + D - duplicate line (����������� ������)
Ctrl + K,C - ����������������.
Ctrl + K,U - �����������������.
------------------------------------
*/