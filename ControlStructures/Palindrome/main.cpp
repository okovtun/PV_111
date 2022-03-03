//Palindrome
#include<iostream>
using namespace std;

//#define PALINDROME

void main()
{
	setlocale(LC_ALL, "");
#ifdef PALINDROME
	int number;			//Число, вводимое в клавиатуры
	int reverse = 0;	//Число, записанное наоборот
	cout << "Введите число: "; cin >> number;
	int copy = number;	//Сохраняем копию исходного числа
	while (copy > 0)
	{
		reverse *= 10;	//Умножаем reverse на 10, 
		//и таким образом число сдвигается на 1 разряд влево, 
		//и в младшем разряде появляется 0 (свободное место, 
		//куда можно сохранить следующий разряд)
		reverse += copy % 10;//	+= оператор ПРИБАВИТЬ
		copy /= 10;	//убираем младшую цифру из исходного числа
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "Число палиндром" << endl;
	}
	else
	{
		cout << "Число НЕ палиндром" << endl;
	}
#endif // PALINDROME

}