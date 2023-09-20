/*1) Написать примитивный калькулятор, пользуясь только указателями.*/

/*#include <iostream>

using namespace std;

void calc(double x, double y, double* sum, double* diff, double* mult, double* division)
{
	*sum = x + y;
	*diff = x - y;
	*mult = x * y;
	*division = x / y;
}
int main()
{
	setlocale(LC_ALL, "");
	double a=1, b=1;
	double summa, raznost, umnogenie, delenie;
	int c;
	calc(a, b, &summa, &raznost, &umnogenie, &delenie);

	do
	{
		cout << "Вас приветствует самый примитивный калькулятор!" << endl;
		cout << "Введите первое число" << endl;
		cin >> a;
		cout << "Введите второе число" << endl;
		cin >> b;
		cout << "Выберите арифметическую операцию над этими числами и дайте мне немного подумать" << endl;
		cout << "1- сложение" << endl;
		cout << "2- вычитание" << endl;
		cout << "3- умножение" << endl;
		cout << "4- деление" << endl;
		cout << "0- нет нужной операции " << endl;
		cin >> c;
		switch (c)
		{
		case 1:
			calc(a, b, &summa, &raznost, &umnogenie, &delenie);
			cout << "Сумма равна  " << summa << endl;
			break;
		case 2:
			calc(a, b, &summa, &raznost, &umnogenie, &delenie);
			cout << "Разность равна  " << raznost << endl;
			break;
		case 3:
			calc(a, b, &summa, &raznost, &umnogenie, &delenie);
			cout << "Произведение равно  " << umnogenie << endl;
			break;
		case 4:
			if (b == 0)
			{
				cout << "На 0 делить нельзя, stupid!" << endl;
			}
			else
			{
				calc(a, b, &summa, &raznost, &umnogenie, &delenie);
				cout << "Результат деления  " << delenie << endl;
				break;
			}
		}
	} while (c== 0);
	cout << "До встречи" << endl;
}
*/

/*2) Используя указатели и оператор разыменования, обменять местами значения двух переменных.*/

/*#include <iostream>

using namespace std;

void obmen(int* a, int*b)
{
	setlocale(LC_ALL, "");
	int temp;
	cout << "Значения переменных до обмена  " << *a <<"  " << *b << endl;
	temp = *a;
	*a = *b;
	*b = temp;
	cout << "После смены мест значений   " << *a <<"  " << *b << endl;
}
int main()
{
	int x = 100500;
	int y = 15;
	obmen(&x, &y);
}
*/

/*3) Используя указатель на массив целых чисел, изменить порядок следования элементов массива на противоположный.
Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.*/

/*#include <iostream>

using namespace std;

void massiv(int* arr, int size)
{
	setlocale(LC_ALL, "");
	int temp;
	cout << "Изначальный массив" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << *(arr+i) << "  ";
	}
	cout << "\nИзмененный массив " << endl;
	for (int i=0; i<size/2; i++)
	{
		temp= *(arr+i);
		*(arr+i)=*(arr+size-1-i);
		*(arr+size-1-i)=temp;
	}
}
int main()
{
	const int size = 5;
	int arr[size] = { 1, 2, 3, 4, 5 };
	massiv(arr, 5);
	for(int i=0; i<size; i++)
	{
	cout<<arr[i]<<"  ";
	}
}
*/


/*4) Используя два указателя на массивы целых чисел, скопировать один массив в другой так, чтобы во втором массиве 
элементы находились в обратном порядке.
Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.*/


/*#include <iostream>

using namespace std;
void massiv(int* arr, int* brr, int size)
{
	setlocale(LC_ALL, "");
	int temp;
	cout << "Изначальныe массивы" << endl;

	for (int i = 0; i < size; i++)
	{
		cout << *(arr+i) << "  ";
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << *(brr+i) << "  ";
	}
	cout << "\nИзмененный второй массив " << endl;
	for (int i=0; i<size; i++)
	{
		temp= *(arr+i);
		*(arr + i) = *(brr+size-1-i);
		*(brr+size-1-i) = temp;
	}
}
int main()
{
	const int size = 5;
	int arr[size] = { 1, 2, 3, 4, 5 };
	int brr[size] = { 10,20,30,40,50 };
	massiv(arr, brr, 5);
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << brr[i] << "  ";
	}
}
*/


/*5) Написать функцию, которая получает указатель на массив и его размер, и возвращает количество отрицательных, 
положительных и нулевых элементов массива.*/

/*#include <iostream>

using namespace std;

void massiv(int* arr, int *polE, int *otrE, int *nulE, int size)
{
	setlocale(LC_ALL, "");
	(*polE) = 0, (*otrE) = 0, (*nulE) = 0;
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << "  ";
		if (*(arr + i) == 0)
			(*nulE)++;
		if (*(arr + i) < 0)
			(*otrE)++;
		if (*(arr+i)>0 && *(arr+i)!=0)
			(*polE)++;
	}
}
int main()
{
	setlocale(LC_ALL, "");
	const int size = 10;
	int p=0, o=0, n=0;
	int arr[size] = { -1, 21, 3, -4, 5, 0, 657, 0, 0, -757 };
	massiv(arr, &p, &o, &n, 10);
	cout << endl;
	cout << "Количество положительных элементов  " << p << endl;
	cout << "Количество отрицательных элементов  " << o << endl;
	cout << "Количество элементов, равных нулю  " << n << endl;
}
*/



/*6) Написать функцию, которая принимает массив и возвращает 2 результата - индекс максимального элемента и его значение.*/

/*#include <iostream>

using namespace std;

void massiv(int* arr, int *maxE, int *IndMax, int size)
{
	(*maxE) = arr[0], (*IndMax) = 0;
	int i;
	int temp=0, temp1=0;

	srand((int)time(0));
	for ( i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 100;
		cout << *(arr + i) << "  ";
		if (*(arr + i) > (*maxE))
		{
			temp = *(arr + i);
			 (*maxE)=temp;
			temp1 = i;
			(*IndMax) = temp1;
		}
    }
}
int main()
{
	setlocale(LC_ALL, "");
	const int size = 10;
	int arr[size];
	int maxE=0, IndMax=0;
	massiv(arr, &maxE, &IndMax, 10);
	cout << endl;
	cout << "Максимальный элемент массива  " << maxE << endl;
	cout << "Индекс максимального элемента   " << IndMax << endl;
}
*/