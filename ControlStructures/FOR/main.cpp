//FOR
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;;

//#define FOR_SYNTAX
//#define FACTORIAL

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