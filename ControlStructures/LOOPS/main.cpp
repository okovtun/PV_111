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
	int i = 0;	//счетчик цикла
	int n;		//Количество итераций
	cout << "Введите количество итераций: ";
	cin >> n;
	while (i < n)
	{
		cout << i << " Hello\n";
		i++;
	}
#endif // WHILE

	char key;	//Будет хранить код клавиши
	do
	{
		key = _getch();	//Функция _getch() ожидает нажатия клавиши, 
		//и возвращает ASCII-код нажатой клавиши
		cout << (int)key << "\t" << key << endl;
		//(int)key - это явное преобразование переменной key
		//в тип данных int, для того, чтобы увидеть код клавиши
	} while (key != Escape);
}

/*
-----------------------------

while - цикл с предусловием;
do...while - цикл с постусловием
for - цикл на заданное число итераций

-----------------------------
*/