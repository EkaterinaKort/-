/*Задание 1. Написать функцию, которая принимает две даты
(т.е. функция принимает шесть параметров) и вычисляет
разность в днях между этими датами. Для решения этой
задачи необходимо также написать функцию, которая
определяет, является ли год високосным.*/

/*
#include <iostream>
using namespace std;

bool vys(int year)
{
    setlocale(LC_ALL, "");
    bool res = false;
    if (year % 4 == 0)
        res = true;
    if (year % 100 == 0)
        res = false;
    if (year % 400 == 0)
        res = true;
    return res;
}
int date(int d, int m, int y)
{
    int k = d;
    switch (m - 1)
    {
    case 12: k += 31;
    case 11: k += 30;
    case 10: k += 31;
    case  9: k += 30;
    case  8: k += 31;
    case  7: k += 31;
    case  6: k += 30;
    case  5: k += 31;
    case  4: k += 30;
    case  3: k += 31;
    case  2: if (vys(y))
    {
        k += 29;
        cout << "Год високостный" << endl;
    }
           else k += 28;
        cout << "Год не високостный" << endl;
    case  1: k += 31;
    }
    k += (y - 1) * 365 + ((y - 1) / 4);
    return k;
}
int difference(int d1, int d2, int m1, int m2, int y1, int y2)
{
    int k = date(d2, m2, y2) - date(d1, m1, y1);
    return k;
}
int main()
{
    setlocale(LC_ALL, "");
    int d1, d2, m1, m2, y1, y2;
    cout << "Введите первый день"<<endl;
    cin >> d1;
    cout << "Ведите первый месяц "<<endl;
    cin >> m1;
    cout << "Введите первый год"<<endl;
    cin >> y1;
    cout << "Введите второй день "<<endl;
    cin >> d2;
    cout << "Введите второй месяц"<<endl;
    cin >> m2;
    cout << "Введите второй год "<<endl;
    cin >> y2;
    cout << "Разница между двумя датами: " << difference(d1, d2, m1, m2, y1, y2) << " дней"<<endl;
    system("PAUSE");
}
*/


/*Задание 2. Написать функцию, определяющую среднее
арифметическое элементов передаваемого ей массива.*/


/*#include <iostream>

using namespace std;
const int SIZE = 10.0;
double averege(int array[][SIZE])
{
    double SUMMA = 0;
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            SUMMA += array[i][j];
    return SUMMA / (SIZE * SIZE);
}
void Print(int array[][SIZE])
{
    cout << " Массив " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
            cout << array[i][j] << "\t";
        cout << endl;
    }
}
void Set(int array[][SIZE])
{
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            array[i][j] = rand() % 100;
}

void main()
{
    setlocale(LC_ALL, "");
    int a[SIZE][SIZE];
    Set(a);
    Print(a);
    cout << "Среднее арифметическое равно  " << averege(a) << endl;
}
*/

/*Задание 3. Написать функцию, определяющую количество
положительных, отрицательных и нулевых элементов
передаваемого ей массива.*/


/*#include <iostream>

using namespace std;
int RandInt(int min, int max)
{
    if (max < min)
        swap(max, min);
    return min + rand() % (max - min + 1);
}
void SetRndArray1D(int arr[], int n, int min, int max)
{
    for (int i = 0; i < n; i++)
        arr[i] = RandInt(min, max);
}
void ShowArray1D(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << '\t';
    cout << '\n';
}
int PositiveArrayElement(int arr[], int n)       //ищем положительные элементы массива
{
    int PosEl = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            PosEl++;
    }
    return PosEl;
}
int NegativeArrayElement(int arr[], int n)     //ищем отрицательные элементы массива
{
    int NegEl = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            NegEl++;
    }
    return NegEl;
}
int ZeroArrayElement(int arr[], int n)            //ищем элементы массива, которые равны нулю
{
    int ZerEl = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            ZerEl++;
    }
    return ZerEl;
}
int main()
{
    setlocale(LC_ALL, "");
    int const size = 100;
    srand(time(0));
    int arr[size]{ 0 };
    int min = -10, max = 10;

    cout << "Введите размер массива: " << endl;
    int n;
    cin >> n;

    SetRndArray1D(arr, n, min, max);
    RandInt(min, max);
    cout << "Массив: " << endl;
    ShowArray1D(arr, n);

    cout << "В передаваемом функции массиве элементов:\n\n Положительных: " << PositiveArrayElement(arr, n) << endl;
    cout << " Отрицательных: " << NegativeArrayElement(arr, n) << endl;
    cout << " Нулевых: " << ZeroArrayElement(arr, n) << endl;
}
*/
