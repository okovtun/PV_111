https://github.com/okovtun/PV_111.git
https://www.youtube.com/watch?v=Wvi83_sg_uA&list=PLeqyOOqxeiIPpnd7D0trsnWlc1vVZPTvQ
https://meet.google.com/mho-khdw-fhj

////////////////////////////////////////////////////////////////////////////////////
////////////////						Pointers					////////////////
////////////////////////////////////////////////////////////////////////////////////

http://cplusplus.com/doc/tutorial/pointers/
https://ru.wikipedia.org/wiki/%D0%92%D0%B5%D0%BD%D0%B3%D0%B5%D1%80%D1%81%D0%BA%D0%B0%D1%8F_%D0%BD%D0%BE%D1%82%D0%B0%D1%86%D0%B8%D1%8F

TODO:
В проекте NULLTerminatedLines реализовать следующие функции:
	void to_upper(char str[]);	//Переводит строку в верхний регистр
	void to_lower(char str[]);	//Переводит строку в нижний регистр
	void shrink(char str[]);	//Удаляет лишние пробелы из предложения
								//Хорошо      живет     на     свете      Винни      Пух
								//Хорошо живет на свете Винни Пух

	bool is_palindrome(const char str[]);	//Проверяет, является ли строка палиндромом

	bool is_int_number(const char str[]);	//Проверяет, является ли строка целым десятичным числом
	int  to_int_number(char str[]);			//Если строка является целым десятичным числом, возвращает ее числовое значение
	bool is_bin_number(const char str[]);	//Проверяет, является ли строка двоичным числом
	int  bin_to_dec(char str[]);			//Если строка является двоичным числом, возвращает ее десятичное значение
	bool is_hex_number(const char str[]);	//Проверяет, является ли строка шестнадцатеричным числом
	int  bin_to_dec(char str[]);			//Если строка является шестнадцатеричным числом, возвращает ее десятичное значение


TODO:
1. Вывести двумерный динамический массив на экран используя арифметику указателей и оператор разыменования;
2. В проект DynamicMemory добавить следующие функции:
	??? Allocate(???);	//Выделяет память под двумерный динамический массив
	??? Clear(???);		//Очищает память, занимаемую двумерным динамическим массивом

	??? push_row_back(???);
	??? push_row_front(???);
	??? insert_row(???);
	??? pop_row_back(???);
	??? pop_row_front(???);
	??? erase_row(???);

	??? push_col_back(???);
	??? push_col_front(???);
	??? insert_col(???);
	??? pop_col_back(???);
	??? pop_col_front(???);
	??? erase_col(???);
3. Создать ветку DynamicTemplated, и в этой ветке шаблонизировать все функции 
   для работы с динамическими массивами, как одномерными, так и двумерными;

DONE:
В проект DynamicMemory добавить следующие функции:
	??? insert(???);	//Вставляет значение в массив по указанному индексу
	??? pop_back(???);	//Удаляет последний элемент массива
	??? pop_front(???);	//Удаляет нулевой элемент массива
	??? erase(???);		//Удаляет элемент из массива по указанному индексу

DONE:
В проекте DynamicMemory написать функцию ??? push_front(???) добавляющую значение в начало массива.

DONE:
Написать код, добавляющий элемент в конец динамического массива.

DONE:
Есть массив из 10-ти элементов заполненный случайными числами. Необходимо создать 
еще два массива even[] и odd[] минимально возможного размера, и скопировать в них 
все четные значения в массив even и нечетные значения в массив odd из исходного массива.

////////////////////////////////////////////////////////////////////////////////////
////////////////						Function					////////////////
////////////////////////////////////////////////////////////////////////////////////

TODO:
1. Написать рекурсивную функцию ??? Fibonacci(???), которая выводит на экран ряд Фибоначчи, 
   до заданного предела;
2. Написать рекурсивную функцию ??? Fibonacci(???), которая выводит на экран заданное 
   количество чисел из ряда Фибоначчи;


TOREAD:
http://cplusplus.com/doc/tutorial/functions2/

TODO:
От ветки master создать ветку Templation, и в этой ветке шаблонизировать все функции.

DONE:
1. Функция FillRand() заполняет массив элементов double целыми числами, числа должны быть дробными;
2. Перегрузить функции для одномерных и двумерных массивов типа int, double и char следующие функции:
	void FillRand(...);
	void Print(...);
	void Sum(...);
	void Avg(...);
	void minValueIn(...);
	void maxValueIn(...);
	void Sort(...);
	void shiftLeft(...);
	void shirtRight(...);

DONE:
1. В проект Arrays добавить функции:
	??? minValueIn(???);	//Возвращает минималльное значение из массива
	??? maxValueIn(???);	//Возвращает максимальное значение из массива
	??? shiftLeft(???);		//Сдвигает массив на заданное число элементов влево
	??? shiftRight(???);	//Сдвигает массив на заданное число элементов вправо
2. Все функции, реализованные в проекте Arrays перегрузить для типов данных:
	char, short и double, и написать проверочный код для всех этих типов;

DONE:
0. Выучить теорию!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
1. В проекте Function написать функцию ??? Power(???), которая возводит указанное число
   в указанную степень.

////////////////////////////////////////////////////////////////////////////////////
////////////////						Arrays						////////////////
////////////////////////////////////////////////////////////////////////////////////

TODO:
1. В проекте Determinant вычислить определитель матрицы 3x3 методом Саррюса;	DONE
--------------------------------------------
2. Отсортировать двумерный массив, заполенный случайными числами;				DONE
3. Заполнить двумерный массив уникальными случайными числами;					DONE
4. В двумерном массиве найти повторяющиеся значения, вывести их на экран, 
   и вывести на экран количество повторений;

DONE:
1. Массив из десяти элементов заполнить УНИКАЛЬНЫМИ случайными числами в диапазоне от 0 до 10;
2. Есть массив из 10 элементов, заполненный случайными числами в диапазоне от 0 до 10.
   Необходимо найти повторяющиеся значения в этом массиве, вывести их на экран 
   и вывести на экран количество их повторений, т.е., сколько раз они встречаются или 
   повторяются в этом массиве, на усмотрение программиста.
   При поиске повторений массив должен остаться НЕИЗМЕННЫМ, то есть, сортировать его нельзя!
3. Оптимизировать перевод десятичного числа в Шестнадцатеричную СС;

DONE:
0. Повторить работу цикла for;
1. Десятичное число, введенное с клавиатуры перевести в Восьмеричную систему счисления (Octal);
2. Десятичное число, введенное с клавиатуры перевести в Шестнадцатеричную систему счисления (Hexadecimal);

DONE:
Выполнить циклический сдвиг массива на заданное число элементов вправо.

DONE:
В проекте Arrays посчитать сумму элементов массива, среднее арифметическое,
а также найти минимальное и максимальное значение в массиве;

DONE:
1. Зарегистрироваться на github.com;
---------------------------------------
2. Сделать большую шахматную доску ASCII-символами и в рамке;
3. Вывести на экран треугольник Паскаля;

TODO:
1. Вывести на экран все фигуры из этого файла: DONE
   https://github.com/okovtun/BV_011/blob/master/ControlStructures/Geometria/Task/Geometria1.txt
   Каждую фигуру поместить в отдельный блок #ifdef...#endif
2. https://github.com/okovtun/BV_011/blob/master/ControlStructures/Geometria/Task/ChessBoard.jpg

DONE:
1. Оптимизировать код Fibonacci;
2. Вывести на экран таблицу умножения;
3. Вывести на экран таблицу Пифагора;

DONE:
1. Написать программу, которая возводит число в степень.
   Основание и показатель степени вводятся с клавиатуры;
2. Вывести на экран таблицу ASCII-символов, по 16 символов в строке;
3. Вывести на экран ряд Фибоначчи, до указанного предела:
	0	1	1	2	3	5	8	13	21	34

TODO:
Написать программу "3Dshooter", которая по нажатой клавише определяет действие:
w -	вперед
a - назад
s - влево
d - вправо
Пробел - прыжок
Enter  - огонь
Escape - выход

DONE:
1. Написать программу, которая определяет, является ли введенное число палиндромом;
2. Вводится номер тролейбусного билета, и программа должна определить, 
   является ли билет счастливым;

DONE:
Написать калькулятор, в который можно ввести выражение вида 2 + 3
и он выдаст результат, например:
2 + 3 = 5

DataTypes:
https://www.youtube.com/watch?v=dWQ25Tk8nwM&list=PLeqyOOqxeiIOAG3qbhOXnDsG1pU5q6cyx

Escape sequences:
https://docs.microsoft.com/ru-ru/cpp/c-language/escape-sequences?view=msvc-170

TODO:
1. Почитать про системы счисления: https://github.com/okovtun/PV_111/blob/master/DataTypes/NumericSystems.pdf
2. Изучить типы данных, можно дополнительно почитать здесь:
	https://github.com/okovtun/PV_111/blob/master/DataTypes/DataTypes.pdf
IEEE-754:https://www.softelectro.ru/ieee754.html

DONE:
В новом проекте написать программу, которая выводит в консоль стишок "В лесу родилась Ёлочка".
Стишок должен быть выровнен по середине окна консоли, и его куплеты должны быть разделены пустой строкой.

Установка Visual Studio:https://www.youtube.com/watch?v=4Kdn2M5sACE
Создание проекта:https://www.youtube.com/watch?v=AjaZ14uZVP4
Первая программа:https://www.youtube.com/watch?v=9QZtroQuoJc