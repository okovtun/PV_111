//LOOPS
#include<iostream>
#include<conio.h>	//_getch()
using namespace std;

#define Escape 27

//#define WHILE

void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE
	int i = 0;	//������� �����
	int n;		//���������� ��������
	cout << "������� ���������� ��������: ";
	cin >> n;
	while (i < n)
	{
		cout << i << " Hello\n";
		i++;
	}
#endif // WHILE

	char key;	//����� ������� ��� �������
	do
	{
		key = _getch();	//������� _getch() ������� ������� �������, 
		//� ���������� ASCII-��� ������� �������
		cout << (int)key << "\t" << key << endl;
		//(int)key - ��� ����� �������������� ���������� key
		//� ��� ������ int, ��� ����, ����� ������� ��� �������
	} while (key != Escape);
}

/*
-----------------------------

while - ���� � ������������;
do...while - ���� � ������������
for - ���� �� �������� ����� ��������

-----------------------------
*/