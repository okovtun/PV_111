#include<iostream>
#include<conio.h>
//using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define PALINDROME
//#define SHOOTER
#define SHOOTER_2
//#define TICKET_NUMBER


void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef PALINDROME
	int number; // ����� �������� � ����������
	int reverse = 0; // �������� ������ ���������� �����
	cout << "������� �����: "; cin >> number;
	int buffer = number;
	while (buffer)
	{
		reverse *= 10; // ����������� ����� ��� ������� ������
		reverse += buffer % 10; // �������� ������� ������ �����, � ��������� ���
		buffer /= 10; // ������� ����������� ������

	}
	cout << number << endl;
	cout << reverse << endl;
	if (number == reverse)
	{
		cout << "����� ���������" << endl;
	}
	else
	{
		cout << "����� �� ���������" << endl;
	}
#endif

#ifdef SHOOTER
	char key;	//��� �������
	do
	{
		key = _getch();
		cout << int(key) << "\t" << key << endl;
		if (key == 'w' || key == 'W') cout << "������" << endl;
		else if (key == 's' || key == 'S') cout << "�����" << endl;
		else if (key == 'a' || key == 'A') cout << "�����" << endl;
		else if (key == 'd' || key == 'D') cout << "������" << endl;
		else if (key == 32) cout << "������" << endl;
		else if (key == 13) cout << "�����" << endl;
		else cout << "Error: ��� ������ ��������" << endl;

	} while (key != 27);
#endif

#ifdef SHOOTER_2
	char key;

	key = _getch();
	switch (int(key)
	{
	case (key == 119): cout << "�����" << endl;
		break;
	case (key == 115): cout << "�����" << endl;
		break;
	case (key == 97): cout << "�����" << endl;
		break;
	case (key == 100): cout << "������" << endl;
		break;
	case (key == 32): cout << "������" << endl;
		break;
	case (key == 13): cout << "������" << endl;
		break;
		cout << "Error: ��� ������ ��������" << endl;
	}

#endif

#ifdef TICKET_NUMBER
	int ticket_number;
	int lucky_ticket_number = 0;
	cout << "������� ����� ������: "; cin >> ticket_number;

	while (ticket_number)
	{
		ticket_number > 0 && ticket_number < 10;

	}
	do
	{
		lucky_ticket_number > 10;
	} while (lucky_ticket_number);

	cout << ticket_number << endl;
	cout << lucky_ticket_number << endl;

	if (ticket_number > lucky_ticket_number)
	{
		cout << "���������� �����" << endl;
	}
	else
	{
		cout << "���! ��������� � ��������� ���." << endl;
	}
#endif
}