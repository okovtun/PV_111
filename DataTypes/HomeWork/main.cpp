#include<iostream>
using namespace std;

#define offset "\t\t\t\t\t"
//offset - макроопределение (макрос), а точнее, имя макроса
//"\t\t\t\t\t" - значение макроса
//#define MACROS
#if defined MACROS
	//code
	//Если MACROS определен выше, то этот код будет виден компилятору,
	//в противном случае, этот код будет проигноорирован компилятором.
#endif

//#define ELOCHKA
//define	 - определить
//definition - определение

void main()
{
	setlocale(LC_ALL, "Russian");

#if defined ELOCHKA
//if - если
//defined - определено
	cout << offset << "В лесу родилась ёлочка,\n";
	cout << offset << "В лесу она росла,\n";
	cout << offset << "Зимой и летом стройная,\n";
	cout << offset << "Зелёная была.\n";
	cout << "\n";
	cout << offset << "Метель ей пела песенку:\n";
	cout << offset << "Спи, елочка, бай - бай!\n";
	cout << offset << "Мороз снежком укутывал:\n";
	cout << offset << "Смотри, не замерзай!\n";
	cout << offset << "Мороз снежком укутывал:\n";
	cout << offset << "Смотри, не замерзай!\n";
	cout << "\n";
	cout << offset << "Трусишка зайка серенький\n";
	cout << offset << "Под ёлочкой скакал.\n";
	cout << offset << "Порою волк, сердитый волк,\n";
	cout << offset << "Рысцою пробегал.\n";
	cout << offset << "Порою волк, сердитый волк,\n";
	cout << offset << "Рысцою пробегал.\n";
	cout << "\n";
	cout << offset << "Снег по лесу частому\n";
	cout << offset << "Под полозом скрипит.\n";
	cout << offset << "Лошадка мохноногая\n";
	cout << offset << "Торопится, бежит.\n";
#endif

}