//NestedFOR
#include<iostream>
using namespace std;

#define PI	3.14	//���������� ��������� � ����� C
//#define MULTIPLICATION_TABLE

void main()
{
	setlocale(LC_ALL, "");
#ifdef MULTIPLICATION_TABLE
	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		cout << "������� ��������� �� " << i << ":\n";
		for (int j = 1; j <= n; j++)
		{
			//cout << i << " * " << j << " = " << i*j << "\t" << endl;
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i*j < 100)cout << " ";
			if (i*j < 10)cout << " ";
			cout << i * j << "\t" << endl;
		}
		cout << endl;
	}
#endif // MULTIPLICATION_TABLE

	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout.width(5);	//������ ������ ����, � ������� ����� �������� ��������� ��������
			//����� ������� ������ ��������������� ������������ �� ������� ����.
			//cout << left;
			cout << i * j;
		}
		cout << endl;
	}
}