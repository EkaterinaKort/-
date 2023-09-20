/*1) Написать шаблон функции для поиска среднего арифметического значений массива.*/

/*#include <iostream>

using namespace std;

template<typename T>void func(T arr[], int size)
{
    setlocale(LC_ALL, "");
    srand(time(0));
    double SrAr = 0;
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
        SrAr +=arr[i];
        cout << arr[i] <<"  ";
    }
    cout << endl;
    cout << "Среднее арифметическое  " << SrAr/size << endl;
}
int main()
{
    int arr[10];
    func(arr, 10);
}
*/

/*2) Написать функцию, которая принимает в качестве параметров вещественное число и количество знаков после десятичной точки, которые должны остаться.
Задачей функции является округление вышеуказанного вещественного числа до заданного количества знаков после десятичной точки.*/

/*#include <iostream>

using namespace std;

double chislo(double a, int n)
{
    setlocale(LC_ALL, "");                                                 

    for (int i = 0; i < n+1; i++)
    {
        a *= 10;	//сдвигаем запятую вправо 
    }  
    a = (int)a;
    if ((int)a % 10 >= 5)
    {
        a=(int) a/ 10;
        a+=1;
    }
    else
        a /= 10;
    for (int i = 0; i < n; i++)
    {
       a/= 10;	//сдвигаем запятую обратно вправо
    }
    cout << "Результат  " << a << endl;
    return 0;
}
int main()
{
    setlocale(LC_ALL, "");
    double a;
    int n;
    cout << "Введите вещественное число, которое нужно округлить" << endl;
    cin >> a;
    cout << "Введите количество знаков после запятой, которое должно остаться " << endl;
    cin >> n;
    chislo(a, n);
}
*/


/*3) С помощью директивы #define написать макрос для нахождения большего из двух чисел.*/


/*#include <iostream>

using namespace std;

#define MAX(a, b) (a >= b ? a : b)

void main()
{
    setlocale(LC_ALL, "");
    int a, b;
    cout << "Введите первое число " << endl;
    cin >> a;
    cout << "Введите второе число " << endl;
    cin >> b;
    cout << "Большее число = " << MAX(a, b) << endl;
}

*/



