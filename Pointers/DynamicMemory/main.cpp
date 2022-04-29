//DynamicMemory
#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n);
void Print(int* arr, const int n);

void main()
{
	setlocale(LC_ALL, "");
	//new
	int n;
	cout << "¬ведите размер массива: "; cin >> n;

	int* arr = new int[n];
	cout << typeid(arr).name() << endl;
	FillRand(arr, n);
	Print(arr, n);
	int value;
	cout << "¬ведите добавл€емое значение: "; cin >> value;
	arr[n] = value;
	n++;
	Print(arr, n);
	delete[] arr;//Heap ( уча)
	//Print(arr, n);
	//Memory leak

	/*const int SIZE = 5;
	int brr[SIZE];
	cout << typeid(brr).name() << endl;
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << sizeof(int) << endl;*/
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
	}
}
void Print(int* arr, const int n)
{
	cout << typeid(arr).name() << endl;	//RTTI - Runtime Type Information
	for (int i = 0; i < n; i++)
	{
		//[] - оператор индексировани€ (subscript operator)
		cout << arr[i] << tab;
	}
	cout << endl;
}