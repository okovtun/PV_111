#include"stdafx.h"
#include"FillRand.h"
//#include"FillRand.cpp"
#include"Print.h"
//#include"Print.cpp"
#include"Statistics.h"
//#include"Statistics.cpp"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr, n) << endl;

	cout << delimiter << endl;

	const int m = 8;
	double brr[m];
	FillRand(brr, m);
	Print(brr, m);
	cout << "����� ��������� �������: " << Sum(brr, m) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(brr, m) << endl;
	cout << "����������� �������� � �������: " << minValueIn(brr, m) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(brr, m) << endl;

	cout << delimiter << endl;


	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);

	cout << delimiter << endl;
	const int SIZE_CHAR = 10;
	char c_arr[SIZE_CHAR];
	FillRand(c_arr, SIZE_CHAR, 'a', 'f' + 1);
	Print(c_arr, SIZE_CHAR);
}
