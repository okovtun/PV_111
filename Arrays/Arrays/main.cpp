//Arrays
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;	//количество элементов массива (размер массива)
	int arr[n] = {};
	//arr[2] = 123;	//Обращение ко второму элементу массива

	cout << "Введите элементы массива (" << n << " шт):";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//Вывод массива на экран в обратном порядке:
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

}