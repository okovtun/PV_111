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
	int number; // число вводимое с клавиатуры
	int reverse = 0; // обратная запись введенного числа
	cout << "Введите число: "; cin >> number;
	int buffer = number;
	while (buffer)
	{
		reverse *= 10; // освобождаем место под младший разряд
		reverse += buffer % 10; // получаем младший рзаряд числа, и сохраняем его
		buffer /= 10; // убираем сохраненный разряд

	}
	cout << number << endl;
	cout << reverse << endl;
	if (number == reverse)
	{
		cout << "Число палиндром" << endl;
	}
	else
	{
		cout << "Число НЕ палиндром" << endl;
	}
#endif

#ifdef SHOOTER
	char key;	//код клавиши
	do
	{
		key = _getch();
		cout << int(key) << "\t" << key << endl;
		if (key == 'w' || key == 'W') cout << "Вперед" << endl;
		else if (key == 's' || key == 'S') cout << "Назад" << endl;
		else if (key == 'a' || key == 'A') cout << "Влево" << endl;
		else if (key == 'd' || key == 'D') cout << "Вправо" << endl;
		else if (key == 32) cout << "Прыжок" << endl;
		else if (key == 13) cout << "Огонь" << endl;
		else cout << "Error: нет такого действия" << endl;

	} while (key != 27);
#endif

#ifdef SHOOTER_2
	char key;

	key = _getch();
	switch (int(key)
	{
	case (key == 119): cout << "Впред" << endl;
		break;
	case (key == 115): cout << "Назад" << endl;
		break;
	case (key == 97): cout << "Влево" << endl;
		break;
	case (key == 100): cout << "Вправо" << endl;
		break;
	case (key == 32): cout << "Прыжок" << endl;
		break;
	case (key == 13): cout << "Прыжок" << endl;
		break;
		cout << "Error: нет такого действия" << endl;
	}

#endif

#ifdef TICKET_NUMBER
	int ticket_number;
	int lucky_ticket_number = 0;
	cout << "Введите номер билета: "; cin >> ticket_number;

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
		cout << "Счастливый билет" << endl;
	}
	else
	{
		cout << "Увы! Приходите в следующий раз." << endl;
	}
#endif
}