/*1) Написать рекурсивную функцию, которая выводит N звезд в ряд, число N задает пользователь. 
Проиллюстрируйте работу функции примером.*/

/*#include <iostream>

using namespace std;

void star(int n)
{
	if (n == 0)
    return;
	star(n-1);
    cout << " * ";
}
int main()
{
	setlocale(LC_ALL, "");
	int n;
    cout << "Введите количество звезд, которое вы хотите увидеть на экране " << endl;
    cin >> n;
    star(n);	
}
*/


/*1. Дан массив чисел размерностью 10 элементов. Написать
функцию, которая сортирует массив по возрастанию
или по убыванию, в зависимости от третьего параметра
функции. Если он равен 1, сортировка идет по убыванию, если 0, то по возрастанию. Первые 2 параметра
функции — это массив и его размер, третий параметр
по умолчанию равен 1*/

/*#include <iostream>

using namespace std;

int sort(int arr[], int size, int parametr)
{
	 size = 10;
	setlocale(LC_ALL, "");
	
	if (parametr == 0)
	{
		cout << "Сортировка массива по возрастанию " << endl;
		int k, x, i, j;
		for (i = 0; i < size; i++) 
		{
			k = i;
			x = arr[i];
			for (j = i + 1; j < size; j++)
				if (arr[j] < x) 
				{
					k = j;
					x = arr[j];
				}
			if (k != i) 
			{
				arr[k] = arr[i];
				arr[i] = x;
			}
		}
		return 0;
	}
	if (parametr == 1)
	{
		cout << "Сортировка массива по убыванию " << endl;
		int k, x, i, j;
		for (i = 0; i < size; i++) 
		{
			k = i;
			x = arr[i];
			for (j = i + 1; j < size; j++)
				if (arr[j] > x) 
				{
					k = j;
					x = arr[j];
				}
			if (k != i) 
			{
				arr[k] = arr[i];
				arr[i] = x;
			}
		}
		return 0;
	}
}
int main()
{
	int parametr;
	const int size = 10;
	int arr[size];
	setlocale(LC_ALL, "");
	srand (time(0));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << "  ";
	}
	cout << endl;
	cout << "Введите параметр сортировки массива (1 по убыванию или 0 по возрастанию)" << endl;
	cin >> parametr;
    sort(arr, size, parametr);
	for (int i = 0; i < size; i++) 
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
*/

/*2. Дан массив случайных чисел в диапазоне от –20 до +20.
Необходимо найти позиции крайних отрицательных
элементов (самого левого отрицательного элемента
и самого правого отрицательного элемента) и отсортировать элементы, находящиеся между ними.*/

/*#include <iostream>

using namespace std;
void func(int Arr[], int size);

void func(int Arr[], int size)
{
	setlocale(LC_ALL, "");
    size = 10;
	srand(time(NULL));
	cout << "Изначальный массив " << endl;
	for (int i = 0; i < size; i++)
	{
		Arr[i] = rand() % 40 - 20;
		cout << Arr[i] << "  ";
	}
	cout << endl;
	int x, i, j, temp_i=0, temp_j=0;
	for (int a = 0; a < size; a++)      //находим индекс первого отрицательного элемента
	{
		if (Arr[a] < 0)
		{
			temp_i = a;
			break;
		}
	}
	cout << "Индекс первого отрицательного элемента " << temp_i << endl;
	for (int a = size - 1; a > temp_i; a--)     //находим последнего отрицательного элемента
	{
		if (Arr[a] < 0)
		{
			temp_j = a;
			break;
		}
	}
	cout << "Индекс последнего отрицательного элемента " << temp_j << endl;
	cout << "Сортировка " << endl;
	for (i = temp_i; i <= temp_j; i++)                      //сама сортировка
	{
		x = Arr[i];
		for (j = i - 1; j >= temp_i && Arr[j] > x; j--)
			Arr[j + 1] = Arr[j];
		Arr[j + 1] = x;
		cout << x << "  ";
	}
}
int main()
{
	const int size = 10;
	int Arr[size];
	func(Arr, size);
}
*/



/*3. Дан массив из 20 целых чисел со значениями от 1 до 20.
Необходимо:
■ написать функцию, разбрасывающую элементы массива произвольным образом;
■ создать случайное число из того же диапазона и найти
позицию этого случайного числа в массиве;
■ отсортировать элементы массива, находящиеся слева от найденной позиции по убыванию, а элементы
массива, находящиеся справа от найденной позиции
по возрастанию.*/


/*#include <iostream>                                 //с этой задачей было много мук творчества, и немного непонятно было, изначальный массив 
                                                   // должен ли состоять из строгой последовательности чисел от 1 до 20, или же просто из чисел  
using namespace std;                               //указанного диапазона. Хотела сделать еще вариант, чтобы было наверняка, и из строгой 
                                                  //последовательности, но как перезаписать исходный массив, поменяв рандомно индексы, я пока не догадалась) 
void init(int A[], int size)                       //Возможно позже до меня дойдет, но сегодня муза меня не посетила)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
		A[i] = rand() % 20 + 1;
}

void out(int A[], int size)
{
	cout << endl;
	for (int i = 0; i < size; i++)
		cout << A[i] << " ";
	cout << endl;
}

void random(int A[], int size)
{
	int x, i, j;

	for (i = 0; i < size; i++)
	{
		x = A[i];
		for (j = i - 1; j >= 0 && A[j] != x && A[j] != A[i]; j--)
			A[j + 1] = A[j];
		A[j + 1] = x;
	}
}

int search(int A[], int size, int digit)
{
	for (int i = 0; i < size; i++)
		if (A[i] == digit)
			return i;
	return -1;
}

void sort(int A[], int size, int key)
{
	int x, i, j;
	for (i = 0; i < key; i++)
	{
		x = A[i];
		for (j = i - 1; j >= 0 && A[j] < x; j--)
			A[j + 1] = A[j];
		A[j + 1] = x;
	}
	for (i = key + 1; i < size; i++)
	{
		x = A[i];
		for (j = i - 1; j >= key + 1 && A[j] > x; j--)
			A[j + 1] = A[j];
		A[j + 1] = x;
	}
}
void main()
{
	setlocale(LC_ALL, "");
	const int s = 20;
	int A[s];
	int a, digit, temp;

	do
	{
		init(A, s);
		out(A, s);
		cout << "Массив от 0 до 20 "<<endl;
		cout << "1 - разбрасывает элементы массива рандомным образом"<<endl;
		cout << "2 - сортировка "<<endl;
		cin >> a;
		switch (a)
		{
		case 1:
			random(A, s);
			out(A, s);
		case 2:
			cout << "Введите число из диапазона от 1 до 20:"<<endl;
			cin >> digit;
			temp = search(A, s, digit);
			if (temp != -1)
			{
				cout << "Число " << digit << " есть в массиве под номером " << temp << endl;
				sort(A, s, temp);
				out(A, s);
			}
			else
				cout << "Число " << digit << " отсутствует в массиве"<<endl;
		}
		cout << "Если хотите продолжить, нажмите 1"<<endl;
		cin >> a;
	} while (a == 1);
}
*/