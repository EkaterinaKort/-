/* 1) Напишите макрос для определения суммы 3-х заданных чисел. Например, вызов макроса SUM(1, 2, 3) должен возвращать 6.*/

/*#include <iostream>
#define Sum(a, b, c) ((a)+(b)+(c))

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Сумма равна  " << Sum(1, 2, 3) << endl;

	return Sum(1, 2, 3);
}
*/

/*2) Напишите макрос для вычисления суммы чисел от 1 до n. Макрос должен принимать один параметр - число n.*/

/*#include <iostream>
#define Summa(n) ((n)*((n)+1)/2)

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	long long n;

	cout << "Введите значение n  " << endl;
	cin >> n;
	cout << Summa(n) << endl;

	return Summa(n);
}
*/


/*3) Напишите макрос для определения количества элементов в массиве. Макрос должен принимать один параметр - имя массива.*/

/*#include <iostream>
#define arraySize(Arr) (sizeof(Arr) / sizeof((Arr)[0]))

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	int Arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	cout << "Размер массива равен  " << arraySize(Arr) << "  элементов" << endl;
}
*/


/*Дополнительное задание:
Напишите макрос для вывода на экран значения заданной переменной и ее типа.
Макрос должен принимать один параметр - имя переменной.
Например, вызов макроса PRINT_VAR(x) должен выводить на экран значение переменной x и ее тип.*/


/*#include <iostream>
#include <typeinfo>
#define PRINT_VAR(x) (typeid(x).name())

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	
	cout << "Тип переменной  " << "3.1" << PRINT_VAR(3.1) << endl;
}
*/