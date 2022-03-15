#include<iostream>
using namespace std;
//#define TASK1
#define TASK2
void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите число: "; cin >> n;
#ifdef TASK1
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j || (n - i) == j + 1) {
				cout << "-" << "+" << "-";
			}
			else cout << "+" << "-" << "+";
		}
		cout << endl;
	}
#endif
#ifdef TASK2
	for (int i = 1; i < 40; i++)
	{
		for (int j = 1; j < 40; j++)
		{
			if ((i / 5 + j / 5) & 1)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
#endif				
}