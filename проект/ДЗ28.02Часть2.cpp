/*Задание 1. Напишите программу, которая создает двух-
мерный массив и заполняет его по следующему принципу:
пользователь вводит число (например, 3) первый элемент
массива принимает значение этого числа, последую-
щий элемент массива принимает значение этого числа
умноженного на 2 (т.е. 6 для нашего примера), третий
элемент массива предыдущий элемент умноженный на
2 (т.е. 6*2=12 для нашего примера). Созданный массив
вывести на экран.*/

/*#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int a;
    const int r = 5, c = 5;
    int ar[r][c];

    cout << "Введите первое число массива " << endl;
    cin >> a;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == 0 && j == 0)
                ar[i][j] = a;
            else
                ar[i][j] =ar[i][j-1]* 2;
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }
}
*/



/*Задание 2. Напишите программу, которая создает двух-
мерный массив и заполняет его по следующему принципу:
пользователь вводит число (например, 3) первый элемент
массива принимает значение этого числа, последующий
элемент массива принимает значение этого числа + 1 (т.е.
4 для нашего примера), третий элемент массива предыду-
щий элемент + 1 (т.е. 5 для нашего примера). Созданный
массив вывести на экран.*/


/*#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int a;
    const int r = 5, c = 5;
    int ar[r][c];

    cout << "Введите первое число массива " << endl;
    cin >> a;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == 0 && j == 0)
                ar[i][j] = a;
            else
                ar[i][j] = ar[i][j - 1] +1;
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }
}
*/



/*Задание 3. Создайте двухмерный массив. Заполните его
случайными числами и покажите на экран. Пользователь
выбирает количество сдвигов и положение (влево, вправо, 
вверх, вниз). Выполнить сдвиг массива и показать на
экран полученный результат. Сдвиг циклический.
Например, если мы имеем следующий массив
1 2 0 4 5 3
4 5 3 9 0 1
и пользователь выбрал сдвиг на 2 разряда вправо, то мы
получим
5 3 1 2 0 4
0 1 4 5 3 9*/


/*#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int row, col, side, temp, shift;

	do
	{
		cout << "Введите количество строк до 10: "; 
		cin >> row; 
		cout << endl;
		cout << "Введите количество столбцов до 10: "; 
		cin >> col; 
		cout << endl;

		int** arr = new int * [row]; 

		for (int i = 0; i < row; i++) 
		{
			arr[i] = new int[col];
		}

		if (col > 10 || col < 0 || row > 10 || row < 0) 
		{
			cout << "Неверный ввод строки и столбца. Повторите ввод!" << endl;
		}
		else
		{
			srand(time(0));
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					arr[i][j] = rand() % 100;
				}
			}
			for (int i = 0; i < row; i++)
			{
				cout << "  ";

				for (int j = 0; j < col; j++)
				{
					cout << arr[i][j] << "  ";
				}
				cout << endl;
			}

			cout << endl;

			cout << "Сдвиг в массиве сделать " << endl;
			cout << "1 - Влево" << endl;
			cout<< "2 - Вправо" << endl;
			cout << "3 - Вверх" << endl;
			cout << "4 - Вниз" << endl;

			cout << "Введите сторону сдвига: "; 
			cin >> side; 
			cout << endl;
			cout << "Введите количество сдвигов: "; 
			cin >> shift; 
			cout << endl;

			if (side == 1) // сдвиг влево
			{
				for (int i = 0; i < shift; i++)
				{
					for (int j = 0; j < row; j++)
					{
						temp = arr[j][0];

						for (int g = 0; g < col - 1; g++)
						{
							arr[j][g] = arr[j][g + 1];
						}

						arr[j][col - 1] = temp;
					}
				}
			}
			else if (side == 2) // сдвиг вправо
			{
				for (int i = 0; i < shift; i++)
				{
					for (int j = 0; j < row; j++)
					{
						temp = arr[j][col - 1];

						for (int g = col - 1; g > 0; g--)
						{
							arr[j][g] = arr[j][g - 1];
						}

						arr[j][0] = temp;
					}
				}
			}
			else if (side == 3) // сдвиг вверх
			{
				for (int i = 0; i < shift; i++)
				{
					for (int j = 0; j < col; j++)
					{
						temp = arr[0][j];

						for (int g = 0; g < row - 1; g++)
						{
							arr[g][j] = arr[g + 1][j];
						}

						arr[row - 1][j] = temp;
					}
				}
			}
			else if (side == 4) // сдвиг вниз
			{
				for (int i = 0; i < shift; i++)
				{
					for (int j = 0; j < col; j++)
					{
						temp = arr[row - 1][j];

						for (int g = row - 1; g > 0; g--)
						{
							arr[g][j] = arr[g - 1][j];
						}

						arr[0][j] = temp;
					}
				}
			}
			cout << "Результат сдвига.";
			cout << endl;

			//Вывод массива после сдвига

			for (int i = 0; i < row; i++)
			{
				cout << "  ";

				for (int j = 0; j < col; j++)
				{
					cout << arr[i][j] << "  ";
				}
				cout << endl;
			}
		}

		for (int i = 0; i < row; i++)
		{
			delete[] arr[i];
		}
		delete[] arr;

	} while (side!=5);
	cout << "Неверный ввод" << endl;
}
*/

/*

#include<iostream>
#include<time.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "");
	srand(time(0));
const int row = 5;
const int col = 5;
int array[row][col];
int digit, sdvig, choise, temp;
cout << "Введите первый элемент массива :";
cin >> digit;
for (int i = 0; i < row; i++) {

	for (int j = 0; j < col; j++) {
		array[i][j] = digit;
		cout << array[i][j] << "\t";// Сделал не рандом, а обычный чтоб легче было смотреть получилось или нет
		digit += 1;
	}
	cout << " " << endl;
}

do {

	cout << "Введите количество сдвигов в массиве: ";
	cin >> sdvig;
	cout << "Выберите направление дижения массива:" << endl;
	cout << "1 - Двигать в лево" << endl;
	cout << "2 - Двигать в право" << endl;
	cout << "3 - Двигать в верх" << endl;
	cout << "4 - Дигать в низ" << endl;

	cin >> choise;
	if (choise == 1)
	{
		for (int i = 0; i < row; i++)
		{
			for (int a = 0; a < sdvig; a++) {
				temp = array[i][0];
				for (int j = 0; j < col - 1; j++)
				{
					array[i][j] = array[i][j + 1];
				}
				array[i][col - 1] = temp;
			}
		}


		for (int i = 0; i < row; i++) {

			for (int j = 0; j < col; j++) {
				cout << array[i][j] << "\t";// Сделал не рандом, а обычный чтоб легче было смотреть получилось или нет
			}
			cout << " " << endl;
		}
	};
	if (choise == 2)
	{
		for (int i = 0; i < row; i++)
		{
			for (int a = 0; a < sdvig; a++) {
				temp = array[i][0];
				for (int j = col - 1; j > 0; j--)
				{
					array[i][j] = array[i][j - 1];
				}
				array[i][0] = temp;
			}
		}

		for (int i = 0; i < row; i++) {

			for (int j = 0; j < col; j++) {
				cout << array[i][j] << "\t";// Сделал не рандом, а обычный чтоб легче было смотреть получилось или нет
			}
			cout << " " << endl;
		}
	};


} while (choise != 0);
return 0;
}
*/