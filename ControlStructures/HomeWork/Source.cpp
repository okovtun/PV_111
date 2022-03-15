#include<iostream>
using namespace std;

//#define TASK_0
//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4
//#define TASK_5
#define TASK_6
#define TASK_7

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите число:"; cin >> n;
#ifdef TASK_0
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}5
#endif // TASK_0
#ifdef TASK_1
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j <= i; j++)cout << "* ";
			cout << endl;
		}
#endif // TASK_1
#ifdef TASK_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif // TASK_2
#ifdef TASK_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif // TASK_3
#ifdef TASK_4
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j <= n; j++)cout << "  ";
		for (int j = 0; j <= i; j++)cout << "* ";
		cout << endl;
	}
#endif // TASK_4
#ifdef TASK_5
	for (int i = 0; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)cout << " ";
		for (int j = 1; j <= 2 * i - 1; j++)cout << "*";
		cout << endl;
	}
	for (int i = n - 1; i >= 1; i--)
	{
		for (int j = 1; j <= n - i; j++)cout << " ";
		for (int j = 1; j <= 2 * i - 1; j++)cout << "*";
		cout << endl;;
	}
#endif // TASK_5
#ifdef TASK_6
	{
		for (int i = 0; i < n; i++)
		{
			if (i % 2 == 0)
				for (int j = 1; j <= n; j++)cout << "+ " << "- ";
			else
				for (int j = 1; j <= n; j++)cout << "- " << "+ ";
			cout << endl;
		}
	}
#endif // TASK_6
#ifdef TASK_7

#endif // TASK_7

}