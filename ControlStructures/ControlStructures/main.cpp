//ControlStructures
#include<iostream>
using namespace std;

//#define TEMPERATURE

void main()
{
	setlocale(LC_ALL, "");
#ifdef TEMPERATURE
	int t;	//temperature
	cout << "������� ����������� �������: ";
	cin >> t;
	if (t > 0)
	{
		cout << "�� ����� �����" << endl;
	}
	else
	{
		cout << "�� ����� �������" << endl;
	}
#endif

	int n;
	cout << "������� �����: "; cin >> n;
	if (n > 0 && n < 10)
	{
		cout << "�� ������" << endl;
	}
	else
	{
		cout << "�� ������������" << endl;
	}
}