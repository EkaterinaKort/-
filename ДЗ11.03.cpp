/*1) Написать функцию, определяющую минимум и максимум (значение и номер) элементов передаваемого ей массива.*/

/*#include <iostream>
using namespace std;

void func(int arr[], int size)
{
	setlocale(LC_ALL, "");
	int Imax=0;
	int Imin = 0;
	int max = arr[0];
	int min = arr[0];
	
	for (int i = 0; i < 10; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			Imax = i;
		}
		if (min > arr[i])
		{
			min = arr[i];
			Imin = i;
		}
    }
	cout << "\nМаксимальный элемент массива " << max << endl;
	cout << "Его номер " << Imax << endl;
	cout << "Минимальный размер массива  " << min << endl;
	cout << "Его номер " << Imin << endl;
	
}
int main()
{
	srand(time(0));
	int size = 10;
	int arr[10];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] <<"  ";
    }
	func(arr, 10);
}
*/

/*2) Написать функцию, меняющую порядок следования элементов передаваемого ей массива на противоположный.*/

/*#include <iostream>
using namespace std;
void func(int arr[], int size)
{
	setlocale(LC_ALL, "");
	cout << endl;
	cout << "Результат" << endl;
	for (int i = 0; i <size; i++)
	{
		cout << arr[size-1 - i] << "  ";
	}
}

int main()
{
	setlocale(LC_ALL, "");
	srand(time(0));
	int size = 10;
	int arr[10];
	cout << "Изначальный массив " << endl;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << "  ";
	}
	func(arr, 10);
}
*/


/*3) Написать функцию для решения квадратного уравнения.
 ax2 + bx + c = 0, где  а не равно 0  */

/*#include <iostream>
using namespace std;
void func(double a, double b, double c)
{
	setlocale(LC_ALL, "");
	double d;
	d = (b * b) - (4 * a * c);
	if (a == 0)
		cout << "Неверный ввод" << endl;
	if (d > 0) {
		double x1, x2;
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		cout << "Два корня: " << x1 << " " << x2;
	}
	else
		if (d == 0) {
			cout << "Один корень: " << " " << -b / (2 * a) << endl;
		}
		else
			cout << "Корней нет" << endl;
}
int main()
{
	setlocale(LC_ALL, "");
	double a, b, c;
	cout << "Введите старший(первый) коэффициент " << endl;
	cin >> a;
	cout << "Введите средний(второй) коэффициент " << endl;
	cin >> b;
	cout << "Введите свободный член уравнения " << endl;
	cin >> c;
	
	func(a, b, c);
}
*/

/*4) Написать перегруженные функции (int, double, char) для выполнения следующих задач:
■ Инициализация квадратной матрицы;
■ Вывод матрицы на экран;
■ Определение максимального и минимального элемента на главной диагонали матрицы.
*/

/*#include <iostream>
using namespace std;

void matrix(int arr1[3][3], int a)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			arr1[i][j] = rand() % 100;
		}
	}
}
void matrix(double arr2[3][3], int a)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			arr2[i][j] =0.5+ rand() % 100;
		}
	}
}
void matrix(char arr3[3][3], int a)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			arr3[i][j] ='d'+ rand() % 10;
		}
	}
}
void output(int arr1[3][3], int a)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cout<<arr1[i][j]<<"  ";
		}
		cout << endl;
	}
}
void output(double arr2[3][3], int a)
{
	cout << endl;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cout<<arr2[i][j]<<"  ";
		}
		cout << endl;
	}
}
void output(char arr3[3][3], int a)
{
	cout << endl;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cout << arr3[i][j] << "  ";
		}
		cout << endl;
	}
}
void maxmin(int arr1[3][3], int a)
{
	setlocale(LC_ALL, "");
	int X[3];
	cout << endl;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if (i == j)
			X[j] = arr1[i][j];
		}
	}
	int max = X[0];
	int min = X[0];
	for (int i = 0; i < a; i++)
	{
		if (X[i] > max)
			max = X[i];
		if (X[i] < min)
			min = X[i];
	}
	cout << "Максимум  " << max << endl;
	cout << "Минимум  " << min << endl;
}
void maxmin(double arr2[3][3], int a)
{
	setlocale(LC_ALL, "");
	double X[3];
	cout << endl;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if (i == j)
				X[j] = arr2[i][j];
		}
	}
	double max = X[0];
	double min = X[0];
	for (int i = 0; i < a; i++)
	{
		if (X[i] > max)
			max = X[i];
		if (X[i] < min)
			min = X[i];
	}
	cout << "Максимум  " << max << endl;
	cout << "Минимум  " << min << endl;
}
void maxmin(char arr3[3][3], int a)
{
	setlocale(LC_ALL, "");
	char X[3];
	cout << endl;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if (i == j)
				X[j] = arr3[i][j];
		}
	}
	char max = X[0];
	char min = X[0];
	for (int i = 0; i < a; i++)
	{
		if (X[i] > max)
			max = X[i];
		if (X[i] < min)
			min = X[i];
	}
	cout << "Максимум  " << max << endl;
	cout << "Минимум  " << min << endl;
}
int main()
{
	int arr1[3][3];
	double arr2[3][3];
	char arr3[3][3];

	matrix(arr1, 3);
	matrix(arr2, 3);
	matrix(arr3, 3);

	output(arr1, 3);
	output(arr2, 3);
	output(arr3, 3);

	maxmin(arr1, 3);
	maxmin(arr2, 3);
	maxmin(arr3, 3);
}
*/
