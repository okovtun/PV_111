//HomeWork1
#include<iostream>
using namespace std;

//#define TASK_1
#define TASK_2

void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef TASK_1
	double money;
	cout << "Введите денежную сумму: "; cin >> money;
	money += .00000000001;
	//money += 1e-10;
	cout << money << endl;
	int rub = money;//Неявное преобразование типов из double в int с потерей данных
	cout << rub << " руб.\t";
	int cop = (money - rub) * 100;
	cout << cop << " коп.\n";
#endif

#ifdef TASK_2
	double price_of_copybook, price_of_pencil;
	int number_of_copybooks, number_of_pencils;
	cout << "Введите стоимость тетради: "; cin >> price_of_copybook;
	cout << "Введите количество тетрадей: "; cin >> number_of_copybooks;
	cout << "Введите стоимость карандаша: "; cin >> price_of_pencil;
	cout << "Введите уоличество карандашей:"; cin >> number_of_pencils;
	double total_price = price_of_copybook * number_of_copybooks + price_of_pencil * number_of_pencils;
	cout << "Общая стоимость покупки: " << total_price << " руб\n";
#endif // TASK_2

}