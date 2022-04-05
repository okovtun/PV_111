#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 3;	//количество элементов строки
	int A[n][n] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9},
	};
	/*for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 10;
		}
	}*/
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}

	//Создаем расширенную матрицу:
	int B[n][n * 2] = {};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			B[i][j] = B[i][j + n] = A[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			cout << B[i][j] << tab;
		}
		cout << endl;
	}

	//////////////////////////////////////////////////////
	////////		Вычисляем определитель:		 /////////
	//////////////////////////////////////////////////////

	//Вычисляем главную диагональ:
	int main_diag = 0;
	for (int i = 0; i < n; i++)
	{
		int product = 1;	//произведение элементов главной диагонали
		for (int j = 0; j < n; j++)
		{
			product *= B[j][i + j];
		}
		main_diag += product;
	}
	cout << "Главная диагональ: " << main_diag << endl;

	//Вычисляем вспомогательную диагональ:
	int aux_diag = 0;	//aux - Auxilliary (Вспомогательный)
	for (int i = 0; i < n; i++)
	{
		int product = 1;
		for (int j = 0; j < n; j++)
		{
			product *= B[n - 1 - j][i + j];
		}
		aux_diag += product;
	}
	cout << "Вспомогательная диагональ: " << aux_diag << endl;
	cout << "Определитель матрицы: " << main_diag - aux_diag << endl;
}